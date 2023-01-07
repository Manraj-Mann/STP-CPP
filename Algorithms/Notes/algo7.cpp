  /*                                                      SECRET RUNES 

                        The things with we can combine with other algorithms to make new algorithms  


1) stable_ : this keeps a same relative order maintained .

for exapamle :  we can use it with partition and sort as following

                                     _______   stable_sort
                                    |
                 stable_   ---------|
                                    |_______   stable_partition

    while partition the relative may gets changed among similar types also so this will theor relative an it was initially 

2) is_ : it returns us an boolean expression fot that particular operation 

   for examaple :    is_ is used as :  
                                      is_sorted 
                                      is_partition
                                      is_heap 

            it will return a boolean expression and will check weather its sorted or not , partitioned or not ans its a heap or not 

3)  is_*_until : this return us an iterator or a kind of pointer which will tell us upto which point the things is true or not 

 for examaple :    is_ * _ until is used as :  
                                      is_sorted_until
                                      is_partition_until
                                      is_heap_until 
   
        it will tell us upto which point are numbers are sorted , upto whic point they are partitioned and upto which points its heap.

    
    SIMILARLY WE HAVE  _copy , _n and _if

    for more info : https://www.cplusplus.com/reference/algorithm/

*/