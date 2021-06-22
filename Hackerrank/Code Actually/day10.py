for _ in range(int(input())):
    a = int(input())
    if a>0:
        b = input()
    cur = ''
    m = 0
    for i in range(a):
        for j in range(i, a):
            if b[j] not in cur:
                cur+=b[j]
            else:
                if len(cur)>m:
                    m = len(cur)
                cur = ''
                break
    if len(cur)>m:
         m = len(cur)
    print(m)
