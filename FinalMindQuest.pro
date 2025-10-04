QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    addquestion.cpp \
    addtopic.cpp \
    admin.cpp \
    adminwindow.cpp \
    boardwindow.cpp \
    deletequestion.cpp \
    deletetopic.cpp \
    gamewindow.cpp \
    leaderboard.cpp \
    loginwindow.cpp \
    main.cpp \
    homepage.cpp \
    mcqquestion.cpp \
    modeselection.cpp \
    onewordpractice.cpp \
    onewordquestion.cpp \
    onewordtest.cpp \
    person.cpp \
    practicewindow.cpp \
    profile.cpp \
    profile_board.cpp \
    quizmanager.cpp \
    quizstart.cpp \
    signupwindow.cpp \
    testwindow.cpp \
    topicselection.cpp \
    user.cpp \
    userfront.cpp \
    userloginsystem.cpp

HEADERS += \
    addquestion.h \
    addtopic.h \
    admin.h \
    adminwindow.h \
    boardwindow.h \
    deletequestion.h \
    deletetopic.h \
    gamewindow.h \
    homepage.h \
    leaderboard.h \
    loginwindow.h \
    mcqquestion.h \
    modeselection.h \
    onewordpractice.h \
    onewordquestion.h \
    onewordtest.h \
    person.h \
    practicewindow.h \
    profile.h \
    profile_board.h \
    question.h \
    quizmanager.h \
    quizstart.h \
    signupwindow.h \
    testwindow.h \
    topicselection.h \
    user.h \
    userfront.h \
    userloginsystem.h

FORMS += \
    addquestion.ui \
    addtopic.ui \
    adminwindow.ui \
    boardwindow.ui \
    deletequestion.ui \
    deletetopic.ui \
    gamewindow.ui \
    homepage.ui \
    loginwindow.ui \
    modeselection.ui \
    onewordpractice.ui \
    onewordtest.ui \
    practicewindow.ui \
    profile.ui \
    profile_board.ui \
    quizstart.ui \
    signupwindow.ui \
    testwindow.ui \
    topicselection.ui \
    userfront.ui \
    userloginsystem.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
