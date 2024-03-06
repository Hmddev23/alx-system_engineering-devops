#!/usr/bin/python3
"""
0. How many subs?
"""
import requests
from sys import argv


def number_of_subscribers(subreddit):
    """
    return the number of subscribers for a given subreddit
    """
    user = {'User-Agent': '/u/ledbag123 API Python for Alx School'}
    url = requests.get('https://www.reddit.com/r/{}/about.json'
                       .format(subreddit), headers=user).json()
    try:
        return url.get('data').get('subscribers')
    except Exception:
        return 0


if __name__ == "__main__":
    number_of_subscribers(argv[1])
