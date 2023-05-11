#!/usr/bin/python3
"""
Write a recursive function that queries the Reddit API, parses the i
of all hot articles, and prints a sorted count of given keywords (case-
insensitive, delimited by spaces. Javascript should count as javascript,
but java should not). """

import requests


def count_words(subreddit, word_list, word_count=None, after=None):
    """
    prints a sorted count of given keywords
    """

    if word_count is None:
        word_count = {word.lower(): 0 for word in word_list}

    if after is None:
        sorted_word_count = dict(sorted(
            word_count.items(),
            key=lambda x: (-x[1], x[0])
        ))
        for k, v in sorted_word_count.items():
            if v > 0:
                print("{}: {}".format(k, v))
        return

    url = "https://www.reddit.com/r/{}/hot.json".format(subreddit)
    headers = {'User-agent': 'counting-app'}
    params = {'limit': 100}
    if after:
        params['after'] = after

    response = requests.get(url, headers=headers, params=params)

    if response.status_code == 200:
        data = response.json()['data']
        after = data['after']
        for child in data['children']:
            title = child['data']['title'].lower()
            title_words = [word.strip('.,?!()') for word in title.split()]
            for word in word_list:
                if word.lower() in title_words:
                    word_count[word.lower()] += 1

        count_words(subreddit, word_list, word_count, after)
    else:
        print("Error: Request failed with status code", response.status_code)
        return





