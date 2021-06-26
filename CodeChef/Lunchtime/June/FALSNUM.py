for _ in range(int(input())):
    num = input()
    if num[0]=='1':
        num = '10' + num[1:]
    else:
        num = '1' + num
    
    print(num)