/*
   +----------------------------------------------------------------------+
   | HipHop for PHP                                                       |
   +----------------------------------------------------------------------+
   | Copyright (c) 2010 Facebook, Inc. (http://www.facebook.com)          |
   +----------------------------------------------------------------------+
   | This source file is subject to version 3.01 of the PHP license,      |
   | that is bundled with this package in the file LICENSE, and is        |
   | available through the world-wide-web at the following url:           |
   | http://www.php.net/license/3_01.txt                                  |
   | If you did not receive a copy of the PHP license and are unable to   |
   | obtain it through the world-wide-web, please send a note to          |
   | license@php.net so we can mail you a copy immediately.               |
   +----------------------------------------------------------------------+
*/

#include "compatibility.h"

namespace HPHP {
///////////////////////////////////////////////////////////////////////////////

#if defined(__APPLE__)
char *strndup(const char* str, size_t len) {
  size_t str_len = strlen(str);
  if (len < str_len) {
    str_len = len;
  }
  char* result = malloc(str_len + 1);
  if (result == NULL) {
    return NULL;
  }
  memcpy(result, str, str_len);
  result[str_len] = '\0';
  return result;
}

int dprintf(int fd, const char *format, ...) {
  va_list ap;
  char *ptr = NULL;
  int ret = 0;

  va_start(ap, format);
  vasprintf(&ptr, format, ap);
  va_end(ap);

   if (ptr) {
     ret = write(fd, ptr, strlen(ptr));
     free(ptr);
   }

   return ret;
}
#endif

///////////////////////////////////////////////////////////////////////////////
}
