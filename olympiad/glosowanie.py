data = list(map(int, input().split()))

if data[0] + data[1] != 100:
	print("SKANDAL")
elif data[0] == data[1]:
	print("Remis")
elif data[0] > data[1]:
	print("Bitek")
else:
	print("Bajtek")