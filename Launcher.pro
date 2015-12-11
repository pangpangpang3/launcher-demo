#-------------------------------------------------
#
# Project created by QtCreator 2015-07-23T19:03:02
#
#-------------------------------------------------

QT       += core gui dbus

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = Launcher
TEMPLATE = app
#Builder Directory
BuildDir = build_launcher

CONFIG(debug, debug|release) {
    DESTDIR = $$PWD/$$BuildDir/debug
    OBJECTS_DIR = $$PWD/$$BuildDir/debug/.obj
    MOC_DIR = $$PWD/$$BuildDir/debug/.moc
    RCC_DIR = $$PWD/$$BuildDir/debug/.rcc
    UI_DIR = $$PWD/$$BuildDir/debug/.ui
} else {
    DESTDIR = $$PWD/$$BuildDir/release
    OBJECTS_DIR = $$PWD/$$BuildDir/release/.obj
    MOC_DIR = $$PWD/$$BuildDir/release/.moc
    RCC_DIR = $$PWD/$$BuildDir/release/.rcc
    UI_DIR = $$PWD/$$BuildDir/release/.ui
}

SOURCES += main.cpp\
        launcher.cpp \
    catalogue.cpp \
    catalogylist.cpp \
    dpushbutton.cpp \
    dtabelwidget.cpp \
    catalogitemtitle.cpp \
    catalogitem.cpp \
    tablewidgetview.cpp \
    searchwidget.cpp \
    launcherinterface.cpp \
    dbusargument.cpp \
    launcherinterface_manager.cpp \
    filemanager_interface.cpp \
    launcherviewmode.cpp \
    catalogstarter.cpp


HEADERS  += launcher.h \
    catalogue.h \
    catalogylist.h \
    dpushbutton.h \
    dtablewidget.h \
    catalogitemtitle.h \
    catalogitem.h \
    tablewidgetview.h \
    searchwidget.h \
    launcherinterface.h \
    dbusargument.h \
    launcherinterface_manager.h \
    filemanager_interface.h \
    launcherviewmode.h \
    catalogstarter.h


CONFIG+=c++11

RESOURCES += \
    style.qrc
