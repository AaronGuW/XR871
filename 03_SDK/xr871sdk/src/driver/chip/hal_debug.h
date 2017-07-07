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

#ifndef _DRIVER_CHIP_HAL_DEBUG_H_
#define _DRIVER_CHIP_HAL_DEBUG_H_

#include <stdio.h>

#ifdef __cplusplus
extern "C" {
#endif

/* debug */
#define HAL_SYSLOG		printf

#define HAL_DEBUG_ON	1
#define HAL_WARN_ON		1
#define HAL_ERR_ON		1

#define HAL_DBG_TIMER	0
#define HAL_DBG_WDG		0
#define HAL_DBG_MBOX	0

#define HAL_LOG(flags, fmt, arg...)	\
	do {								\
		if (flags) 						\
			HAL_SYSLOG(fmt, ##arg);		\
	} while (0)


#define HAL_TIMER_DBG(fmt, arg...)	\
	HAL_LOG(HAL_DEBUG_ON && HAL_DBG_TIMER, "[HAL TIMER] "fmt, ##arg)

#define HAL_WDG_DBG(fmt, arg...)	\
	HAL_LOG(HAL_DEBUG_ON && HAL_DBG_WDG, "[HAL WDG] "fmt, ##arg)

#define HAL_MBOX_DBG(fmt, arg...)	\
	HAL_LOG(HAL_DEBUG_ON && HAL_DBG_MBOX, "[HAL MBOX] "fmt, ##arg)

#define HAL_WARN(fmt, arg...)	HAL_LOG(HAL_WARN_ON, "[HAL WARN] "fmt, ##arg)

#define HAL_ERR(fmt, arg...)							\
	do {												\
		HAL_LOG(HAL_ERR_ON, "[HAL ERR] %s():%d, "fmt, 	\
			__func__, __LINE__, ##arg);					\
	} while (0)

#define HAL_ASSERT_PARAM(exp)											\
		do {															\
			if (!(exp)) {												\
				printf("Invalid param at %s:%u", __func__, __LINE__);	\
			}															\
		} while (0)

#ifdef __cplusplus
}
#endif

#endif /* _DRIVER_CHIP_HAL_UTIL_H_ */
