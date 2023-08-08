static int topbar = 1;
static int fuzzy = 1;
static const char *fonts[] = {"Ubuntu Nerd Font:pixelsize=14"};
static const char *prompt = NULL;

static const char *colors[SchemeLast][2] = {
    [SchemeNorm] = {"#d8dee9", "#2e3440"},
    [SchemeSel] = {"#d8dee9", "#3b4252"},
    [SchemeSelHighlight] = {"#bf616a", "#3b4252"},
    [SchemeNormHighlight] = {"#bf616a", "#2e3440"},
    [SchemeOut] = {"#2e3440", "#81a1c1"},
};

static unsigned int lines = 10;
static unsigned int columns = 5;

static const char worddelimiters[] = " ";
