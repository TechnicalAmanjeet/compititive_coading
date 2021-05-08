def minion_game(string):
    # your code goes here
    a=s=string
    y=z=0
    t=['a','e','i','o','u','A','E','I','O','U']
    for i in range(len(s)):
      for j in range(0,len(s)):
        if (a[j] in t) and (j+i)<len(s):
            y+=1
        elif (j+i)<len(s):
            z+=1
    if y>z:
      print('Kevin',y)
    else:
      print('Stuart',z)
    


if __name__ == '__main__':
    s = input()
    minion_game(s)