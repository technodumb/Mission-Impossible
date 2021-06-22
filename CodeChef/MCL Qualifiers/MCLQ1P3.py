l = int(input())
m, n = [int(i) for i in input().split()]
for i in range(m):
    luck = False
    num = [int(i) for i in input().split()]
    cache = {}
    for i,j in enumerate(num):
        if j in cache:
            if i - cache[j] <= l:
                print("LUCKY")
                luck = True
                break
            else:
                cache[j] = i
        else:
            cache[j] = i
    if not luck:
        print('NOT LUCKY')