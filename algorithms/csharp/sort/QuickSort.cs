using System;

public static class QuickSort {

    private static void Swap(int[] arr, int i, int j) {

        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;

        Console.WriteLine("Swap perform" + i + j);

    }

    private static int Partition(int[] arr, int low, int high) {

        int pivot = arr[high];
        int i = low - 1;
        Console.WriteLine("Partition method, pivot = " + pivot);
        

        for(int j = low; j < high; j ++) {

            if(arr[j] < pivot) {

                i++;
                Swap(arr, i, j);
            }
        }

        Swap(arr, i+1, high);
        
        Console.WriteLine(low);
        Console.WriteLine(high);
        
        return i + 1;
        

    }

    public static void Sort(int[] arr, int low, int high) {

        if(low < high) {
            int pi = Partition(arr, low, high);

            Sort(arr, low, pi - 1);
            Console.WriteLine("Left side sort");

            Sort(arr, pi+1, high);
            Console.WriteLine("Right side sort");
        }

    }
}