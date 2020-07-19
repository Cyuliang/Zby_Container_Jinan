#-------------------------------------------------
#
# Project created by QtCreator 2020-07-13T13:36:10
#
#-------------------------------------------------

QT       += core gui
QT       += network
QT       += sql

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = Zby_Container_Jinan
TEMPLATE = app

# The following define makes your compiler emit warnings if you use
# any feature of Qt which has been marked as deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if you use deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

CONFIG += c++11

SOURCES += \
        main.cpp \
        mainwindow.cpp \
    setting_dialog.cpp \
    data_form.cpp \
    find_dialog.cpp \
    image_dialog.cpp \
    picture_dialog.cpp

HEADERS += \
        mainwindow.h \
    datainterchange_interface.h \
    thelicenseplate_wty_interface.h \
    setting_dialog.h \
    databaseinsertinterface.h \
    databasereadinterface.h \
    data_form.h \
    find_dialog.h \
    image_dialog.h \
    picture_dialog.h

FORMS += \
        mainwindow.ui \
    setting_dialog.ui \
    data_form.ui \
    find_dialog.ui \
    image_dialog.ui \
    picture_dialog.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    ico.qrc

RC_ICONS=ICO.ico
