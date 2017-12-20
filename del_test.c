/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omakovsk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/13 13:28:39 by omakovsk          #+#    #+#             */
/*   Updated: 2017/12/13 13:28:42 by omakovsk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <limits.h>

int main ()
{
	/*
	1. FlAGS 
	[-] (value wil be left-justified)
		1. when explicit minimum width and the converted value is smaller than minimum width;
			otherwise the value will fill the field without padding;
		2. [-] override [0] if both are used / flag '0' is ignored when flag '-' is present/
			but its compile 
		3. except for {n} conversions, the converted value is padded on the right with blanks, rather than on the 
			left with blanks or zeros.
	[+] ( )
		1. relevant for the conversion [d] [i] / {a} {A} {e} {E} {f} {g} {G}
		2. [+] ovverride [ ] if both are used. /warning: flag ' ' is ignored when flag '+' is present/
		3. an explicit + will precede a converted positive value. (Negative value are always preceded by - 
			regardless(несмотря на) the [+] flag is specified)
	[0] (fill 0)
		1. when explicit minimum width and the converted value is smaller than minimum width;
			otherwise the value will fill the field without padding;
		2. in integer conversion this flag is superseded(вытесняется) by the precision specification;
			2.1. if a precision is given with a numeric conversion [d] [i] [o] [u] [x] [X], the 0 flag is ignored.
		3. if no zero-digit flag is present, then a space will be used as the pad character.
		4. except for {n} conversions, the converted value is padded on the right with blanks, rather than on the 
			left with blanks or zeros.
	[#] ()
		1. relevant [i] - no effect(man), maybe [O] [o] [x] [X] / {a} {A} {e} {E} {f} {g} {G} 
		2. for [o] / and maybe [O] conversion the precision will be 0;
		3. for [x] [X] a non-zero result has the string 0x / OX
		
	[ ] ( )
		1. relevant for conversation [d] [i] / {a} {A} {e} {E} {f} {g} {G} 
		2. [ ] ignored if [+];
		3. space should be left before a positive number

	2. MINUMUM FIELD WIDTH
		1. must be non-empty sequence of decimal intger and have to start has not begin of a zero digit
			(becouse it is will taken like [0]-flag);
		2. if the converted value (including prefix) results in fewer characters than specified field widt, 
			than pad char are used to pad the value to the spec width
		3. if converted value is more char than the spec width then the field is expanded (расширается) to 
			accommodate(разместить) it withiut padding

	3. PRECISION 
		1. the minimum number of digits to be printed for [d] [i] [o] [u] [x] [X];
		2. if precision and flag [0] - zero ignored /without warning/
		3. the maximum number of characters to be written from a string in the [s] conversion;
		4. if the period appear but the integer is missing, then the integer is asumed to be zero, 
			which ussualy has a different effect than omiiting the entire precision specification.   
			This gives the minimum number of digits to appear for [d] [i] [o] [u] [x] [X] conversions, 
         	the maximum number of characters to be printed from a string for [s].

    4. SIZE SPECIFICATION 
    conjunction with the conersion operaions [d] [i] [o] [u] [x] [X]
    ??z > j > ll > l > h > hh ??
    [h]
    	1. indicates that conversion argument has type (short) or (unsigned short). 
    	2. that is althought the argument would have been converted to (int) or (unsigned) by the argument 
    		promotions is should be converted to (short) or (unsigned short) before convertions. 
    [hh]
    	1. indicates that conversion argument has type (char) or (unsigned char). 
    	2. that is althought the argument would have been converted to (int) or (unsigned) by the argument 
    		promotions is should be converted to /char/ or /unsigned char/ before convertions. 
    [l]
    	1. indicates that conversion argument has type /long/ or /unsigned long/. 
    [ll]
    	1. indicates that conversion argument has type (long long int) or (unsigned long long int). 
    [j]
    	1. indicates that conversion argument has type intmax_t or uintmax_t;
    [z]
    	1. indicates that conversion argument has type size_t

    5. CONVERSION LETTER 
    [c]
    	1. relevant [-] 
    [C]
    	1. relevant [-]
    [s]
    	1. relevant [-] | PRECISION
    [S]
    	1. relevant [-] | PRECISION
    [p]
    	1. the void * pointer argument is printed in hexidemical (as if by %#x or %#lx)
    [%] 
    	1. A '%' is written. No argument is converted. The complete conversion specification is '%%';	
    	2. relevant [-] [0] | 
    [d]
    	1. int;
    	2. relevant [-] [+] [0] [ ] | PRECISION[ok] | SS [ok]
    [D]
    	1. like ld (long)
    	2. relevant [-] [+] [0] [ ] | PRECISION | SS
    [i]
    	1. i = d;
    [o]
    	1. unsigned int.
    	2. value to octal (means in 8-system)
    	3. relevant [-] [0] [#] | PRECISION | SS
    [O]
    	1. like lo;
    	2. relevant [-] [0] [#] | PRECISION | SS
    [u]
    	1. unsigned int.
    	2. relevant [-] [0] | PRECISION | SS
    [U]
    	1. like lu (unsigned long);
    	2. relevant [-] [0] | PRECISION | SS
    [x]
    	1. unsigned int.
    	2. value to hexademical (means in 16-system);
    	3. relevant [-] [0] [#] | PRECISION | SS
    [X] 
    	1. like x (unsigned int) but /ABCDEF/;
    	2. value to hexademical;
    	3. relevant [-] [0] [#] | PRECISION | SS
		
	*/
	// d = int(-2 147 483 648, 2 147 483 647), h/d - short (-32 767, 32 767)
	// l/d = −9 223 372 036 854 775 807, 9 223 372 036 854 775 807	
	// flags: [-] [+] [0]
	// 1. if flags +- or -+ like +

	printf("(d)       - [%d]         [%d]\n", 45, -45);
	printf("(1d)      - [%1d]        [%1d]\n", 45, -45);
	printf("(7d)      - [%7d]        [%7d]\n", 45, -45);
	printf("(07d)     - [%07d]       [%07d]\n", 45, -45);
	printf("(-7d)     - [%-7d]       [%-7d]\n", 45, -45);
	printf("(04d)    - [%04d]      [%04d]\n", 45, -45);
	printf("(7d)      - [%7d]        [%7d]\n", 45, -45);
	printf("(-7d)     - [%-7d]       [%-7d]\n", 45, -45);
	printf("(- 7d)    - [%- 7d]      [%- 7d]\n", 45, -45);
	printf("( -7d)    - [% -7d]      [% -7d]\n", 45, -45);
	printf("(-.4+6d)     - [%-.4+6d]       [%-.4+6d]\n", 45, -45);
	printf("(-+7d)    - [%-+7d]       [%-+7d]\n", 45, -45);
	printf("( 15.7d)    - [% 15.7d]      [% 15.7d]\n", 45, -45);
	printf("( 0.3d)   - [% 0.3d]     [% 0.3d]\n", 45, -45);
	printf("( D)  - [% d]    [% d] - ", 45, -45); printf("If a precision is given with a numeric conversion\
		(d, i, o, u, i, x, and X), the 0 flag is ignored.\n\n");

/*
	//D? - work like u-conv
	printf("(D)       - [%D]         [%D]\n", 45, -45);
	printf("(14D)     - [%14D]       [%14D]\n", 45, -45);
	printf("(014D)    - [%014D]      [%014D]\n", 45, -45);
	printf("(14D)     - [%14D]       [%14D]\n", 45, -45);
	printf("(-14D)    - [%-14D]      [%-14D]\n", 45, -45);
	printf("(14.20D)  - [%14.20D]    [%14.20D]\n", 45, -45);
	printf("(-14.4D)  - [%-14.4D]    [%-14.4D]\n\n\n", 45, -45);

	//// u = unsigned int(4 294 967 295), h/u - unsigned short (65 535)
	// l/u = unsigned long(18 446 744 073 709 551 615)
	// flags: [-] [0]
	printf("(u)       - [%u]         [%u]\n", 45, -45);
	printf("(14u)     - [%14u]       [%14u]\n", 45, -45);
	printf("(014u)    - [%014u]      [%014u]\n", 45, -45);
	printf("(14u)     - [%14u]       [%14u]\n", 45, -45);
	printf("(-14u)    - [%-14u]      [%-14u]\n", 45, -45);
	printf("(14.20u)  - [%14.20u]    [%14.20u]\n", 45, -45);
	printf("(-14.4u)  - [%-14.4u]    [%-14.4u]\n\n\n", 45, -45);

	//U? 
	printf("(U)       - [%U]         [%U]\n", 45, -45);
	printf("(14U)     - [%14U]       [%14U]\n", 45, -45);
	printf("(014U)    - [%014U]      [%014U]\n", 45, -45);
	printf("(14U)     - [%14U]       [%14U]\n", 45, -45);
	printf("(-14U)    - [%-14U]      [%-14U]\n", 45, -45);
	printf("(14.20U)  - [%14.20U]    [%14.20U]\n", 45, -45);
	printf("(-14.4U)  - [%-14.4U]    [%-14.4U]\n\n\n", 45, -45);

	// o = unsigned int(4 294 967 295) h/o - unsigned short (65 535)
	// l/o = unsigned long(18 446 744 073 709 551 615)
	// flags: [-] [#] [0]
	// value to octal (8)
	printf("(o)       - [%o]         [%o]\n", 45, -45);
	printf("(14o)     - [%14o]       [%14o]\n", 45, -45);
	printf("(014o)    - [%014o]      [%014o]\n", 45, -45);
	printf("(#14o)    - [%#14o]      [%#14o]\n", 45, -45);
	printf("(-14o)    - [%-14o]      [%-14o]\n", 45, -45);
	printf("(-#14o)   - [%-#14o]     [%-#14o]\n", 45, -45);
	printf("(14.4o)   - [%14.4o]     [%14.4o]\n", 45, -45);
	printf("(14.20o)  - [%14.20o]    [%14.20o]\n", 45, -45);
	printf("(-#14.4o) - [%-#14.4o]   [%-#14.4o]\n\n\n", 45, -45);


	// x and X = unsigned int(4 294 967 295), h/x or h/X - unsigned short (65 535)
	// l/x or l/X = unsigned long(18 446 744 073 709 551 615)
	// flags: [-] [#] [0]
	// value to hex (16)

	printf("(x)       - [%x]         [%x]\n", 45, -45);
	printf("(14x)     - [%14x]       [%14x]\n", 45, -45);
	printf("(014x)    - [%014x]      [%014x]\n", 45, -45);
	printf("(#14x)    - [%#14x]      [%#14x]\n", 45, -45);
	printf("(-14x)    - [%-14x]      [%-14x]\n", 45, -45);
	printf("(-#14x)   - [%-#14x]     [%-#14x]\n", 45, -45);
	printf("(14.4x)   - [%14.4x]     [%14.4x]\n", 45, -45);
	printf("(14.20x)  - [%14.20x]    [%14.20x]\n", 45, -45);
	printf("(-#14.4x) - [%-#14.4x]   [%-#14.4x]\n\n\n", 45, -45);	

	//X
	printf("(X)       - [%X]         [%X]\n", 45, -45);
	printf("(14X)     - [%14X]       [%14X]\n", 45, -45);
	printf("(014X)    - [%014X]      [%014X]\n", 45, -45);
	printf("(#14X)    - [%#14X]      [%#14X]\n", 45, -45);
	printf("(-14X)    - [%-14X]      [%-14X]\n", 45, -45);
	printf("(-#14X)   - [%-#14X]     [%-#14X]\n", 45, -45);
	printf("(14.4X)   - [%14.4X]     [%14.4X]\n", 45, -45);
	printf("(14.20X)  - [%14.20X]    [%14.20X]\n", 45, -45);
	printf("(-#14.4X) - [%-#14.4X]   [%-#14.4X]\n\n\n", 45, -45);	

	// c - int is converted to unsigned char 
	// flags [-]/   [0] - not work ?
	// l/c = C - the wint_t is converted to wchar_t
	printf("(s)       - [%s]\n", "Hello");
	printf("(12s)     - [%12s]\n", "Hello");
	printf("(-12s)    - [%-12s]\n\n\n", " Hello");
*/

// end of + in [d];	

	return (0);
}
