TARGET = tst_qdeclarativevideooutput_window

QT += multimedia-private qml testlib quick
CONFIG += no_private_qt_headers_warning
CONFIG += testcase

OTHER_FILES += \
        ../../../../src/imports/multimedia/qdeclarativevideooutput_p.h

SOURCES += \
        tst_qdeclarativevideooutput_window.cpp

INCLUDEPATH += ../../../../src/imports/multimedia
