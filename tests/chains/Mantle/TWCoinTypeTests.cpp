// Copyright © 2017-2023 Trust Wallet.
//
// This file is part of Trust. The full Trust copyright notice, including
// terms governing use, modification, and redistribution, is contained in the
// file LICENSE at the root of the source code distribution tree.
//
// This is a GENERATED FILE, changes made here MAY BE LOST.
// Generated one-time (codegen/bin/cointests)
//

#include "TestUtilities.h"
#include <TrustWalletCore/TWCoinTypeConfiguration.h>
#include <gtest/gtest.h>


TEST(TWCoinTypeMantle, TWCoinType) {
    const auto symbol = WRAPS(TWCoinTypeConfigurationGetSymbol(TWCoinTypeMantle));
    const auto txId = WRAPS(TWStringCreateWithUTF8Bytes("0xf97eebc08c4ccd940320fa1813c6de615bbdee111254ea799302df81722fd154"));
    const auto txUrl = WRAPS(TWCoinTypeConfigurationGetTransactionURL(TWCoinTypeMantle, txId.get()));
    const auto accId = WRAPS(TWStringCreateWithUTF8Bytes("0x5bb497e8d9fe26e92dd1be01e32076c8e024d167"));
    const auto accUrl = WRAPS(TWCoinTypeConfigurationGetAccountURL(TWCoinTypeMantle, accId.get()));
    const auto id = WRAPS(TWCoinTypeConfigurationGetID(TWCoinTypeMantle));
    const auto name = WRAPS(TWCoinTypeConfigurationGetName(TWCoinTypeMantle));

    ASSERT_EQ(TWCoinTypeConfigurationGetDecimals(TWCoinTypeMantle), 18);
    ASSERT_EQ(TWBlockchainEthereum, TWCoinTypeBlockchain(TWCoinTypeMantle));
    ASSERT_EQ(0x0, TWCoinTypeP2shPrefix(TWCoinTypeMantle));
    ASSERT_EQ(0x0, TWCoinTypeStaticPrefix(TWCoinTypeMantle));
    assertStringsEqual(symbol, "MNT");
    assertStringsEqual(txUrl, "https://explorer.mantle.xyz/tx/0xf97eebc08c4ccd940320fa1813c6de615bbdee111254ea799302df81722fd154");
    assertStringsEqual(accUrl, "https://explorer.mantle.xyz/address/0xCc23091DE47a988DCB1ac8b0a80B49A14fe0A4ab");
    assertStringsEqual(id, "mantle");
    assertStringsEqual(name, "Mantle");
}
