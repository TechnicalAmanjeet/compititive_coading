def count_substring(string, sub_string):
    c=0
    n=len(sub_string)
    for i in range(len(string)):
      if string[i]==sub_string[0]:
        if string[i:i+n]==sub_string:
          c+=1
    return c
    

if __name__ == '__main__':
    string = input().strip()
    sub_string = input().strip()
    
    count = count_substring(string, sub_string)
    print(count)