TARGET = FluckyGameOpenGL
TEMPLATE = app
CONFIG -= qt
DEFINES -= UNICODE QT_LARGEFILE_SUPPORT

HEADERS += \
    shader.h

SOURCES += main.cpp \
    shader.cpp

LIBS += -lstdc++ -lGL -lGLEW -lSDL2

DISTFILES += res/basicShader.frag \
             res/basicShader.vert
