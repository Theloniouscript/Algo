using System;



    class Program {

        static void Main() {
            int[] array = {4, 6, 1, 2, 8, 9};
            Console.Write("Original array: ");
            PrintArray(array);

            /*Selection.SelectMin(array);

            Console.Write("Sorted from min array: ");
            PrintArray(array);

            Selection.SelectMax(array);

            Console.Write("Sorted from max array: ");
            PrintArray(array);*/

            QuickSort.Sort(array, 0, array.Length - 1);
            Console.Write("Array after quick sort: ");
            PrintArray(array);
        }

        private static void PrintArray(int[] array)
        {
            foreach (var element in array) {
                Console.Write(element + " ");
                
            }
            Console.WriteLine();
            
        }
    
    
}
