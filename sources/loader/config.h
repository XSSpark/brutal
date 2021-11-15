#pragma once

#include <brutal/ds.h>
#include <brutal/text.h>

typedef struct
{
    Str path;
    Str name;
} LoaderModule;

typedef struct
{
    size_t width;
    size_t height;
} LoaderFramebuffer;

typedef struct
{
    Str name;
    Str kernel;
    Vec(LoaderModule) modules;
    LoaderFramebuffer framebuffer;
} LoaderEntry;

LoaderEntry config_get_entry(Str name, Str path);
