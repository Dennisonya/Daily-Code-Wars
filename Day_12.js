//The aim of the kata is to decompose n! 
//(factorial n) into its prime factors.
//Examples:
//n = 12; decomp(12) -> "2^10 * 3^5 * 5^2 * 7 * 11"
//since 12! is divisible by 2 ten times, by 3 
//five times, by 5 two times and by 7 and 11 only once.
//(5kyu Factorial decomposition)

function decomp(n) {
    // Function to generate primes up to a given number using the Sieve of Eratosthenes
    function generatePrimes(limit) {
        const sieve = new Array(limit + 1).fill(true);
        sieve[0] = sieve[1] = false;
        for (let i = 2; i * i <= limit; i++) {
            if (sieve[i]) {
                for (let j = i * i; j <= limit; j += i) {
                    sieve[j] = false;
                }
            }
        }
        return sieve.reduce((primes, isPrime, number) => {
            if (isPrime) primes.push(number);
            return primes;
        }, []);
    }

    // Generate all prime numbers up to n
    const primes = generatePrimes(n);

    // Object to hold the prime factor counts
    const primeFactors = {};

    // Count the occurrences of each prime factor in the factorial of n
    for (let prime of primes) {
        let count = 0;
        let power = prime;
        while (power <= n) {
            count += Math.floor(n / power);
            power *= prime;
        }
        primeFactors[prime] = count;
    }

    // Format the output string
 let final = Object.entries(primeFactors)
                      .map(([prime, count]) => count === 1 ? `${prime}` : `${prime}^${count}`)
                      .join(' * ');
    return final;
}
