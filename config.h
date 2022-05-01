/* See LICENSE file for copyright and license details. */
/* Default settings; can be overriden by command line. */

static int topbar = 1; /* -b  option; if 0, dmenu appears at bottom     */
static int fuzzy = 1;
/* -fn option overrides fonts[0]; default X11 font or font set */
static const char *fonts[] = {
    "Fira Code Retina:size=12",
    "Noto Color Emoji:size=12",
    "FuraCode Nerd Font:size=14",
};

static const char *prompt =
    NULL; /* -p  option; prompt to the left of input field */

static const char col_gray0[] = "#000000";
static const char col_gray1[] = "#222222";
static const char col_gray2[] = "#444444";
static const char col_gray3[] = "#bbbbbb";
static const char col_gray4[] = "#ffffff";
static const char col_primary[] = "#2bafc6";
static const char col_secondary[] = "#11c654";

static const char *colors[SchemeLast][2] = {
    /*     fg         bg       */
    [SchemeNorm] = {col_secondary, col_gray1},
    [SchemeSel] = {col_gray0, col_primary},
    [SchemeOut] = {"#000000", "#00ffff"},
};
/* -l option; if nonzero, dmenu uses vertical list with given number of lines */
static unsigned int lines = 0;

/*
 * Characters not considered part of a word while deleting words
 * for example: " /?\"&[]"
 */
static const char worddelimiters[] = " ";
