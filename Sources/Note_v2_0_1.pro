#-------------------------------------------------
#
# Project created by QtCreator 2013-09-13T04:58:32
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets
qtHaveModule(printsupport): QT += printsupport

TARGET = Note_v2_0_1
TEMPLATE = app


SOURCES += main.cpp\
        note.cpp

HEADERS  += note.h

FORMS    += note.ui

RESOURCES += \
    Note_Res.qrc
