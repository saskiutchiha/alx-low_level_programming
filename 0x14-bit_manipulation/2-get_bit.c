

int get_bit(unsigned long int n, unsigned int index){
 unsigned long int mask; 
    
     mask = 1UL << (sizeof(unsigned long int) * 8 - 1);
     mask =   1 >> (63-index -1);
if (index > 64)
{
return -1;
}
        if (n & mask) {
           return 1;
        }
 return 0;
}
