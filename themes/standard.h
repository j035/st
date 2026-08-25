/* Terminal colors (16 first used in esacpe sequence) */
static const char *colorname[] = {
/* 8 normal colors */
    "#000101",    /*black*/
    "#F3002C",    /*red*/
    "#09FF13",    /*green*/
    "#FBFF2C",    /*yellow*/
    "#007AE4",    /*blue*/
    "#DC87FF",    /*magenta*/
    "#90FCFF",    /*cyan*/
    "#FFFEFD",    /*white*/

    /* 8 bright colors */
    "#000101",    /*black*/
    "#F3002C",    /*red*/
    "#09FF13",    /*green*/
    "#FBFF2C",    /*yellow*/
    "#007AE4",    /*blue*/
    "#DC87FF",    /*magenta*/
    "#90FCFF",    /*cyan*/
    "#FFFEFD",    /*white*/

    [255] = 0,

    /* more colors can be added after 255 to use with DefaultXX */
    "#E6F6FF", /* 256 cursor */
    "#FFF9FE", /* 257 rev cursor */
    "#000101", /* 258 bg */
    "#FFFEFD", /* 259 fg */
};

/* default colors (colorname index )*/
/* foreground, background, cursor, reverse cursor */
unsigned int defaultfg = 259;
unsigned int defaultbg = 258;
unsigned int defaultcs = 257;
static unsigned int defaultrcs = 256;
