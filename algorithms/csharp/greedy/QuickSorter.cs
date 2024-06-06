using System;

public static class QuickSorter {

    private static void Swap(int[][] intervals, int i, int j) {

        int[] temp = intervals[i];
        intervals[i] = intervals[j];
        intervals[j] = temp;
    }

    private static int Partition(int[][] intervals, int low, int high) {

        int[] pivot = intervals[high];
        int i = low - 1;

        for(int j = low; j < high; j++) {

            if(intervals[j][0] < pivot[0]) {
                i ++;
                Swap(intervals, i, j);
            }
        }

        Swap(intervals, i+1, high);
        return i+1;

    }

    public static void Sort(int[][] intervals, int low, int high) {

        if(low < high) {
            int pivotIndex = Partition(intervals, low, high);
            Sort(intervals, low, pivotIndex - 1);
            Sort(intervals, pivotIndex + 1, high);

        }

    }
}