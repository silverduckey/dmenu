/* See LICENSE file for copyright and license details. */
/* Default settings; can be overriden by command line. */

static int topbar = 1; /* -b  option; if 0, dmenu appears at bottom     */
static int fuzzy = 1;  /* -F  option; if 0, dmenu doesn't use fuzzy matching  */
/* -fn option overrides fonts[0]; default X11 font or font set */
static const char *fonts[] = {"Ubuntu Nerd Font:pixelsize=14"};
static const char *prompt =
    NULL; /* -p  option; prompt to the left of input field */
static const char *colors[SchemeLast][2] = {
    [SchemeNorm] = {"#ebdbb2", "#282828"},
    [SchemeSel] = {"#ebdbb2", "#3c3836"},
    [SchemeSelHighlight] = {"#cc241d", "#3c3836"},
    [SchemeNormHighlight] = {"#cc241d", "#282828"},
    [SchemeOut] = {"#282828", "#458588"},
};
/* -l and -g options; controls number of lines and columns in grid if > 0 */
static unsigned int lines = 10;
static unsigned int columns = 3;

/*
 * Characters not considered part of a word while deleting words
 * for example: " /?\"&[]"
 */
static const char worddelimiters[] = " ";
