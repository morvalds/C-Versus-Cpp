#define NULL ((void *) 0)

#define stdin	(_impure_ptr->_stdin)
#define stdout	(_impure_ptr->_stdout)

# define _EXFUN(N, P) N P

int		_EXFUN(printf, (const char *, ...));

int main() {
	printf("Hello, World!\n");
	return 0;
}