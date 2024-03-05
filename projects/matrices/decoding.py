from shared import *

key = input("Please enter four-number key (with spaces as divisors): ").split()
msg = input("Please enter encoded message (seperated by spaces): ").split()

for k in range(len(key)):
	key[k] = int(key[k])

if determinant_zero(key):
	print("Matrix doesn't have inverse")
else:

	inverse = (key[3],-1*key[1],-1*key[2],key[0])

	res = ""

	for i in range(0,len(msg),2):
		tmp = (int(msg[i]),int(msg[i+1]))

		m = multiply(inverse,tmp)

		res += ALFABET[m[0]]+ALFABET[m[1]]
	print(res)