/*
     Copyright (C) 2012 Andrew Darqui

     This file is part of darqbot.

     darqbot is free software: you can redistribute it and/or modify
     it under the terms of the GNU General Public License as published by
     the Free Software Foundation, either version 3 of the License, or
     (at your option) any later version.

     darqbot is distributed in the hope that it will be useful,
     but WITHOUT ANY WARRANTY; without even the implied warranty of
     MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
     GNU General Public License for more details.

     You should have received a copy of the GNU General Public License
     along with darqbot.  If not, see <http://www.gnu.org/licenses/>.

     Contact: [website: http://www.adarq.org]
      email: andrew.darqui@g m a i l . c o m
*/
/* darqbot 1.0 (2012)
  multi purpose chat & knowledge bot
  -- adarqui ::: adarq.org
 */
#ifndef MOD_SEP_H
#define MOD_SEP_H

#include "bot.h"

module_t mod_sep_info;

bot_t *sep_init(dlist_t *, bot_t *);
bot_t *sep_fini(dlist_t *, bot_t *);
bot_t *sep_help(dlist_t *, bot_t *);
bot_t *sep_run(dlist_t *, bot_t *);

void __sep_init__(void) __attribute__ ((constructor));

enum mod_sep_sub {
	MOD_SEP,
	MOD_SEP_BREAK,
	MOD_SEP_CRUSH,
	MOD_SEP_COMMENT,
};

#endif
