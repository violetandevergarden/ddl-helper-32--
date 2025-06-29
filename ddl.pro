QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0
QXLSX_PARENTPATH=./         # current QXlsx path is . (. means curret directory)
QXLSX_HEADERPATH=./header/  # current QXlsx header path is ./header/
QXLSX_SOURCEPATH=./source/  # current QXlsx source path is ./source/
include(./QXlsx.pri)

include (qmarkdowntextedit-main/qmarkdowntextedit-headers.pri)
include (qmarkdowntextedit-main/qmarkdowntextedit-sources.pri)

SOURCES += \
    about.cpp \
    addclasstable.cpp \
    addmyclass.cpp \
    changetabname.cpp \
    deletemyclass.cpp \
    deletenotecheck.cpp \
    innermarkdown.cpp \
    innernote.cpp \
    innertab.cpp \
    life.cpp \
    main.cpp \
    mainwindow.cpp \
    myclass.cpp \
    note.cpp \
    task.cpp \
    weekreport.cpp

HEADERS += \
    about.h \
    addclasstable.h \
    addmyclass.h \
    changetabname.h \
    deletemyclass.h \
    deletenotecheck.h \
    innermarkdown.h \
    innernote.h \
    innertab.h \
    life.h \
    mainwindow.h \
    myclass.h \
    note.h \
    task.h \
    weekreport.h

FORMS += \
    about.ui \
    addclasstable.ui \
    addmyclass.ui \
    changetabname.ui \
    deletemyclass.ui \
    deletenotecheck.ui \
    innermarkdown.ui \
    innernote.ui \
    innertab.ui \
    life.ui \
    mainwindow.ui \
    myclass.ui \
    note.ui \
    task.ui \
    weekreport.ui

TRANSLATIONS += \
    ddl_zh_CN.ts
CONFIG += lrelease
CONFIG += embed_translations

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
