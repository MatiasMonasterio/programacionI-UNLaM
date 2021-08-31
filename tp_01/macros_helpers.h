#ifndef MACROS_H_INCLUDED
#define MACROS_H_INCLUDED

#define LF 10
#define TAB 10
#define SPACE 32

#define MAYUS_MINUS_DIF 32


#define ABS(x) (x) >= 0 ? (x) : -(x)
#define PARTE_ENTERA(x) (int)(x)
#define REDONDEO(x) ABS(x - PARTE_ENTERA(x)) > 0.5 ? PARTE_ENTERA(x) + 1 : PARTE_ENTERA(x)

#define ESLETRA(c) (ESMAYUS(c) || ESMINUS(c))
#define ESNUMERO(c) ((c) >= '0' && (c) <= '9')
#define ESMAYUS(c) ((c) >= 'A' && (c) <= 'Z')
#define ESMINUS(c) ((c) >= 'a' && (c) <= 'z')
#define ESBLANCO(c) ((c) == LF || (c) == TAB || (c) == SPACE)

#define AMAYUS(c) ESMINUS(c) ? (c) - MAYUS_MINUS_DIF : (c)
#define AMINUS(c) ESMAYUS(c) ? (c) + MAYUS_MINUS_DIF : (c)


#endif // MACROS_H_INCLUDED
