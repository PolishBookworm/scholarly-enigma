# check for "|"

with open("in.txt") as f:
	data = f.readlines()

for i in range(len(data)):
	tmp = data[i][::-1]
	x = tmp.find("/")
	try:
		tmp = tmp[0:x] + "|" + tmp[x+1:]
	except IndexError:
		tmp = tmp[0:x] + "|"
	data[i] = tmp[::-1]

with open("out.txt","w") as f:
	for datum in data:
		f.write(datum)
