with open("pythagorean.txt") as f:
	data = f.readlines()
			
for n in range(len(data)):
	data[n] = list(map(int, data[n].strip("\n").split(" ")))
	data[n].sort()
	data[n] = tuple(data[n])

print("foo" if len(data) == len(set(data)) else "bar")
print(len(set(data)))
	
for datum in data:
	if datum[0]**2 + datum [1]**2 != datum[2]**2:
		print("oops")
	for el in datum:
		if el > 1000:
			print("eggs")
			
print(len(data) == 881)

