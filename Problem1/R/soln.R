# Solution to Problem 1

upper_bound <- 1000
divisors <- c(3, 5)
multiples <- vector()

N <- length(divisors)

for (i in 1:N)
{
    div <- divisors[i]
    
    mult <- div

    i <- 1

    while (mult < upper_bound)
    {
        
        multiples <- c(multiples, mult)
        
        i <- i + 1 

        mult <- div*i

    }

}

unique_multiples <- unique(multiples)

mult_sum <- sum(unique_multiples)

print(mult_sum)
