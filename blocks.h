//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/	/*Command*/		/*Update Interval*/	/*Update Signal*/
	{"",    "/usr/local/bin/statusbar/updates",         10,    0},
	{"",    "/usr/local/bin/statusbar/battery",         10,    0},
	{"",    "/usr/local/bin/statusbar/volume",          1,     0},
	{"",    "/usr/local/bin/statusbar/brightness",      1,     0},
	{"",    "/usr/local/bin/statusbar/clock",           60,    0},

	/*{"",    "date '+%b %d (%a) %I:%M%p'",			   5,	  0},*/
};

//sets delimiter between status commands. NULL character ('\0') means no delimiter.
static char delim[] = " ∙ ";
static unsigned int delimLen = 5;
