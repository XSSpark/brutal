#include <bal/abi.h>
#include <bal/ipc.h>
#include <brutal/debug.h>

void br_event(IpcEv *ev, BrMsg const *msg)
{
    BrMsg resp = *msg;
    br_ev_resp(ev, msg, &resp);
}

int br_entry()
{
    IpcEv ev;
    br_ev_init(&ev);

    return br_ev_run(&ev);
}
