TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += \
        Data.cpp \
        Database.cpp \
        Department.cpp \
        EW_Error.cpp \
        Group.cpp \
        ID.cpp \
        Infoledge.cpp \
        Information.cpp \
        Knowledge.cpp \
        People.cpp \
        Person.cpp \
        main.cpp

DISTFILES += \
    openCRM.pro.user

HEADERS += \
    Data.h \
    Database.h \
    Department.h \
    EW.h \
    EW_Error.h \
    Group.h \
    ID.h \
    Infoledge.h \
    Information.h \
    Knowledge.h \
    List.h \
    People.h \
    Person.h \
    testing \
    testing 2
