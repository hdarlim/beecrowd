# https://judge.beecrowd.com/pt/problems/view/1008

number = int(input())
work_hours = int(input())
salary_hour = float(input())

salary = work_hours * salary_hour

print(f"NUMBER = {number}")
print(f"SALARY = U$ {salary:.2f}")
