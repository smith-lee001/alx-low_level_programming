/**
 * char *_strcpy - finction that copies string
 * @dest: copy to
 * @src: copy from
 * return: string
 */
char *_strcpy(char *dest, char *src)
{
int l = 0;
int x = 0;
while (*(src + l) != '\0')
{
l++;
}
for ( ; x < l; x++)
{
dest[x] = src[x];
}
dest[l] = '\0';
return (*dest);
}
