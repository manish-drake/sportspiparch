import QtQuick 2.9
import QtQuick.Controls 2.2

Page {
    width: 600
    height: 400
    property alias button: button

    title: qsTr("Page 1")

    Label {
        text: qsTr("You are on Page 1.")
        anchors.centerIn: parent
    }

    Button {
        id: button
        x: 250
        y: 134
        height: 200
        width: 400
        text: qsTr("Button")
        clicked: vm.send()
    }
}
