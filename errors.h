#pragma once

enum {
    ERR_SUCCESS = 0,
    ERR_UNSPECIFIED,
    ERR_INVALID_ARGS,
    ERR_FORK,
    ERR_SETSID,
    ERR_CHDIR_ROOT,
    ERR_CLOSE,
    ERR_OPEN_DEVNULL,
    ERR_DUP,
    ERR_GETADDRINFO,
    ERR_SOCKET,
    ERR_BIND,
    ERR_SIGNALFD,
    ERR_LISTEN,
    ERR_EPOLL_CREATE,
    ERR_EPOLL_CTL,
    ERR_ALLOC,
    ERR_EPOLL_WAIT,
    ERR_ACCEPT,
    ERR_FCNTL,
    ERR_PIPE,
    ERR_EXEC,
    ERR_WAITPID,
    ERR_READ,
    ERR_NOMEM,
    ERR_GETSOCKOPT,
    ERR_EPOLL_EVENT,
    ERR_VISCA_PROTOCOL
};

