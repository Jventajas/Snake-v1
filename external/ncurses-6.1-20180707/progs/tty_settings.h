/****************************************************************************
 * Copyright (c) 2016,2017 Free Software Foundation, Inc.                   *
 *                                                                          *
 * Permission is hereby granted, free of charge, to any person obtaining a  *
 * copy of this software and associated documentation files (the            *
 * "Software"), to deal in the Software without restriction, including      *
 * without limitation the rights to use, copy, modify, merge, publish,      *
 * distribute, distribute with modifications, sublicense, and/or sell       *
 * copies of the Software, and to permit persons to whom the Software is    *
 * furnished to do so, subject to the following conditions:                 *
 *                                                                          *
 * The above copyright notice and this permission notice shall be included  *
 * in all copies or substantial portions of the Software.                   *
 *                                                                          *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS  *
 * OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF               *
 * MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT.   *
 * IN NO EVENT SHALL THE ABOVE COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM,   *
 * DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR    *
 * OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR    *
 * THE USE OR OTHER DEALINGS IN THE SOFTWARE.                               *
 *                                                                          *
 * Except as contained in this notice, the name(s) of the above copyright   *
 * holders shall not be used in advertising or otherwise to promote the     *
 * sale, use or other dealings in this Software without prior written       *
 * authorization.                                                           *
 ****************************************************************************/

/****************************************************************************
 *  Author: Thomas E Dickey                                                 *
 ****************************************************************************/

/*
 * $Id: tty_settings.h,v 1.2 2017/10/07 19:11:31 tom Exp $
 *
 * Utility functions for saving/restoring terminal settings.
 */
#ifndef TTY_SETTINGS_H
#define TTY_SETTINGS_H 1
/* *INDENT-OFF* */

#include <external/ncurses-6.1-20180707/progs/progs.priv.h>

extern int save_tty_settings(TTY * /* tty_settings */, bool /* need_tty */ );
extern void restore_tty_settings(void);
extern void update_tty_settings(TTY * /* old_settings */, TTY * /* new_settings */ );

/* *INDENT-ON* */

#endif /* TTY_SETTINGS_H */
