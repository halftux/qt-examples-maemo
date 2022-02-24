TEMPLATE = app
SOURCES = main.cpp

QT += widgets maemo5

# install
target.path = $$[QT_INSTALL_EXAMPLES]/maemo5/listpickselector
sources.files = $$SOURCES $$HEADERS $$RESOURCES $$FORMS listpickselector.pro
sources.path = $$[QT_INSTALL_EXAMPLES]/maemo5/listpickselector
INSTALLS += target sources
