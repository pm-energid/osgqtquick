#include "module.hpp"

#include "draggerindex.hpp"
#include "rotatespheredraggerindex.hpp"
#include "compositedraggerindex.hpp"
#include "tabboxdraggerindex.hpp"

#include <osgQtQuick/Version>
#include <QtQml>

#include <QDebug>

namespace osgManipulator {

void registerQtQmlTypes(const char *uri)
{
    qmlRegisterUncreatableType<DraggerQtQml>(
                uri, osgQtQuick_VERSION_MAJOR, osgQtQuick_VERSION_MINOR,
                "Dragger", "[osgQtQuick] Dragger is Uncreatable");

    qmlRegisterType<RotateSphereDraggerQtQml>(
                uri, osgQtQuick_VERSION_MAJOR, osgQtQuick_VERSION_MINOR,
                "RotateSphereDragger");

    qmlRegisterUncreatableType<CompositeDraggerQtQml>(
                uri, osgQtQuick_VERSION_MAJOR, osgQtQuick_VERSION_MINOR,
                "CompositeDragger", "[osgQtQuick] CompositeDragger is Uncreatable");

    qmlRegisterType<TabBoxDraggerQtQml>(
                uri, osgQtQuick_VERSION_MAJOR, osgQtQuick_VERSION_MINOR,
                "TabBoxDragger");
}

}
