t = int(input())
while t:
    N = int(input())
    s = input()
    count = 0
    for i in range(N//2):
        if s[i] != s[N-i-1]:
            count += 1;
    print((count+1)//2)
    t -= 1