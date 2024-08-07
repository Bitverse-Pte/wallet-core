// SPDX-License-Identifier: Apache-2.0
//
// Copyright © 2017 Trust Wallet.
//
// This is a GENERATED FILE, changes made here MAY BE LOST.
// Generated one-time (codegen/bin/cointests)
//

#include "TestUtilities.h"
#include <TrustWalletCore/TWCoinTypeConfiguration.h>
#include <gtest/gtest.h>


TEST(TWAvalancheFujiTestnetCoinType, TWCoinType) {
    const auto coin = TWCoinTypeAvalancheFujiTestnet;
    const auto symbol = WRAPS(TWCoinTypeConfigurationGetSymbol(coin));
    const auto id = WRAPS(TWCoinTypeConfigurationGetID(coin));
    const auto name = WRAPS(TWCoinTypeConfigurationGetName(coin));
    const auto chainId = WRAPS(TWCoinTypeChainId(coin));
    const auto txId = WRAPS(TWStringCreateWithUTF8Bytes("0x9243890b844219accefd8798271052f5a056453ec18984a56e81c92921330d54"));
    const auto txUrl = WRAPS(TWCoinTypeConfigurationGetTransactionURL(coin, txId.get()));
    const auto accId = WRAPS(TWStringCreateWithUTF8Bytes("0xa664325f36Ec33E66323fe2620AF3f2294b2Ef3A"));
    const auto accUrl = WRAPS(TWCoinTypeConfigurationGetAccountURL(coin, accId.get()));

    assertStringsEqual(id, "avalanchefujitestnet");
    assertStringsEqual(name, "AvalancheFujiTestnet");
    assertStringsEqual(symbol, "AVAX");
    ASSERT_EQ(TWCoinTypeConfigurationGetDecimals(coin), 18);
    ASSERT_EQ(TWCoinTypeBlockchain(coin), TWBlockchainEthereum);
    ASSERT_EQ(TWCoinTypeP2shPrefix(coin), 0x0);
    ASSERT_EQ(TWCoinTypeStaticPrefix(coin), 0x0);
    assertStringsEqual(chainId, "43113");
    assertStringsEqual(txUrl, "https://testnet.snowtrace.io/tx/0x9243890b844219accefd8798271052f5a056453ec18984a56e81c92921330d54");
    assertStringsEqual(accUrl, "https://testnet.snowtrace.io/address/0xa664325f36Ec33E66323fe2620AF3f2294b2Ef3A");
}
