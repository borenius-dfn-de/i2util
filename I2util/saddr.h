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
 *	File:		saddr.h
 *
 *	Author:		Jeff W. Boote
 *			Internet2
 *
 *	Date:		Tue Nov 26 11:09:26 MST 2002
 *
 *	Description:	
 */
#ifndef	_i2_saddr_h_
#define	_i2_saddr_h_

#include <sys/types.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <netdb.h>

#include <I2util/util.h>

BEGIN_C_DECLS

#define	I2SADDR_ADDR	(0x1)
#define	I2SADDR_PORT	(I2SADDR_ADDR<<1)
#define	I2SADDR_ALL	(I2SADDR_ADDR|I2SADDR_PORT)

extern int
I2SockAddrEqual(
	const struct sockaddr	*sa1,
	socklen_t		sa1_len,
	const struct sockaddr	*sa2,
	socklen_t		sa2_len,
	u_int32_t		chk_what
	);

END_C_DECLS
#endif	/*	_i2_saddr_h_	*/
