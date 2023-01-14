input()
data = list(map(int, input().split()))

counter = 0
for datum in data:
	if datum < 7:
		counter += 1
print(counter)