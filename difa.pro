#-------------------------------------------------
#
# Project created by QtCreator 2017-01-25T11:22:48
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = difa
TEMPLATE = app
CONFIG += console

SOURCES += main.cpp\
        mainwindow.cpp \
    symb/src/array.cpp \
    symb/src/cloning.cpp \
    symb/src/constants.cpp \
    symb/src/derive.cpp \
    symb/src/equation.cpp \
    symb/src/functions.cpp \
    symb/src/identity.cpp \
    symb/src/integrate.cpp \
    symb/src/matnorm.cpp \
    symb/src/matrix.cpp \
    symb/src/multinomial.cpp \
    symb/src/number.cpp \
    symb/src/polynomial.cpp \
    symb/src/product.cpp \
    symb/src/quatern.cpp \
    symb/src/rational.cpp \
    symb/src/solve.cpp \
    symb/src/sum.cpp \
    symb/src/symbol.cpp \
    symb/src/symbolic.cpp \
    symb/src/symbolicc++.cpp \
    symb/src/symerror.cpp \
    symb/src/symmatrix.cpp \
    symb/src/vecnorm.cpp \
    symb/src/vector.cpp \
    symb/src/verylong.cpp

HEADERS  += mainwindow.h \
    symb/include/array.h \
    symb/include/cloning.h \
    symb/include/derive.h \
    symb/include/identity.h \
    symb/include/matnorm.h \
    symb/include/matrix.h \
    symb/include/multinomial.h \
    symb/include/polynomial.h \
    symb/include/quatern.h \
    symb/include/rational.h \
    symb/include/symbolicc++.h \
    symb/include/vecnorm.h \
    symb/include/vector.h \
    symb/include/verylong.h \
    symb/include/symbolic/constants.h \
    symb/include/symbolic/equation.h \
    symb/include/symbolic/functions.h \
    symb/include/symbolic/integrate.h \
    symb/include/symbolic/number.h \
    symb/include/symbolic/product.h \
    symb/include/symbolic/solve.h \
    symb/include/symbolic/sum.h \
    symb/include/symbolic/symbol.h \
    symb/include/symbolic/symbolic.h \
    symb/include/symbolic/symbolicc++.h \
    symb/include/symbolic/symerror.h \
    symb/include/symbolic/symmatrix.h

FORMS    += mainwindow.ui

RESOURCES +=

QT_CONFIG -= no-pkg-config
CONFIG += link_pkgconfig
PKGCONFIG += cln

mac {
	  PKG_CONFIG = /usr/local/bin/pkg-config
}
