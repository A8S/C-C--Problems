a=0
b=0
the_string = input()
a, b = the_string.split(' ')
a=int(a)
b=int(b)
n=0
for i in range(1, min(a, b)+1): 
    if a%i==b%i==0: 
        n+=1
print(n)
