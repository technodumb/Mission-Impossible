def count_substring(string, sub_string):
    l1, l2 = len(string), len(sub_string)
    count = 0
    for i in range(l1-l2+1):
        # print(string[i:i+l2])
        if string[i:i+l2] == sub_string:
            count += 1
    return count

if __name__ == '__main__':
    string = input().strip()
    sub_string = input().strip()
    
    count = count_substring(string, sub_string)
    print(count)