/*                                                LAND OF QUERIES _  NUMERIC ALGORITHMS 

Quering values : 

1) count :  this take a beginning and end value and tell us hoe many a value has occured 

exapmle :     if we cpunt for 3 
                                   |1| |2| |3| |4| |3| |6| |8| |3| |9|

              3 occured 3 times in this particualar sequence.

2) accumulate / (transform_)reduce : Computes the sum of the given value init and the elements in the range [first, last)

  -> The first version uses operator+ to sum up the elements, the second version uses the given binary function op

  example : if we have this kind of sequece - 1, 2, 3, 4, 5, 6, 7, 8, 9, 10

  applying accounmulate : int sum = std::accumulate(v.begin(), v.end(), 0)    here 0 is initial value of sum 

                        this will return us 55 after addition 

     Note : reduce do the same thing as that of accumulate the major difference is that it does not take any kind of initial value and can deal in powers 

           tranform_ applies a paticular operation to the elements of a sequence 

          -> transform_reduce takes a function , applies that function before coding reduce

3) partial_sum :   Computes the partial sums of the elements in the subranges of the range [first, last) and writes them to the range beginning at d_first. The first version uses operator+ to sum up the elements, the second version uses the given binary function op

works as : 

*(d_first)   = *first;
*(d_first+1) = *first + *(first+1);
*(d_first+2) = *first + *(first+1) + *(first+2);
*(d_first+3) = *first + *(first+1) + *(first+2) + *(first+3);
...

example : if we appy it to this sequece v = {2, 2, 2, 2, 2, 2, 2, 2, 2, 2}

will give us : 2 4 6 8 10 12 14 16 18 20 

if we apply modified version to multipy we will have : 2 4 8 16 32 64 128 256 512 1024

4) inclusive_scan : it is same as that of partial_sum except it can also run in powers parallel 

5) exclusive scan : it is just same as inclusive scan except it does not includes the current element 

for example if we apply inclusive and exclusive scan on this sequence  - 3, 1, 4, 1, 5, 9, 2, 6

                           exclusive sum: 0 3 4 8 9 14 23 25 
                           inclusive sum: 3 4 8 9 14 23 25 31 

6) tranform_inclusive_scan and transform_exclusive_scan : they apply an operation first on sequence and then perform inclusive or exclusive scan.

example : if this is sequence  3, 1, 4, 1, 5, 9, 2, 6 and we apply this on it as follows : 

auto times_10 = [](int x) { return x * 10; };

  std::cout << "10 times exclusive sum: ";
  std::transform_exclusive_scan(data.begin(), data.end(),
				std::ostream_iterator<int>(std::cout, " "),
				0, std::plus<int>{}, times_10);                  **** this time_10 is defined above before use 

   the result is : 10 times exclusive sum: 0 30 40 80 90 140 230 250              

   similarly it goes for another one .

7) inner_product : this algo products the two sequeces and result out their sum after product of their corresponding elements ro we can say it applies operations pairwise . 

for example :    a{0, 1, 2, 3, 4};    b{5, 4, 2, 3, 1};

    int r1 = std::inner_product(a.begin(), a.end(), b.begin(), 0);
    std::cout << "Inner product of a and b: " << r1 << '\n';

    Inner product of a and b : 21

8) adjacent_difference : Computes the differences between the second and the first of each adjacent pair of elements of the range 

working : *(d_first)   = *first;
          *(d_first+1) = *(first+1) - *(first);
          *(d_first+2) = *(first+2) - *(first+1);
          *(d_first+3) = *(first+3) - *(first+2);
           ...

example : if this 2, 4, 6, 8, 10, 12, 14, 16, 18, 20 is sequence we will apply it

           std::adjacent_difference(v.begin(), v.end(), v.begin()

           result is : 2 2 2 2 2 2 2 2 2 2

9) sample : Selects n elements from the sequence [first; last) (without replacement) such that each possible sample has equal probability of appearance, and writes those selected elements into the output iterator out. Random numbers are generated using the random number generator g.

If n is greater than the number of elements in the sequence, selects last-first elements. 

example : if this is a string  "hgfedcba" and we apply sample on it for value 5 we will have 

             std::sample(in.begin(), in.end(), std::back_inserter(out), 5, std::mt19937{std::random_device{}()})

            output : five random letters out of hgfedcba: gfcba




*/