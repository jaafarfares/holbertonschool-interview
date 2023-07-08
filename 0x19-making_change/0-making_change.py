#!/usr/bin/python3
"""Simple python code to determine the fewest
number of coins needed to meet agiven amount " total ".
"""


def makeChange(coins, total):
    """
    determine the fewest number of coins
    needed to meet a given amount total
    """
    if total <= 0:
        return 0

    if len(coins) == 0:
        return -1
    coins = sorted(coins)
    a = [float('inf')] * (total + 1)
    a[0] = 0
    for i in range(total + 1):
        for coin in coins:
            if coin > i:
                break
            if a[i - coin] != -1:
                a[i] = min(a[i - coin] + 1, a[i])
    if a[total] == float('inf'):
        return -1
    return a[total]
