#pragma once

#include "dbusproxybase.hpp"
#include "session_org_deepin_dde_Audio1.h"

#include "session/org_deepin_dde_Audio1_Sink.hpp"
#include "session/org_deepin_dde_Audio1_Source.hpp"

class SessionAudio1Proxy : public DBusProxyBase {
    
public:
    SessionAudio1Proxy(QString dbusName, QString dbusPath, QString dbusInterface, 
        QString proxyDbusName, QString proxyDbusPath, QString proxyDbusInterface,
        QDBusConnection::BusType dbusType, QObject *parent = nullptr) 
        : DBusProxyBase(dbusName, dbusPath, dbusInterface, proxyDbusName, proxyDbusPath, proxyDbusInterface, dbusType, parent)
    {
        InitFilterProperies(QStringList({"SinkInputs", "CardsWithoutUnavailable", "DefaultSource", "MaxUIVolume", "DefaultSink"}));
        InitFilterMethods(QStringList({}));
        ServiceStart();
    }
    virtual DBusExtendedAbstractInterface *initConnect() 
    {
        m_dbusProxy = new org::deepin::dde::Audio1(m_dbusName, m_dbusPath, QDBusConnection::sessionBus(), this);
        return m_dbusProxy;
    }
    virtual void signalMonitorCustom()
    {
        SubPathInit("Sinks", sinkPathMap, [=](QString path){
            qInfo() << "create audio.sink path proxy";
            QString suffix = path.right(path.size() - (path.lastIndexOf("/") + 1));
            return new SessionAudio1SinkProxy(m_dbusName, 
                path, 
                "org.deepin.dde.Audio1.Sink", 
                m_proxyDbusName, 
                "/com/deepin/daemon/Audio/"+suffix, 
                "com.deepin.daemon.Audio.Sink",
                m_dbusType);
        });
        SubPathInit("Sources", sourcePathMap, [=](QString path){
            qInfo() << "create audio.source path proxy";
            QString suffix = path.right(path.size() - (path.lastIndexOf("/") + 1));
            return new SessionAudio1SourceProxy(m_dbusName, 
                path, 
                "org.deepin.dde.Audio1.Source", 
                m_proxyDbusName, 
                "/com/deepin/daemon/Audio/"+suffix, 
                "com.deepin.daemon.Audio.Source",
                m_dbusType);
        });
    }
private:
    org::deepin::dde::Audio1 *m_dbusProxy;
    QMap<QString, DBusProxyBase *> sinkPathMap;
    QMap<QString, DBusProxyBase *> sourcePathMap;
};


