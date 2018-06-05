sal = float(input())

if sal <= 400.0:
	r = 15
elif sal > 400.0 and sal <= 800.0:
	r = 12
elif sal > 800.0 and sal <=1200.0:
	r = 10
elif sal > 1200.0 and sal <= 2000.0:
	r = 7
else:
	r = 4

nsal = sal+(sal*r/100)
reaj = nsal - sal

print("Novo salario: {:.2f}\nReajuste ganho: {:.2f}\nEm percentual: {per} %".format(nsal, reaj, per=r))
