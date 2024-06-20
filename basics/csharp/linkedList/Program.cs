using System;
namespace LinkedListBasic {
    public static class Program {
        public static void Main() {
            BasicLinkedListImplementation list = new BasicLinkedListImplementation();
            list.Append(1);
            list.Append(2);
            list.Append(9);
            list.Append(4);

            Console.WriteLine("Linked List: ");
            list.PrintList();
        }
    }
}
