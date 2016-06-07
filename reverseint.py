reverse=0
num=int(input("Enter a value"))
while num!=0:
reverse = reverse * 10
reverse = reverse + num%10
num= num/10
print(reverse)
