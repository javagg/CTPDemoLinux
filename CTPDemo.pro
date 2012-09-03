TEMPLATE = app
CONFIG += console
CONFIG -= qt

SOURCES += \
    test.cpp \
    md/mdspi.cpp \
    order/traderspi.cpp \
    risk/riskspi.cpp \
    win_event.c

HEADERS += \
    test.h \
    config.h \
    md/mdspi.h \
    order/traderspi.h \
    risk/riskspi.h \
    api/trade/win/public/ThostFtdcUserApiStruct.h \
    api/trade/win/public/ThostFtdcUserApiDataType.h \
    api/trade/win/public/ThostFtdcTraderApi.h \
    api/trade/win/public/ThostFtdcMdApi.h \
    api/risk/public/FtdcRiskUserApiStruct.h \
    api/risk/public/FtdcRiskUserApiDataType.h \
    api/risk/public/FtdcRiskUserApi.h \
    win_event.h

INCLUDEPATH += $$PWD/api/risk

win32 {
    INCLUDEPATH += $$PWD/api/trade/win
    LIBS += -L$$PWD/api/risk/lib/ -lriskuserapi -L$$PWD/api/trade/win/lib/ -lthostmduserapi -lthosttraderapi
} unix {
    INCLUDEPATH += $$PWD/api/trade/linux64
#    LIBS += -L$$PWD/api/risk/lib/ -lriskuserapi
    LIBS += -L$$PWD/api/trade/linux64/lib/ -lthostmduserapi -lthosttraderapi
    QMAKE_LFLAGS += -pthread
}
