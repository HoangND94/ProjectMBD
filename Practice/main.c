#include <stddef.h>
#include <stdio.h>

static int total_of(const int *values, size_t count, int *out_total)
{
    if (values == NULL || count == 0U || out_total == NULL)
    {
        return 0;
    }

    int total = 0;
    for (size_t index = 0U; index < count; ++index)
    {
        total += values[index];
    }
    *out_total = total;
    return 1;
}

int main(void)
{
    int n = 0;
    const int values[] = {18, 24, 36};
    int total = 0;
    const int ok = total_of(values, 3U, &total);
    printf("status=%s total=%d\n", ok != 0 ? "ok" : "error", total);

    int a = 8;
    int b = 12;
    int sum = a + b;
    printf("sum of %d and %d is %d\n", a, b, sum);
    printf("Hello, World!\n");
    printf("Hello 12233\n");
    printf("Hello tu A\n");
    printf("Hello tu B\n");
    printf("Hello tu C\n");
    return ok != 0 ? 0 : 1;
}