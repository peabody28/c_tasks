void strcpy(char *s, char *t)
{
    while (*s++ = *t++);
}

int main(void)
{
    char s1[5] = "abcd";
    char s2[5];
    strcpy(s2, s1);
    printf("%s", s2);
}
