#include <stdio.h>

int main()
{
	int len, i;
    int M=1234567891;
	long long hash_value = 0, R = 1;
	char str[51];

	scanf("%d %s", &len, str);

	for (i = 0; i < len; i++)
	{
		hash_value = (hash_value + (str[i] - 'a' + 1) * R) % M;
		R = (R * 31) % M;
	}
	printf("%lld\n", hash_value);

	return 0;
}