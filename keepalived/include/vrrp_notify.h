/*
 * Soft:        Vrrpd is an implementation of VRRPv2 as specified in rfc2338.
 *              VRRP is a protocol which elect a master server on a LAN. If the
 *              master fails, a backup server takes over.
 *              The original implementation has been made by jerome etienne.
 *
 * Part:        vrrp_notify.c include file.
 *
 * Author:      Alexandre Cassen, <acassen@linux-vs.org>
 *
 *              This program is distributed in the hope that it will be useful,
 *              but WITHOUT ANY WARRANTY; without even the implied warranty of
 *              MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
 *              See the GNU General Public License for more details.
 *
 *              This program is free software; you can redistribute it and/or
 *              modify it under the terms of the GNU General Public License
 *              as published by the Free Software Foundation; either version
 *              2 of the License, or (at your option) any later version.
 *
 * Copyright (C) 2001-2012 Alexandre Cassen, <acassen@gmail.com>
 */

#ifndef _VRRP_NOTIFY_H
#define _VRRP_NOTIFY_H

/* local include */
#include "vrrp.h"

extern int notify_instance_exec(vrrp_t *, int);
extern int notify_instance_exec_init(vrrp_t *, int);
extern int notify_group_exec(vrrp_sgroup_t *, int);
extern void alloc_notify_script(list, vector_t *);
extern void dump_notify_script(void *);

/* Notify script structure definition */
typedef struct _notify_sc {
    char         *sname;
} notify_sc_t;

#endif
