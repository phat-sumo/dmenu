/* See LICENSE file for copyright and license details. */
/* Default settings; can be overriden by command line. */

static int topbar = 1;                      /* -b  option; if 0, dmenu appears at bottom     */
static int centered = 1;                    /* -c option; centers dmenu on screen */
static int min_width = 500;                    /* minimum width when centered */
/* -fn option overrides fonts[0]; default X11 font or font set */
static const char *fonts[] = {
	"monospace:size=8"
};
static const char *prompt      = NULL;      /* -p  option; prompt to the left of input field */
static const char *colors[SchemeLast][2] = {
	           /*     fg         bg       */
	[SchemeNorm] = { "#fbf5f3", "#000300" },
	[SchemeSel] = { "#000300", "#fe3198" },
	[SchemeOut] = { "#fe3198", "#fbf5f3" },
  [SchemeHp] = { "#fe3198", "#000300" }
};
/* -l and -g options; controls number of lines and columns in grid if > 0 */
static unsigned int lines      = 3;
static unsigned int columns    = 3;
/* -h option; minimum height of a menu line */
static unsigned int lineheight = 38;         

/*
 * Characters not considered part of a word while deleting words
 * for example: " /?\"&[]"
 */
static const char worddelimiters[] = " ";

/* Size of the window border */
static const unsigned int border_width = 1;
