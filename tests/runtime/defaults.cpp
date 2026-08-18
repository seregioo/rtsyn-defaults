#include <gtest/gtest.h>

extern "C" {
#include <rtsyn/runtime/defaults.h>
}

TEST(RuntimeDefaultsTest, ExposesRuntimeConfigDefaults)
{
    EXPECT_EQ(RTSYN_RUNTIME_DEFAULT_CONFIG_MAX_NODES_PER_TYPE, 64);
    EXPECT_EQ(RTSYN_RUNTIME_DEFAULT_CONFIG_PERIOD_NS, 1000000);
}
