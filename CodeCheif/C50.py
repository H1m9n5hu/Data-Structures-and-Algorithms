import sys

t = int(input())
while t:
    N, D = input().split(" ")
    N = int(N)
    D = int(D)
    X = 1024
    
    if D == 0:
        print(1)
    elif D > 0 and D <= 10:
        if 2**D >= N:
            print(N)
        else:
            print(2**D)
    else:
        for i in range(D-10):
            X *= 3
            if X >= N:
                print(N)
                break
            elif i == D - 11:
                print(X)
    t -= 1