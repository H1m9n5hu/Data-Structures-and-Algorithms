t = int(input())
while t:
    n, x, y = input().split(" ")
    n = int(n)
    x = int(x)
    y = int(y)
    print(2*(n - 1) + min(x - 1, y - 1) + min(x - 1, n - y) + min(y - 1, n - x) + min(n - x, n - y))
    t -= 1