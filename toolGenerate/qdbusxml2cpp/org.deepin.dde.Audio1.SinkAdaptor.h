/*
 * This file was generated by qdbusxml2cpp version 0.8
 * Command line was: qdbusxml2cpp ./dde-api-proxy/file/dbus/v1/session/org.deepin.dde.Audio1.Sink.xml -a ./dde-api-proxy/toolGenerate/qdbusxml2cpp/org.deepin.dde.Audio1.SinkAdaptor -i ./dde-api-proxy/toolGenerate/qdbusxml2cpp/org.deepin.dde.Audio1.Sink.h
 *
 * qdbusxml2cpp is Copyright (C) 2017 The Qt Company Ltd.
 *
 * This is an auto-generated file.
 * This file may have been hand-edited. Look for HAND-EDIT comments
 * before re-generating it.
 */

#ifndef ORG_DEEPIN_DDE_AUDIO1_SINKADAPTOR_H
#define ORG_DEEPIN_DDE_AUDIO1_SINKADAPTOR_H

#include <QtCore/QObject>
#include <QtDBus/QtDBus>
#include "./dde-api-proxy/toolGenerate/qdbusxml2cpp/org.deepin.dde.Audio1.Sink.h"
QT_BEGIN_NAMESPACE
class QByteArray;
template<class T> class QList;
template<class Key, class Value> class QMap;
class QString;
class QStringList;
class QVariant;
QT_END_NAMESPACE

/*
 * Adaptor class for interface org.deepin.dde.Audio1.Sink
 */
class SinkAdaptor: public QDBusAbstractAdaptor
{
    Q_OBJECT
    Q_CLASSINFO("D-Bus Interface", "org.deepin.dde.Audio1.Sink")
    Q_CLASSINFO("D-Bus Introspection", ""
"  <interface name=\"org.deepin.dde.Audio1.Sink\">\n"
"    <method name=\"GetMeter\">\n"
"      <arg direction=\"out\" type=\"o\"/>\n"
"    </method>\n"
"    <method name=\"SetBalance\">\n"
"      <arg direction=\"in\" type=\"d\"/>\n"
"      <arg direction=\"in\" type=\"b\"/>\n"
"    </method>\n"
"    <method name=\"SetFade\">\n"
"      <arg direction=\"in\" type=\"d\"/>\n"
"    </method>\n"
"    <method name=\"SetMute\">\n"
"      <arg direction=\"in\" type=\"b\"/>\n"
"    </method>\n"
"    <method name=\"SetPort\">\n"
"      <arg direction=\"in\" type=\"s\"/>\n"
"    </method>\n"
"    <method name=\"SetVolume\">\n"
"      <arg direction=\"in\" type=\"d\"/>\n"
"      <arg direction=\"in\" type=\"b\"/>\n"
"    </method>\n"
"    <property access=\"read\" type=\"s\" name=\"Name\"/>\n"
"    <property access=\"read\" type=\"s\" name=\"Description\"/>\n"
"    <property access=\"read\" type=\"d\" name=\"BaseVolume\"/>\n"
"    <property access=\"read\" type=\"b\" name=\"Mute\"/>\n"
"    <property access=\"read\" type=\"d\" name=\"Volume\"/>\n"
"    <property access=\"read\" type=\"d\" name=\"Balance\"/>\n"
"    <property access=\"read\" type=\"b\" name=\"SupportBalance\"/>\n"
"    <property access=\"read\" type=\"d\" name=\"Fade\"/>\n"
"    <property access=\"read\" type=\"b\" name=\"SupportFade\"/>\n"
"    <property access=\"read\" type=\"a(ssy)\" name=\"Ports\">\n"
"      <annotation value=\"AudioPortList\" name=\"org.qtproject.QtDBus.QtTypeName\"/>\n"
"    </property>\n"
"    <property access=\"read\" type=\"(ssy)\" name=\"ActivePort\">\n"
"      <annotation value=\"AudioPort\" name=\"org.qtproject.QtDBus.QtTypeName\"/>\n"
"    </property>\n"
"    <property access=\"read\" type=\"u\" name=\"Card\"/>\n"
"  </interface>\n"
        "")
public:
    SinkAdaptor(QObject *parent);
    virtual ~SinkAdaptor();

public: // PROPERTIES
    Q_PROPERTY(AudioPort ActivePort READ activePort)
    AudioPort activePort() const;

    Q_PROPERTY(double Balance READ balance)
    double balance() const;

    Q_PROPERTY(double BaseVolume READ baseVolume)
    double baseVolume() const;

    Q_PROPERTY(uint Card READ card)
    uint card() const;

    Q_PROPERTY(QString Description READ description)
    QString description() const;

    Q_PROPERTY(double Fade READ fade)
    double fade() const;

    Q_PROPERTY(bool Mute READ mute)
    bool mute() const;

    Q_PROPERTY(QString Name READ name)
    QString name() const;

    Q_PROPERTY(AudioPortList Ports READ ports)
    AudioPortList ports() const;

    Q_PROPERTY(bool SupportBalance READ supportBalance)
    bool supportBalance() const;

    Q_PROPERTY(bool SupportFade READ supportFade)
    bool supportFade() const;

    Q_PROPERTY(double Volume READ volume)
    double volume() const;

public Q_SLOTS: // METHODS
    QDBusObjectPath GetMeter();
    void SetBalance(double in0, bool in1);
    void SetFade(double in0);
    void SetMute(bool in0);
    void SetPort(const QString &in0);
    void SetVolume(double in0, bool in1);
Q_SIGNALS: // SIGNALS
};

#endif
