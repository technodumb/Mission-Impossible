i=input().split()
m=int(input())
n=0
flag=0
for x in range(len(i)):
    if i[x]=="0":
        if x==0 and i[1]=="0":
            n+=1
            i[x]="1"
            if n>=m:
                flag=1
                break
        elif x==len(i)-1 and i[x-1]=="0":
            n+=1
            i[x]="1"
            if n>=m:
                flag=1
                break
        elif i[x-1]=="0" and i[x+1]=="0":
            n+=1
            i[x]="1"
            if n>=m:
                flag=1
                break
if flag:
    print(1)
else:
    print(0)
    # cook your dish here
print(n)