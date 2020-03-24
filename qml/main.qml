import QtQuick.Window 2.14
import QtQuick 2.12

Window {
    visible: true
    width: 500
    height: 500
    title: qsTr("Copy Maker")

    Text {
        id: text

        text: "Application Window text"
        font.pixelSize: 35
        color: "blue"
        anchors.centerIn: parent
    }
}

