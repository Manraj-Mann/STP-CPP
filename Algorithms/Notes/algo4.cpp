/*

sorting 

example : this is an normal sequece  |9||8||6||7||4||5||2||0||1||3|

1) sort : will sort every element in an order 

|9||8||7||6||5||4||3||2||1||0|
           
           OR

|0||1||2||3||4||5||6||7||8||9|

2) partial_sort : lets suppose pointer is telling upto which element we have to sort 
                                        
                                        
                               |9| |4| |5| |8| |0| |6| |2| |3| |1| |7|
                                           /\
                                          /||\
                                           ||
                                           ||

   the sequece will be sorted only till 8 so we will have : 
                              ________________  _______________________
                             |      sorted    ||      unsorted         |
                               |9| |8| |7| |4|  |5| |0| |6| |2| |3| |1| 
                                            /\
                                           /||\
                                            ||
                                            ||

3) nth_element : To sort a particular element , thsi means if all the elements were sorted then which position will be given to the nth element 
    
    for example : if sequece is   |8||6||1||7||0||5||2||4||9||3| the after sorting it will look like this |9||8||7||6||5||4||3||2||1||0|

    but if we apply nth_element sort on element at index 4 on normal series we will get 

           index :     0   1   2   3   4   5   6   7   8   9                           index :     0   1   2   3   4   5   6   7   8   9                                                                                             
                      |8| |6| |1| |7|  |0| |5| |2| |4| |9| |3|       -------->                    |9| |8| |6| |7| |5| |0| |2| |4| |1| |3|
                                       /\                           after nth sort               |_______________| /\|____________________|
                                      /||\                                                              |         /||\          |
                                       ||                                                   unsorted but greater   ||       unsorted but lesser
                                       ||                                                    than index 4          ||           than index 4


 4) sort_heap : just sorts the heap normally 

 5) inplace_sort : its like merge sort where two sorted arrays are merged together  
                               ____________      _______________________
 for example :                |    sorted  |    |         sorted        |
                                |9||5||0|         |8||7||6||4||3||2||1|

                                            ||
                                            ||   results in 
                                           \||/
                                            \/

                                 |9||8||7||6||5||4||3||2||1||0|

*/