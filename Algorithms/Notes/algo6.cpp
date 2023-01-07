/*Some permutations :

1) rotate : this just bring the last elemet to first and so on....

for example : 

                   if rotate is applied on this : |9||8||6||7||4||5||2||0||1||3| ----->  |3||9||8||6||7||4||5||2||0||1|

2) shuffle : randomly shuffe the all the elements 

for example : 

              if shuffle is applied on this : |9||8||6||7||4||5||2||0||1||3| ----->  |3||1||8||6||0||4||7||2||5||8|

              but there is an order which we can define for these permutations :

                                ||
                                ||        |1| |2| |3| |4| |5| |6| |7| |8| |9|
        3) next_premutation    \||/ 
                                \/        |1| |2| |3| |4| |5| |6| |7| |9| |8|
                                          
                                          |1| |2| |3| |4| |5| |6| |8| |7| |9|
                                            ............................                /\
                                                                                       /||\
                                            :::::::::::::::::::::::::::                 ||    4) prev_permutation
                                                                                        || 
                                            ...........................
                                          |9| |8| |7| |6| |5| |4| |3| |2| |1|

5) reverse : just reverse the whole sequence 

for example :  |1| |2| |3| |4| |5| |6| |7| |8| |9| ------------>    |9| |8| |7| |6| |5| |4| |3| |2| |1|

*/