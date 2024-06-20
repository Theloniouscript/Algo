using System;
using System.Collections.Generic;

namespace HashTable {

public class KeyValuePair {
    public readonly string Key;
    public readonly int Value;

    public KeyValuePair(string key, int value) {
        Key = key;
        Value = value;
    }
}

public class ChainedHashTable {
    private readonly LinkedList<KeyValuePair>[] buckets; 
    private readonly int size;

    public ChainedHashTable(int size) {
        this.size = size;
        buckets = new LinkedList<KeyValuePair>[size];
        // Every element in buckets array is a LinkedList and keeps elements of the KeyValuePair type
        for(int i = 0; i < size; i++) {
            buckets[i] = new LinkedList<KeyValuePair>();
        }
    }

    private int GetHash(string key) {
        return key.Length % size;
    }

    //Adding the new Key-Value pair in the corresponding list
    public void Add(string key, int value) {
        int hash = GetHash(key); 
        buckets[hash].AddLast(new KeyValuePair(key, value));

    }

    public bool TryGetValue(string key, out int value) {
        int hash = GetHash(key);
        //Searching in the LinkedList<KeyValuePair>
        foreach (var pair in buckets[hash]) {
            if(pair.Key == key) {
                value = pair.Value; //Setting the value from found pair
                return true; //Key successfully found
            }
        }
        value = default(int);
        return false;
    }
    public bool ContainsKey(string key) {
        int hash = GetHash(key);
        foreach(var pair in buckets[hash]){
            if(pair.Key == key) {
                return true;
            }
        }
        return false;
    }

    public bool Remove(string key) {
        int hash = GetHash(key);
        var list = buckets[hash];
        foreach(var pair in list) {
            if(pair.Key == key) {
                list.Remove(pair);
                return true;
            }
        }
        return false;
    }
}
}

