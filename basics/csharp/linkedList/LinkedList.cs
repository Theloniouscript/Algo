using System;

namespace LinkedListBasic {

    public class Node {
        public int Data {get; set;}
        public Node? Next {get; set;}

        //Constructor for a new node
        public Node(int data) {
            Data = data;
            Next = null; // Initially this node doesn't link to the next node

        }
    }
    public class BasicLinkedListImplementation {
        private Node? head; // List's head
        
        //Constructor for an empty LinkedList
        public BasicLinkedListImplementation(){
            head = null;
        }

        //Method for adding the new element to the end of the list
        public void Append(int newData) {
            Node newNode = new Node(newData); // Creating new node with newData content
            if(head == null) {
                head = newNode; // If the list is empty, the newNode becomes the head
                return;
            }

            Node last = head; // Searching for the last node in the list
            while(last.Next != null) {
                last = last.Next;
            }
            last.Next = newNode; // Adding the last node to the end of the list
        }

        //Method for printing list content

        public void PrintList() {
            Node? temp = head;
            while (temp != null) {
                Console.Write(temp.Data + " ");
                temp = temp.Next;
            }
            Console.WriteLine();
        }

    }
}