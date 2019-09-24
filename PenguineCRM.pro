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
        People.cpp \
        Person.cpp \
        main.cpp

DISTFILES += \
    README.md

HEADERS += \
    Data.h \
    Database.h \
    PCRM.h \
    PCRM.h \
    PCRM_Error.h \
    PCRM_Error.h \
    Group.h \
    ID.h \
    Infoledge.h \
    Information.h \
    Knowledge.h \
    List.h \
    People.h \
    Person.h \
    Test_basic.h \
    Test_process.h
