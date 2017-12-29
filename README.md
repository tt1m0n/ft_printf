Assignment

• Your function must be called ft_printf.
• You have to handle errors carefully. In no way can your program quit in an unex- pected manner (Segmentation fault, bus error, double free, etc).
• Your must submit a Makefile which will compile a libftprintf.a. This lib will be linked to our testing main to give you your results.
• You’ll have to submit a file called author containing your username followed by a ’\n’ at the root of your repository.
• You are allowed to use the following functions:
	◦ write
	◦ malloc
	◦ free
	◦ exit
	◦ The functions of man 3 stdarg


• You have to recode the libc’s printf function.
• Your function will be called ft_printf and will be prototyped similarly to printf. • You won’t do the buffer management in the printf function.
• You have to manage the following conversions: s, S, p, d, D, i, o, O, u, U, x, X, c, C
• You must manage %%
• You must manage the flags #,0,-,+ and space
• You must manage the minimum field-width
• You must manage the precision
• You must manage the flags hh, h, l, ll, j, et z.
