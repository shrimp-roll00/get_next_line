#include "get_next_line_bonus.h"

char	*ft_strdup(const char *s1)
{
	size_t	len;
	char	*str;
	int		i;

	len = ft_strlen(s1) + 1;
	str = malloc(sizeof(char) * len);
	if (!str)
		return (0);
	i = 0;
	while (*s1)
		str[i++] = *s1++;
	str[i] = 0;
	return (str);
}

size_t	ft_strlen(const char *s)
{
	size_t	res;

	res = 0;
	while (*s++)
		res++;
	return (res);
}

char	*ft_strjoin(char *s1, char *s2)
{
	char	*res;
	int		i;
	int		j;

	res = malloc((ft_strlen(s1) + ft_strlen(s2)) + 1);
	if (!res)
		return (0);
	i = -1;
	while (s1[++i])
		res[i] = s1[i];
	j = 0;
	while (s2[j])
		res[i++] = s2[j++];
	res[i] = 0;
	free(s1);
	return (res);
}

char	*ft_strchr(const char *s, int c)
{
	unsigned char	chr;

	if (!c)
		return (0);
	chr = c;
	while (*s)
	{
		if (*s == chr)
			return ((char *)s);
		else if (!*s++)
			return (0);
	}
	return (0);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*res;
	int		i;

	if (!s)
		return (0);
	res = malloc(len + 1);
	if (!res)
		return (0);
	i = 0;
	while (len-- && s[start])
		res[i++] = s[start++];
	res[i] = 0;
	return (res);
}
