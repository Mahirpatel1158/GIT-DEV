s="this is string example"

# Reverse the string :
a = s.split()
a = list(reversed(a))
print(" ".join(a))

# Word wise reversing the String :
stringlength=len(s)
slicedString=s[stringlength::-1]
print (slicedString)

# Two characters interchange :
def solve(b):
   b = list(s)
   for i in range(0, len(b)-1, 2):
      b[i], b[i+1] = b[i+1], b[i]

   return ''.join(b)

print(solve(s))

# Joining the String with '*' :
c = ['this', 'is', 'string', 'example']
print('*'.join(c))

# Replacing is-->was :
d = s.replace(" is", " was")
print(d)







