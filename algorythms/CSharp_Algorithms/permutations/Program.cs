using System;

class Program{
    static int Factorial(int n)
{
    int result = 1;
    for (int i = 2; i <= n; i++)
    {
        result *= i;
    }

    return result;
}

static void Main(){
    Console.WriteLine("Enter an integer: ");

    string input = Console.ReadLine();
    int n = 0;
    if (int.TryParse(input, out n) && n > 0)
    {

        Console.WriteLine($"Factorial from {n} = {Factorial(n)}");
    }
    else
    {
        Console.WriteLine("Invalid input. Please enter a valid integer");
}


}

}






