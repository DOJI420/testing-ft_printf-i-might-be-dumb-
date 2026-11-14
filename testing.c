
#include <stdio.h>
#include <limits.h>
#include "ft_printf.h"

#define TEST(n, ...) do { \
    int a, b; \
    printf("\n[%02d] Expected: ", n); \
    a = printf(__VA_ARGS__); \
    printf(" (count: %d)\n", a); \
    printf("     Mine:     "); \
    b = ft_printf(__VA_ARGS__); \
    printf(" (count: %d)\n", b); \
    if (a == b) \
        printf("     RETURN: OK\n"); \
    else \
        printf("     RETURN: FAIL\n"); \
} while (0)

int main(void)
{
    int a;

    a = 42;

    // FORMAT STRING
    TEST(1, "");
    TEST(2, "%%");
    TEST(3, "%%%%");
    TEST(4, "%%%%%%%%");
    TEST(5, "Hello%%World");
    TEST(6, "%%%d", 42);
    TEST(7, "%%%%%d", 42);
    TEST(8, "%d%%%%%s", 42, "hello");
    TEST(9, "abc%%");
    TEST(10, "%%abc%%");

    // INTEGER
    TEST(11, "%d", 0);
    TEST(12, "%d", -0);
    TEST(13, "%d", 1);
    TEST(14, "%d", -1);
    TEST(15, "%d", 9);
    TEST(16, "%d", 10);
    TEST(17, "%d", -10);
    TEST(18, "%d", 99);
    TEST(19, "%d", -99);
    TEST(20, "%d", INT_MAX);
    TEST(21, "%d", INT_MIN);

    // UNSIGNED / HEX
    TEST(22, "%u", 0);
    TEST(23, "%u", 1);
    TEST(24, "%u", UINT_MAX);
    TEST(25, "%x", 0);
    TEST(26, "%X", 0);
    TEST(27, "%x", 15);
    TEST(28, "%X", 15);
    TEST(29, "%x", UINT_MAX);
    TEST(30, "%X", UINT_MAX);

    // STRING / CHAR
    TEST(31, "%s", "");
    TEST(32, "%s", " ");
    TEST(33, "%s", "hello\nworld");
    TEST(34, "%c", 0);
    TEST(35, "%c", ' ');
    TEST(36, "%c", 127);
    TEST(37, "%c", 128);

    // POINTER
    TEST(38, "%p", NULL);
    TEST(39, "%p", (void *)0);
    TEST(40, "%p", &a);
    TEST(41, "%p %p %p", NULL, &a, &a);

    // COMBINED
    TEST(42, "abc");
    TEST(43, "%s", "");
    TEST(44, "%c", 0);
    TEST(45, "%%");
    TEST(46, "%d%d%d", 1, 22, 333);
    TEST(47, "Hello %s!", "Yahya");
    TEST(48, "%c%s%d%x", 'A', "BC", 42, 255);

    return (0);
}


