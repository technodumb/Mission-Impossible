for _ in range(int(input())):
    n,m,k = map(int, input().split())
    l = map(int, input().split())
    cheater = [2 for _ in range(n)]
    for i in l:
        if i<=n:
            cheater[i-1] -=1
    s = ''
    count=0
    for i in range(len(cheater)):
        if cheater[i]<1:
            s+= ' ' + str(i+1)
            count +=1
    print(str(count)+s+' ')
        
    