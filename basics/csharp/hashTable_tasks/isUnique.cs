using System;
namespace HashTable {
    public static class IsUnique {

        public static bool AllUniqueCharacters(string str) {
            if(str == null) {
                throw new ArgumentException("Null string!");
            }

            //Initializing a hashTable
            HashSet<char> charSet = new HashSet<char>();

            foreach (char c in str) {
                if (charSet.Contains(c))
                    return false;
                charSet.Add(c);
            }
            return true;
        }
    }
}