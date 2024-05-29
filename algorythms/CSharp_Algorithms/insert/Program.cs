using System;
class Program{

    static void Main() {

        int[] array = {5, 3, 7, 2, 1};

        Console.WriteLine("Original array: ");
        PrintArray(array);

        InsertSort(array);

        Console.WriteLine("Sorted array: ");
        PrintArray(array);
    }

    private static void InsertSort(int[] array)
    {

        for(int i = 1; i < array.Length; i ++) {
            int current = array[i];
            int j = i -1;

            while (j >= 0 && array[j] > current){
                array[j+1] = array[j];
                j--;
            }

            array[j+1] = current;
        }
    }

    private static void PrintArray(int[] array)
    {
        foreach(var element in array) {
            Console.WriteLine(element + " ");
        }
    }
}
