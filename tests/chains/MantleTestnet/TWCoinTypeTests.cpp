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


TEST(TWCoinTypeMantleTestnet, TWCoinType) {
    const auto symbol = WRAPS(TWCoinTypeConfigurationGetSymbol(TWCoinTypeMantleTestnet));
    const auto txId = WRAPS(TWStringCreateWithUTF8Bytes("0xf97eebc08c4ccd940320fa1813c6de615bbdee111254ea799302df81722fd154"));
    const auto txUrl = WRAPS(TWCoinTypeConfigurationGetTransactionURL(TWCoinTypeMantleTestnet, txId.get()));
    const auto accId = WRAPS(TWStringCreateWithUTF8Bytes("0x5bb497e8d9fe26e92dd1be01e32076c8e024d167"));
    const auto accUrl = WRAPS(TWCoinTypeConfigurationGetAccountURL(TWCoinTypeMantleTestnet, accId.get()));
    const auto id = WRAPS(TWCoinTypeConfigurationGetID(TWCoinTypeMantleTestnet));
    const auto name = WRAPS(TWCoinTypeConfigurationGetName(TWCoinTypeMantleTestnet));

    ASSERT_EQ(TWCoinTypeConfigurationGetDecimals(TWCoinTypeMantleTestnet), 18);
    ASSERT_EQ(TWBlockchainEthereum, TWCoinTypeBlockchain(TWCoinTypeMantleTestnet));
    ASSERT_EQ(0x0, TWCoinTypeP2shPrefix(TWCoinTypeMantleTestnet));
    ASSERT_EQ(0x0, TWCoinTypeStaticPrefix(TWCoinTypeMantleTestnet));
    assertStringsEqual(symbol, "MNT");
    assertStringsEqual(txUrl, "https://explorer.testnet.mantle.xyz/tx/0xf97eebc08c4ccd940320fa1813c6de615bbdee111254ea799302df81722fd154");
    assertStringsEqual(accUrl, "https://explorer.testnet.mantle.xyz/address/0xCc23091DE47a988DCB1ac8b0a80B49A14fe0A4ab");
    assertStringsEqual(id, "mantletestnet");
    assertStringsEqual(name, "Mantle Testnet");
}
