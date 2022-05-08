# Collatz-Conjecture
Hello , this is a 'C' code Collatz-conjecture . With this code we can get the intermediate values between given number & '1' and no.of steps taken to reach 1 . 
If you don't know what this conjecture is follow the below points .
-> It simply says that by using two rules for any given number, we can get '1' as it's final answer.
 -> Rule-1: If your number is even then divide the number by two . (n/2)
 -> Rule_2: If your number is odd then multiply with 3 and add 1 . (3n+1)
 Now , the value obtained should also be operated the same . Contiue this process , at some time we can see that the value converges to '1' . (This has no formal proof).
 After it converges to 1, we get stucked in a loop (1 -> 4 -> 2 -> 1 -> 4 ...... ) .
 
 Examples :
 1) n = 7 ,
    7 -> 22 -> 11 -> 34 -> 17 -> 52 -> 26 -> 13 -> 40 -> 20 -> 10 -> 5 -> 16 -> 8 -> 4 -> 2 -> 1
 2) n = 12 ,
    12 -> 6 -> 3 -> 10 -> 5 -> 16 -> 8 -> 4 -> 2 -> 1
