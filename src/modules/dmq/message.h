/**
 * dmq module - distributed message queue
 *
 * Copyright (C) 2011 Bucur Marius - Ovidiu
 *
 * This file is part of Kamailio, a free SIP server.
 *
 * Kamailio is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version
 *
 * Kamailio is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301  USA
 */


#ifndef _MESSAGE_H_
#define _MESSAGE_H_

int w_dmq_handle_message(struct sip_msg *, char *str1, char *str2);
int dmq_handle_message(struct sip_msg *, char *str1, char *str2);
int ki_dmq_handle_message(sip_msg_t *msg);
int ki_dmq_handle_message_rc(sip_msg_t *msg, int returnval);

#endif
