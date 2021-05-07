#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	len;

	len = strlen(src);
	if (len + 1 < size)
		memcpy(dst, src, len + 1);
	else if (size != 0)
	{
		memcpy(dst, src, size - 1);
		dst[size - 1] = '\0';
	}
	return (len);
}