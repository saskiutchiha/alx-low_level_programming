

int get_bit(unsigned long int n, unsigned int index){
 unsigned long int mask; 

     mask =   1UL << index;
if (index > 64)
{
return -1;
}
        if (n & mask) {
           return 1;
        }
 return 0;
}
