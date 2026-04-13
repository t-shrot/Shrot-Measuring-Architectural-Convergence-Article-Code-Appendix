class Solution:
    def smallestNumber(self, pattern: str) -> str:
        n = len(pattern)
        result = [0] * (n + 1)
        curr_min, curr_max = 0, n
        for i in range(n):
            if pattern[i] == 'I':
                result[i] = curr_min
                curr_min += 1
            else:
                result[i] = curr_max
                curr_max -= 1
        result[n] = curr_min
        ans = ''
        for i in range(n + 1):
            ans += str(result[i] + 1)
        return ans
