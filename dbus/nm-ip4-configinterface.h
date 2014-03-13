/*
 * This file was generated by qdbusxml2cpp version 0.7
 * Command line was: qdbusxml2cpp -N -m -i generic-types.h -p nm-ip4-configinterface /home/jgrulich/development/projects/libnm-qt/dbus/introspection/nm-ip4-config.xml
 *
 * qdbusxml2cpp is Copyright (C) 2013 Digia Plc and/or its subsidiary(-ies).
 *
 * This is an auto-generated file.
 * Do not edit! All changes made to it will be lost.
 */

#ifndef NETWORKMANAGERQT_IP4_CONFIGINTERFACE_H
#define NETWORKMANAGERQT_IP4_CONFIGINTERFACE_H

#include <QtCore/QObject>
#include <QtCore/QByteArray>
#include <QtCore/QList>
#include <QtCore/QMap>
#include <QtCore/QString>
#include <QtCore/QStringList>
#include <QtCore/QVariant>
#include <QtDBus/QtDBus>

#include "generic-types.h"

/*
 * Proxy class for interface org.freedesktop.NetworkManager.IP4Config
 */
class OrgFreedesktopNetworkManagerIP4ConfigInterface: public QDBusAbstractInterface
{
    Q_OBJECT
public:
    static inline const char *staticInterfaceName()
    { return "org.freedesktop.NetworkManager.IP4Config"; }

public:
    OrgFreedesktopNetworkManagerIP4ConfigInterface(const QString &service, const QString &path, const QDBusConnection &connection, QObject *parent = 0);

    ~OrgFreedesktopNetworkManagerIP4ConfigInterface();

    Q_PROPERTY(UIntListList Addresses READ addresses)
    inline UIntListList addresses() const
    { return qvariant_cast< UIntListList >(property("Addresses")); }

    Q_PROPERTY(QStringList Domains READ domains)
    inline QStringList domains() const
    { return qvariant_cast< QStringList >(property("Domains")); }

    Q_PROPERTY(QString Gateway READ gateway)
    inline QString gateway() const
    { return qvariant_cast< QString >(property("Gateway")); }

    Q_PROPERTY(UIntList Nameservers READ nameservers)
    inline UIntList nameservers() const
    { return qvariant_cast< UIntList >(property("Nameservers")); }

    Q_PROPERTY(UIntListList Routes READ routes)
    inline UIntListList routes() const
    { return qvariant_cast< UIntListList >(property("Routes")); }

    Q_PROPERTY(QStringList Searches READ searches)
    inline QStringList searches() const
    { return qvariant_cast< QStringList >(property("Searches")); }

    Q_PROPERTY(UIntList WinsServers READ winsServers)
    inline UIntList winsServers() const
    { return qvariant_cast< UIntList >(property("WinsServers")); }

public Q_SLOTS: // METHODS
Q_SIGNALS: // SIGNALS
    void PropertiesChanged(const QVariantMap &properties);
};

#endif
