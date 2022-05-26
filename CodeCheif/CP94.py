t = int(input())
while t:
    x, y, z = input().split(" ")
    x = int(x)
    y = int(y)
    z = int(z)
    print(x*z - y*z)
    t -= 1