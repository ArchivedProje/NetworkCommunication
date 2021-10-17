// Copyright 2021 byteihq <kotov038@gmail.com>


#ifndef NETWORKCOMMUNICATION_NETWORKCOMMUNICATION_H
#define NETWORKCOMMUNICATION_NETWORKCOMMUNICATION_H

enum Requests {
    Auth,
    GetUsers,
    GetFile,
    Msg,
    Disconnect,
    Unknown,
};

namespace Replies {
    enum Auth {
        Successful,
        Unsuccessful,
    };
    enum Unknown {
        Unknown
    };
}


#endif //NETWORKCOMMUNICATION_NETWORKCOMMUNICATION_H
