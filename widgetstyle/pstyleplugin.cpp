#include "pstyleplugin.h"
#include "basestyle.h"

#include <QApplication>
#include <QStyleFactory>
#include <QDebug>

QStringList ProxyStylePlugin::keys() const
{
    return {"pisces"};
}

QStyle *ProxyStylePlugin::create(const QString &key)
{
    if (key != QStringLiteral("pisces")) {
        return nullptr;
    }

    return new BaseStyle;
}
