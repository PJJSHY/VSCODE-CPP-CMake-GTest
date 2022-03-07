#include <gmock/gmock.h>
#include <gtest/gtest.h>

#include <queue>

using namespace std;

class QueueTest : public ::testing::Test
{
protected:
    virtual void SetUp()
    {
        q1.push(1);
        q2.push(2);
        q2.push(3);
    }

    // void TearDown() override {}

    queue<int> q0;
    queue<int> q1;
    queue<int> q2;
};

TEST_F(QueueTest, IsEmptyInitially)
{
    EXPECT_EQ(q0.size(), 0);
}

TEST_F(QueueTest, DequeueWorks)
{
    int n = q1.front();
    q1.pop();
    ASSERT_EQ(q1.size(), 0);
    EXPECT_EQ(n, 1);

    n = q2.front();
    q2.pop();
    ASSERT_NE(q2.size(), 0);
    EXPECT_EQ(n, 2);
    EXPECT_EQ(q2.size(), 1);
}