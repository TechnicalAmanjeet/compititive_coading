s=input()
for i in range(len(s)):
  if ord(s[i]) in range(48,57) or ord(s[i]) in range(65,91) or ord(s[i]) in range(97,123):
    print('True')
    break
  else:
    if i==len(s)-1:
      print(False)

for i in range(len(s)):
  if ord(s[i]) in range(65,91) or ord(s[i]) in range(97,123):
    print('True')
    break
  else:
    if i==len(s)-1:
      print(False)

for i in range(len(s)):
  if ord(s[i]) in range(48,57): 
    print('True')
    break
  else:
    if i==len(s)-1:
      print(False)

for i in range(len(s)):
  if ord(s[i]) in range(97,123):
    print('True')
    break
  else:
    if i==len(s)-1:
      print(False)

for i in range(len(s)):
  if ord(s[i]) in range(65,91):
    print('True')
    break
  else:
    if i==len(s)-1:
      print(False)

or

S = raw_input()
print any([char.isalnum() for char in S])
print any([char.isalpha() for char in S])
print any([char.isdigit() for char in S])
print any([char.islower() for char in S])
print any([char.isupper() for char in S])