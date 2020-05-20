/* See LICENSE file for copyright and license details. */
/* Default settings; can be overriden by command line. */

static int topbar = 1;                      /* -b  option; if 0, dmenu appears at bottom     */
/* -fn option overrides fonts[0]; default X11 font or font set */
static const char *fonts[] = {
	"JetBrainsMono Nerd Font:size=11:antialias=true:autohint=true"
};
static const char *prompt      = NULL;      /* -p  option; prompt to the left of input field */

/* Nord colors */
#define NORD0 "#2E3440"
#define NORD1 "#3B4252"
#define NORD2 "#434C5E"
#define NORD3 "#4C566A"
#define NORD4 "#D8DEE9"
#define NORD5 "#E5E9F0"
#define NORD6 "#ECEFF4"
#define NORD7 "#8FBCBB"
#define NORD8 "#88C0D0"
#define NORD9 "#81A1C1"
#define NORD10 "#5E81AC"
#define NORD11 "#BF616A"
#define NORD12 "#D08770"
#define NORD13 "#EBCB8B"
#define NORD14 "#A3BE8C"
#define NORD15 "#B48EAD"

static const char *colors[SchemeLast][2] = {
	/*     fg         bg       */
	[SchemeNorm]          = { NORD6,     NORD0 },
	[SchemeSel]           = { NORD5,     NORD1 },
	[SchemeSelHighlight]  = { NORD4,     NORD3 },
	[SchemeNormHighlight] = { NORD5,     NORD1 },
	[SchemeOut]           = { "#000000", "#00ffff" },
};
/* -l option; if nonzero, dmenu uses vertical list with given number of lines */
static unsigned int lines      = 0;
static unsigned int lineheight = 0;         /* -h option; minimum height of a menu line     */

/*
 * Characters not considered part of a word while deleting words
 * for example: " /?\"&[]"
 */
static const char worddelimiters[] = " ";

/* -n option; preselected item starting from 0 */
static unsigned int preselected = 0;
/* Size of the window border */
static unsigned int border_width = 0;
