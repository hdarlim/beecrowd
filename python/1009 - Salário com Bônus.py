# https://judge.beecrowd.com/pt/problems/view/1009

nome = input()
salario_fixo = float(input())
vendas = float(input())

comissao = vendas * 0.15
salario_total = comissao + salario_fixo

print(f"TOTAL = R$ {salario_total:.2f}")