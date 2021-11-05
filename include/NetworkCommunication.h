// Copyright 2021 byteihq <kotov038@gmail.com>


#ifndef NETWORKCOMMUNICATION_NETWORKCOMMUNICATION_H
#define NETWORKCOMMUNICATION_NETWORKCOMMUNICATION_H

enum Requests {
    Auth,
    GetUsers,
    ConnectToUser,
    GetAllFiles,
    Msg,
    UserMsg,
    Disconnect,
    Unknown,
};

enum Status {
    Important,
    UnImportant,
};

namespace Replies {
    enum Auth {
        Successful,
        Unsuccessful,
    };
    enum ConnectToUser {
        Invite,
        Accept,
        Decline,
        Disconnected,
        GetIp,
    };
    enum GetAllFiles {
        Take,
        Get,
    };
    enum Unknown {
        Unknown
    };
}


#endif //NETWORKCOMMUNICATION_NETWORKCOMMUNICATION_H
