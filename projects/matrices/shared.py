ALFABET = " ABCDEFGHIJKLMNOPRSTUWYZ"

def determinant_zero(matrix):
	""" Checks if determinant of 2x2 matrix is equal to zero. """
	det = matrix[0]*matrix[3] - matrix[1]*matrix[2]
	if det:
		return 0
	return 1

def multiply(m2x2,m2x1):
	""" Multiplies 2x2 and 2x1 matrices. """
	a = m2x2[0] * m2x1[0] + m2x2[1] * m2x1[1]
	b = m2x2[2] * m2x1[0] + m2x2[3] * m2x1[1]

	return a,b