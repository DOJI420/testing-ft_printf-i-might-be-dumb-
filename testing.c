
#include "ft_printf.h"
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

////////////////this is for testing _ptr function/////////////////
int	main(void)
{
	int		a = 42;
	char	b = 'A';
	int		arr[5] = {1, 2, 3, 4, 5};
	char	*str = "Hello";
	void	*heap = malloc(10);
	int		ret;

	setbuf(stdout, NULL);

	ret = ft_print_ptr(NULL);
	printf(" | %d\n%p | 5\n-------------\n", ret, NULL);

	ret = ft_print_ptr((void *)0);
	printf(" | %d\n%p | 5\n-------------\n", ret, (void *)0);

	ret = ft_print_ptr((void *)1);
	printf(" | %d\n%p | 3\n-------------\n", ret, (void *)1);

	ret = ft_print_ptr((void *)9);
	printf(" | %d\n%p | 3\n-------------\n", ret, (void *)9);

	ret = ft_print_ptr((void *)10);
	printf(" | %d\n%p | 3\n-------------\n", ret, (void *)10);

	ret = ft_print_ptr((void *)15);
	printf(" | %d\n%p | 3\n-------------\n", ret, (void *)15);

	ret = ft_print_ptr((void *)16);
	printf(" | %d\n%p | 4\n-------------\n", ret, (void *)16);

	ret = ft_print_ptr((void *)255);
	printf(" | %d\n%p | 4\n-------------\n", ret, (void *)255);

	ret = ft_print_ptr((void *)4096);
	printf(" | %d\n%p | 6\n-------------\n", ret, (void *)4096);

	ret = ft_print_ptr((void *)-1);
	printf(" | %d\n%p | 18\n-------------\n", ret, (void *)-1);

	ret = ft_print_ptr((void *)LONG_MAX);
	printf(" | %d\n%p | 18\n-------------\n", ret, (void *)LONG_MAX);

	ret = ft_print_ptr((void *)LONG_MIN);
	printf(" | %d\n%p | 18\n-------------\n", ret, (void *)LONG_MIN);

	ret = ft_print_ptr((void *)INT_MAX);
	printf(" | %d\n%p | 10\n-------------\n", ret, (void *)INT_MAX);

	ret = ft_print_ptr((void *)INT_MIN);
	printf(" | %d\n%p | 18\n-------------\n", ret, (void *)INT_MIN);

	ret = ft_print_ptr(&a);
	printf(" | %d\n%p | 14\n-------------\n", ret, (void *)&a);

	ret = ft_print_ptr(&b);
	printf(" | %d\n%p | 14\n-------------\n", ret, (void *)&b);

	ret = ft_print_ptr(arr);
	printf(" | %d\n%p | 14\n-------------\n", ret, (void *)arr);

	ret = ft_print_ptr(&arr[4]);
	printf(" | %d\n%p | 14\n-------------\n", ret, (void *)&arr[4]);

	ret = ft_print_ptr(str);
	printf(" | %d\n%p | 14\n-------------\n", ret, (void *)str);

	ret = ft_print_ptr(heap);
	printf(" | %d\n%p | 14\n-------------\n", ret, heap);

	free(heap);
	return (0);
}
