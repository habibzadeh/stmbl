//generated by tools/create_cmd.py DO NOT EDIT
extern void about(char *); // found in stmsp/stm32f303/src/main.c line: 188
extern void bootloader(char *); // found in stmsp/stm32f303/src/main.c line: 203
extern void reset(char *); // found in stmsp/stm32f303/src/main.c line: 208
extern void hal_term_print_info(char *); // found in shared/hal.c line: 277
extern void load(char *); // found in shared/hal.c line: 550
extern void show(char *); // found in shared/hal.c line: 565
extern void list(char *); // found in shared/hal.c line: 595
extern void show_hal(char *); // found in shared/hal.c line: 605
extern void hal_start(char *); // found in shared/hal.c line: 713
extern void hal_stop(char *); // found in shared/hal.c line: 740
extern void fault(char *); // found in shared/hal.c line: 987
extern void debug_level(char *); // found in shared/hal.c line: 1002
extern void hal_linked_pins(char *); // found in shared/hal.c line: 1027
extern void listcmd(char *); // found in shared/commands.c line: 36
extern void uptime(char *); // found in shared/commands.c line: 47
extern void flashloadconf(char *); // found in shared/flashconf.c line: 14
extern void flashsaveconf(char *); // found in shared/flashconf.c line: 45
extern void loadconf(char *); // found in shared/flashconf.c line: 50
extern void showconf(char *); // found in shared/flashconf.c line: 55
extern void appendconf(char *); // found in shared/flashconf.c line: 62
extern void deleteconf(char *); // found in shared/flashconf.c line: 67


cmd_t cmd[] = {
   {"about", "show system infos", about}, // found in stmsp/stm32f303/src/main.c line: 188
   {"bootloader", "enter bootloader", bootloader}, // found in stmsp/stm32f303/src/main.c line: 203
   {"reset", "reset STMBL", reset}, // found in stmsp/stm32f303/src/main.c line: 208
   {"hal", "print HAL stats", hal_term_print_info}, // found in shared/hal.c line: 277
   {"load", "load comp from flash", load}, // found in shared/hal.c line: 550
   {"show", "show comps in flash", show}, // found in shared/hal.c line: 565
   {"list", "show comp instances", list}, // found in shared/hal.c line: 595
   {"show_hal", "show hal structure", show_hal}, // found in shared/hal.c line: 605
   {"start", "start rt system", hal_start}, // found in shared/hal.c line: 713
   {"stop", "stop rt system", hal_stop}, // found in shared/hal.c line: 740
   {"fault", "trigger fault", fault}, // found in shared/hal.c line: 987
   {"debug_level", "set hal debug level, 0 = print all, 1 = print errors, 2 = no output", debug_level}, // found in shared/hal.c line: 1002
   {"linked", "show linked pins", hal_linked_pins}, // found in shared/hal.c line: 1027
   {"help", "print this", listcmd}, // found in shared/commands.c line: 36
   {"uptime", "display uptime", uptime}, // found in shared/commands.c line: 47
   {"flashloadconf", "load config from flash", flashloadconf}, // found in shared/flashconf.c line: 14
   {"flashsaveconf", "save config to flash", flashsaveconf}, // found in shared/flashconf.c line: 45
   {"loadconf", "parse config", loadconf}, // found in shared/flashconf.c line: 50
   {"showconf", "show config", showconf}, // found in shared/flashconf.c line: 55
   {"appendconf", "append string to config", appendconf}, // found in shared/flashconf.c line: 62
   {"deleteconf", "delete config", deleteconf}, // found in shared/flashconf.c line: 67
};