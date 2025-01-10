# remember to check for "|" in the text and substitute if needed
# also you can add the title

with open("in.txt") as f:
	data = f.readlines()

data = [datum[:-1] for datum in data]

with open("out.txt", "w") as f:
	f.write(f"---|{data[0]}\n")
	for i in range(1,len(data)):
		f.write(f"{data[i-1]}|{data[i]}\n")
