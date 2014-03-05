// Copyright (c) 2011-2014 The Cockcoin developers
// Distributed under the MIT/X11 software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

#ifndef COCKCOINADDRESSVALIDATOR_H
#define COCKCOINADDRESSVALIDATOR_H

#include <QValidator>

/** Base58 entry widget validator, checks for valid characters and
 * removes some whitespace.
 */
class CockcoinAddressEntryValidator : public QValidator
{
    Q_OBJECT

public:
    explicit CockcoinAddressEntryValidator(QObject *parent);

    State validate(QString &input, int &pos) const;
};

/** Cockcoin address widget validator, checks for a valid cockcoin address.
 */
class CockcoinAddressCheckValidator : public QValidator
{
    Q_OBJECT

public:
    explicit CockcoinAddressCheckValidator(QObject *parent);

    State validate(QString &input, int &pos) const;
};

#endif // COCKCOINADDRESSVALIDATOR_H
