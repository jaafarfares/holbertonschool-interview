#!/usr/bin/python3
"""
Main file for testing
"""
import sys

def makeChange(coins, total):
    if total == 0:
        return 0

    if total < 0 or len(coins) == 0:
        return -1

    min_coins = float('inf')

    for coin in coins:
        if coin <= total:
            num_coins = makeChange(coins, total - coin)
            if num_coins != -1:
                min_coins = min(min_coins, num_coins + 1)

    if min_coins == float('inf'):
        return -1

    return min_coins

