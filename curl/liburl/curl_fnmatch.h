//
//  curl_fnmatch.h
//  curl
//
//  Created by 张少雄 on 1/3/17.
//  Copyright © 2017 张少雄. All rights reserved.
//

#ifndef curl_fnmatch_h
#define curl_fnmatch_h

#define CURL_FNMATCH_MATCH    0
#define CURL_FNMATCH_NOMATCH  1
#define CURL_FNMATCH_FAIL     2

/* default pattern matching function
 * =================================
 * Implemented with recursive backtracking, if you want to use Curl_fnmatch,
 * please note that there is not implemented UTF/UNICODE support.
 *
 * Implemented features:
 * '?' notation, does not match UTF characters
 * '*' can also work with UTF string
 * [a-zA-Z0-9] enumeration support
 *
 * keywords: alnum, digit, xdigit, alpha, print, blank, lower, graph, space
 *           and upper (use as "[[:alnum:]]")
 */
int Curl_fnmatch(void *ptr, const char *pattern, const char *string);

#endif /* curl_fnmatch_h */
