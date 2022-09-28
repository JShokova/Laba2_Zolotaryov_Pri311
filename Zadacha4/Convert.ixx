#include <iostream>
export module Convert;


export int YTD(int x)
{
	return x * 365;
}

export int DTH(int x)
{
	return 24 * x;
}

export int HTM(int x)
{
	return 60 * x;
}

export int DTM(int x)
{
	return DTH(HTM(x));
}

export int MTS(int x)
{
	return 60 * x;
}

export int HTS(int x)
{
	return HTM(MTS(x));
}