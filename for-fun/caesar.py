ALPHA = "ABCDEFGHIKLMNOPQRSTVXYZ"

q = 4

string = "ALEAIACTAEST"

res = ""

for char in string:
	res	+= ALPHA[ALPHA.find(char) + q]

print(res)