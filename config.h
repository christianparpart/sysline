
/* config.h */

/*
 * if TTY_SUFFIX is defined, the basename of the tty will be appended to the
 * filenames ~/.who, ~/.sysline and ~/.syslinelock (e.g. ~/.sysline.ttyp0),
 * enabling multiple instances of sysline on different terminals to have
 * their own copies of these files.
 */
#define TTY_SUFFIX

#define RWHO 			/* undef to omit rwho feature		    */

#undef  CLOCK24			/* undef for a choice between a 12-hr clock */
				/* and a 24-hour clock (using -t)	    */

#define DEFDELAY 	60	/* default statusline update interval (sec) */

#define ARROWS		"->"	/* used in mail contents display	    */
				/* (you could use "\273" if you ONLY use    */
				/* ISO 8859-1)				    */

#define REVOFF		5	/* used to turn off reverse video every     */
				/* REVOFF times in an attempt to not wear   */
				/* out the phosphor			    */

/*
 * if MAXLOAD is defined, then if the load average exceeds MAXLOAD
 * the process table will not be scanned and the log in/out data
 * will not be checked.   The purpose of this is to reduce the load
 * on the system when it is loaded.
 */
#define MAXLOAD 6.0

#define NETPREFIX	""	/* empty string for Linux		    */

#define WHO			/* turn this on always */
#define HOSTNAME		/* 4.1a or greater, with hostname() */

/* terminfo */
#define TERMINFO
#include <term.h>
/* ncurses */
#include <ncurses.h>
#include <unctrl.h>
