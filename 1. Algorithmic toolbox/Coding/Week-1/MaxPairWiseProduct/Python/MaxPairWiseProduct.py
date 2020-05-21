# Create an index variable
n = int(input())
# Create an array of int type of length index
a = [int(x) for x in input().split()]
# Create a variable : product
product = 0
# Execute 2 for loop staisfying the condition: numbers[i]*numbers[j]
for i in range(n):
    for j in range(i+1,n):
        product = max(product,a[i]*a[j])
# Print products
print(product)