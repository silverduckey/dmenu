/* See LICENSE file for copyright and license details. */
/* Default settings; can be overriden by command line. */

static int topbar = 1; /* -b  option; if 0, dmenu appears at bottom     */
static int fuzzy = 1;  /* -F  option; if 0, dmenu doesn't use fuzzy matching  */
/* -fn option overrides fonts[0]; default X11 font or font set */
static const char *fonts[] = {"Ubuntu Nerd Font:pixelsize=11"};
static const char *prompt =
    NULL; /* -p  option; prompt to the left of input field */
static const char *colors[SchemeLast][2] = {
    /*     fg         bg       */
    [SchemeNorm] = {"#abb2bf", "#282c34"},
    [SchemeSel] = {"#abb2bf", "#31353f"},
    [SchemeSelHighlight] = {"#cc241d", "#31353f"},
    [SchemeNormHighlight] = {"#cc241d", "#282c34"},
    [SchemeOut] = {"#282c34", "#61afef"},
};
/* -l and -g options; controls number of lines and columns in grid if > 0 */
static unsigned int lines = 10;
static unsigned int columns = 3;

/*
 * Characters not considered part of a word while deleting words
 * for example: " /?\"&[]"
 */
static const char worddelimiters[] = " ";
