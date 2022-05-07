t = int(input())
while t:
    x, y = input().split(" ")
    x = int(x)
    y = int(y)
    if x*1.07 >= y:
        print("Yes")
    else:
        print("No")
    t -= 1