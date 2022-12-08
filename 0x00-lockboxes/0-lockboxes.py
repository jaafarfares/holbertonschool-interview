#!/usr/bin/python3
""" this is a description """


def canUnlockAll(boxes):
    """ this is my class """
    unlocked = [0]
    for box_i, value in enumerate(boxes):
        if not value:
            continue
        for key in value:
            if key < len(boxes) and key not in unlocked and key != box_i:
                unlocked.append(key)
    if len(unlocked) == len(boxes):
        return True
    return False
