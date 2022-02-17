int GetSumError(int from, int to)
{
	int sum = 0;
	if (from > to) {
		return -1;
	}
	for (int i = from; i <= to; i++) {
		sum += i;
	}
	return sum;
}