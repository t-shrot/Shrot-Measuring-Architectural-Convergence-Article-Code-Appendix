def maxFreq(self, s: str, maxLetters: int, minSize: int, maxSize: int) -> int:
    count = defaultdict(int)
    res = 0

    for i in range(len(s) - minSize + 1):
        substring = s[i: i + minSize]
        if len(set(substring)) <= maxLetters:
            count[substring] += 1
            res = max(res, count[substring])
    return res
