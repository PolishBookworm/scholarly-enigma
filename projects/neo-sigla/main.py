historyczne = ('Rdz', 'Wj', 'Kpł', 'Lb', 'Pwt', 'Joz', 'Sdz', 'Rt', '1Sm', '2Sm', '1Krl', '2Krl', '1Krn', '2Krn', 'Ezd', 'Ne', 'Tb', 'Jdt', 'Est', '1Mch', '2Mch')
madrosciowe = ('Hi', 'Ps', 'Prz', 'Koh', 'Pnp', 'Mdr', 'Syr')
prorockie = ('Iz', 'Jr', 'Lm', 'Ba', 'Ez', 'Dn', 'Oz', 'Jl', 'Am', 'Ab', 'Jon', 'Mi', 'Na', 'Ha', 'So', 'Ag', 'Za', 'Ml',)
pozaewangeliczne = ('Dz', 'Rz', '1Kor', '2Kor', 'Ga', 'Ef', 'Flp', 'Kol', '1Tes', '2Tes', '1Tm', '2Tm', 'Tt', 'Flm', 'Hbr', 'Jk', '1P', '2P', '1J', '2J', '3J', 'Jud', 'Ap')
ewangelie = ('Mt', 'Mk', 'Łk', 'J')

# else: inne

with open("in.txt") as f:
	data = f.readlines()

res = [[] for i in range(5)]

for datum in data:
	tmp = datum.split()[0]
	if tmp in historyczne:
		index = 0
	elif tmp in madrosciowe:
		index = 1
	elif tmp in prorockie:
		index = 2
	elif tmp in pozaewangeliczne:
		index = 3
	else:
		index = 4
	res[index].append(datum)


with open("out.txt","w") as f:
	f.write("Historyczne:\n")
	for datum in res[0]:
		f.write(datum)
	f.write("Mądrościowe:\n")
	for datum in res[1]:
		f.write(datum)
	f.write("Prorockie:\n")
	for datum in res[2]:
		f.write(datum)
	f.write("Pozaewangeliczne z Nowego Testamentu:\n")
	for datum in res[3]:
		f.write(datum)
	f.write("Ewangelie:\n")
	for datum in res[4]:
		f.write(datum)