typedef unsigned int size_t;

void __assert_func(void);

void *malloc(size_t n);
void free(void *ptr);
void *calloc(size_t sz, size_t n);
void *realloc(void *ptr, size_t n);

void *memcpy(void *dest, const void *src, size_t n);
void *memmove(void *dest, const void *src, size_t n);
void *memset(void *s, int c, size_t n);

int strlen(const char *str);
int strcmp(const char *s1, const char *s2);
int strncmp(const char *s1, const char *s2, size_t n);
char *strndup(const char *s, size_t n);
char *strcpy(char *dest, const char *src);
char *strcat(char *dest, const char *src);

int printf(const char *fmt, ...);
int snprintf(char *str, size_t size, const char *fmt, ...);