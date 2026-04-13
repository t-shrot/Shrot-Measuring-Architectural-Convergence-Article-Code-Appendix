class Solution:
    def largestInteger(self, num: int) -> int:
        num_str = str(num)
        n = len(num_str)
        swapped = True
        while swapped:
            swapped = False
            for i in range(n):
                for j in range(i + 1, n):
                    if (num_str[i] % 2 == num_str[j] % 2) and (num_str[i] < num_str[j]):
                        temp = num_str[i]
                        num_str = ( num_str[:i] + num_str[j] + num_str[i + 1:j] + temp + num_str[j + 1:])
                        swapped = True
        return int(num_str)
