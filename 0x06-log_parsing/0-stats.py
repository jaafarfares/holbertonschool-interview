#!/usr/bin/python3
"""
script that reads stdin line by line and computes metrics
"""
import sys
import datetime
from collections import Counter


form = "{:d}.{:d}.{:d}.{:d} - [{}] \"GET /projects/260 HTTP/1.1\" {} {}\n"
counter = 0
total_f_size = 0
status_codes = Counter()
try:
    for line in sys.stdin:
        try:
            if line and form:
                counter += 1
                f_size = int(line.split()[-1].strip())
                s_code = line.split()[-2].strip()
                total_f_size += f_size
                status_codes[s_code] += 1
                f_size = 0
                if counter % 10 == 0:
                    print("File size: " + str(total_f_size))
                    for key, num in sorted(status_codes.items()):
                        if num != 0:
                            print(str(key) + ": " + str(num))
        except ValueError as e:
            print(e)
    if counter % 10 == 0:
        print("File size: " + str(total_f_size))
        for key, num in sorted(status_codes.items()):
            if num != 0:
                print(str(key) + ": " + str(num))
except KeyboardInterrupt:
    if counter % 10 == 0:
        print("File size: " + str(total_f_size))
        for key, num in sorted(status_codes.items()):
            if num != 0:
                print(str(key) + ": " + str(num))
    raise
