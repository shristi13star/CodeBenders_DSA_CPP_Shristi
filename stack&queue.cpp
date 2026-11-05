10 20 60 80 1 100

100 , 80 , 60 , 20 , 10 , 1

1 , 10 , 20 , 60 , 80 , 100


int fact(int n) {  // 4  // 3 // 2  // 1
   if (n <= 1) return 1;     // base 
    return n * fact(n - 1);  // recurse
}
// 24 
//  4 * 6     // 3 * 2  // 2 * 1

0 1  1 2 3 5

// choice
                                    a  b  c
                        " "                     "a"
                " "            "b"           "a"         "ab" 
        " "         "c"     "b"     "bc"   "a"  "ac"   "ab"   "abc"

