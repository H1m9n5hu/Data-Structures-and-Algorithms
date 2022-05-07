t = int(input())
while t:
    x, y = input().split(" ")
    x = int(x)
    y = int(y)
    if x == 0 and y == 0:
        print("No")
    else:
        if x == y:
            print("Yes")
        else:
            print("No")
    t -= 1