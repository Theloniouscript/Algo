using System;

class MeetingRoomScheduler {

    public static void Main() {

        Console.WriteLine("Enter number of intervals n = [1..100]: ");

        int n = int.Parse(Console.ReadLine());
        int[][] intervals = new int[n][];

        Console.WriteLine("Enter intervals [1..50] in format: start - end, separate with space: ");

        for(int i = 0; i < n; i ++) {

            var input = Console.ReadLine().Split(); 
            int start = int.Parse(input[0]);
            int end = int.Parse(input[1]);

            intervals[i] = new int[]{start, end};
        } 

            QuickSorter.Sort(intervals, 0, intervals.Length - 1);

            //BubbleSort(intervals);


            int count = 0;
            int lastEnd = 0;

            // Greedy algorithm
            foreach(var interval in intervals) {

                if(interval[0] >= lastEnd) {

                    count ++;
                    lastEnd = interval[1];

                }
            }

            Console.WriteLine($"Max number of non-intersecting intervals = {count}");

      
    }

    private static void BubbleSort(int[][] intervals)
    {
        bool sorted = true;

        while (sorted) {

            sorted = false;

            for(int i = 0; i < intervals.Length - 1; i ++) {

                if(intervals[i][1] > intervals[i+1][1]) {

                    int temp = intervals[i][1];
                    intervals[i][1] = intervals[i+1][1];
                    intervals[i+1][1] = temp;

                    sorted = true;
                }
            }

        }
    }
}
