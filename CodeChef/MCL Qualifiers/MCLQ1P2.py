n=int(input())
s= int(input())
e=int(input())

for j in range(n): 
    fail =[1 for i in range(s,e+1)]
    a=[int(c) for c in input().split()]   
    for i in range(0,e+1-s):
        if i+s  in a:
            fail[i]=0
    con =False
    tp=""
    for i in range(s,e):
        # print(fail[i-s])
        if fail[i-s]==1:
            if fail[i-s+1]==0:
                tp+=str(i)+','
                con = False
            elif con==False:
                tp+=str(i) + " to "
                con = True
    if fail[e-s]:
        tp+=str(e)
    if len(tp)!=0:
        if tp[-1] == ',':
            tp = tp[:-1]

    print(tp)