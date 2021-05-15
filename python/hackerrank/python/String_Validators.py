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

