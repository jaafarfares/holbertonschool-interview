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
    dp = [float('inf')] * (total + 1)
    dp[0] = 0

    for i in range(1, total + 1):
        for coin in coins:
            if coin > i:
                break
            if dp[i - coin] != float('inf'):
                dp[i] = min(dp[i], dp[i - coin] + 1)

    if dp[total] == float('inf'):
        return -1

    return dp[total]
