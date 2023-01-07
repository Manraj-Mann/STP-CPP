/*
But if we want to add a number to heap it will be added at the end so what we will do it will look like this if we add 8.8 to heap :

                      inserted by :  using push_back(8.8)

                                           |9|
                                           / \
                                          /   \
                                      |8|       |6|  
                                      / \       / \
                                     /   \     /   \
                                   |7|  |4|  |5|   |2|
                                   / \       /\ 
                                  /   \     /  \
                                |0|  |1|   |3|  |8.8|

                                in range as -> |9||8||6||7||4||5||2||0||1||3||8.8|

                                and its voilating the property of heap 

                                we will correct it by push_heap to make its way to its correct position

                                std :: push_heap( begin(numbers), end(numbers))

                                so now it looks like ->>>  |9||8.8||8||6||7||4||5||2||0||1||3|

                                process occurs in these steps :

                    1st step:              |9|                                 2nd step:           |9|
                                           / \                                                    / \
                                          /   \                                                  /   \
                                      |8|       |6|              ------->                    |8.8|    |6|  
                                      / \       / \                                          / \      / \
                                     /   \     /   \                                        /   \    /   \
                                   |7| |8.8|  |5|   |2|                                   |7|  |8|  |5|   |2|
                                   / \        /\                                          / \        /\ 
                                  /   \      /  \                                        /   \      /  \
                                |0|  |1|    |3|  |4|                                   |0|  |1|    |3|  |4|
                                        
                                     



*/