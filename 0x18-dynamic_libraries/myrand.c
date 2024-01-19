int rand(void)
{
	static int vals[] = {9, 9, 8, 10, 24, 75};
	static int i;

	return (vals[i++] - 1);
}
