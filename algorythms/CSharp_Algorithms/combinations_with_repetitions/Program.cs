using System;

class Program {
    static int Factorial(int n){
        
        int result = 1;
        for(int i = 1; i <=n; i ++) {
            result *= i;
        }

        return result;
    }

    static int Combinations_with_Repetitions(int n, int k) {
        if(n == 0 || k == 0) return 1;

        return Factorial(n+k-1) / (Factorial(k) * Factorial(n-1));
    }

    static void Main(){

        Console.WriteLine("Enter 2 integer digits: ");

        if(!int.TryParse(Console.ReadLine(), out int n) || !int.TryParse(Console.ReadLine(), out int k) || n < 0 || k < 0 || k > n) {
            Console.WriteLine("Invalid input");
            return;
        }

        Console.WriteLine($"Combinations with Repetitions for {n} and {k} = {Combinations_with_Repetitions(n, k)}");
    }
}
