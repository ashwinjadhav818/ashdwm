#ifndef CONFIG_H
#define CONFIG_H

// String used to delimit block outputs in the status.
#define DELIMITER "  |  "

// Maximum number of Unicode characters that a block can output.
#define MAX_BLOCK_OUTPUT_LENGTH 64

// Control whether blocks are clickable.
#define CLICKABLE_BLOCKS 1

// Control whether a leading delimiter should be prepended to the status.
#define LEADING_DELIMITER 0

// Control whether a trailing delimiter should be appended to the status.
#define TRAILING_DELIMITER 0

// Define blocks for the status feed as X(icon, cmd, interval, signal).
#define BLOCKS(X)             \
    X("task: ", "org-clock-task | sed 's/No clocks running./Empty/'", 30, 12) \
    X("music: ", "mpc current || echo 'Stopped'", 0, 11) \
    X("vol: ", "wpctl get-volume @DEFAULT_AUDIO_SINK@ | awk '{print int($2*100)\"%\"}'", 1, 5) \
    X("bat: ", "cat /sys/class/power_supply/BAT1/capacity | sed 's/$/%/'", 30, 3) \
    X("time: ", "date '+%H:%M:%S'", 1, 1) \

#endif  // CONFIG_H
