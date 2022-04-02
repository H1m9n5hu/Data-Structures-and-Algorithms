t = int(input())
while t:
    d, n = int(input()), int(input())
    s = str(n)
    for i in range(0, d):
        if s[i] == '0' or s[i] == '5':
            print("Yes")
            break
        else:
            if i == d - 1:
                print("No")
    t -= 1