/*
 *      $Id$
 */
/************************************************************************
*									*
*			     Copyright (C)  2002			*
*				Internet2				*
*			     All Rights Reserved			*
*									*
************************************************************************/
/*
 *	File:		random.h
 *
 *	Author:		Anatoly Karp
 *			Internet2
 *
 *	Date:		Sun Jun  2 12:19:22 MDT 2002
 *
 *	Description:	
 */

#ifndef	_i2_random_h_
#define	_i2_random_h_

#include <stdio.h>
#include <sys/types.h>

#include <stdarg.h>
#include <I2util/util.h>

/*
** Types of randomness sources.
*/
#define RAND_DEV      0
#define RAND_DAEMON   1

BEGIN_C_DECLS

extern int
I2RandomSourceInit(I2ErrHandle eh, int type, void* data);

extern int
I2RandomBytes(
	unsigned char	*ptr,
	int		count
	);

END_C_DECLS

#endif	/* _i2_random_h_	*/
