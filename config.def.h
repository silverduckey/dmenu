/* See LICENSE file for copyright and license details. */
/* Default settings; can be overriden by command line. */

static int topbar = 1; /* -b  option; if 0, dmenu appears at bottom     */
static int fuzzy = 1;  /* -F  option; if 0, dmenu doesn't use fuzzy matching  */
/* -fn option overrides fonts[0]; default X11 font or font set */
static const char *fonts[] = {"Ubuntu Nerd Font:pixelsize=14"};
static const char *prompt =
    NULL; /* -p  option; prompt to the left of input field */
static const char *colors[SchemeLast][2] = {
    [SchemeNorm] = {"#d8dee9", "#2e3440"},
    [SchemeSel] = {"#d8dee9", "#3b4252"},
    [SchemeSelHighlight] = {"#bf616a", "#3b4252"},
    [SchemeNormHighlight] = {"#bf616a", "#2e3440"},
    [SchemeOut] = {"#2e3440", "#81a1c1"},
};
/* -l and -g options; controls number of lines and columns in grid if > 0 */
static unsigned int lines = 10;
static unsigned int columns = 5;

/*
 * Characters not considered part of a word while deleting words
 * for example: " /?\"&[]"
 */
static const char worddelimiters[] = " ";
