// Copyright 2021 byteihq <kotov038@gmail.com>


#ifndef NETWORKCOMMUNICATION_NETWORKCOMMUNICATION_H
#define NETWORKCOMMUNICATION_NETWORKCOMMUNICATION_H

enum Requests {
    Auth,
    GetUsers,
    ConnectToUser,
    GetAllFiles,
    GetFile,
    Msg,
    UserMsg,
    Disconnect,
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
        TakeAllFiles,
        GetAllFiles,
        NoFiles,
    };
    enum GetFile {
        TakeFile,
        GetFile,
        NoFile,
        FileExists,
    };
}


#endif //NETWORKCOMMUNICATION_NETWORKCOMMUNICATION_H
