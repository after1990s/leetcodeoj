TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += main.cpp \
    graph.cpp \
    search.cpp \
    dfs.cpp

HEADERS += \
    graph.h \
    search.h \
    dfs.h
QMAKE_CXXFLAGS_DEBUG += /MTd
QMAKE_CXXFLAGS_RELEASE += /MT
QMAKE_LFLAGS_DEBUG += /DEBUG
