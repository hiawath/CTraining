int modular()
{
	int value = 386;

	int h = value / 100;
	int d = (value / 10) % 10;
	int n = value % 10;

	printf("%d¹é%d½Ê%d\n", h, d, n);
}