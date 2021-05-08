n=int(input())
x=list(map(int,input().split()))
x.sort() 
avg=sum(x)/n
print(round(avg,1))
median=round(((x[n//2]+x[(n//2)-1])/2),1)
List=x
def most_frequent(List): 
    counter = 0
    num = List[0] 
      
    for i in List: 
        curr_frequency = List.count(i) 
        if(curr_frequency> counter): 
            counter = curr_frequency 
            num = i 
  
    return num 

print(median)
print(most_frequent(List))
