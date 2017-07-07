/*
 * Copyright (C) 2017 XRADIO TECHNOLOGY CO., LTD. All rights reserved.
 *
 *  Redistribution and use in source and binary forms, with or without
 *  modification, are permitted provided that the following conditions
 *  are met:
 *    1. Redistributions of source code must retain the above copyright
 *       notice, this list of conditions and the following disclaimer.
 *    2. Redistributions in binary form must reproduce the above copyright
 *       notice, this list of conditions and the following disclaimer in the
 *       documentation and/or other materials provided with the
 *       distribution.
 *    3. Neither the name of XRADIO TECHNOLOGY CO., LTD. nor the names of
 *       its contributors may be used to endorse or promote products derived
 *       from this software without specific prior written permission.
 *
 *  THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
 *  "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
 *  LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR
 *  A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT
 *  OWNER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL,
 *  SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT
 *  LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE,
 *  DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY
 *  THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
 *  (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
 *  OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 */

#ifndef _MBUF_UTIL_H_
#define _MBUF_UTIL_H_

#include <stdio.h>
#include <string.h>
#include "sys/xr_util.h"

/**
 * Debug
 */
#define MBUF_DEBUG_ON		0
#define MBUF_ERROR_ON		1
#define MBUF_ABORT_ON		0

#define MBUF_LOG		printf
#define MBUF_ABORT()		xr_abort()


#if MBUF_DEBUG_ON
#define MBUF_DEBUG(fmt, arg...)	MBUF_LOG("[mbuf] "fmt, ##arg)
#else
#define MBUF_DEBUG(...)		do{} while(0)
#endif

#if MBUF_ERROR_ON
#define MBUF_ERROR(fmt, arg...) 			\
	do {						\
		MBUF_LOG("[mbuf ERR] %s():%d, "fmt,	\
		         __func__, __LINE__, ##arg);	\
		if (MBUF_ABORT_ON)			\
			MBUF_ABORT();			\
	} while (0)
#else
#define MBUF_ERROR(...) 	do{} while(0)
#endif

/**
 * Memory
 */
#define MB_MEMCPY(d, s, l)	memcpy(d, s, l)
#define MB_MEMSET(d, c, l)	memset(d, c, l)
#define MB_MEMCMP(a, b, l)	memcmp(a, b, l)
#define MB_MEMMOVE(d, s, n)	memmove(d, s, n)

#endif /* _MBUF_UTIL_H_ */
