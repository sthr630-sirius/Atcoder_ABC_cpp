memo = dict()
memo[0] = 1

def f(n):
    if n == 0:
        return memo[0]
    if n in memo.keys():
        return memo[n]
    else:
        memo[n] = f(n//2) + f(n//3)
        return memo[n]

n = int(input())
print(f(n))