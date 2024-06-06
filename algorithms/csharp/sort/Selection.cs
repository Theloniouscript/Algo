using System;



    public static class Selection {

        public static void SelectMin(int[] array) {            

            int n = array.Length;

            for(int i = 0; i < n - 1; i ++) {
                int minIndex = i;

                for(int j = i+1; j < n; j ++) {

                    if(array[j] < array[minIndex]){
                        minIndex = j;
                        Console.WriteLine("if minIndex: " + j);
                    }
                }   

                int temp = array[minIndex];  
                array[minIndex] = array[i];
                array[i] = temp;

                Console.WriteLine("array[minIndex] = "+ array[minIndex]);
               

            }         

        }

        public static void SelectMax(int[] array) {            

            int n = array.Length;

            for(int i = 0; i < n - 1; i ++) {
                int maxIndex = i;

                for(int j = i+1; j < n; j ++) {

                    if(array[j] > array[maxIndex]){
                        maxIndex = j;
                        Console.WriteLine("if maxIndex: " + j);
                    }
                }   

                int temp = array[maxIndex];  
                array[maxIndex] = array[i];
                array[i] = temp;

                Console.WriteLine("array[maxIndex] = "+ array[maxIndex]);
               

            }         

        }

    }

