from random import randint
from time import sleep

size = int(input())+2
board = [[0 for i in range(size)] for j in range(size)]

tmp = input()
while tmp:
	tmp = tmp.split()
	board[int(tmp[0])+1][int(tmp[1])+1] = 1
	tmp = input()

def num_live_neighbors(i,j):
	return board[i-1][j-1] + board[i-1][j] + board[i-1][j+1] + board[i][j-1] + board[i][j+1] + board[i+1][j-1] + board[i+1][j] + board[i+1][j+1]

def check_board():
	for i in range(1,size-1):
		for j in range(1,size-1):
			if board[i][j]:
				return 1
	return 0

def display():
	for i in range(1,size-1):
		p = ""
		for j in range(1,size-1):
			p += str(board[i][j]) + " "
		print(p)
	print("\n"*(45-size))
	sleep(1)

n = 0
run = 1
while run:
	display()
	new_board = [[0 for i in range(size)] for j in range(size)]

	for i in range(1,size-1):
		for j in range(1,size-1):
			tmp = num_live_neighbors(i,j)
			if board[i][j]==1:
				if tmp < 2 or tmp > 3:
					new_board[i][j] = 0
				else:
					new_board[i][j] = 1
			else:
				if tmp == 3:
					new_board[i][j] = 1
				else:
					new_board[i][j] = 0

	board = new_board
	run = check_board()

display()
