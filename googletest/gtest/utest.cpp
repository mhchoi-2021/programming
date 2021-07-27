#include <stdio.h>
#include <gtest/gtest.h>

#include "problem.h"

TEST(test01_01, test01) {
  EXPECT_EQ(-22, test01_01(15,37));
}

TEST(test01_02, test01) {
  EXPECT_EQ(-22, test01_02(15,37));
}

TEST(test01_03, test01) {
  char* s1 = new char[11];
  strcpy(s1, test01_03());

	char buf[1024];

 	snprintf(buf, 1024, "%s", s1);

	EXPECT_STREQ("천\n지\n인\n", s1);
}

TEST(test01_04, test01) {
  char* s1 = new char[1024];
  strcpy(s1, test01_04());

	char buf[1024];

 	snprintf(buf, 1024, "%s", s1);

	EXPECT_STREQ("여보세요.\n안녕하세요.\n그럼 이만.\n", s1);
}

TEST(test01_05, test01) {
  char* s1 = new char[1024];
  strcpy(s1, test01_05());

	char buf[1024];

 	snprintf(buf, 1024, "%s", s1);

	EXPECT_STREQ("경고!!\a경고!!\a\n", s1);
}

TEST(test01_06, test01) {
  int x = test01_06();
	char buf[1024];

 	snprintf(buf, 1024, "x의 값은 %d입니다.\n", x);

	EXPECT_STREQ("x의 값은 15입니다.\n", buf);
}

int main(int argc, char **argv) {
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}
