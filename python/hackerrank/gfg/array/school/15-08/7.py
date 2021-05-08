for i in range(int(input())):
  a=int(input())
  b=list(map(int,input().split()))
  print(str(sum(b))+" "+print(round((sum(b)/a),2)))