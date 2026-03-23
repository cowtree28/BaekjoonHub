import sys

n = int(sys.stdin.readline().rstrip())
dp = [-1 for _ in range(6)]
dp[3] = 1
dp[5] = 1

for i in range(6, n + 1):
    three = dp[i - 3] + 1
    five = dp[i - 5] + 1
    if three and five:
        dp.append(min(three, five))
    elif three:
        dp.append(three)
    elif five:
        dp.append(five)
    else:
        dp.append(-1)


print(dp[n])
