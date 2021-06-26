// Copyright © 2017-2020 Trust Wallet.
//
// This file is part of Trust. The full Trust copyright notice, including
// terms governing use, modification, and redistribution, is contained in the
// file LICENSE at the root of the source code distribution tree.
//
// This is a GENERATED FILE, changes made here MAY BE LOST.
// Generated one-time (codegen/bin/cointests)
//

#include "../interface/TWTestUtilities.h"
#include <TrustWalletCore/TWCoinTypeConfiguration.h>
#include <gtest/gtest.h>

TEST(TWFilecoinCoinType, TWCoinType) {
    auto symbol = WRAPS(TWCoinTypeConfigurationGetSymbol(TWCoinTypeFilecoin));
    auto txId = WRAPS(TWStringCreateWithUTF8Bytes("bafy2bzacedsgjcd6xfhrrymmfrqubb44otlyhvgqkgsh533d5j5hwniiqespm"));
    auto txUrl = WRAPS(TWCoinTypeConfigurationGetTransactionURL(TWCoinTypeFilecoin, txId.get()));
    auto accId = WRAPS(TWStringCreateWithUTF8Bytes("f1abjxfbp274xpdqcpuaykwkfb43omjotacm2p3za"));
    auto accUrl = WRAPS(TWCoinTypeConfigurationGetAccountURL(TWCoinTypeFilecoin, accId.get()));
    auto id = WRAPS(TWCoinTypeConfigurationGetID(TWCoinTypeFilecoin));
    auto name = WRAPS(TWCoinTypeConfigurationGetName(TWCoinTypeFilecoin));

    ASSERT_EQ(TWCoinTypeConfigurationGetDecimals(TWCoinTypeFilecoin), 18);
    ASSERT_EQ(TWBlockchainFilecoin, TWCoinTypeBlockchain(TWCoinTypeFilecoin));
    ASSERT_EQ(0x0, TWCoinTypeP2shPrefix(TWCoinTypeFilecoin));
    ASSERT_EQ(0x0, TWCoinTypeStaticPrefix(TWCoinTypeFilecoin));
    assertStringsEqual(symbol, "FIL");
    assertStringsEqual(txUrl, "https://filfox.info/en/message/bafy2bzacedsgjcd6xfhrrymmfrqubb44otlyhvgqkgsh533d5j5hwniiqespm");
    assertStringsEqual(accUrl, "https://filfox.info/en/address/f1abjxfbp274xpdqcpuaykwkfb43omjotacm2p3za");
    assertStringsEqual(id, "filecoin");
    assertStringsEqual(name, "Filecoin");
}
