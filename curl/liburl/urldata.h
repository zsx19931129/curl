//
//  urldata.h
//  curl
//
//  Created by 张少雄 on 1/2/17.
//  Copyright © 2017 张少雄. All rights reserved.
//

#ifndef urldata_h
#define urldata_h

/* This file is for lib internal stuff */

#include "curl_setup.h"

#define PORT_FTP 21
#define PORT_FTPS 990
#define PORT_TELNET 23
#define PORT_HTTP 80
#define PORT_HTTPS 443
#define PORT_DICT 2628
#define PORT_LDAP 389
#define PORT_LDAPS 636
#define PORT_TFTP 69
#define PORT_SSH 22
#define PORT_IMAP 143
#define PORT_IMAPS 993
#define PORT_POP3 110
#define PORT_POP3S 995
#define PORT_SMB 445
#define PORT_SMBS 445
#define PORT_SMTP 25
#define PORT_SMTPS 465 /* sometimes called SSMTP */
#define PORT_RTSP 554
#define PORT_RTMP 1935
#define PORT_RTMPT PORT_HTTP
#define PORT_RTMPS PORT_HTTPS
#define PORT_GOPHER 70

#define DICT_MATCH "/MATCH:"
#define DICT_MATCH2 "/M:"
#define DICT_MATCH3 "/FIND:"
#define DICT_DEFINE "/DEFINE:"
#define DICT_DEFINE2 "/D:"
#define DICT_DEFINE3 "/LOOKUP:"

#define CURL_DEFAULT_USER "anonymous"
#define CURL_DEFAULT_PASSWORD "ftp@example.com"

/* Convenience defines for checking protocols or their SSL based version. Each
 protocol handler should only ever have a single CURLPROTO_ in its protocol
 field. */
#define PROTO_FAMILY_HTTP (CURLPROTO_HTTP|CURLPROTO_HTTPS)
#define PROTO_FAMILY_FTP  (CURLPROTO_FTP|CURLPROTO_FTPS)
#define PROTO_FAMILY_POP3 (CURLPROTO_POP3|CURLPROTO_POP3S)
#define PROTO_FAMILY_SMB  (CURLPROTO_SMB|CURLPROTO_SMBS)
#define PROTO_FAMILY_SMTP (CURLPROTO_SMTP|CURLPROTO_SMTPS)

#define DEFAULT_CONNCACHE_SIZE 5

/* length of longest IPv6 address string including the trailing null */
#define MAX_IPADR_LEN sizeof("ffff:ffff:ffff:ffff:ffff:ffff:255.255.255.255")

/* Default FTP/IMAP etc response timeout in milliseconds.
 Symbian OS panics when given a timeout much greater than 1/2 hour.
 */
#define RESP_TIMEOUT (1800*1000)

#include "cookie.h"
#include "formdata.h"



#endif /* urldata_h */
