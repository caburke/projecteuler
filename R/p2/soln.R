max_fib <- 4000000
accum <- 0
x <- 0
y <- 1
while (y < max_fib){
	if (y %% 2 == 0){
		accum <- accum + y
	}
	tmp <- y
	y <- x + y
	x <- tmp
}

print(accum)
