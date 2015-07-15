start = 20

cond = False
while cond == False:

	if (start % 20 == 0) and \
		(start % 19 == 0) and \
		(start % 18 == 0) and \
		(start % 17 == 0) and \
	(start % 16 == 0) and \
	(start % 15 == 0) and \
	(start % 14 == 0) and \
	(start % 13 == 0) and \
	(start % 12 == 0) and \
	(start % 11 == 0) and \
	(start % 10 == 0) and \
	(start % 9 == 0) and \
	(start % 8 == 0) and \
	(start % 7 == 0) and \
	(start % 6 == 0) and \
	(start % 5 == 0) and \
	(start % 4 == 0) and \
	(start % 3 == 0) and \
	(start % 2 == 0):

		cond = True

	else:

		start += 1

print(start)
