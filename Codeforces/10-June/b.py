import numpy as np

for _ in range(int(input())):
    ln = int(input())
    arr = np.array(list(map(int, input().split())))
    if(sum(arr)%ln !=0):
        print(-1)
    else:
        print(sum(arr>np.mean(arr)))