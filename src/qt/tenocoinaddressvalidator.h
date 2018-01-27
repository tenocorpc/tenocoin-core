// Copyright (c) 2011-2014 The Bitcoin Core developers
// Distributed under the MIT software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

#ifndef TENOCOIN_QT_TENOCOINADDRESSVALIDATOR_H
#define TENOCOIN_QT_TENOCOINADDRESSVALIDATOR_H

#include <QValidator>

/** Base58 entry widget validator, checks for valid characters and
 * removes some whitespace.
 */
class TenoCoinAddressEntryValidator : public QValidator
{
    Q_OBJECT

public:
    explicit TenoCoinAddressEntryValidator(QObject *parent);

    State validate(QString &input, int &pos) const;
};

/** TenoCoin address widget validator, checks for a valid tenocoin address.
 */
class TenoCoinAddressCheckValidator : public QValidator
{
    Q_OBJECT

public:
    explicit TenoCoinAddressCheckValidator(QObject *parent);

    State validate(QString &input, int &pos) const;
};

#endif // TENOCOIN_QT_TENOCOINADDRESSVALIDATOR_H
