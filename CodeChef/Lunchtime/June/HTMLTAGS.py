letters = set('abcdefghijklmnopqrstuvwxyz0123456789')
for _ in range(int(input())):
    tag = input().rstrip()
    yes = False
    if tag[:2] == '</' and tag[-1] == '>' and len(tag)>3:
        if set(tag[2:-1]).issubset(letters):
            yes = True
    if yes:
        print('Success')
    else:
        print('Error')
