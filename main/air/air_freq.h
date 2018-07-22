#pragma once

#include <stdint.h>

#include "air/air.h"

typedef struct air_freq_table_s
{
    unsigned long freqs[AIR_SEQ_COUNT];
    int errors[AIR_SEQ_COUNT];
} air_freq_table_t;

void air_freq_table_init(air_freq_table_t *tbl, air_key_t key, unsigned long base_freq);
