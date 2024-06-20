using System;
using System.Security.Cryptography;

namespace SimpleHashTable {
    public class HashTable {

   private readonly string[] keys;
   private readonly int[] values;
   private readonly bool[] isDeleted;
   private readonly int size;
   private int count;
   public HashTable(int size) {
    this.size = size; // Setting the size of the table
    keys = new string[size]; // Initialize keys array with a set size
    values = new int[size];
    isDeleted = new bool[size];
    count = 0;
   }

   private int GetHash(string key) {
    return key.Length % size;
   }

    //Without collision proceccing
   public void AddSimple(string key, int value) {    
    int hash = GetHash(key); // Getting hash for the string key
    keys[hash] = key; // Writing the key in the array keys
    values[hash] = value; // Writing the value in the array values
    count ++;
   }

   private int LinearProbing(int originalHash, int i) {
    return (originalHash + i) % size;
   }

    //With collision proceccing
   public void AddWithLinearProbing(string key, int value) {

    //Checking for table fullness
    if(count >= size) {
        throw new ArgumentException ("Hash Table is full!");
    }

    int hash = GetHash(key);
    int originalHash = hash;
    int i = 1;

    //Searching for an empty cell using linear probing
    while(keys[hash] != null) {
        hash = LinearProbing(originalHash, i);
        i ++;
    }

    keys[hash] = key; // Writing the key in the array keys
    values[hash] = value; // Writing the value in the array values
    count ++;
    
   }

   public bool TryGetValue(string key, out int value) {
    int hash = GetHash(key);
    int originalHash = hash;
    int i = 1;

    //Until the end of the chain is reached and an empty slot is found
    while(keys[hash] != null) { 
        if(keys[hash] == key && !isDeleted[hash]) {
            value = values[hash];
            return true; // Successfully found key and value
        }

        hash = LinearProbing(originalHash, i);
        i ++;
    }

    value = default(int); // If the key wasn't found, then set the default value
    return false;
   }

    //Checking for key availability
   public bool ContainsKey(string key) {
    int hash = GetHash(key);
    int originalHash = hash;
    int i = 1;

    while(keys[hash] != null) {
        if(keys[hash] == key && !isDeleted[hash]) {
            return true;
        }

        hash = LinearProbing(originalHash, i);
        i ++;
        
    }

    return false;
   }

   public bool Remove(string key) {
    int hash = GetHash(key);
    int originalHash = hash;
    int i = 1;

    while(keys[hash] != null) {
        if(keys[hash] == key) {
            //Performing deletion
            isDeleted[hash] = true; // Mark the element as deleted
            count --;
            return true; // Successful deletion: element found and deleted
        }

        //linear probing for searching the next cell
        hash = LinearProbing(originalHash, i); // Counting the new hash 
        i ++; 
    }

    return false;   

   }

}

public static class Program {

    private const string Banana = "banana";
    private const string Orange = "orange";
    public static void Main() {

        HashTable hashTable = new HashTable(10);
        //Constants for string values
        



        hashTable.AddSimple("apple", 3);
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

        bool containsApple = hashTable.ContainsKey("apple");
        Console.WriteLine($"Contains apple: {containsApple}");

        bool containsPotato = hashTable.ContainsKey("potato");
        Console.WriteLine($"Contains potato: {containsPotato}");


        hashTable.AddWithLinearProbing("apple", 3);
        hashTable.AddWithLinearProbing(Banana, 7);
        hashTable.AddWithLinearProbing(Orange, 5);

        //Checking TryGetValue method
        if(hashTable.TryGetValue(Banana, out bananaCount)) {
            Console.WriteLine($"Banana number: {bananaCount}");
        }
        else {
            Console.WriteLine("No banana info found");
        }

        bool containsBanana = hashTable.ContainsKey(Banana);
        Console.WriteLine($"Contains banana: {containsBanana}");

        bool containsCarrot = hashTable.ContainsKey("carrot");
        Console.WriteLine($"Contains carrot: {containsCarrot}");

        hashTable.Remove(Orange);
        Console.WriteLine($"Contains oranges after removal: {hashTable.ContainsKey(Orange)}");
    }
}
}
