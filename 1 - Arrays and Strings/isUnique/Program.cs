using System;

namespace isUnique
{
    class isUnique
    {
        public static bool isUniqueChars(String str)
        {
            if (str.Length > 256)
            {
                return false;
            }

            bool[] values = new bool[256]; //create an array 0-256 where each element is initialised to false.

            foreach (char c in str)
            {
                //c is the ascii number equiv
                //Console.WriteLine(values[c]);
                if (values[c]) // for each char, we check the values array and if it has seeen it before it will return true.
                {
                    return false;
                }
                values[c] = true;

            }
            return true;



        }

    }

    class program : isUnique
    {
        static void Main(string[] args)
        {
            Console.WriteLine(isUniqueChars("hello"));
        }
    }
}
