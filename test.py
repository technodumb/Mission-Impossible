st = "green"
count = 0
# 1 letter
for i in st:
    print(i)
    count+=1

# 2 letter
for i in range(5):
    for j in range(i+1,5):
            print(st[i]+st[j])
            count+=1

# 3 letter
for i in range(5):
    for j in range(i+1,5):
        for k in range(j+1,5):
            print(st[i]+st[j]+st[k])
            count+=1

# 4 letter
for i in range(5):
    for j in range(i+1,5):
        for k in range(j+1,5):
            for l in range(k+1, 5):
                print(st[i]+st[j]+st[k]+st[l])
                count+=1

# 5 letter 
for i in range(5):
    for j in range(i+1,5):
        for k in range(j+1,5):
            for l in range(k+1,5):
                for m in range(l+1,5):
                    print(st[i]+st[j]+st[k]+st[l]+st[m])
                    count+=1
                    
# print(count)