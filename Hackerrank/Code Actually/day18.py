vowels = 'aeiou'
st = input().lower()
for i in vowels:
    st = st.replace(i, '')
print('.'+'.'.join(list(st)))

