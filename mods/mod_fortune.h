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
#ifndef MOD_FORTUNE_H
#define MOD_FORTUNE_H

#include "bot.h"

module_t mod_fortune_info;

bot_t *fortune_init(dlist_t *, bot_t *);
bot_t *fortune_fini(dlist_t *, bot_t *);
bot_t *fortune_help(dlist_t *, bot_t *);
bot_t *fortune_run(dlist_t *, bot_t *);

char *libfortune_main(int, char **);

void __fortune_init__(void) __attribute__ ((constructor));

#endif
