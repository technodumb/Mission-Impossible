for _ in range(int(input())):
    n=int(input())
    arr=list(map(int,input().split()))
    maxi=arr[0]
    for i in range(n):
        maxa=arr[i]
        for j in range(i,n):
            if (maxa < sum(arr[i:j+1])):
                maxa =sum(arr[i:j+1])
        if(maxa>maxi):
            maxi=maxa
    print(maxi)