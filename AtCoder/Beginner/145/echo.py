n = int(input())
text = str(input())

if(n % 2 == 1):
    print("No")
elif(text[0: int(n/2)] == text[int(n/2): ]):
    print("Yes")
else:
    print("No")
