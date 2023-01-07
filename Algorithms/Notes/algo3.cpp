/* Why we are using a heap ?

here : inorder to get the maximum value in not much time or constant time 

for example : |9||8||6||7||4||5||2||0||1||3||

max is |9| here 

if we want to remove it we can use pop_heap :

usage : std :: pop_heap( begin(numbers) , end(numbers));
and then    number.pop_back();

works as:

pop_head will do the following :

|9||8||6||7||4||5||2||0||1||3|

first it will swap the last and first

|3||8||6||7||4||5||2||0||1||9|

after this it will rearrange the heap excluding the last element

|8||6||7||4||5||2||0||1||3||9|

now numbers.pop_back() will remove last element 

so we have : |8||6||7||4||5||2||0||1||3| this heap left 

if we keep on doing this , this will act like sorting 

it will become a sort heap like thing giving us a sortes seqence if we store all the pop_back ed numbers

*/