TEMPLATE = app
CONFIG += qt release warn_on 
INCLUDEPATH = . 
MOC_DIR = tmp
OBJECTS_DIR = tmp
DEPENDPATH = . 
#DISTFILES += ../bin/qtwvdialer
TARGET = qtwvdialer
QMAKE_CLEAN += ../bin/qtwvdialer

HEADERS   = wvdialer.h \
            pppstats.h \
            pppstatswid.h \
            simplecfg.h \
            wvconfigdlg.h \
            wvexpertdlg.h \
            wvprovidernamedlg.h \
            wvlogfile.h \
            sumitem.h 

INTERFACES = wvdialerdlg.ui \
             configdlg.ui \
             providernamedlg.ui \
             expertdlg.ui 
                        
SOURCES   = main.cpp \
            wvdialer.cpp \
            pppstats.cpp \
            pppstatswid.cpp \
            simplecfg.cpp \
            wvconfigdlg.cpp \
            wvexpertdlg.cpp \
            wvprovidernamedlg.cpp \
            wvlogfile.cpp \
            sumitem.cpp

TARGET    = qtwvdialer
VERSION   = 0.4.4
DESTDIR   = ../bin

