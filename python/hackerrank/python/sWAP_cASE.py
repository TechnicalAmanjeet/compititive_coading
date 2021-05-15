def swap_case(s):
    a=list()
    for i in s:
        if ord(i) in range(65,91):
            a.append(chr(ord(i)+32))
        elif ord(i) in range(97,123):
            a.append(chr(ord(i)-32))
        else:
            a.append(i)
    return "".join(a)
if __name__ == '__main__':
    s = input()
    result = swap_case(s)
    print(result)