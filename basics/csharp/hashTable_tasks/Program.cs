using System;
namespace HashTable {
    public static class Program {
        public static void Main() {
            string strTest1 = "hello";
            string strTest2 = "goodbye";
            string strTest3 = "abcdefg";

            bool isUnique1 = IsUnique.AllUniqueCharacters(strTest1);
            bool isUnique2 = IsUnique.AllUniqueCharacters(strTest2);
            bool isUnique3 = IsUnique.AllUniqueCharacters(strTest3);

            Console.WriteLine($"Is \"{strTest1}\" unique? {isUnique1}");
            Console.WriteLine($"Is \"{strTest2}\" unique? {isUnique2}");
            Console.WriteLine($"Is \"{strTest3}\" unique? {isUnique3}");
            

        }
    }
}
