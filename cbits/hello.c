#include <HsFFI.h>
#include <Rts.h>

#include <hello.h>

int hello_init()
{
    RtsConfig conf = defaultRtsConfig;
    conf.rts_opts_enabled = RtsOptsAll;
    int argc = 3;
    char *argv[] = { "libhello"
                   , "+RTS"
                   , "--install-signal-handlers=no"
                   , 0
                   };
    char **rargv = argv;
    hs_init_ghc(&argc, &rargv, conf);
    return 0;
}

void hello_cleanup()
{
    hs_exit();
}
