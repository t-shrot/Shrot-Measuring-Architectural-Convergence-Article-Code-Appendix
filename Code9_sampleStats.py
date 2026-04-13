def sampleStats(self, count):
    countSum = 0
    totalNum = sum(count)
    mean = 0
    for i in range(256):
        if count[i] > 0:
            countSum += count[i] * i
    mean = countSum / totalNum
    return mean
