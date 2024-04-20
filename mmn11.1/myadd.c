
unsigned int my_add(unsigned int a, unsigned int b)
{
	unsigned int res = 0;
	int carry = 0;
	int i=0;
	for (i = 0; i < 32; i++)
	{
	    int ABit = (a >> i) & 1;
	    int BBit = (b >> i) & 1;
	    int addTempRes = ABit + BBit + carry;

	    /* res =  0101000010 | */
	    /* mask = 0000000000 mask */
	    /* res  = 0101001010 mask */
	    int mask = ((addTempRes % 2) << i);
	    res = res | mask;

	    /* if addTempRes is 0,1 -> 0 */
	    /* if addTempRes is 2,3 -> 1 */
	    carry = addTempRes / 2;
	}
	return res;
}