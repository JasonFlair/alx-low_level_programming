int set_bit(unsigned long int *n, unsigned int index)
{

    *n = *n | (1 << index);
    return 1;
}
