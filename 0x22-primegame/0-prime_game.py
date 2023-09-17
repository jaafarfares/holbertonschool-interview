#!/usr/bin/python3
"""
...............
"""


def is_prime(n):
    """
    ...
    """
    if n <= 1:
        return False
    if n <= 3:
        return True
    if n % 2 == 0 or n % 3 == 0:
        return False
    i = 5
    while i * i <= n:
        if n % i == 0 or n % (i + 2) == 0:
            return False
        i += 6
    return True


def find_primes(n):
    """
    ....

    """
    primes = []
    for num in range(2, n + 1):
        if is_prime(num):
            primes.append(num)
    return primes


def isWinner(x, nums):
    """
    ...
    """
    maria_wins = 0
    ben_wins = 0

    for n in nums:
        if n % 2 == 0 or n == 1:
            ben_wins += 1
        else:
            primes = find_primes(n)
            if len(primes) % 2 == 0:
                ben_wins += 1
            else:
                maria_wins += 1

    if maria_wins > ben_wins:
        return "Maria"
    elif ben_wins > maria_wins:
        return "Ben"
    else:
        return None
