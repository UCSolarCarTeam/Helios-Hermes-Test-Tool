#include "util.h"

Util::Util(QObject *parent)
    : QObject{parent}
{}

QByteArray Util::encodeByteStream(QByteArray bs){

    return QByteArray(1, 0x00);
}

QByteArray Util::generateChecksum(QByteArray bs, int bodyStartIndex, int bodyEndIndex){
    // ensure bodyEndIndex is greater than or equal to bodyStartIndex, if not, return empty array of bytes
    if (bodyEndIndex < bodyStartIndex) {
        return QByteArray(1, 0x00);
    }

    int length = bodyEndIndex - bodyStartIndex + 1;

    // extract the portion of interest from the byte array
    QByteArray portion = bs.mid(bodyStartIndex, length);

    quint16 checksum = qChecksum(portion.constData(), portion.size());

    // convert checksum to hexadeciaml QByteArray
    QByteArray checksumHex;

    checksumHex.append(static_cast<char>(checksum & 0xFF));
    checksumHex.append(static_cast<char>((checksum >> 8) & 0xFF));

    return checksumHex;
}

QByteArray Util::formatInt(int num, int bytes){
    return QByteArray(1, 0x00);
}

QByteArray Util::formatFloat(float num){
    return QByteArray(1, 0x00);
}
