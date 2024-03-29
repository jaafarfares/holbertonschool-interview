#!/usr/bin/python3
"""
...............
"""


def is_prime(n):
    """
    ....
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


def primeGame(n):
    """
    ...
    """
    if n < 1:
        return None
    if n == 1:
        return 2
    numbers = list(range(n + 1))
    player = 1
    prime = 2
    primes_used = []
    for num in numbers:
        if num % prime == 0:
            numbers.remove(num)
    primes_used.append(prime)
    prime = 3
    while numbers != [1]:
        if player == 1:
            player = 2
        else:
            player = 1
        for num in numbers:
            if num % prime == 0:
                numbers.remove(num)
        primes_used.append(prime)
        prime += 2
        flag = 1
        while flag:
            for num in primes_used:
                if prime % num == 0:
                    prime += 2
                    break
            else:
                flag = 0
    if player == 1:
        return 1
    return 2


def isWinner(x, nums):
    """
    ...
    """
    Maria = 0
    Ben = 0
    if x < 1 or x != len(nums):
        return None
    for n in nums:
        winner = primeGame(n)
        if winner == 1:
            Maria += 1
        elif winner == 2:
            Ben += 1
    if Maria == Ben:
        return None
    elif Maria > Ben:
        return "Maria"
    return "Ben"
