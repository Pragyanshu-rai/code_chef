repeat=int(input())
for cycle in range(repeat):
    number=int(input())
    sum_number=0
    while number > 0:
        sum_number+=number%10
        number//=10
    print(sum_number)
