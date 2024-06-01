using System;

class Program {
    static void Main() {
        int[] array = {5, 3, 2, 8, 1};

        Console.WriteLine("Original array: ");
        PrintArray(array);

        BubbleSort(array);

        Console.WriteLine("Sorted array: ");
        PrintArray(array);
    }

    private static void BubbleSort(int[] array)
    {
        
        bool sorted = true;

        while(sorted) 
        {
            sorted = false;

            for (int i = 0; i < array.Length - 1; i ++){                

                if(array[i] > array[i+1]) {
                    int temp = array[i];
                    array[i] = array[i+1];
                    array[i+1] = temp;

                    sorted = true;
                }
            }
        }
    }

    private static void PrintArray(int[] array)
    {
        foreach (var element in array){
            Console.Write(element + " ");
        }      
        
    }
}