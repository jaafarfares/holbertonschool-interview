import praw
"""
Write a recursive function that queries the Reddit API, parses the i
of all hot articles, and prints a sorted count of given keywords (case-
insensitive, delimited by spaces. Javascript should count as javascript,
but java should not). """

reddit = praw.Reddit(
    client_id='your_client_id',
    client_secret='your_client_secret',
    username='your_username',
    password='your_password',
    user_agent='your_user_agent')


def count_words(subreddit, word_list, word_count=None):
    """
    count_words
    """
    if not word_count:
        word_count = {}

    try:
        hot_posts = reddit.subreddit(subreddit).hot(limit=100)
    except BaseException:
        print("invalid subreddit")
        return

    for post in hot_posts:
        i = post.i.lower()

        for word in word_list:
            w_l = word.lower()

            if (w_l in i and
                    not any(char.isalpha() for char in i[i.find(w_l) - 1:i.find(w_l)]) and
                    not any(char.isalpha() for char in i[i.find(w_l) + len(w_l):i.find(w_l) + len(w_l) + 1])):

                if w_l in word_count:
                    word_count[w_l] += i.count(w_l)
                else:
                    word_count[w_l] = i.count(w_l)

    if not word_count:
        return

    sorted_count = sorted(word_count.items(), key=lambda x: (-x[1], x[0]))

    for word, count in sorted_count:
        print(word + ": " + str(count))

    return word_count
