//
//  curl_printf.h
//  curl
//
//  Created by 张少雄 on 1/3/17.
//  Copyright © 2017 张少雄. All rights reserved.
//

#ifndef curl_printf_h
#define curl_printf_h

#include <curl/mprintf.h>

# undef printf
# undef fprintf
# undef snprintf
# undef vprintf
# undef vfprintf
# undef vsnprintf
# undef aprintf
# undef vaprintf
# define printf curl_mprintf
# define fprintf curl_mfprintf
# define snprintf curl_msnprintf
# define vprintf curl_mvprintf
# define vfprintf curl_mvfprintf
# define vsnprintf curl_mvsnprintf
# define aprintf curl_maprintf
# define vaprintf curl_mvaprintf

/* We define away the sprintf functions unconditonally since we don't want
 internal code to be using them, intentionally or by mistake!*/
# undef sprintf
# undef vsprintf
# define sprintf sprintf_was_used
# define vsprintf vsprintf_was_used

#endif /* curl_printf_h */
