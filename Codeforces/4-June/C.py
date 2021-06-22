def opp(a):
    if a=='1':
        return '0'
    else:
        return '1'

for _ in range(int(input())):
    st = input()
    nb = 0
    j=st[0]
    i=1
    lnt = 1
    while i<len(st):
        if st[i]=='?':
            j = opp(j)
            lnt+=1
        if st[i]!=j:
            lnt += 1
            j = st[i]
        else:
            nb+= lnt*(lnt+1)/2
            lnt = 1
        i+=1
    if lnt!=1:
        nb+= lnt*(lnt+1)/2
        lnt = 1
    print(int(nb))
