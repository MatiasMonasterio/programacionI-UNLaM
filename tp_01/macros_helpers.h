#ifndef MACROS_H_INCLUDED
#define MACROS_H_INCLUDED

#define MIN_NUMBER_ASCII 48
#define MAX_NUMBER_ASCII 57

#define MIN_CHAR_MAYUS 65
#define MAX_CHAR_MAYUS 90
#define MIN_CHAR_MINUS 97
#define MAX_CHAR_MINUS 122

#define LF 10
#define TAB 10
#define SPACE 32

#define MAYUS_MINUS_DIF 32


#define ABS(x) (x) >= 0 ? (x) : -(x)
#define PARTE_ENTERA(x) (int)(x)
#define REDONDEO(x) ABS(x - (int)x) > 0.5 ? (int)x + 1 : (int)x

#define ESLETRA(c) (ESMAYUS(c) || ESMINUS(c)) ? 1 : 0
#define ESNUMERO(c) ((c) >= MIN_NUMBER_ASCII && (c) <= MAX_NUMBER_ASCII) ? 1 : 0
#define ESMAYUS(c) ((c) >= MIN_CHAR_MAYUS && (c) <= MAX_CHAR_MAYUS) ? 1 : 0
#define ESMINUS(c) ((c) >= MIN_CHAR_MINUS && (c) <= MAX_CHAR_MINUS) ? 1: 0
#define ESBLANCO(c) ((c) == LF || (c) == TAB || (c) == SPACE) ? 1 : 0

#define AMAYUS(c) ESMINUS(c) ? (c) - MAYUS_MINUS_DIF : (c)
#define AMINUS(c) ESMAYUS(c) ? (c) + MAYUS_MINUS_DIF : (c)


#endif // MACROS_H_INCLUDED
