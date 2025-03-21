#include <zephyr/kernel.h>
#include <zephyr/sys/printk.h>

void display_raptor_logo(void) {
    const char *color_red = "\033[1;31m";
    const char *color_green = "\033[1;32m";
    const char *color_reset = "\033[0m";

    printk("\n");
    printk("%s+--------------------------------------------------------------------+%s\n", color_green, color_reset);
    printk("%s|                                                                    |%s\n", color_green, color_reset);
    printk("%s|     %s  ######    ##      ######  ######    #####    ######  %s        |%s\n", color_green, color_red, color_green, color_reset);
    printk("%s|    %s   ##  ##   ####     ##  ##  # ## #   ##   ##   ##  ##  %s        |%s\n", color_green, color_red, color_green, color_reset);
    printk("%s|    %s   ##  ##  ##  ##    ##  ##    ##     ##   ##   ##  ##  %s        |%s\n", color_green, color_red, color_green, color_reset);
    printk("%s|    %s   #####   ##  ##    #####     ##     ##   ##   #####   %s        |%s\n", color_green, color_red, color_green, color_reset);
    printk("%s|    %s   ## ##   ######    ##        ##     ##   ##   ## ##   %s        |%s\n", color_green, color_red, color_green, color_reset);
    printk("%s|    %s   ##  ##  ##  ##    ##        ##     ##   ##   ##  ##  %s        |%s\n", color_green, color_red, color_green, color_reset);
    printk("%s|    %s   ##  ##  ##  ##   ####      ####     #####   #### ## %s         |%s\n", color_green, color_red, color_green, color_reset);
    printk("%s|                                                                    |%s\n", color_green, color_reset);
    printk("%s|                  %sInteligência em Tempo Real%s                        |%s\n", color_green, color_red, color_green, color_reset);
    printk("%s|                                                                    |%s\n", color_green, color_reset);
    printk("%s+--------------------------------------------------------------------+%s\n", color_green, color_reset);
    printk("\n");
}

int main() {
    printk ("Hello World! This is Raptor");
    display_raptor_logo();

    return 0;
}