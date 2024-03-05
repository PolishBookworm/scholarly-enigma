from shared import *

key = input("Please enter four-number key (with spaces as divisors): ").split()
msg = input("Please enter message consisting of letters (w/o q v or x) and spaces: ").upper()

for k in range(len(key)):
	key[k] = int(key[k])

if determinant_zero(key):
	print("Matrix doesn't have inverse")
else:

	if len(msg) % 2:
		msg += " "

	res = ""

	for i in range(0,len(msg),2):
		tmp = (ALFABET.find(msg[i]),ALFABET.find(msg[i+1]))

		m = multiply(key,tmp)

		res += f"{m[0]} {m[1]} "

	res = res[:-1]

	print(res)