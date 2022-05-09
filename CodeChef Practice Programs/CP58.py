t = int(input())
while t:
    n = int(input())
    lst = list(map(int,input().strip().split()))[:n]
    lst.sort()
    max = 0
    for i in lst:
        max = (i + lst.count(i) - 1) if (i + lst.count(i) - 1) >= max else max
    print(max)
    t -= 1