#include"Class.h"

bool MaxDate(Date a, Date b)
{
	if (a.year == b.year)
	{
		if (a.month == b.month)
		{
			if (a.day == b.day)
				return 1;
			else
				return (a.day < b.day) ? 0 : 1;
		}
		else
			return (a.month < b.month) ? 0 : 1;
	}
	else
		return (a.year < b.year) ? 0 : 1;
};