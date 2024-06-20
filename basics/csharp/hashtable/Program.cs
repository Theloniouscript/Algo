using System;

namespace HashTable {
    public static class Program {

    //Constants for string values   
    private const string Banana = "banana";
    private const string Orange = "orange";

    private const string Apple = "apple";
    public static void Main() {

        SimpleHashTable hashTable = new SimpleHashTable(10);

        hashTable.AddSimple(Apple, 3);
        hashTable.AddSimple(Banana, 7);
        hashTable.AddSimple(Orange, 5);

        int bananaCount = 0;

        //Checking TryGetValue method
        if(hashTable.TryGetValue(Banana, out bananaCount)) {
            Console.WriteLine($"Banana number: {bananaCount}");
        }
        else {
            Console.WriteLine("No banana info found");
        }

        bool containsApple = hashTable.ContainsKey(Apple);
        Console.WriteLine($"Contains apple: {containsApple}");

        bool containsPotato = hashTable.ContainsKey("potato");
        Console.WriteLine($"Contains potato: {containsPotato}");


        hashTable.AddWithLinearProbing(Apple, 3);
        hashTable.AddWithLinearProbing(Banana, 7);
        hashTable.AddWithLinearProbing(Orange, 5);

        //Checking TryGetValue method
        if(hashTable.TryGetValue(Banana, out bananaCount)) {
            Console.WriteLine($"Banana number: {bananaCount}");
        }
        else {
            Console.WriteLine("No banana info found");
        }

        //Checking ContainsKey method
        bool containsBanana = hashTable.ContainsKey(Banana);
        Console.WriteLine($"Contains banana: {containsBanana}");

        bool containsCarrot = hashTable.ContainsKey("carrot");
        Console.WriteLine($"Contains carrot: {containsCarrot}");

        //Checking Remove method
        hashTable.Remove(Orange);
        Console.WriteLine($"Contains oranges after removal: {hashTable.ContainsKey(Orange)}");

        ChainedHashTable chainedHashTable = new ChainedHashTable(10);
        chainedHashTable.Add(Banana, 5);
        chainedHashTable.Add(Apple, 7);
        chainedHashTable.Add(Orange, 2);

        if(chainedHashTable.TryGetValue(Banana, out int value)) {
            Console.WriteLine($"Found {value} banana");
        }
        else {
            Console.WriteLine("No banana found");
        }

        if(chainedHashTable.ContainsKey(Apple)) {
            Console.WriteLine("Apple is in the table");
        }
        else {
            Console.WriteLine("No apple in the table");
        }

        if(chainedHashTable.Remove(Orange)) {
            Console.WriteLine("Orange removed");
        }
        else {
            Console.WriteLine("Orange not found");
        }

        if(!chainedHashTable.ContainsKey(Orange)){
            Console.WriteLine("No orange in the table");
        }
        else {
            Console.WriteLine("Orange is still in the table");
        }


        
    }
}

}
