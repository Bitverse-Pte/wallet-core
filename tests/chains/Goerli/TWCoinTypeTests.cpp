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


TEST(TWCoinTypeGoerli, TWCoinType) {
    const auto symbol = WRAPS(TWCoinTypeConfigurationGetSymbol(TWCoinTypeGoerli));
    const auto txId = WRAPS(TWStringCreateWithUTF8Bytes("0x9edaf0f7d9c6629c31bbf0471fc07d696c73b566b93783f7e25d8d5d2b62fa4f"));
    const auto txUrl = WRAPS(TWCoinTypeConfigurationGetTransactionURL(TWCoinTypeGoerli, txId.get()));
    const auto accId = WRAPS(TWStringCreateWithUTF8Bytes("0x5bb497e8d9fe26e92dd1be01e32076c8e024d167"));
    const auto accUrl = WRAPS(TWCoinTypeConfigurationGetAccountURL(TWCoinTypeGoerli, accId.get()));
    const auto id = WRAPS(TWCoinTypeConfigurationGetID(TWCoinTypeGoerli));
    const auto name = WRAPS(TWCoinTypeConfigurationGetName(TWCoinTypeGoerli));

    ASSERT_EQ(TWCoinTypeConfigurationGetDecimals(TWCoinTypeGoerli), 18);
    ASSERT_EQ(TWBlockchainEthereum, TWCoinTypeBlockchain(TWCoinTypeGoerli));
    ASSERT_EQ(0x0, TWCoinTypeP2shPrefix(TWCoinTypeGoerli));
    ASSERT_EQ(0x0, TWCoinTypeStaticPrefix(TWCoinTypeGoerli));
    assertStringsEqual(symbol, "ETH");
    assertStringsEqual(txUrl, "https://goerli.etherscan.io/tx/0x9edaf0f7d9c6629c31bbf0471fc07d696c73b566b93783f7e25d8d5d2b62fa4f");
    assertStringsEqual(accUrl, "https://goerli.etherscan.io/address/0x5bb497e8d9fe26e92dd1be01e32076c8e024d167");
    assertStringsEqual(id, "goerli");
    assertStringsEqual(name, "Goerli");
}
