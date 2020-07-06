# Enter your code here. Read input from STDIN. Print output to STDOUT

import math

s = input()
li = []

l = math.ceil(math.sqrt(len(s)))
for j in range(0,l):
    for i in range(j,len(s),l):
         li.append(s[i])
    li.append(' ')
print(''.join(li))
