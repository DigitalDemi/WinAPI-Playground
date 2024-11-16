#include "libs.h"
#include <winuser.h>

int
main(void){
    display_message_box();
}

int display_message_box(){

     int msgboxID = MessageBox(
        NULL,
        "Hi Demi",
        "I love you\nDo you love me",
        MB_YESNO
    );

    switch(msgboxID){
        case IDYES:
            int love = MessageBox(
                NULL,
                "I love you more",
                "",
                MB_OK
            );
            return msgboxID;
        case IDNO:
            int hate = MessageBox(
                NULL,
                "Im sad",
                "",
                MB_OK
            );
            return msgboxID;
    }
    return 0;
}
