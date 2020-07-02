import itertools

s = input()
alphabets = [ 'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z' ]
flag=0
x=1
while flag==0:
    permutation = itertools.product(alphabets,repeat=x)
    for word in permutation:
        missing = ''.join(word)
        if missing not in s:
            print(missing)
            flag=1
            break
    x+=1
