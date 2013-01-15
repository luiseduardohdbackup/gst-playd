/*
   audio_dev_osx.h - Audio device operations for OS X

   Copyright (C) 2012 Paul Betts

   This program is free software; you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation; either version 2, or (at your option)
   any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program; if not, write to the Free Software Foundation,
   Inc., 59 Temple Place - Suite 330, Boston, MA 02111-1307, USA.
*/

#ifndef _AUDIO_DEV_OSX_H
#define _AUDIO_DEV_OSX_H

#define AUDIODEV_DOMAIN g_quark_from_static_string("gst-playd-audiodev")

void* op_audiodev_new(void*);
char* op_listdevice_parse(const char* param, void*);
gboolean op_audiodev_register(void* ctx, struct message_dispatch_entry** entries);
void op_audiodev_free(void* ctx);

#endif
