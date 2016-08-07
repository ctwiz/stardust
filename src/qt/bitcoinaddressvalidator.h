// Copyright (c) 2011-2014 The Stardust Core developers
// Distributed under the MIT software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

#ifndef STARDUST_QT_STARDUSTADDRESSVALIDATOR_H
#define STARDUST_QT_STARDUSTADDRESSVALIDATOR_H

#include <QValidator>

/** Base58 entry widget validator, checks for valid characters and
 * removes some whitespace.
 */
class StardustAddressEntryValidator : public QValidator
{
    Q_OBJECT

public:
    explicit StardustAddressEntryValidator(QObject *parent);

    State validate(QString &input, int &pos) const;
};

/** Stardust address widget validator, checks for a valid stardust address.
 */
class StardustAddressCheckValidator : public QValidator
{
    Q_OBJECT

public:
    explicit StardustAddressCheckValidator(QObject *parent);

    State validate(QString &input, int &pos) const;
};

#endif // STARDUST_QT_STARDUSTADDRESSVALIDATOR_H
