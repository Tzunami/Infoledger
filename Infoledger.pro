TEMPLATE = app
CONFIG += console c++11
CONFIG += thread
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += \
        Data.cpp \
        Database.cpp \
        Group.cpp \
        ID.cpp \
        Infoledge.cpp \
        Information.cpp \
        Knowledge.cpp \
        Person.cpp \
        main.cpp

DISTFILES += \
    README.md

HEADERS += \
    Data.h \
    Database.h \
    IL.h \
    IL.h \
    IL_Error.h \
    IL_Error.h \
    Group.h \
    ID.h \
    Infoledge.h \
    Infoledger.h \
    Information.h \
    Knowledge.h \
    List.h \
    Person.h \
    Test_basic.h \
    Test_basic_ptr.h \
    Test_process.h
