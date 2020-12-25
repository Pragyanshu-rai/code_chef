line=input()
line=line.strip().split(" ")
withdraw=float(line[0])
current_balance=float(line[1])
if withdraw+0.5>current_balance or withdraw%5!=0:
    print(current_balance)
else :
    print("%.2f"%(current_balance-withdraw-0.5))
