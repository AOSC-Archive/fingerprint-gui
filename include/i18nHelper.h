#ifndef I18NHELPER_H
#define I18NHELPER_H
#include <QLocale>
#include <QTranslator>
#include <QApplication>
#include <QDebug>
#ifndef LOCALE_DIR
#define LOCALE_DIR "."
#endif

#define loadTranslations(app) \
	QTranslator t; if (t.load(QLocale(), QString(""), QString(""), QString(LOCALE_DIR))) app.installTranslator(&t)
#endif // I18NHELPER_H
