/* What is an heap ? Here are some properties :                               example :-                    
                                                                                          |9|
->heap is a data structure whic looks like tree                                           / \
                                                                                         /   \
                                                                                     |8|       |6| 
->every node must be smaller than its children                                       / \       / \
                                                                                    /   \     /   \
                                                                                  |7|  |4|  |5|   |2|
->parent is bigger than its children                                              / \       / 
                                                                                 /   \     /
                                                                               |0|  |1|   |3|

-> we can sqash it down into a range     |9||8||6||7||4||5||2||0||1||3|


now to make a heap   |0||1||2||3||4||5||6||7||8||9|   ------>      |9||8||6||7||4||5||2||0||1||3|

We use ::->    make_heap 

usage -  std:: make_heap( begin(numbers) , end ( number));





*/