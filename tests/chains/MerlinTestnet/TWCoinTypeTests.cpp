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


TEST(TWMerlinTestnetCoinType, TWCoinType) {
    const auto coin = TWCoinTypeMerlinTestnet;
    const auto symbol = WRAPS(TWCoinTypeConfigurationGetSymbol(coin));
    const auto id = WRAPS(TWCoinTypeConfigurationGetID(coin));
    const auto name = WRAPS(TWCoinTypeConfigurationGetName(coin));
    const auto chainId = WRAPS(TWCoinTypeChainId(coin));
    const auto txId = WRAPS(TWStringCreateWithUTF8Bytes("0xf97eebc08c4ccd940320fa1813c6de615bbdee111254ea799302df81722fd154"));
    const auto txUrl = WRAPS(TWCoinTypeConfigurationGetTransactionURL(coin, txId.get()));
    const auto accId = WRAPS(TWStringCreateWithUTF8Bytes("0xCc23091DE47a988DCB1ac8b0a80B49A14fe0A4ab"));
    const auto accUrl = WRAPS(TWCoinTypeConfigurationGetAccountURL(coin, accId.get()));

    assertStringsEqual(id, "merlintestnet");
    assertStringsEqual(name, "MerlinTestnet");
    assertStringsEqual(symbol, "MNT");
    ASSERT_EQ(TWCoinTypeConfigurationGetDecimals(coin), 18);
    ASSERT_EQ(TWCoinTypeBlockchain(coin), TWBlockchainEthereum);
    ASSERT_EQ(TWCoinTypeP2shPrefix(coin), 0x0);
    ASSERT_EQ(TWCoinTypeStaticPrefix(coin), 0x0);
    assertStringsEqual(chainId, "686868");
    assertStringsEqual(txUrl, "https://testnet-scan.merlinchain.io/tx0xf97eebc08c4ccd940320fa1813c6de615bbdee111254ea799302df81722fd154");
    assertStringsEqual(accUrl, "https://testnet-scan.merlinchain.io/address/0xCc23091DE47a988DCB1ac8b0a80B49A14fe0A4ab");
}
