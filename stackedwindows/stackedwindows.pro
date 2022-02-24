TEMPLATE = app
SOURCES = main.cpp

QT += widgets

# install
target.path = $$[QT_INSTALL_EXAMPLES]/maemo5/stackedwindows
sources.files = $$SOURCES $$HEADERS $$RESOURCES $$FORMS stackedwindows.pro
sources.path = $$[QT_INSTALL_EXAMPLES]/maemo5/stackedwindows
INSTALLS += target sources
