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
#ifndef MOD_FUNC_H
#define MOD_FUNC_H

#include "bot.h"
#include "mod_func_c.h"
#include "mod_func_c2.h"
#include "mod_func_intel.h"
#include "mod_func_intel2.h"

module_t mod_func_info;

bot_t *func_init(dlist_t *, bot_t *);
bot_t *func_fini(dlist_t *, bot_t *);
bot_t *func_help(dlist_t *, bot_t *);
bot_t *func_run(dlist_t *, bot_t *);

char *func_change_string(bot_t *, char *, int, char *);

void __func_init__(void) __attribute__ ((constructor));

unsigned long i_eflags;

enum mod_func_ops {
	MOD_FUNC_SWITCH = 1,
	MOD_FUNC_TRUE,
	MOD_FUNC_FALSE,
	MOD_FUNC_SELF,
	MOD_FUNC_STRLEN,
	MOD_FUNC_BZERO,
	MOD_FUNC_MEMSET,
	MOD_FUNC_EFLAGS,
	MOD_FUNC_STRCMP,
	MOD_FUNC_STRCHR,
	MOD_FUNC_STRRCHR,
	MOD_FUNC_STRNCMP,
	MOD_FUNC_STRCPY,
	MOD_FUNC_STRNCPY,
	MOD_FUNC_MUL,
	MOD_FUNC_IMUL,
	MOD_FUNC_SUB,
	MOD_FUNC_ADD,
	MOD_FUNC_DIV,
	MOD_FUNC_IDIV,
	MOD_FUNC_MOD,
	MOD_FUNC_IMOD,
	MOD_FUNC_NEG,
	MOD_FUNC_AND,
	MOD_FUNC_OR,
	MOD_FUNC_XOR,
	MOD_FUNC_NOT,
	MOD_FUNC_JMP,
	MOD_FUNC_SAR,
	MOD_FUNC_SHR,
	MOD_FUNC_SAL,
	MOD_FUNC_SHL,
	MOD_FUNC_ROR,
	MOD_FUNC_ROL,
	MOD_FUNC_BSWAP,
	MOD_FUNC_BSF,
	MOD_FUNC_BSR,
	MOD_FUNC_BT,
	MOD_FUNC_BTC,
	MOD_FUNC_BTR,
	MOD_FUNC_BTS,
	MOD_FUNC_ISUPPER,
	MOD_FUNC_ISLOWER,
	MOD_FUNC_TOUPPER,
	MOD_FUNC_TOLOWER,
	MOD_FUNC_ISDIGIT,
	MOD_FUNC_ISBINARY,
	MOD_FUNC_ISALNUM,
	MOD_FUNC_ISALPHA,
	MOD_FUNC_ISASCII,
	MOD_FUNC_ISPUNCT,
	MOD_FUNC_ISBLANK,
	MOD_FUNC_ISSPACE,
	MOD_FUNC_ISPRINT,
	MOD_FUNC_ISXDIGIT,
	MOD_FUNC_ISGRAPH,

/* misc.c stuff */
MOD_FUNC_SNULL,
MOD_FUNC_STRSTRIP_NL,
MOD_FUNC_STRSTRIP_CHARS,
MOD_FUNC_EAT_WHITESPACE,

/* syscalls */
	MOD_FUNC_EXIT,
};

void func_switch(char *);

int (*func_true) (void);
int (*func_false) (void);
void *(*func_self) (void *);

size_t(*func_strlen) (const char *);
int (*func_strcmp) (const char *, const char *);
int (*func_strncmp) (const char *, const char *, size_t);
char *(*func_strchr) (const char *, int);
char *(*func_strrchr) (const char *, int);
char *(*func_strcpy) (char *, const char *);
char *(*func_strncpy) (char *, const char *, size_t);

void (*func_bzero) (void *, size_t);
void *(*func_memset) (void *, int, size_t);

unsigned int (*func_mul) (unsigned int, unsigned int);
int (*func_imul) (int, int);

int (*func_sub) (int, int);
int (*func_add) (int, int);

unsigned int (*func_div) (unsigned int, unsigned int);
int (*func_idiv) (int, int);
unsigned int (*func_mod) (unsigned int, unsigned int);
int (*func_imod) (int, int);

int (*func_neg) (int);
char * (*func_eflags) (void);

int (*func_and) (int, int);
int (*func_or) (int, int);
int (*func_xor) (int, int);
int (*func_not) (int);

int (*func_sar) (int, int);
unsigned int (*func_shr) (int, int);
int (*func_sal) (int, int);
unsigned int (*func_shl) (int, int);
int (*func_ror) (int, int);
int (*func_rol) (int, int);

int (*func_bswap) (int);
int (*func_bsf)(int);
int (*func_bsr)(int);
int (*func_bt)(int, int);
int (*func_btc)(int, int);
int (*func_btr)(int, int);
int (*func_bts)(int, int);

int (*func_isupper) (int);
int (*func_islower) (int);
int (*func_toupper) (int);
int (*func_tolower) (int);
int (*func_isdigit) (int);
int (*func_isbinary) (int);
int (*func_isalpha) (int);
int (*func_isalnum) (int);
int (*func_isascii) (int);
int (*func_ispunct) (int);
int (*func_isblank) (int);
int (*func_isspace) (int);
int (*func_isprint) (int);
int (*func_isxdigit) (int);
int (*func_isgraph) (int);

/* misc.c stuff */
char * (*func_sNULL)(char *);
int (*func_strstrip_nl)(char *);
int (*func_strstrip_chars)(char *, char *);
char * (*func_eat_whitespace)(char *);

/* syscalls */
void (*func_exit) (int);

#endif
