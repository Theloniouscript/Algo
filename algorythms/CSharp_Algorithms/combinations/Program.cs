using System;
class Program {

        static int Factorial(int n)
    {
        int result = 1;
        for (int i = 1; i <= n; i++)
        {
            result *= i;

        }

        return result;
    }


    static int Combinations(int n, int k)
    {

            return Factorial(n) / (Factorial(k) * Factorial(n - k));

    }


    /*
    Version 1:
    
    static void Main() {

        Console.WriteLine("Enter two integer digits: ");

        // User input:
        string inputN = Console.ReadLine();
        string inputK = Console.ReadLine();

        int n = 0;
        int k = 0;

        //Parsing inputs to integers:
        bool isValidN = Int32.TryParse(inputN, out n);
        bool isValidK = Int32.TryParse(inputK, out k);

        //Checking if the inputs are valid:
        if (!isValidN || !isValidK){
            Console.WriteLine("Invalid input. Please enter valid integers.");
        }
        else if(n < 0 || k < 0) {
            Console.WriteLine("Invalid input. Please enter non-negative integers.");
        }
        else if (k > n)
        {
            Console.WriteLine("Invalid input: k should be <= n.");
        }
        else{

            Console.Write($"Combinations from {n} and {k} = {Combinations(n, k)}");

        }
            
    }*/

    //Version 2: Lean code
    static void Main() {
        Console.WriteLine("Enter two integers:");
        if (!int.TryParse(Console.ReadLine(), out int n) || !int.TryParse(Console.ReadLine(), out int k) || n < 0 || k < 0 || k > n) {
            Console.WriteLine("Invalid input.");
            return;
        }
        Console.WriteLine($"Combinations from {n} and {k} = {Combinations(n, k)}");
    }

}


