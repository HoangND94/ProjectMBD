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
    return ok != 0 ? 0 : 1;
}