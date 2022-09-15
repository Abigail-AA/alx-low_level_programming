void print_remaining_days(int month, int day, int year)
{
	if (year % 400 == 0 && year % 100 == 0 || year % 4 == 0 && year % 100 != 0)

	if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
	{
		if (month >= 2 && day >= 60)
		{
