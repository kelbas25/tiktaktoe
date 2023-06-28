#include <gtest/gtest.h>
#include "../src/resolver.hpp"
#include "../src/IOworker.hpp"
#include "../src/stateHelper.hpp"

TEST(BasicTests, FirstPlayerWinsCheck) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("X - - - X - 0 0 X")), "First player wins\n");
}

TEST(BasicTests, SecondPlayerWinsCheck) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("X X 0 X 0 - 0 - -")), "Second player wins\n");
}

TEST(BasicTests, DrawCheck) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("X X 0 0 0 X X 0 X")), "Draw\n");
}

TEST(BasicTests, GameInProgressCheck) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("X 0 X 0 - 0 X 0 X")), "Game in progress\n");
}

TEST(BasicTests, InvalidCheck) {
    ASSERT_ANY_THROW(Resolver::resolve(StateHelper::eraseSpaces("")));
}
TEST(BasicTests, test_1) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("-0--X0-XX")), "Game in progress\n");
}
TEST(BasicTests, test_2) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("X-X00--0-")), "Game in progress\n");
}
TEST(BasicTests, test_3) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("------0--")), "Game in progress\n");
}
TEST(BasicTests, test_4) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("-0-----X-")), "Game in progress\n");
}
TEST(BasicTests, test_5) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("---X--0-0")), "Game in progress\n");
}
TEST(BasicTests, test_6) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("X-X000X0X")), "Second player wins\n");
}
TEST(BasicTests, test_7) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("--------0")), "Game in progress\n");
}
TEST(BasicTests, test_8) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("-0--XX---")), "Game in progress\n");
}
TEST(BasicTests, test_9) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("X00X--X-0")), "First player wins\n");
}
TEST(BasicTests, test_10) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("00-X-XX0-")), "Game in progress\n");
}
TEST(BasicTests, test_11) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("0-0-X0-XX")), "Game in progress\n");
}
TEST(BasicTests, test_12) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("--X--0-0X")), "Game in progress\n");
}
TEST(BasicTests, test_13) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("-X0X00XX0")), "Second player wins\n");
}
TEST(BasicTests, test_14) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("X000XXX0X")), "First player wins\n");
}
TEST(BasicTests, test_15) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("-0-----X-")), "Game in progress\n");
}
TEST(BasicTests, test_16) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("000----XX")), "Second player wins\n");
}
TEST(BasicTests, test_17) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("X00-X0X0X")), "First player wins\n");
}
TEST(BasicTests, test_18) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("0-X000XXX")), "Second player wins\n");
}
TEST(BasicTests, test_19) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("--0X---0-")), "Game in progress\n");
}
TEST(BasicTests, test_20) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("--X0-0-X-")), "Game in progress\n");
}
TEST(BasicTests, test_21) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("--0--X-X-")), "Game in progress\n");
}
TEST(BasicTests, test_22) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("0XX00-0XX")), "Second player wins\n");
}
TEST(BasicTests, test_23) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("XX000XX00")), "Draw\n");
}
TEST(BasicTests, test_24) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("XX00000XX")), "Second player wins\n");
}
TEST(BasicTests, test_25) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("----X0---")), "Game in progress\n");
}
TEST(BasicTests, test_26) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("-X-------")), "Game in progress\n");
}
TEST(BasicTests, test_27) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("0-X-0X0-X")), "First player wins\n");
}
TEST(BasicTests, test_28) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("---0-----")), "Game in progress\n");
}
TEST(BasicTests, test_29) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("0--0X---X")), "Game in progress\n");
}
TEST(BasicTests, test_30) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("--X---00X")), "Game in progress\n");
}
TEST(BasicTests, test_31) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("0XXX0X-00")), "Second player wins\n");
}
TEST(BasicTests, test_32) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("0XXX000XX")), "Draw\n");
}
TEST(BasicTests, test_33) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("-XX0-X-0-")), "Game in progress\n");
}
TEST(BasicTests, test_34) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("X00XXX0-0")), "First player wins\n");
}
TEST(BasicTests, test_35) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("---0--X--")), "Game in progress\n");
}
TEST(BasicTests, test_36) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("XX-XX0000")), "Second player wins\n");
}
TEST(BasicTests, test_37) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("0--0X0XX-")), "Game in progress\n");
}
TEST(BasicTests, test_38) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("X-00-X--X")), "Game in progress\n");
}
TEST(BasicTests, test_39) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("0---X0--X")), "Game in progress\n");
}
TEST(BasicTests, test_40) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("-X-X0---0")), "Game in progress\n");
}
TEST(BasicTests, test_41) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("-X-0--0--")), "Game in progress\n");
}
TEST(BasicTests, test_42) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("X-X-0-0-X")), "Game in progress\n");
}
TEST(BasicTests, test_43) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("X--XX-0-0")), "Game in progress\n");
}
TEST(BasicTests, test_44) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("-0-------")), "Game in progress\n");
}
TEST(BasicTests, test_45) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("-00X-0XX0")), "Second player wins\n");
}
TEST(BasicTests, test_46) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("----X----")), "Game in progress\n");
}
TEST(BasicTests, test_47) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("00-0-0XXX")), "First player wins\n");
}
TEST(BasicTests, test_48) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("X-----0--")), "Game in progress\n");
}
TEST(BasicTests, test_49) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("-X----0--")), "Game in progress\n");
}
TEST(BasicTests, test_50) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("-----X--0")), "Game in progress\n");
}
TEST(BasicTests, test_51) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("-X-X--00-")), "Game in progress\n");
}
TEST(BasicTests, test_52) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("-0XXXX000")), "First player wins\n");
}
TEST(BasicTests, test_53) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("X---0----")), "Game in progress\n");
}
TEST(BasicTests, test_54) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("-0X-XX0--")), "Game in progress\n");
}
TEST(BasicTests, test_55) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("--X0-X--0")), "Game in progress\n");
}
TEST(BasicTests, test_56) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("-0-0----X")), "Game in progress\n");
}
TEST(BasicTests, test_57) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("-X-0---0-")), "Game in progress\n");
}
TEST(BasicTests, test_58) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("X--00---X")), "Game in progress\n");
}
TEST(BasicTests, test_59) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("--0-XX--0")), "Game in progress\n");
}
TEST(BasicTests, test_60) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("00-XX--X-")), "Game in progress\n");
}
TEST(BasicTests, test_61) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("-0X------")), "Game in progress\n");
}
TEST(BasicTests, test_62) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("-0X-XX0-0")), "Game in progress\n");
}
TEST(BasicTests, test_63) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("0000XXXXX")), "Second player wins\n");
}
TEST(BasicTests, test_64) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("XX0XX000X")), "First player wins\n");
}
TEST(BasicTests, test_65) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("X0XX-0-0-")), "Game in progress\n");
}
TEST(BasicTests, test_66) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("0-X----0-")), "Game in progress\n");
}
TEST(BasicTests, test_67) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("000XX00XX")), "Second player wins\n");
}
TEST(BasicTests, test_68) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("-----0---")), "Game in progress\n");
}
TEST(BasicTests, test_69) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("--------X")), "Game in progress\n");
}
TEST(BasicTests, test_70) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("---0X--0-")), "Game in progress\n");
}
TEST(BasicTests, test_71) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("----X0X-0")), "Game in progress\n");
}
TEST(BasicTests, test_72) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("XX0---0X-")), "Game in progress\n");
}
TEST(BasicTests, test_73) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("-XX0000X-")), "Second player wins\n");
}
TEST(BasicTests, test_74) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("000X0XXXX")), "Second player wins\n");
}
TEST(BasicTests, test_75) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("----X-0-X")), "Game in progress\n");
}
TEST(BasicTests, test_76) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("000X00XXX")), "Second player wins\n");
}
TEST(BasicTests, test_77) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("-0-X-0-X-")), "Game in progress\n");
}
TEST(BasicTests, test_78) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("X-0-0-0-X")), "Second player wins\n");
}
TEST(BasicTests, test_79) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("--00-XX-0")), "Game in progress\n");
}
TEST(BasicTests, test_80) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("--X-X00X-")), "Game in progress\n");
}
TEST(BasicTests, test_81) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("X0-X--0--")), "Game in progress\n");
}
TEST(BasicTests, test_82) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("--X--0-X-")), "Game in progress\n");
}
TEST(BasicTests, test_83) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("00XXXXX00")), "First player wins\n");
}
TEST(BasicTests, test_84) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("-X-0X00XX")), "First player wins\n");
}
TEST(BasicTests, test_85) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("--0----X-")), "Game in progress\n");
}
TEST(BasicTests, test_86) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("X-X0X--00")), "Game in progress\n");
}
TEST(BasicTests, test_87) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("00-0X-XX-")), "Game in progress\n");
}
TEST(BasicTests, test_88) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("X-X-XX000")), "Second player wins\n");
}
TEST(BasicTests, test_89) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("-X0------")), "Game in progress\n");
}
TEST(BasicTests, test_90) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("--XX---00")), "Game in progress\n");
}
TEST(BasicTests, test_91) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("0X--XX--0")), "Game in progress\n");
}
TEST(BasicTests, test_92) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("----X---0")), "Game in progress\n");
}
TEST(BasicTests, test_93) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("X0X---X0-")), "Game in progress\n");
}
TEST(BasicTests, test_94) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("00X-00-XX")), "Game in progress\n");
}
TEST(BasicTests, test_95) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("-X0------")), "Game in progress\n");
}
TEST(BasicTests, test_96) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("0X00X0XX-")), "First player wins\n");
}
TEST(BasicTests, test_97) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("X-0---X--")), "Game in progress\n");
}
TEST(BasicTests, test_98) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("X00XX00-X")), "First player wins\n");
}
TEST(BasicTests, test_99) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("-00X0-0XX")), "Second player wins\n");
}
TEST(BasicTests, test_100) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("XX--X-0-0")), "Game in progress\n");
}
TEST(BasicTests, test_101) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("0------0X")), "Game in progress\n");
}
TEST(BasicTests, test_102) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("0-00XXX--")), "Game in progress\n");
}
TEST(BasicTests, test_103) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("X-X-00X00")), "Game in progress\n");
}
TEST(BasicTests, test_104) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("-0000X-XX")), "Game in progress\n");
}
TEST(BasicTests, test_105) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("-X0X0X0X0")), "Second player wins\n");
}
TEST(BasicTests, test_106) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("---X-0---")), "Game in progress\n");
}
TEST(BasicTests, test_107) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("00-X--X0X")), "Game in progress\n");
}
TEST(BasicTests, test_108) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("X--------")), "Game in progress\n");
}
TEST(BasicTests, test_109) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("0-----XX-")), "Game in progress\n");
}
TEST(BasicTests, test_110) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("X0X0-XX0-")), "Game in progress\n");
}
TEST(BasicTests, test_111) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("X-0-X0XX0")), "Second player wins\n");
}
TEST(BasicTests, test_112) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("0XX0X-0-0")), "Second player wins\n");
}
TEST(BasicTests, test_113) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("0X00-XX0X")), "Game in progress\n");
}
TEST(BasicTests, test_114) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("---0-X-0X")), "Game in progress\n");
}
TEST(BasicTests, test_115) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("X-0X---0-")), "Game in progress\n");
}
TEST(BasicTests, test_116) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("----0X0-X")), "Game in progress\n");
}
TEST(BasicTests, test_117) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("XXX-X00-0")), "First player wins\n");
}
TEST(BasicTests, test_118) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("0X-0-00XX")), "Second player wins\n");
}
TEST(BasicTests, test_119) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("0000X0XXX")), "Second player wins\n");
}
TEST(BasicTests, test_120) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("0X-0X0XX0")), "First player wins\n");
}
TEST(BasicTests, test_121) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("X0000XX-X")), "Game in progress\n");
}
TEST(BasicTests, test_122) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("---X-----")), "Game in progress\n");
}
TEST(BasicTests, test_123) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("--------0")), "Game in progress\n");
}
TEST(BasicTests, test_124) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("-----X---")), "Game in progress\n");
}
TEST(BasicTests, test_125) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("-----0XX0")), "Game in progress\n");
}
TEST(BasicTests, test_126) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("0X-X-X0-0")), "Game in progress\n");
}
TEST(BasicTests, test_127) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("0X0--XX--")), "Game in progress\n");
}
TEST(BasicTests, test_128) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("---X---X0")), "Game in progress\n");
}
TEST(BasicTests, test_129) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("00-XXX-0X")), "First player wins\n");
}
TEST(BasicTests, test_130) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("X00XXX000")), "First player wins\n");
}
TEST(BasicTests, test_131) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("0XXXX0X00")), "First player wins\n");
}
TEST(BasicTests, test_132) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("0X0-XX-X0")), "First player wins\n");
}
TEST(BasicTests, test_133) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("0X0XXX0--")), "First player wins\n");
}
TEST(BasicTests, test_134) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("-0---X-X0")), "Game in progress\n");
}
TEST(BasicTests, test_135) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("00XXX000X")), "Draw\n");
}
TEST(BasicTests, test_136) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("0--X0-X--")), "Game in progress\n");
}
TEST(BasicTests, test_137) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("-0-0--X--")), "Game in progress\n");
}
TEST(BasicTests, test_138) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("---0----X")), "Game in progress\n");
}
TEST(BasicTests, test_139) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("---X0----")), "Game in progress\n");
}
TEST(BasicTests, test_140) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("-XX00-X--")), "Game in progress\n");
}
TEST(BasicTests, test_141) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("00X-X0X0X")), "First player wins\n");
}
TEST(BasicTests, test_142) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("--0--X0X-")), "Game in progress\n");
}
TEST(BasicTests, test_143) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("0XXX0000X")), "Draw\n");
}
TEST(BasicTests, test_144) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("0XXX0000X")), "Draw\n");
}
TEST(BasicTests, test_145) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("0--0XX0--")), "Second player wins\n");
}
TEST(BasicTests, test_146) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("-0-XX0XX0")), "Game in progress\n");
}
TEST(BasicTests, test_147) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("XX00-00-X")), "Game in progress\n");
}
TEST(BasicTests, test_148) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("0--X----X")), "Game in progress\n");
}
TEST(BasicTests, test_149) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("XXX00X00X")), "First player wins\n");
}
TEST(BasicTests, test_150) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("-000XX-XX")), "Game in progress\n");
}
TEST(BasicTests, test_151) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("-0X---0-X")), "Game in progress\n");
}
TEST(BasicTests, test_152) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("---X-X-00")), "Game in progress\n");
}
TEST(BasicTests, test_153) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("X00-0XX0X")), "Second player wins\n");
}
TEST(BasicTests, test_154) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("X00XX0X-0")), "First player wins\n");
}
TEST(BasicTests, test_155) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("0X--X00--")), "Game in progress\n");
}
TEST(BasicTests, test_156) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("0-000XX-X")), "Game in progress\n");
}
TEST(BasicTests, test_157) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("X--X----0")), "Game in progress\n");
}
TEST(BasicTests, test_158) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("----X----")), "Game in progress\n");
}
TEST(BasicTests, test_159) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("----X----")), "Game in progress\n");
}
TEST(BasicTests, test_160) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("X0XX-0-X0")), "Game in progress\n");
}
TEST(BasicTests, test_161) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("---X0----")), "Game in progress\n");
}
TEST(BasicTests, test_162) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("---0-----")), "Game in progress\n");
}
TEST(BasicTests, test_163) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("X00XX-0-X")), "First player wins\n");
}
TEST(BasicTests, test_164) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("0-XXX0X-0")), "First player wins\n");
}
TEST(BasicTests, test_165) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("X0X-X00-0")), "Game in progress\n");
}
TEST(BasicTests, test_166) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("-0--0X-X0")), "Game in progress\n");
}
TEST(BasicTests, test_167) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("0X--X0-X0")), "First player wins\n");
}
TEST(BasicTests, test_168) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("-0--X--0-")), "Game in progress\n");
}
TEST(BasicTests, test_169) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("X0-0--XX-")), "Game in progress\n");
}
TEST(BasicTests, test_170) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("X-X-----0")), "Game in progress\n");
}
TEST(BasicTests, test_171) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("0--0X---X")), "Game in progress\n");
}
TEST(BasicTests, test_172) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("X----X00-")), "Game in progress\n");
}
TEST(BasicTests, test_173) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("XXX0000X0")), "First player wins\n");
}
TEST(BasicTests, test_174) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("--X--0---")), "Game in progress\n");
}
TEST(BasicTests, test_175) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("00XX0X0XX")), "First player wins\n");
}
TEST(BasicTests, test_176) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("-X0XX0--0")), "Second player wins\n");
}
TEST(BasicTests, test_177) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("--XXX0-0-")), "Game in progress\n");
}
TEST(BasicTests, test_178) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("X--------")), "Game in progress\n");
}
TEST(BasicTests, test_179) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("X---0-0-X")), "Game in progress\n");
}
TEST(BasicTests, test_180) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("X--X----0")), "Game in progress\n");
}
TEST(BasicTests, test_181) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("0X-0-----")), "Game in progress\n");
}
TEST(BasicTests, test_182) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("----X0X0X")), "Game in progress\n");
}
TEST(BasicTests, test_183) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("X000X0XX-")), "Game in progress\n");
}
TEST(BasicTests, test_184) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("---X0-X00")), "Game in progress\n");
}
TEST(BasicTests, test_185) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("0------X-")), "Game in progress\n");
}
TEST(BasicTests, test_186) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("0XXX0XX00")), "Second player wins\n");
}
TEST(BasicTests, test_187) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("00-0XXX0X")), "Game in progress\n");
}
TEST(BasicTests, test_188) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("X-0X00X--")), "First player wins\n");
}
TEST(BasicTests, test_189) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("0XX0X0-0X")), "Game in progress\n");
}
TEST(BasicTests, test_190) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("------X--")), "Game in progress\n");
}
TEST(BasicTests, test_191) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("X-X0X0-0X")), "First player wins\n");
}
TEST(BasicTests, test_192) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("0000XXX0X")), "Second player wins\n");
}
TEST(BasicTests, test_193) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("-00X--X--")), "Game in progress\n");
}
TEST(BasicTests, test_194) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("-X---X0-0")), "Game in progress\n");
}
TEST(BasicTests, test_195) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("0--0-X-X-")), "Game in progress\n");
}
TEST(BasicTests, test_196) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("X0XXX0X00")), "First player wins\n");
}
TEST(BasicTests, test_197) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("---X-----")), "Game in progress\n");
}
TEST(BasicTests, test_198) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("XX-0-----")), "Game in progress\n");
}
TEST(BasicTests, test_199) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("XX0------")), "Game in progress\n");
}
TEST(BasicTests, test_200) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("--------0")), "Game in progress\n");
}
TEST(BasicTests, test_201) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("-X0--X-00")), "Game in progress\n");
}
TEST(BasicTests, test_202) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("X00XX-0X-")), "Game in progress\n");
}
TEST(BasicTests, test_203) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("00XX00-XX")), "Game in progress\n");
}
TEST(BasicTests, test_204) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("-X-X--00-")), "Game in progress\n");
}
TEST(BasicTests, test_205) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("X00X-X--0")), "Game in progress\n");
}
TEST(BasicTests, test_206) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("X00X---0-")), "Game in progress\n");
}
TEST(BasicTests, test_207) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("--0---XX0")), "Game in progress\n");
}
TEST(BasicTests, test_208) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("0-0X0XX--")), "Game in progress\n");
}
TEST(BasicTests, test_209) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("0--00X-X-")), "Game in progress\n");
}
TEST(BasicTests, test_210) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("-X------0")), "Game in progress\n");
}
TEST(BasicTests, test_211) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("-X-X-0X-0")), "Game in progress\n");
}
TEST(BasicTests, test_212) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("000X0XXX0")), "Second player wins\n");
}
TEST(BasicTests, test_213) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("X0--0--0X")), "Second player wins\n");
}
TEST(BasicTests, test_214) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("--X-0----")), "Game in progress\n");
}
TEST(BasicTests, test_215) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("--X-----0")), "Game in progress\n");
}
TEST(BasicTests, test_216) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("----X00--")), "Game in progress\n");
}
TEST(BasicTests, test_217) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("----00X--")), "Game in progress\n");
}
TEST(BasicTests, test_218) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("-----0--X")), "Game in progress\n");
}
TEST(BasicTests, test_219) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("---00XX-0")), "Game in progress\n");
}
TEST(BasicTests, test_220) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("X0X0-----")), "Game in progress\n");
}
TEST(BasicTests, test_221) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("----0---X")), "Game in progress\n");
}
TEST(BasicTests, test_222) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("--X0XX00-")), "Game in progress\n");
}
TEST(BasicTests, test_223) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("000XX0X-X")), "Second player wins\n");
}
TEST(BasicTests, test_224) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("X0--X0---")), "Game in progress\n");
}
TEST(BasicTests, test_225) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("-XX0--0-X")), "Game in progress\n");
}
TEST(BasicTests, test_226) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("000XX0X0X")), "Second player wins\n");
}
TEST(BasicTests, test_227) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("-0X---0--")), "Game in progress\n");
}
TEST(BasicTests, test_228) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("0X--X--0-")), "Game in progress\n");
}
TEST(BasicTests, test_229) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("-X0--X---")), "Game in progress\n");
}
TEST(BasicTests, test_230) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("X------0X")), "Game in progress\n");
}
TEST(BasicTests, test_231) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("X0X0-00-X")), "Game in progress\n");
}
TEST(BasicTests, test_232) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("-------0-")), "Game in progress\n");
}
TEST(BasicTests, test_233) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("---X-----")), "Game in progress\n");
}
TEST(BasicTests, test_234) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("X0-XX0-00")), "Game in progress\n");
}
TEST(BasicTests, test_235) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("-X---00-X")), "Game in progress\n");
}
TEST(BasicTests, test_236) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("--00-X---")), "Game in progress\n");
}
TEST(BasicTests, test_237) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("----X--0X")), "Game in progress\n");
}
TEST(BasicTests, test_238) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("XXX00X00X")), "First player wins\n");
}
TEST(BasicTests, test_239) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("-----X---")), "Game in progress\n");
}
TEST(BasicTests, test_240) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("---X--0--")), "Game in progress\n");
}
TEST(BasicTests, test_241) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("-0-XX0-0-")), "Game in progress\n");
}
TEST(BasicTests, test_242) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("-X---0---")), "Game in progress\n");
}
TEST(BasicTests, test_243) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("00-XXX0X0")), "First player wins\n");
}
TEST(BasicTests, test_244) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("X--00X0--")), "Game in progress\n");
}
TEST(BasicTests, test_245) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("0-X0XXX-0")), "First player wins\n");
}
TEST(BasicTests, test_246) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("-----0--X")), "Game in progress\n");
}
TEST(BasicTests, test_247) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("00X-0X--X")), "First player wins\n");
}
TEST(BasicTests, test_248) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("--XX0--0-")), "Game in progress\n");
}
TEST(BasicTests, test_249) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("-X0XXX0-0")), "First player wins\n");
}
TEST(BasicTests, test_250) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("------0-X")), "Game in progress\n");
}
TEST(BasicTests, test_251) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("0X0XXX-00")), "First player wins\n");
}
TEST(BasicTests, test_252) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("XX-0---0-")), "Game in progress\n");
}
TEST(BasicTests, test_253) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("-0-X-X---")), "Game in progress\n");
}
TEST(BasicTests, test_254) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("-0-0X---X")), "Game in progress\n");
}
TEST(BasicTests, test_255) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("X0--0--X-")), "Game in progress\n");
}
TEST(BasicTests, test_256) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("0-X0XX00X")), "Second player wins\n");
}
TEST(BasicTests, test_257) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("-XX0000-X")), "Second player wins\n");
}
TEST(BasicTests, test_258) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("XX0X-0X00")), "First player wins\n");
}
TEST(BasicTests, test_259) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("0XXX00X00")), "Second player wins\n");
}
TEST(BasicTests, test_260) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("X--------")), "Game in progress\n");
}
TEST(BasicTests, test_261) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("XXX00X00-")), "First player wins\n");
}
TEST(BasicTests, test_262) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("0XX0XX-00")), "Game in progress\n");
}
TEST(BasicTests, test_263) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("0X-XX--00")), "Game in progress\n");
}
TEST(BasicTests, test_264) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("0XXX0000X")), "Draw\n");
}
TEST(BasicTests, test_265) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("X-X--0--0")), "Game in progress\n");
}
TEST(BasicTests, test_266) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("X--X--00-")), "Game in progress\n");
}
TEST(BasicTests, test_267) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("-0X-XXX00")), "First player wins\n");
}
TEST(BasicTests, test_268) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("X0X-00--X")), "Game in progress\n");
}
TEST(BasicTests, test_269) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("--00X-X0X")), "Game in progress\n");
}
TEST(BasicTests, test_270) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("0X0X0X00X")), "Second player wins\n");
}
TEST(BasicTests, test_271) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("-------X0")), "Game in progress\n");
}
TEST(BasicTests, test_272) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("X0-0-X0X-")), "Game in progress\n");
}
TEST(BasicTests, test_273) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("XX000X0-X")), "Second player wins\n");
}
TEST(BasicTests, test_274) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("-XX0-0X0-")), "Game in progress\n");
}
TEST(BasicTests, test_275) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("-0-X----X")), "Game in progress\n");
}
TEST(BasicTests, test_276) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("000X---XX")), "Second player wins\n");
}
TEST(BasicTests, test_277) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("XX--0X-0-")), "Game in progress\n");
}
TEST(BasicTests, test_278) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("--------0")), "Game in progress\n");
}
TEST(BasicTests, test_279) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("0X--0XX00")), "Second player wins\n");
}
TEST(BasicTests, test_280) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("X--0-----")), "Game in progress\n");
}
TEST(BasicTests, test_281) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("-X0XX--00")), "Game in progress\n");
}
TEST(BasicTests, test_282) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("-0-0--X-X")), "Game in progress\n");
}
TEST(BasicTests, test_283) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("X0X0XX-00")), "Game in progress\n");
}
TEST(BasicTests, test_284) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("X--------")), "Game in progress\n");
}
TEST(BasicTests, test_285) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("--0-XX--0")), "Game in progress\n");
}
TEST(BasicTests, test_286) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("-0XXX-00-")), "Game in progress\n");
}
TEST(BasicTests, test_287) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("-X0X--0-0")), "Game in progress\n");
}
TEST(BasicTests, test_288) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("--------0")), "Game in progress\n");
}
TEST(BasicTests, test_289) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("----X----")), "Game in progress\n");
}
TEST(BasicTests, test_290) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("0X-00XXX0")), "Second player wins\n");
}
TEST(BasicTests, test_291) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("-X0----X0")), "Game in progress\n");
}
TEST(BasicTests, test_292) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("----X---0")), "Game in progress\n");
}
TEST(BasicTests, test_293) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("-X-------")), "Game in progress\n");
}
TEST(BasicTests, test_294) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("0-0-0X0XX")), "Second player wins\n");
}
TEST(BasicTests, test_295) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("XXX0--0-0")), "First player wins\n");
}
TEST(BasicTests, test_296) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("0XX0X---0")), "Game in progress\n");
}
TEST(BasicTests, test_297) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("-X00-X0-X")), "Game in progress\n");
}
TEST(BasicTests, test_298) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("0XX-00XX0")), "Second player wins\n");
}
TEST(BasicTests, test_299) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("0X-X-000X")), "Game in progress\n");
}
TEST(BasicTests, test_300) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("00XX-0XX0")), "Game in progress\n");
}
TEST(BasicTests, test_301) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("-------0-")), "Game in progress\n");
}
TEST(BasicTests, test_302) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("00---0X-X")), "Game in progress\n");
}
TEST(BasicTests, test_303) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("0-----X0X")), "Game in progress\n");
}
TEST(BasicTests, test_304) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("X-X-0----")), "Game in progress\n");
}
TEST(BasicTests, test_305) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("X0XXX000-")), "Game in progress\n");
}
TEST(BasicTests, test_306) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("--X--0---")), "Game in progress\n");
}
TEST(BasicTests, test_307) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("0------0X")), "Game in progress\n");
}
TEST(BasicTests, test_308) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("X-0X000XX")), "Second player wins\n");
}
TEST(BasicTests, test_309) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("000X0X-X-")), "Second player wins\n");
}
TEST(BasicTests, test_310) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("----X----")), "Game in progress\n");
}
TEST(BasicTests, test_311) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("XXX0000-X")), "First player wins\n");
}
TEST(BasicTests, test_312) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("0X0X-X---")), "Game in progress\n");
}
TEST(BasicTests, test_313) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("-----00-X")), "Game in progress\n");
}
TEST(BasicTests, test_314) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("XXX--00X0")), "First player wins\n");
}
TEST(BasicTests, test_315) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("--X-0X-X0")), "Game in progress\n");
}
TEST(BasicTests, test_316) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("X-X-000X0")), "Game in progress\n");
}
TEST(BasicTests, test_317) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("0-0-X-0XX")), "Game in progress\n");
}
TEST(BasicTests, test_318) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("X0---0X--")), "Game in progress\n");
}
TEST(BasicTests, test_319) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("0X-0X00XX")), "Second player wins\n");
}
TEST(BasicTests, test_320) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("X-X0----0")), "Game in progress\n");
}
TEST(BasicTests, test_321) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("-XX--0-0-")), "Game in progress\n");
}
TEST(BasicTests, test_322) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("---000-XX")), "Second player wins\n");
}
TEST(BasicTests, test_323) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("X-XX0--0-")), "Game in progress\n");
}
TEST(BasicTests, test_324) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("----X----")), "Game in progress\n");
}
TEST(BasicTests, test_325) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("X0X00X0-X")), "First player wins\n");
}
TEST(BasicTests, test_326) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("-XX0--0X0")), "Game in progress\n");
}
TEST(BasicTests, test_327) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("0--X0XX-0")), "Second player wins\n");
}
TEST(BasicTests, test_328) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("X---0---X")), "Game in progress\n");
}
TEST(BasicTests, test_329) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("-0-X-00X-")), "Game in progress\n");
}
TEST(BasicTests, test_330) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("-XXX-000X")), "Game in progress\n");
}
TEST(BasicTests, test_331) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("---X---0-")), "Game in progress\n");
}
TEST(BasicTests, test_332) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("-------X-")), "Game in progress\n");
}
TEST(BasicTests, test_333) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("--0-X----")), "Game in progress\n");
}
TEST(BasicTests, test_334) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("X0-X-X-0-")), "Game in progress\n");
}
TEST(BasicTests, test_335) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("XX-X0000X")), "Game in progress\n");
}
TEST(BasicTests, test_336) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("X0X0-X0--")), "Game in progress\n");
}
TEST(BasicTests, test_337) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("X---0---X")), "Game in progress\n");
}
TEST(BasicTests, test_338) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("0--0X-XX-")), "Game in progress\n");
}
TEST(BasicTests, test_339) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("-0---0--X")), "Game in progress\n");
}
TEST(BasicTests, test_340) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("-00XXX0X0")), "First player wins\n");
}
TEST(BasicTests, test_341) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("0--XX---0")), "Game in progress\n");
}
TEST(BasicTests, test_342) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("--------0")), "Game in progress\n");
}
TEST(BasicTests, test_343) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("---X-----")), "Game in progress\n");
}
TEST(BasicTests, test_344) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("----X0---")), "Game in progress\n");
}
TEST(BasicTests, test_345) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("-0--X0-X-")), "Game in progress\n");
}
TEST(BasicTests, test_346) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("X-X-0----")), "Game in progress\n");
}
TEST(BasicTests, test_347) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("-X--0----")), "Game in progress\n");
}
TEST(BasicTests, test_348) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("X00--X-X-")), "Game in progress\n");
}
TEST(BasicTests, test_349) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("X---X0-0-")), "Game in progress\n");
}
TEST(BasicTests, test_350) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("0XX0-00XX")), "Second player wins\n");
}
TEST(BasicTests, test_351) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("X--------")), "Game in progress\n");
}
TEST(BasicTests, test_352) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("X-X0-0---")), "Game in progress\n");
}
TEST(BasicTests, test_353) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("0-X------")), "Game in progress\n");
}
TEST(BasicTests, test_354) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("XX-----0-")), "Game in progress\n");
}
TEST(BasicTests, test_355) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("-X00XX0X0")), "First player wins\n");
}
TEST(BasicTests, test_356) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("0-00X-X--")), "Game in progress\n");
}
TEST(BasicTests, test_357) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("--X-----0")), "Game in progress\n");
}
TEST(BasicTests, test_358) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("-X-0---X-")), "Game in progress\n");
}
TEST(BasicTests, test_359) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("00X-X-0-X")), "Game in progress\n");
}
TEST(BasicTests, test_360) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("0-XXX-00-")), "Game in progress\n");
}
TEST(BasicTests, test_361) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("XX0X000XX")), "Second player wins\n");
}
TEST(BasicTests, test_362) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("X00X00-XX")), "Game in progress\n");
}
TEST(BasicTests, test_363) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("-0-XX--0-")), "Game in progress\n");
}
TEST(BasicTests, test_364) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("-0-----X-")), "Game in progress\n");
}
TEST(BasicTests, test_365) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("X0-0----X")), "Game in progress\n");
}
TEST(BasicTests, test_366) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("XX00X00XX")), "First player wins\n");
}
TEST(BasicTests, test_367) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("0-X-00X0X")), "Game in progress\n");
}
TEST(BasicTests, test_368) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("0----X-0X")), "Game in progress\n");
}
TEST(BasicTests, test_369) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("0-X---0--")), "Game in progress\n");
}
TEST(BasicTests, test_370) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("0---0-XX-")), "Game in progress\n");
}
TEST(BasicTests, test_371) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("X00X--0--")), "Game in progress\n");
}
TEST(BasicTests, test_372) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("0XX000XXX")), "Second player wins\n");
}
TEST(BasicTests, test_373) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("X-X0X--0-")), "Game in progress\n");
}
TEST(BasicTests, test_374) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("X0-0----X")), "Game in progress\n");
}
TEST(BasicTests, test_375) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("---X-0X0X")), "Game in progress\n");
}
TEST(BasicTests, test_376) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("000X0XX-X")), "Second player wins\n");
}
TEST(BasicTests, test_377) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("00--XXX0X")), "Game in progress\n");
}
TEST(BasicTests, test_378) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("--X-----0")), "Game in progress\n");
}
TEST(BasicTests, test_379) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("--X------")), "Game in progress\n");
}
TEST(BasicTests, test_380) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("X--X0----")), "Game in progress\n");
}
TEST(BasicTests, test_381) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("--X------")), "Game in progress\n");
}
TEST(BasicTests, test_382) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("0XXX000XX")), "Draw\n");
}
TEST(BasicTests, test_383) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("0--X---0X")), "Game in progress\n");
}
TEST(BasicTests, test_384) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("X-------0")), "Game in progress\n");
}
TEST(BasicTests, test_385) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("XX0XX-00-")), "Game in progress\n");
}
TEST(BasicTests, test_386) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("00X-X--0X")), "Game in progress\n");
}
TEST(BasicTests, test_387) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("X--X-X000")), "Second player wins\n");
}
TEST(BasicTests, test_388) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("0X0XXX000")), "First player wins\n");
}
TEST(BasicTests, test_389) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("XX00X00XX")), "First player wins\n");
}
TEST(BasicTests, test_390) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("----X-0--")), "Game in progress\n");
}
TEST(BasicTests, test_391) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("-X---X--0")), "Game in progress\n");
}
TEST(BasicTests, test_392) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("X0X-00X0X")), "Second player wins\n");
}
TEST(BasicTests, test_393) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("0X0XX00XX")), "First player wins\n");
}
TEST(BasicTests, test_394) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("----X----")), "Game in progress\n");
}
TEST(BasicTests, test_395) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("-0XX-00X-")), "Game in progress\n");
}
TEST(BasicTests, test_396) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("---X-00--")), "Game in progress\n");
}
TEST(BasicTests, test_397) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("-XX---0--")), "Game in progress\n");
}
TEST(BasicTests, test_398) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("--X-----0")), "Game in progress\n");
}
TEST(BasicTests, test_399) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("------0--")), "Game in progress\n");
}
TEST(BasicTests, test_400) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("----0----")), "Game in progress\n");
}
TEST(BasicTests, test_401) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("-0---X---")), "Game in progress\n");
}
TEST(BasicTests, test_402) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("X00000XXX")), "Second player wins\n");
}
TEST(BasicTests, test_403) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("00XX0-0XX")), "Game in progress\n");
}
TEST(BasicTests, test_404) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("----X---0")), "Game in progress\n");
}
TEST(BasicTests, test_405) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("0-X-0-X--")), "Game in progress\n");
}
TEST(BasicTests, test_406) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("--X0--0--")), "Game in progress\n");
}
TEST(BasicTests, test_407) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("X0X0X0X0X")), "First player wins\n");
}
TEST(BasicTests, test_408) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("---X-0--X")), "Game in progress\n");
}
TEST(BasicTests, test_409) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("0-X-0X0--")), "Game in progress\n");
}
TEST(BasicTests, test_410) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("----X-0-0")), "Game in progress\n");
}
TEST(BasicTests, test_411) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("X00XX0-0X")), "First player wins\n");
}
TEST(BasicTests, test_412) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("-0-----0X")), "Game in progress\n");
}
TEST(BasicTests, test_413) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("---X0----")), "Game in progress\n");
}
TEST(BasicTests, test_414) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("0X00XXX0-")), "Game in progress\n");
}
TEST(BasicTests, test_415) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("00XXX---0")), "Game in progress\n");
}
TEST(BasicTests, test_416) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("00---X-X0")), "Game in progress\n");
}
TEST(BasicTests, test_417) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("----X----")), "Game in progress\n");
}
TEST(BasicTests, test_418) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("-0-0XX-X0")), "Game in progress\n");
}
TEST(BasicTests, test_419) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("-XX0XX-00")), "Game in progress\n");
}
TEST(BasicTests, test_420) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("XX0XX0X00")), "First player wins\n");
}
TEST(BasicTests, test_421) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("-X-X-0-00")), "Game in progress\n");
}
TEST(BasicTests, test_422) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("-XX0X00X0")), "First player wins\n");
}
TEST(BasicTests, test_423) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("--0X-----")), "Game in progress\n");
}
TEST(BasicTests, test_424) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("-----X-0-")), "Game in progress\n");
}
TEST(BasicTests, test_425) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("00X-X00XX")), "Game in progress\n");
}
TEST(BasicTests, test_426) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("XX0000XX0")), "Second player wins\n");
}
TEST(BasicTests, test_427) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("X-X0-0X0X")), "Game in progress\n");
}
TEST(BasicTests, test_428) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("----0----")), "Game in progress\n");
}
TEST(BasicTests, test_429) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("--0------")), "Game in progress\n");
}
TEST(BasicTests, test_430) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("---XX0-0-")), "Game in progress\n");
}
TEST(BasicTests, test_431) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("X---X00X0")), "Game in progress\n");
}
TEST(BasicTests, test_432) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("-0X000XXX")), "Second player wins\n");
}
TEST(BasicTests, test_433) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("X0000XXX-")), "Game in progress\n");
}
TEST(BasicTests, test_434) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("-0-------")), "Game in progress\n");
}
TEST(BasicTests, test_435) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("-X-----0-")), "Game in progress\n");
}
TEST(BasicTests, test_436) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("X---X-00-")), "Game in progress\n");
}
TEST(BasicTests, test_437) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("--0------")), "Game in progress\n");
}
TEST(BasicTests, test_438) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("0--XX--0-")), "Game in progress\n");
}
TEST(BasicTests, test_439) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("0XXXXX000")), "First player wins\n");
}
TEST(BasicTests, test_440) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("0-----XX-")), "Game in progress\n");
}
TEST(BasicTests, test_441) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("00--0XXXX")), "First player wins\n");
}
TEST(BasicTests, test_442) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("0X000XX-X")), "Game in progress\n");
}
TEST(BasicTests, test_443) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("----0----")), "Game in progress\n");
}
TEST(BasicTests, test_444) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("0X0X-0X0X")), "Game in progress\n");
}
TEST(BasicTests, test_445) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("X-XX-000X")), "Game in progress\n");
}
TEST(BasicTests, test_446) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("-0--X----")), "Game in progress\n");
}
TEST(BasicTests, test_447) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("---X-----")), "Game in progress\n");
}
TEST(BasicTests, test_448) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("---X----0")), "Game in progress\n");
}
TEST(BasicTests, test_449) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("-----X-00")), "Game in progress\n");
}
TEST(BasicTests, test_450) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("XX00--X0-")), "Game in progress\n");
}
TEST(BasicTests, test_451) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("0X---X--0")), "Game in progress\n");
}
TEST(BasicTests, test_452) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("-0-------")), "Game in progress\n");
}
TEST(BasicTests, test_453) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("-XX0-X0-0")), "Game in progress\n");
}
TEST(BasicTests, test_454) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("X00-X0-X0")), "Second player wins\n");
}
TEST(BasicTests, test_455) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("0X000XX-X")), "Game in progress\n");
}
TEST(BasicTests, test_456) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("---XX--0-")), "Game in progress\n");
}
TEST(BasicTests, test_457) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("-X0-0-X--")), "Game in progress\n");
}
TEST(BasicTests, test_458) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("--0-X00-X")), "Game in progress\n");
}
TEST(BasicTests, test_459) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("--X0-----")), "Game in progress\n");
}
TEST(BasicTests, test_460) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("0XXX-0-0X")), "Game in progress\n");
}
TEST(BasicTests, test_461) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("X0XX00-0-")), "Second player wins\n");
}
TEST(BasicTests, test_462) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("X-X000XX-")), "Second player wins\n");
}
TEST(BasicTests, test_463) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("-X-0---X-")), "Game in progress\n");
}
TEST(BasicTests, test_464) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("X0XXX00X0")), "Draw\n");
}
TEST(BasicTests, test_465) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("---X----0")), "Game in progress\n");
}
TEST(BasicTests, test_466) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("XX0X-0--0")), "Second player wins\n");
}
TEST(BasicTests, test_467) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("X-0X-X-00")), "Game in progress\n");
}
TEST(BasicTests, test_468) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("X0X0X0X0X")), "First player wins\n");
}
TEST(BasicTests, test_469) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("X----X0X0")), "Game in progress\n");
}
TEST(BasicTests, test_470) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("-------X-")), "Game in progress\n");
}
TEST(BasicTests, test_471) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("0----X---")), "Game in progress\n");
}
TEST(BasicTests, test_472) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("0XX000X0X")), "Second player wins\n");
}
TEST(BasicTests, test_473) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("X--X0---0")), "Game in progress\n");
}
TEST(BasicTests, test_474) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("-X---0---")), "Game in progress\n");
}
TEST(BasicTests, test_475) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("-X0------")), "Game in progress\n");
}
TEST(BasicTests, test_476) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("0-0-X---X")), "Game in progress\n");
}
TEST(BasicTests, test_477) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("0-0-----X")), "Game in progress\n");
}
TEST(BasicTests, test_478) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("00-0XXXX0")), "Game in progress\n");
}
TEST(BasicTests, test_479) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("X0X-X0X00")), "First player wins\n");
}
TEST(BasicTests, test_480) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("0X-X---00")), "Game in progress\n");
}
TEST(BasicTests, test_481) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("X0-X-00X0")), "Game in progress\n");
}
TEST(BasicTests, test_482) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("---0X----")), "Game in progress\n");
}
TEST(BasicTests, test_483) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("-XXX---00")), "Game in progress\n");
}
TEST(BasicTests, test_484) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("XXX0000X0")), "First player wins\n");
}
TEST(BasicTests, test_485) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("00XXX0XX0")), "First player wins\n");
}
TEST(BasicTests, test_486) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("X--X0--00")), "Game in progress\n");
}
TEST(BasicTests, test_487) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("X0-X0XX00")), "First player wins\n");
}
TEST(BasicTests, test_488) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("---X0----")), "Game in progress\n");
}
TEST(BasicTests, test_489) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("------X--")), "Game in progress\n");
}
TEST(BasicTests, test_490) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("-000X-X-X")), "Game in progress\n");
}
TEST(BasicTests, test_491) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("-0XX----0")), "Game in progress\n");
}
TEST(BasicTests, test_492) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("-X-0X----")), "Game in progress\n");
}
TEST(BasicTests, test_493) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("-------0-")), "Game in progress\n");
}
TEST(BasicTests, test_494) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("0X00-X0XX")), "Second player wins\n");
}
TEST(BasicTests, test_495) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("-0---X---")), "Game in progress\n");
}
TEST(BasicTests, test_496) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("0X--0XX00")), "Second player wins\n");
}
TEST(BasicTests, test_497) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("0---X----")), "Game in progress\n");
}
TEST(BasicTests, test_498) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("--X---0--")), "Game in progress\n");
}
TEST(BasicTests, test_499) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("X00--0--X")), "Game in progress\n");
}
TEST(BasicTests, test_500) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("-X0-X--0-")), "Game in progress\n");
}
TEST(BasicTests, test_501) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("0---0X0XX")), "Game in progress\n");
}
TEST(BasicTests, test_502) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("0X-0--X--")), "Game in progress\n");
}
TEST(BasicTests, test_503) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("0-X0--0-X")), "Second player wins\n");
}
TEST(BasicTests, test_504) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("X0XX0X-00")), "Second player wins\n");
}
TEST(BasicTests, test_505) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("X0X0X0XX0")), "First player wins\n");
}
TEST(BasicTests, test_506) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("0-----X--")), "Game in progress\n");
}
TEST(BasicTests, test_507) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("--X00---X")), "Game in progress\n");
}
TEST(BasicTests, test_508) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("-----X0X-")), "Game in progress\n");
}
TEST(BasicTests, test_509) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("-X---X00-")), "Game in progress\n");
}
TEST(BasicTests, test_510) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("X---X---0")), "Game in progress\n");
}
TEST(BasicTests, test_511) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("---X-----")), "Game in progress\n");
}
TEST(BasicTests, test_512) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("0XX--0-X-")), "Game in progress\n");
}
TEST(BasicTests, test_513) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("----0-0X-")), "Game in progress\n");
}
TEST(BasicTests, test_514) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("0XXX0000X")), "Draw\n");
}
TEST(BasicTests, test_515) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("0-X--00-X")), "Game in progress\n");
}
TEST(BasicTests, test_516) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("XXX-000-X")), "First player wins\n");
}
TEST(BasicTests, test_517) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("X-0X--0-0")), "Game in progress\n");
}
TEST(BasicTests, test_518) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("XX000X0X0")), "Second player wins\n");
}
TEST(BasicTests, test_519) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("00X-0X0X-")), "Game in progress\n");
}
TEST(BasicTests, test_520) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("00X0X-XX-")), "First player wins\n");
}
TEST(BasicTests, test_521) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("----X---0")), "Game in progress\n");
}
TEST(BasicTests, test_522) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("X-X0000XX")), "Second player wins\n");
}
TEST(BasicTests, test_523) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("---0-X0--")), "Game in progress\n");
}
TEST(BasicTests, test_524) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("---X0--0X")), "Game in progress\n");
}
TEST(BasicTests, test_525) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("0X00XX0X0")), "Second player wins\n");
}
TEST(BasicTests, test_526) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("000X00XXX")), "Second player wins\n");
}
TEST(BasicTests, test_527) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("-0X-0-X0-")), "Second player wins\n");
}
TEST(BasicTests, test_528) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("X-0-X0-0X")), "First player wins\n");
}
TEST(BasicTests, test_529) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("X0-XX0--0")), "Game in progress\n");
}
TEST(BasicTests, test_530) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("--00X-XX-")), "Game in progress\n");
}
TEST(BasicTests, test_531) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("00-XX0X0X")), "Game in progress\n");
}
TEST(BasicTests, test_532) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("--0---0X-")), "Game in progress\n");
}
TEST(BasicTests, test_533) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("0X0-X-0--")), "Game in progress\n");
}
TEST(BasicTests, test_534) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("X00X-0X--")), "First player wins\n");
}
TEST(BasicTests, test_535) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("--0X-0X--")), "Game in progress\n");
}
TEST(BasicTests, test_536) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("-X-X----0")), "Game in progress\n");
}
TEST(BasicTests, test_537) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("000X0--XX")), "Second player wins\n");
}
TEST(BasicTests, test_538) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("X00X0-XX0")), "First player wins\n");
}
TEST(BasicTests, test_539) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("---0-----")), "Game in progress\n");
}
TEST(BasicTests, test_540) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("-----0---")), "Game in progress\n");
}
TEST(BasicTests, test_541) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("--0X0----")), "Game in progress\n");
}
TEST(BasicTests, test_542) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("-0---X--X")), "Game in progress\n");
}
TEST(BasicTests, test_543) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("X000XXX00")), "Draw\n");
}
TEST(BasicTests, test_544) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("X--0-0XX0")), "Game in progress\n");
}
TEST(BasicTests, test_545) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("-0X0X0-XX")), "Game in progress\n");
}
TEST(BasicTests, test_546) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("0X0XXX00X")), "First player wins\n");
}
TEST(BasicTests, test_547) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("0X-XX0---")), "Game in progress\n");
}
TEST(BasicTests, test_548) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("--0------")), "Game in progress\n");
}
TEST(BasicTests, test_549) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("---X--0--")), "Game in progress\n");
}
TEST(BasicTests, test_550) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("----X----")), "Game in progress\n");
}
TEST(BasicTests, test_551) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("-0---X---")), "Game in progress\n");
}
TEST(BasicTests, test_552) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("0X--X-0-X")), "Game in progress\n");
}
TEST(BasicTests, test_553) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("-0--X-X-0")), "Game in progress\n");
}
TEST(BasicTests, test_554) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("--0X----X")), "Game in progress\n");
}
TEST(BasicTests, test_555) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("0--------")), "Game in progress\n");
}
TEST(BasicTests, test_556) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("-----X---")), "Game in progress\n");
}
TEST(BasicTests, test_557) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("-0X0XX-X0")), "Game in progress\n");
}
TEST(BasicTests, test_558) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("X----0---")), "Game in progress\n");
}
TEST(BasicTests, test_559) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("-----X---")), "Game in progress\n");
}
TEST(BasicTests, test_560) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("00---X0XX")), "Game in progress\n");
}
TEST(BasicTests, test_561) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("00X0XX00X")), "Second player wins\n");
}
TEST(BasicTests, test_562) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("----X----")), "Game in progress\n");
}
TEST(BasicTests, test_563) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("XX0-0-0X-")), "Second player wins\n");
}
TEST(BasicTests, test_564) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("XX00XXX00")), "Draw\n");
}
TEST(BasicTests, test_565) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("--X-0--X0")), "Game in progress\n");
}
TEST(BasicTests, test_566) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("00-0X0XXX")), "First player wins\n");
}
TEST(BasicTests, test_567) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("0X0X000XX")), "Second player wins\n");
}
TEST(BasicTests, test_568) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("X0---XX00")), "Game in progress\n");
}
TEST(BasicTests, test_569) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("X-X-0----")), "Game in progress\n");
}
TEST(BasicTests, test_570) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("X00X0XX0X")), "First player wins\n");
}
TEST(BasicTests, test_571) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("X--X-00--")), "Game in progress\n");
}
TEST(BasicTests, test_572) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("-XX-X-00-")), "Game in progress\n");
}
TEST(BasicTests, test_573) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("-----X---")), "Game in progress\n");
}
TEST(BasicTests, test_574) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("00XXX-X00")), "First player wins\n");
}
TEST(BasicTests, test_575) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("------X--")), "Game in progress\n");
}
TEST(BasicTests, test_576) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("X00-XXX-0")), "Game in progress\n");
}
TEST(BasicTests, test_577) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("0----X--0")), "Game in progress\n");
}
TEST(BasicTests, test_578) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("0X00XX-0X")), "Game in progress\n");
}
TEST(BasicTests, test_579) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("X--------")), "Game in progress\n");
}
TEST(BasicTests, test_580) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("-0-X---0X")), "Game in progress\n");
}
TEST(BasicTests, test_581) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("-0----X--")), "Game in progress\n");
}
TEST(BasicTests, test_582) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("XXX0--X00")), "First player wins\n");
}
TEST(BasicTests, test_583) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("-0--X----")), "Game in progress\n");
}
TEST(BasicTests, test_584) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("-X0-X-0-X")), "Game in progress\n");
}
TEST(BasicTests, test_585) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("-0X--X0X-")), "Game in progress\n");
}
TEST(BasicTests, test_586) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("X-------0")), "Game in progress\n");
}
TEST(BasicTests, test_587) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("000X-X-X-")), "Second player wins\n");
}
TEST(BasicTests, test_588) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("X00---X0-")), "Game in progress\n");
}
TEST(BasicTests, test_589) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("XX00XX0X0")), "First player wins\n");
}
TEST(BasicTests, test_590) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("-0------X")), "Game in progress\n");
}
TEST(BasicTests, test_591) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("-X00--X0X")), "Game in progress\n");
}
TEST(BasicTests, test_592) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("X0-X0X0-0")), "Game in progress\n");
}
TEST(BasicTests, test_593) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("--00-XX0-")), "Game in progress\n");
}
TEST(BasicTests, test_594) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("---0X----")), "Game in progress\n");
}
TEST(BasicTests, test_595) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("0XX0--00X")), "Second player wins\n");
}
TEST(BasicTests, test_596) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("XX-000XX0")), "Second player wins\n");
}
TEST(BasicTests, test_597) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("0-XX0X-0X")), "First player wins\n");
}
TEST(BasicTests, test_598) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("X-----0--")), "Game in progress\n");
}
TEST(BasicTests, test_599) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("-0---XX0X")), "Game in progress\n");
}
TEST(BasicTests, test_600) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("X0--00-XX")), "Game in progress\n");
}
TEST(BasicTests, test_601) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("X-----0--")), "Game in progress\n");
}
TEST(BasicTests, test_602) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("0-X-X-X0-")), "First player wins\n");
}
TEST(BasicTests, test_603) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("-----0---")), "Game in progress\n");
}
TEST(BasicTests, test_604) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("0XX0X000X")), "Second player wins\n");
}
TEST(BasicTests, test_605) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("------X--")), "Game in progress\n");
}
TEST(BasicTests, test_606) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("0-0X---XX")), "Game in progress\n");
}
TEST(BasicTests, test_607) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("-X0-X--0-")), "Game in progress\n");
}
TEST(BasicTests, test_608) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("X--0-0--X")), "Game in progress\n");
}
TEST(BasicTests, test_609) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("--X--00X0")), "Game in progress\n");
}
TEST(BasicTests, test_610) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("X00X0X0--")), "Second player wins\n");
}
TEST(BasicTests, test_611) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("XX0000XX-")), "Second player wins\n");
}
TEST(BasicTests, test_612) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("X00X0XX0X")), "First player wins\n");
}
TEST(BasicTests, test_613) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("-----0X--")), "Game in progress\n");
}
TEST(BasicTests, test_614) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("X00X0XXX0")), "First player wins\n");
}
TEST(BasicTests, test_615) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("XX-X0X000")), "Second player wins\n");
}
TEST(BasicTests, test_616) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("X--0-----")), "Game in progress\n");
}
TEST(BasicTests, test_617) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("-0-XX---0")), "Game in progress\n");
}
TEST(BasicTests, test_618) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("0XX00X-0X")), "First player wins\n");
}
TEST(BasicTests, test_619) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("X00XX0X00")), "First player wins\n");
}
TEST(BasicTests, test_620) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("---0-----")), "Game in progress\n");
}
TEST(BasicTests, test_621) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("--00X0X0X")), "Game in progress\n");
}
TEST(BasicTests, test_622) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("X-0X00X0X")), "First player wins\n");
}
TEST(BasicTests, test_623) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("---XX-00-")), "Game in progress\n");
}
TEST(BasicTests, test_624) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("X-00-X-X0")), "Game in progress\n");
}
TEST(BasicTests, test_625) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("XX00-----")), "Game in progress\n");
}
TEST(BasicTests, test_626) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("XX0X-0--0")), "Second player wins\n");
}
TEST(BasicTests, test_627) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("--00XX--0")), "Game in progress\n");
}
TEST(BasicTests, test_628) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("0XX0X-0X0")), "Second player wins\n");
}
TEST(BasicTests, test_629) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("--X-0X--0")), "Game in progress\n");
}
TEST(BasicTests, test_630) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("--X0-X-0-")), "Game in progress\n");
}
TEST(BasicTests, test_631) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("00-XXXX00")), "First player wins\n");
}
TEST(BasicTests, test_632) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("000X0X0XX")), "Second player wins\n");
}
TEST(BasicTests, test_633) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("X0X0-00X-")), "Game in progress\n");
}
TEST(BasicTests, test_634) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("--X0X0X--")), "First player wins\n");
}
TEST(BasicTests, test_635) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("--------X")), "Game in progress\n");
}
TEST(BasicTests, test_636) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("00--XX00X")), "Game in progress\n");
}
TEST(BasicTests, test_637) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("0--------")), "Game in progress\n");
}
TEST(BasicTests, test_638) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("X000-XX0X")), "Game in progress\n");
}
TEST(BasicTests, test_639) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("XX00X0XX0")), "First player wins\n");
}
TEST(BasicTests, test_640) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("-0-0-X--X")), "Game in progress\n");
}
TEST(BasicTests, test_641) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("-0--X----")), "Game in progress\n");
}
TEST(BasicTests, test_642) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("0-0----X-")), "Game in progress\n");
}
TEST(BasicTests, test_643) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("X-000-X-X")), "Game in progress\n");
}
TEST(BasicTests, test_644) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("00X00XXX0")), "Second player wins\n");
}
TEST(BasicTests, test_645) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("-0X-0X-X-")), "Game in progress\n");
}
TEST(BasicTests, test_646) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("-0X00XX0X")), "Second player wins\n");
}
TEST(BasicTests, test_647) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("-----0---")), "Game in progress\n");
}
TEST(BasicTests, test_648) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("0X-0-00XX")), "Second player wins\n");
}
TEST(BasicTests, test_649) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("-------X-")), "Game in progress\n");
}
TEST(BasicTests, test_650) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("-0-0X--X-")), "Game in progress\n");
}
TEST(BasicTests, test_651) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("X000XXX0-")), "Game in progress\n");
}
TEST(BasicTests, test_652) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("------0X-")), "Game in progress\n");
}
TEST(BasicTests, test_653) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("0XX-0-X0-")), "Game in progress\n");
}
TEST(BasicTests, test_654) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("X000X0X-X")), "First player wins\n");
}
TEST(BasicTests, test_655) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("------X-0")), "Game in progress\n");
}
TEST(BasicTests, test_656) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("----X----")), "Game in progress\n");
}
TEST(BasicTests, test_657) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("X-0-00X--")), "Game in progress\n");
}
TEST(BasicTests, test_658) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("---X-X00-")), "Game in progress\n");
}
TEST(BasicTests, test_659) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("-X--XX000")), "Second player wins\n");
}
TEST(BasicTests, test_660) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("-X---0---")), "Game in progress\n");
}
TEST(BasicTests, test_661) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("00--X0--X")), "Game in progress\n");
}
TEST(BasicTests, test_662) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("00X0-XXX0")), "Game in progress\n");
}
TEST(BasicTests, test_663) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("XXX-X0-00")), "First player wins\n");
}
TEST(BasicTests, test_664) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("-0-----XX")), "Game in progress\n");
}
TEST(BasicTests, test_665) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("0-XX0-0X0")), "Second player wins\n");
}
TEST(BasicTests, test_666) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("-------X-")), "Game in progress\n");
}
TEST(BasicTests, test_667) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("-0--X0X--")), "Game in progress\n");
}
TEST(BasicTests, test_668) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("0XX00--0X")), "Game in progress\n");
}
TEST(BasicTests, test_669) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("X0--0-X--")), "Game in progress\n");
}
TEST(BasicTests, test_670) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("--0--X---")), "Game in progress\n");
}
TEST(BasicTests, test_671) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("0-X--0---")), "Game in progress\n");
}
TEST(BasicTests, test_672) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("-----X0X0")), "Game in progress\n");
}
TEST(BasicTests, test_673) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("-0-------")), "Game in progress\n");
}
TEST(BasicTests, test_674) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("X0X00X-0X")), "Second player wins\n");
}
TEST(BasicTests, test_675) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("X---X0--0")), "Game in progress\n");
}
TEST(BasicTests, test_676) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("-0XX--0-X")), "Game in progress\n");
}
TEST(BasicTests, test_677) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("00XX00XX0")), "Second player wins\n");
}
TEST(BasicTests, test_678) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("0X0XXX00-")), "First player wins\n");
}
TEST(BasicTests, test_679) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("0X-XX00X0")), "First player wins\n");
}
TEST(BasicTests, test_680) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("XX00X000X")), "First player wins\n");
}
TEST(BasicTests, test_681) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("0XX00X---")), "Game in progress\n");
}
TEST(BasicTests, test_682) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("00X0XX0XX")), "Second player wins\n");
}
TEST(BasicTests, test_683) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("--0X0XX-0")), "Game in progress\n");
}
TEST(BasicTests, test_684) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("---X--0-0")), "Game in progress\n");
}
TEST(BasicTests, test_685) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("XX00-X00X")), "Game in progress\n");
}
TEST(BasicTests, test_686) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("X0XX00XX0")), "First player wins\n");
}
TEST(BasicTests, test_687) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("--0------")), "Game in progress\n");
}
TEST(BasicTests, test_688) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("-00--X-X0")), "Game in progress\n");
}
TEST(BasicTests, test_689) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("0X0-00XXX")), "First player wins\n");
}
TEST(BasicTests, test_690) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("X0X-X-00X")), "First player wins\n");
}
TEST(BasicTests, test_691) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("X0X0000XX")), "Second player wins\n");
}
TEST(BasicTests, test_692) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("---X0----")), "Game in progress\n");
}
TEST(BasicTests, test_693) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("X000XX-0X")), "First player wins\n");
}
TEST(BasicTests, test_694) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("XX00000XX")), "Second player wins\n");
}
TEST(BasicTests, test_695) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("---0X-0X-")), "Game in progress\n");
}
TEST(BasicTests, test_696) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("XX0X00XX0")), "First player wins\n");
}
TEST(BasicTests, test_697) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("-0X-X-X0-")), "First player wins\n");
}
TEST(BasicTests, test_698) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("000XXX-X0")), "Second player wins\n");
}
TEST(BasicTests, test_699) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("--0-X-X-0")), "Game in progress\n");
}
TEST(BasicTests, test_700) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("------X--")), "Game in progress\n");
}
TEST(BasicTests, test_701) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("---X0-0X-")), "Game in progress\n");
}
TEST(BasicTests, test_702) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("0------X-")), "Game in progress\n");
}
TEST(BasicTests, test_703) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("--X------")), "Game in progress\n");
}
TEST(BasicTests, test_704) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("X--------")), "Game in progress\n");
}
TEST(BasicTests, test_705) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("0XX00X0XX")), "Second player wins\n");
}
TEST(BasicTests, test_706) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("0X000-XXX")), "First player wins\n");
}
TEST(BasicTests, test_707) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("-XXXX00-0")), "Game in progress\n");
}
TEST(BasicTests, test_708) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("00X-X0X0X")), "First player wins\n");
}
TEST(BasicTests, test_709) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("0XX-00X-X")), "Game in progress\n");
}
TEST(BasicTests, test_710) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("X0X00X0--")), "Game in progress\n");
}
TEST(BasicTests, test_711) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("000-XX-0X")), "Second player wins\n");
}
TEST(BasicTests, test_712) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("-X0X0-X0-")), "Game in progress\n");
}
TEST(BasicTests, test_713) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("X0-00XXX0")), "Game in progress\n");
}
TEST(BasicTests, test_714) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("X0XX0-0X-")), "Game in progress\n");
}
TEST(BasicTests, test_715) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("----0-XX0")), "Game in progress\n");
}
TEST(BasicTests, test_716) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("-0X----X-")), "Game in progress\n");
}
TEST(BasicTests, test_717) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("------0-X")), "Game in progress\n");
}
TEST(BasicTests, test_718) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("0-XX----0")), "Game in progress\n");
}
TEST(BasicTests, test_719) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("--0X-----")), "Game in progress\n");
}
TEST(BasicTests, test_720) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("---X00---")), "Game in progress\n");
}
TEST(BasicTests, test_721) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("X00XX00XX")), "First player wins\n");
}
TEST(BasicTests, test_722) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("------X--")), "Game in progress\n");
}
TEST(BasicTests, test_723) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("-X-------")), "Game in progress\n");
}
TEST(BasicTests, test_724) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("0XX0X0X0X")), "First player wins\n");
}
TEST(BasicTests, test_725) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("XX00X0-0-")), "Game in progress\n");
}
TEST(BasicTests, test_726) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("-0000XXXX")), "First player wins\n");
}
TEST(BasicTests, test_727) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("XXX0-X000")), "First player wins\n");
}
TEST(BasicTests, test_728) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("--------X")), "Game in progress\n");
}
TEST(BasicTests, test_729) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("00-00XXXX")), "First player wins\n");
}
TEST(BasicTests, test_730) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("-X-0X000X")), "Game in progress\n");
}
TEST(BasicTests, test_731) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("XX0---0X-")), "Game in progress\n");
}
TEST(BasicTests, test_732) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("-0-X-----")), "Game in progress\n");
}
TEST(BasicTests, test_733) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("X0-0XX-0-")), "Game in progress\n");
}
TEST(BasicTests, test_734) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("0--X----0")), "Game in progress\n");
}
TEST(BasicTests, test_735) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("----0X0X0")), "Game in progress\n");
}
TEST(BasicTests, test_736) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("---0-----")), "Game in progress\n");
}
TEST(BasicTests, test_737) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("X0XX00-0X")), "Second player wins\n");
}
TEST(BasicTests, test_738) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("X-X-0X0-0")), "Game in progress\n");
}
TEST(BasicTests, test_739) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("--X0-0XX-")), "Game in progress\n");
}
TEST(BasicTests, test_740) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("0-X0XX0X0")), "Second player wins\n");
}
TEST(BasicTests, test_741) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("-------X-")), "Game in progress\n");
}
TEST(BasicTests, test_742) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("-X-----0-")), "Game in progress\n");
}
TEST(BasicTests, test_743) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("--0------")), "Game in progress\n");
}
TEST(BasicTests, test_744) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("----00X--")), "Game in progress\n");
}
TEST(BasicTests, test_745) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("XX----00-")), "Game in progress\n");
}
TEST(BasicTests, test_746) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("0XXXX00-0")), "Game in progress\n");
}
TEST(BasicTests, test_747) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("---0-XXX0")), "Game in progress\n");
}
TEST(BasicTests, test_748) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("-0--X-0X-")), "Game in progress\n");
}
TEST(BasicTests, test_749) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("X0-0--0X-")), "Game in progress\n");
}
TEST(BasicTests, test_750) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("---0--X--")), "Game in progress\n");
}
TEST(BasicTests, test_751) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("X-00-----")), "Game in progress\n");
}
TEST(BasicTests, test_752) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("0X-XX00X0")), "First player wins\n");
}
TEST(BasicTests, test_753) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("0--------")), "Game in progress\n");
}
TEST(BasicTests, test_754) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("0X0X-X0--")), "Game in progress\n");
}
TEST(BasicTests, test_755) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("0-XX000XX")), "Game in progress\n");
}
TEST(BasicTests, test_756) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("-0--0XX-0")), "Game in progress\n");
}
TEST(BasicTests, test_757) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("0X0XX-X00")), "Game in progress\n");
}
TEST(BasicTests, test_758) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("X0-XX--00")), "Game in progress\n");
}
TEST(BasicTests, test_759) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("--X--0---")), "Game in progress\n");
}
TEST(BasicTests, test_760) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("XX0X00XX0")), "First player wins\n");
}
TEST(BasicTests, test_761) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("-X-0XX000")), "Second player wins\n");
}
TEST(BasicTests, test_762) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("-0X00XX0X")), "Second player wins\n");
}
TEST(BasicTests, test_763) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("XX----X00")), "Game in progress\n");
}
TEST(BasicTests, test_764) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("XX0----0-")), "Game in progress\n");
}
TEST(BasicTests, test_765) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("X-------0")), "Game in progress\n");
}
TEST(BasicTests, test_766) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("X0---00XX")), "Game in progress\n");
}
TEST(BasicTests, test_767) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("0X-0X0-XX")), "First player wins\n");
}
TEST(BasicTests, test_768) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("0000X0XXX")), "Second player wins\n");
}
TEST(BasicTests, test_769) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("-0X------")), "Game in progress\n");
}
TEST(BasicTests, test_770) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("XX0X000XX")), "Second player wins\n");
}
TEST(BasicTests, test_771) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("-------X-")), "Game in progress\n");
}
TEST(BasicTests, test_772) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("XXX000X0X")), "First player wins\n");
}
TEST(BasicTests, test_773) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("-----X0X-")), "Game in progress\n");
}
TEST(BasicTests, test_774) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("X00X---0-")), "Game in progress\n");
}
TEST(BasicTests, test_775) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("--X---0X-")), "Game in progress\n");
}
TEST(BasicTests, test_776) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("00XX-XX00")), "Game in progress\n");
}
TEST(BasicTests, test_777) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("0X-0-X0X0")), "Second player wins\n");
}
TEST(BasicTests, test_778) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("-XX000X--")), "Second player wins\n");
}
TEST(BasicTests, test_779) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("----0---X")), "Game in progress\n");
}
TEST(BasicTests, test_780) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("0-0XXX-X0")), "First player wins\n");
}
TEST(BasicTests, test_781) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("-X00X-00X")), "Game in progress\n");
}
TEST(BasicTests, test_782) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("-X0-0-0XX")), "Second player wins\n");
}
TEST(BasicTests, test_783) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("X0-0X-00X")), "First player wins\n");
}
TEST(BasicTests, test_784) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("0XX-0X--0")), "Second player wins\n");
}
TEST(BasicTests, test_785) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("---0X0---")), "Game in progress\n");
}
TEST(BasicTests, test_786) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("----X----")), "Game in progress\n");
}
TEST(BasicTests, test_787) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("X00X0----")), "Game in progress\n");
}
TEST(BasicTests, test_788) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("X00-XXX00")), "Game in progress\n");
}
TEST(BasicTests, test_789) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("----X-0--")), "Game in progress\n");
}
TEST(BasicTests, test_790) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("0X00XXX00")), "Draw\n");
}
TEST(BasicTests, test_791) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("-0-XX-0--")), "Game in progress\n");
}
TEST(BasicTests, test_792) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("X-000-0XX")), "Second player wins\n");
}
TEST(BasicTests, test_793) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("-0-XX0---")), "Game in progress\n");
}
TEST(BasicTests, test_794) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("0-----X--")), "Game in progress\n");
}
TEST(BasicTests, test_795) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("X--------")), "Game in progress\n");
}
TEST(BasicTests, test_796) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("X-000X0X-")), "Second player wins\n");
}
TEST(BasicTests, test_797) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("0X0--XX00")), "Game in progress\n");
}
TEST(BasicTests, test_798) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("---0-----")), "Game in progress\n");
}
TEST(BasicTests, test_799) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("00X-0X-0X")), "Second player wins\n");
}
TEST(BasicTests, test_800) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("0---0X--X")), "Game in progress\n");
}
TEST(BasicTests, test_801) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("X----0---")), "Game in progress\n");
}
TEST(BasicTests, test_802) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("----X----")), "Game in progress\n");
}
TEST(BasicTests, test_803) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("0X0XX0X00")), "Second player wins\n");
}
TEST(BasicTests, test_804) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("-X---0XX0")), "Game in progress\n");
}
TEST(BasicTests, test_805) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("---X-----")), "Game in progress\n");
}
TEST(BasicTests, test_806) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("----X-X0-")), "Game in progress\n");
}
TEST(BasicTests, test_807) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("00X-X--0-")), "Game in progress\n");
}
TEST(BasicTests, test_808) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("-000XXX0X")), "Game in progress\n");
}
TEST(BasicTests, test_809) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("XX0X--00X")), "Game in progress\n");
}
TEST(BasicTests, test_810) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("-0-XX00XX")), "Game in progress\n");
}
TEST(BasicTests, test_811) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("----0--X-")), "Game in progress\n");
}
TEST(BasicTests, test_812) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("--0-X-00X")), "Game in progress\n");
}
TEST(BasicTests, test_813) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("X--------")), "Game in progress\n");
}
TEST(BasicTests, test_814) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("--XX0X--0")), "Game in progress\n");
}
TEST(BasicTests, test_815) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("-X-------")), "Game in progress\n");
}
TEST(BasicTests, test_816) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("XX00000XX")), "Second player wins\n");
}
TEST(BasicTests, test_817) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("X-0-0X-0X")), "Game in progress\n");
}
TEST(BasicTests, test_818) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("X0-0XX0-X")), "First player wins\n");
}
TEST(BasicTests, test_819) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("00XX00X0X")), "Second player wins\n");
}
TEST(BasicTests, test_820) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("0-X---0XX")), "Game in progress\n");
}
TEST(BasicTests, test_821) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("X000X0XX-")), "Game in progress\n");
}
TEST(BasicTests, test_822) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("XX0X00-X0")), "Second player wins\n");
}
TEST(BasicTests, test_823) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("--XX0X0--")), "Game in progress\n");
}
TEST(BasicTests, test_824) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("-0------X")), "Game in progress\n");
}
TEST(BasicTests, test_825) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("X00X----X")), "Game in progress\n");
}
TEST(BasicTests, test_826) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("X--0-XX00")), "Game in progress\n");
}
TEST(BasicTests, test_827) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("XX00X--0-")), "Game in progress\n");
}
TEST(BasicTests, test_828) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("X---0----")), "Game in progress\n");
}
TEST(BasicTests, test_829) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("0-X------")), "Game in progress\n");
}
TEST(BasicTests, test_830) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("--X-00-X-")), "Game in progress\n");
}
TEST(BasicTests, test_831) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("XX00XX00X")), "First player wins\n");
}
TEST(BasicTests, test_832) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("0--X-----")), "Game in progress\n");
}
TEST(BasicTests, test_833) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("X0--0X--X")), "Game in progress\n");
}
TEST(BasicTests, test_834) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("XX-0-0X00")), "Game in progress\n");
}
TEST(BasicTests, test_835) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("X000X00XX")), "First player wins\n");
}
TEST(BasicTests, test_836) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("0XX0X0X00")), "First player wins\n");
}
TEST(BasicTests, test_837) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("X00-XX00X")), "First player wins\n");
}
TEST(BasicTests, test_838) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("----0XX--")), "Game in progress\n");
}
TEST(BasicTests, test_839) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("XX0--000X")), "Game in progress\n");
}
TEST(BasicTests, test_840) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("XX00X0-0X")), "First player wins\n");
}
TEST(BasicTests, test_841) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("-X-----0-")), "Game in progress\n");
}
TEST(BasicTests, test_842) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("0X000X0XX")), "Second player wins\n");
}
TEST(BasicTests, test_843) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("--X---0--")), "Game in progress\n");
}
TEST(BasicTests, test_844) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("X--0--X--")), "Game in progress\n");
}
TEST(BasicTests, test_845) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("X0--0XXX0")), "Game in progress\n");
}
TEST(BasicTests, test_846) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("X0--XX0X0")), "Game in progress\n");
}
TEST(BasicTests, test_847) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("X00-XX-X0")), "Game in progress\n");
}
TEST(BasicTests, test_848) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("------0--")), "Game in progress\n");
}
TEST(BasicTests, test_849) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("0XXX00X0X")), "Draw\n");
}
TEST(BasicTests, test_850) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("0-0X0-XXX")), "First player wins\n");
}
TEST(BasicTests, test_851) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("-X-0--0--")), "Game in progress\n");
}
TEST(BasicTests, test_852) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("--0---XX-")), "Game in progress\n");
}
TEST(BasicTests, test_853) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("0X---XX-0")), "Game in progress\n");
}
TEST(BasicTests, test_854) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("X00----XX")), "Game in progress\n");
}
TEST(BasicTests, test_855) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("-----0X--")), "Game in progress\n");
}
TEST(BasicTests, test_856) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("X0X0X-0-0")), "Game in progress\n");
}
TEST(BasicTests, test_857) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("X00-XX0X0")), "Game in progress\n");
}
TEST(BasicTests, test_858) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("-X--0--0X")), "Game in progress\n");
}
TEST(BasicTests, test_859) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("X0-0---X0")), "Game in progress\n");
}
TEST(BasicTests, test_860) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("X-0X-00XX")), "Game in progress\n");
}
TEST(BasicTests, test_861) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("--X00XX-0")), "Game in progress\n");
}
TEST(BasicTests, test_862) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("0X-0-X-0X")), "Game in progress\n");
}
TEST(BasicTests, test_863) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("00XXX-00X")), "Game in progress\n");
}
TEST(BasicTests, test_864) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("-----0---")), "Game in progress\n");
}
TEST(BasicTests, test_865) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("X0------0")), "Game in progress\n");
}
TEST(BasicTests, test_866) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("-X-------")), "Game in progress\n");
}
TEST(BasicTests, test_867) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("X00XXXX00")), "First player wins\n");
}
TEST(BasicTests, test_868) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("0-X00---X")), "Game in progress\n");
}
TEST(BasicTests, test_869) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("----0X0--")), "Game in progress\n");
}
TEST(BasicTests, test_870) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("-X000XXX-")), "Game in progress\n");
}
TEST(BasicTests, test_871) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("X00X00XXX")), "First player wins\n");
}
TEST(BasicTests, test_872) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("0-X--0---")), "Game in progress\n");
}
TEST(BasicTests, test_873) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("---X---0-")), "Game in progress\n");
}
TEST(BasicTests, test_874) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("--X---0--")), "Game in progress\n");
}
TEST(BasicTests, test_875) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("--XX--000")), "Second player wins\n");
}
TEST(BasicTests, test_876) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("00---XX--")), "Game in progress\n");
}
TEST(BasicTests, test_877) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("00XX-0XX0")), "Game in progress\n");
}
TEST(BasicTests, test_878) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("X--X00-X0")), "Game in progress\n");
}
TEST(BasicTests, test_879) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("X0X--X--0")), "Game in progress\n");
}
TEST(BasicTests, test_880) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("XX---000-")), "Game in progress\n");
}
TEST(BasicTests, test_881) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("X0--X0--X")), "First player wins\n");
}
TEST(BasicTests, test_882) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("-00X0X0X-")), "Second player wins\n");
}
TEST(BasicTests, test_883) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("X0XX0--X0")), "Game in progress\n");
}
TEST(BasicTests, test_884) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("-X0X000XX")), "Second player wins\n");
}
TEST(BasicTests, test_885) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("--0X-----")), "Game in progress\n");
}
TEST(BasicTests, test_886) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("X0X-0-XX0")), "Game in progress\n");
}
TEST(BasicTests, test_887) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("-X-0-X00X")), "Game in progress\n");
}
TEST(BasicTests, test_888) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("X-0-X0-X-")), "Game in progress\n");
}
TEST(BasicTests, test_889) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("-X-X----0")), "Game in progress\n");
}
TEST(BasicTests, test_890) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("--X0-----")), "Game in progress\n");
}
TEST(BasicTests, test_891) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("------0--")), "Game in progress\n");
}
TEST(BasicTests, test_892) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("-00XXX-0-")), "First player wins\n");
}
TEST(BasicTests, test_893) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("X--X000-X")), "Game in progress\n");
}
TEST(BasicTests, test_894) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("X0X0X000X")), "First player wins\n");
}
TEST(BasicTests, test_895) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("XX0-0X00X")), "Second player wins\n");
}
TEST(BasicTests, test_896) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("--0------")), "Game in progress\n");
}
TEST(BasicTests, test_897) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("---X-0---")), "Game in progress\n");
}
TEST(BasicTests, test_898) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("0XX00X0X-")), "Second player wins\n");
}
TEST(BasicTests, test_899) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("-0-X---0-")), "Game in progress\n");
}
TEST(BasicTests, test_900) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("---X--0X-")), "Game in progress\n");
}
TEST(BasicTests, test_901) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("----X-X-0")), "Game in progress\n");
}
TEST(BasicTests, test_902) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("XX0-00-X-")), "Game in progress\n");
}
TEST(BasicTests, test_903) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("X-0X-----")), "Game in progress\n");
}
TEST(BasicTests, test_904) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("--X----0-")), "Game in progress\n");
}
TEST(BasicTests, test_905) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("X0-0X-X0X")), "First player wins\n");
}
TEST(BasicTests, test_906) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("--X0X--X0")), "Game in progress\n");
}
TEST(BasicTests, test_907) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("XX0XX0000")), "Second player wins\n");
}
TEST(BasicTests, test_908) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("----X----")), "Game in progress\n");
}
TEST(BasicTests, test_909) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("X00X00XXX")), "First player wins\n");
}
TEST(BasicTests, test_910) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("00-XX0X0X")), "Game in progress\n");
}
TEST(BasicTests, test_911) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("-00-----X")), "Game in progress\n");
}
TEST(BasicTests, test_912) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("00X00XXX0")), "Second player wins\n");
}
TEST(BasicTests, test_913) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("---X-0-0X")), "Game in progress\n");
}
TEST(BasicTests, test_914) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("----0X0--")), "Game in progress\n");
}
TEST(BasicTests, test_915) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("000XX-XX0")), "Second player wins\n");
}
TEST(BasicTests, test_916) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("-0----X0-")), "Game in progress\n");
}
TEST(BasicTests, test_917) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("X0-0X0-X-")), "Game in progress\n");
}
TEST(BasicTests, test_918) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("X00X--X00")), "First player wins\n");
}
TEST(BasicTests, test_919) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("XX0X--0-0")), "Game in progress\n");
}
TEST(BasicTests, test_920) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("00XXX--00")), "Game in progress\n");
}
TEST(BasicTests, test_921) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("00-0XX-0X")), "Game in progress\n");
}
TEST(BasicTests, test_922) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("XX--0X--0")), "Game in progress\n");
}
TEST(BasicTests, test_923) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("0X--X---0")), "Game in progress\n");
}
TEST(BasicTests, test_924) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("--X000-XX")), "Second player wins\n");
}
TEST(BasicTests, test_925) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("X---0----")), "Game in progress\n");
}
TEST(BasicTests, test_926) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("-X--0-X0X")), "Game in progress\n");
}
TEST(BasicTests, test_927) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("0-X-X00-X")), "Game in progress\n");
}
TEST(BasicTests, test_928) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("-0-XX-0X-")), "Game in progress\n");
}
TEST(BasicTests, test_929) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("---X-X-0-")), "Game in progress\n");
}
TEST(BasicTests, test_930) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("XX-000X0X")), "Second player wins\n");
}
TEST(BasicTests, test_931) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("-------0-")), "Game in progress\n");
}
TEST(BasicTests, test_932) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("--0---X--")), "Game in progress\n");
}
TEST(BasicTests, test_933) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("0----X0-X")), "Game in progress\n");
}
TEST(BasicTests, test_934) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("0-X0XX0--")), "Second player wins\n");
}
TEST(BasicTests, test_935) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("--X0X0XX0")), "First player wins\n");
}
TEST(BasicTests, test_936) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("--------0")), "Game in progress\n");
}
TEST(BasicTests, test_937) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("-00----X-")), "Game in progress\n");
}
TEST(BasicTests, test_938) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("0X0XX00X-")), "First player wins\n");
}
TEST(BasicTests, test_939) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("000XX0-XX")), "Second player wins\n");
}
TEST(BasicTests, test_940) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("0---XX0-X")), "Game in progress\n");
}
TEST(BasicTests, test_941) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("0------X0")), "Game in progress\n");
}
TEST(BasicTests, test_942) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("0-X0X00XX")), "Second player wins\n");
}
TEST(BasicTests, test_943) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("-XX00X0X0")), "Game in progress\n");
}
TEST(BasicTests, test_944) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("XX0-00X0X")), "Game in progress\n");
}
TEST(BasicTests, test_945) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("X00---X-X")), "Game in progress\n");
}
TEST(BasicTests, test_946) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("--X----0-")), "Game in progress\n");
}
TEST(BasicTests, test_947) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("0-0X---X-")), "Game in progress\n");
}
TEST(BasicTests, test_948) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("-00-0-XXX")), "First player wins\n");
}
TEST(BasicTests, test_949) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("-X-------")), "Game in progress\n");
}
TEST(BasicTests, test_950) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("X-0--0--X")), "Game in progress\n");
}
TEST(BasicTests, test_951) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("0X0XX00-X")), "Game in progress\n");
}
TEST(BasicTests, test_952) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("-00X00XX-")), "Game in progress\n");
}
TEST(BasicTests, test_953) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("----0X---")), "Game in progress\n");
}
TEST(BasicTests, test_954) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("X-------0")), "Game in progress\n");
}
TEST(BasicTests, test_955) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("0XX0XX000")), "Second player wins\n");
}
TEST(BasicTests, test_956) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("X-----0X0")), "Game in progress\n");
}
TEST(BasicTests, test_957) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("X0X00X0XX")), "First player wins\n");
}
TEST(BasicTests, test_958) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("--0XX0---")), "Game in progress\n");
}
TEST(BasicTests, test_959) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("0XX000X0X")), "Second player wins\n");
}
TEST(BasicTests, test_960) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("X---00X-X")), "Game in progress\n");
}
TEST(BasicTests, test_961) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("---X-----")), "Game in progress\n");
}
TEST(BasicTests, test_962) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("X000--XX-")), "Game in progress\n");
}
TEST(BasicTests, test_963) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("0X00X0-XX")), "First player wins\n");
}
TEST(BasicTests, test_964) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("X0-------")), "Game in progress\n");
}
TEST(BasicTests, test_965) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("00----0XX")), "Game in progress\n");
}
TEST(BasicTests, test_966) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("X-0X0X00-")), "Second player wins\n");
}
TEST(BasicTests, test_967) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("0XX0-X00X")), "Second player wins\n");
}
TEST(BasicTests, test_968) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("00XX0XX0X")), "Second player wins\n");
}
TEST(BasicTests, test_969) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("0-XX-0---")), "Game in progress\n");
}
TEST(BasicTests, test_970) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("--0X--X0-")), "Game in progress\n");
}
TEST(BasicTests, test_971) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("000XXX00X")), "Second player wins\n");
}
TEST(BasicTests, test_972) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("-X0----0X")), "Game in progress\n");
}
TEST(BasicTests, test_973) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("0-XX-----")), "Game in progress\n");
}
TEST(BasicTests, test_974) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("XXXX000-0")), "First player wins\n");
}
TEST(BasicTests, test_975) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("0XX-XX000")), "Second player wins\n");
}
TEST(BasicTests, test_976) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("---0---X-")), "Game in progress\n");
}
TEST(BasicTests, test_977) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("0XX00X00X")), "Second player wins\n");
}
TEST(BasicTests, test_978) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("0X00-XX0X")), "Game in progress\n");
}
TEST(BasicTests, test_979) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("--0-XX---")), "Game in progress\n");
}
TEST(BasicTests, test_980) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("00--XX-0X")), "Game in progress\n");
}
TEST(BasicTests, test_981) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("X-XXX000-")), "Game in progress\n");
}
TEST(BasicTests, test_982) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("X0--XX0--")), "Game in progress\n");
}
TEST(BasicTests, test_983) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("XX-0----0")), "Game in progress\n");
}
TEST(BasicTests, test_984) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("---X0X-00")), "Game in progress\n");
}
TEST(BasicTests, test_985) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("XX-00XX00")), "Game in progress\n");
}
TEST(BasicTests, test_986) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("X0000XXX-")), "Game in progress\n");
}
TEST(BasicTests, test_987) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("X0-0XX00X")), "First player wins\n");
}
TEST(BasicTests, test_988) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("-------X-")), "Game in progress\n");
}
TEST(BasicTests, test_989) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("0-00-XXX-")), "Game in progress\n");
}
TEST(BasicTests, test_990) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("-X000X--X")), "Game in progress\n");
}
TEST(BasicTests, test_991) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("-XX0X000-")), "Game in progress\n");
}
TEST(BasicTests, test_992) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("X00XXX0X0")), "First player wins\n");
}
TEST(BasicTests, test_993) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("XX000X---")), "Game in progress\n");
}
TEST(BasicTests, test_994) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("0000-XXXX")), "Second player wins\n");
}
TEST(BasicTests, test_995) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("--X--0--X")), "Game in progress\n");
}
TEST(BasicTests, test_996) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("0X---0X-0")), "Game in progress\n");
}
TEST(BasicTests, test_997) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("--00X0X0X")), "Game in progress\n");
}
TEST(BasicTests, test_998) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("-0-----0X")), "Game in progress\n");
}
TEST(BasicTests, test_999) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("X000XX0-X")), "First player wins\n");
}
TEST(BasicTests, test_1000) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("---X0-X0X")), "Game in progress\n");
}
TEST(BasicTests, test_1001) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("--0X---0-")), "Game in progress\n");
}
TEST(BasicTests, test_1002) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("0X--X0---")), "Game in progress\n");
}
TEST(BasicTests, test_1003) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("X-X00X0X0")), "Game in progress\n");
}
TEST(BasicTests, test_1004) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("X-0XX0X00")), "First player wins\n");
}
TEST(BasicTests, test_1005) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("--X0-----")), "Game in progress\n");
}
TEST(BasicTests, test_1006) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("00XXX0X0-")), "First player wins\n");
}
TEST(BasicTests, test_1007) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("--X------")), "Game in progress\n");
}
TEST(BasicTests, test_1008) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("---0--X--")), "Game in progress\n");
}
TEST(BasicTests, test_1009) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("0XXX00X-0")), "Second player wins\n");
}
TEST(BasicTests, test_1010) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("0-0X-----")), "Game in progress\n");
}
TEST(BasicTests, test_1011) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("00-X-0--X")), "Game in progress\n");
}
TEST(BasicTests, test_1012) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("----0X0X-")), "Game in progress\n");
}
TEST(BasicTests, test_1013) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("----X---0")), "Game in progress\n");
}
TEST(BasicTests, test_1014) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("-----X---")), "Game in progress\n");
}
TEST(BasicTests, test_1015) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("0X0XX0-X-")), "First player wins\n");
}
TEST(BasicTests, test_1016) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("X-0-XX-0-")), "Game in progress\n");
}
TEST(BasicTests, test_1017) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("X----00X-")), "Game in progress\n");
}
TEST(BasicTests, test_1018) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("------X--")), "Game in progress\n");
}
TEST(BasicTests, test_1019) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("0X0XX0X0X")), "Draw\n");
}
TEST(BasicTests, test_1020) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("XX0-0-X--")), "Game in progress\n");
}
TEST(BasicTests, test_1021) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("0X0--0X-X")), "Game in progress\n");
}
TEST(BasicTests, test_1022) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("X00-X0X-0")), "Second player wins\n");
}
TEST(BasicTests, test_1023) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("0--------")), "Game in progress\n");
}
TEST(BasicTests, test_1024) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("--X-X--0-")), "Game in progress\n");
}
TEST(BasicTests, test_1025) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("0-0-XX0XX")), "Game in progress\n");
}
TEST(BasicTests, test_1026) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("-0X----0X")), "Game in progress\n");
}
TEST(BasicTests, test_1027) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("0--0-XX--")), "Game in progress\n");
}
TEST(BasicTests, test_1028) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("--------0")), "Game in progress\n");
}
TEST(BasicTests, test_1029) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("0X-----0X")), "Game in progress\n");
}
TEST(BasicTests, test_1030) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("X0------X")), "Game in progress\n");
}
TEST(BasicTests, test_1031) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("0X00X-X--")), "Game in progress\n");
}
TEST(BasicTests, test_1032) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("-0---X---")), "Game in progress\n");
}
TEST(BasicTests, test_1033) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("---X----0")), "Game in progress\n");
}
TEST(BasicTests, test_1034) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("0X0X0X0X0")), "Second player wins\n");
}
TEST(BasicTests, test_1035) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("-0X0XX0X0")), "Game in progress\n");
}
TEST(BasicTests, test_1036) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("----X----")), "Game in progress\n");
}
TEST(BasicTests, test_1037) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("-0-X-X-0-")), "Game in progress\n");
}
TEST(BasicTests, test_1038) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("0--0-XX--")), "Game in progress\n");
}
TEST(BasicTests, test_1039) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("X-0--0-X-")), "Game in progress\n");
}
TEST(BasicTests, test_1040) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("0-X0-0XX-")), "Game in progress\n");
}
TEST(BasicTests, test_1041) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("--------X")), "Game in progress\n");
}
TEST(BasicTests, test_1042) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("--0-0X0XX")), "Second player wins\n");
}
TEST(BasicTests, test_1043) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("-0-XXX-0-")), "First player wins\n");
}
TEST(BasicTests, test_1044) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("X-0-0X---")), "Game in progress\n");
}
TEST(BasicTests, test_1045) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("X----0---")), "Game in progress\n");
}
TEST(BasicTests, test_1046) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("X0-X-00XX")), "Game in progress\n");
}
TEST(BasicTests, test_1047) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("00XX0X---")), "Game in progress\n");
}
TEST(BasicTests, test_1048) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("XX00X--0X")), "First player wins\n");
}
TEST(BasicTests, test_1049) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("--0-0--X-")), "Game in progress\n");
}
TEST(BasicTests, test_1050) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("------X--")), "Game in progress\n");
}
TEST(BasicTests, test_1051) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("0XX0-0X0X")), "Game in progress\n");
}
TEST(BasicTests, test_1052) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("X0X0X0X00")), "First player wins\n");
}
TEST(BasicTests, test_1053) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("X0X-0XX00")), "Second player wins\n");
}
TEST(BasicTests, test_1054) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("0-X-X0X0X")), "First player wins\n");
}
TEST(BasicTests, test_1055) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("00X00-XXX")), "First player wins\n");
}
TEST(BasicTests, test_1056) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("00XXX0X00")), "First player wins\n");
}
TEST(BasicTests, test_1057) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("X--0---X-")), "Game in progress\n");
}
TEST(BasicTests, test_1058) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("X0X00-XX0")), "Game in progress\n");
}
TEST(BasicTests, test_1059) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("0X0X000XX")), "Second player wins\n");
}
TEST(BasicTests, test_1060) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("-0--0X--X")), "Game in progress\n");
}
TEST(BasicTests, test_1061) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("-0X-0-X0-")), "Second player wins\n");
}
TEST(BasicTests, test_1062) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("-00X-0--X")), "Game in progress\n");
}
TEST(BasicTests, test_1063) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("X-0XX000X")), "First player wins\n");
}
TEST(BasicTests, test_1064) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("-----0--X")), "Game in progress\n");
}
TEST(BasicTests, test_1065) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("--X------")), "Game in progress\n");
}
TEST(BasicTests, test_1066) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("X0---0-X-")), "Game in progress\n");
}
TEST(BasicTests, test_1067) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("-X-X--00X")), "Game in progress\n");
}
TEST(BasicTests, test_1068) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("XX-0--0-X")), "Game in progress\n");
}
TEST(BasicTests, test_1069) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("X-0X000XX")), "Second player wins\n");
}
TEST(BasicTests, test_1070) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("X0--X----")), "Game in progress\n");
}
TEST(BasicTests, test_1071) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("--0X-----")), "Game in progress\n");
}
TEST(BasicTests, test_1072) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("-----0---")), "Game in progress\n");
}
TEST(BasicTests, test_1073) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("-X--XX000")), "Second player wins\n");
}
TEST(BasicTests, test_1074) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("---X----0")), "Game in progress\n");
}
TEST(BasicTests, test_1075) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("-00---X-X")), "Game in progress\n");
}
TEST(BasicTests, test_1076) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("X-0---X--")), "Game in progress\n");
}
TEST(BasicTests, test_1077) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("X-00X0-XX")), "First player wins\n");
}
TEST(BasicTests, test_1078) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("-XXX000X0")), "Game in progress\n");
}
TEST(BasicTests, test_1079) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("-0---X0-X")), "Game in progress\n");
}
TEST(BasicTests, test_1080) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("-XXX0--00")), "Game in progress\n");
}
TEST(BasicTests, test_1081) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("X00XX00X0")), "Second player wins\n");
}
TEST(BasicTests, test_1082) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("-000X-XX-")), "Game in progress\n");
}
TEST(BasicTests, test_1083) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("X0X00XX00")), "Second player wins\n");
}
TEST(BasicTests, test_1084) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("--0XX-0--")), "Game in progress\n");
}
TEST(BasicTests, test_1085) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("X--XX0--0")), "Game in progress\n");
}
TEST(BasicTests, test_1086) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("XX00X0XX0")), "First player wins\n");
}
TEST(BasicTests, test_1087) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("--0------")), "Game in progress\n");
}
TEST(BasicTests, test_1088) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("--------0")), "Game in progress\n");
}
TEST(BasicTests, test_1089) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("-X--0---0")), "Game in progress\n");
}
TEST(BasicTests, test_1090) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("0X0-0-0XX")), "Second player wins\n");
}
TEST(BasicTests, test_1091) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("-0-XX---0")), "Game in progress\n");
}
TEST(BasicTests, test_1092) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("X00X0X0X-")), "Second player wins\n");
}
TEST(BasicTests, test_1093) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("-----0--X")), "Game in progress\n");
}
TEST(BasicTests, test_1094) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("0-XX0-XX0")), "Second player wins\n");
}
TEST(BasicTests, test_1095) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("00X-00-XX")), "Game in progress\n");
}
TEST(BasicTests, test_1096) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("X--X0X-00")), "Game in progress\n");
}
TEST(BasicTests, test_1097) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("-------0-")), "Game in progress\n");
}
TEST(BasicTests, test_1098) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("X00-X-X--")), "Game in progress\n");
}
TEST(BasicTests, test_1099) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("0-XX00XX0")), "Second player wins\n");
}
TEST(BasicTests, test_1100) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("X0-XX-0X0")), "Game in progress\n");
}
TEST(BasicTests, test_1101) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("0--X-----")), "Game in progress\n");
}
TEST(BasicTests, test_1102) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("X0000XX0X")), "Second player wins\n");
}
TEST(BasicTests, test_1103) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("X0-XX0-0-")), "Game in progress\n");
}
TEST(BasicTests, test_1104) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("--------X")), "Game in progress\n");
}
TEST(BasicTests, test_1105) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("--------0")), "Game in progress\n");
}
TEST(BasicTests, test_1106) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("------X--")), "Game in progress\n");
}
TEST(BasicTests, test_1107) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("----X-0--")), "Game in progress\n");
}
TEST(BasicTests, test_1108) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("--0------")), "Game in progress\n");
}
TEST(BasicTests, test_1109) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("--00X--X0")), "Game in progress\n");
}
TEST(BasicTests, test_1110) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("-0X0XX0-X")), "First player wins\n");
}
TEST(BasicTests, test_1111) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("X00X00XX-")), "First player wins\n");
}
TEST(BasicTests, test_1112) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("0-XX-00-X")), "Game in progress\n");
}
TEST(BasicTests, test_1113) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("X0-X0X0X-")), "Game in progress\n");
}
TEST(BasicTests, test_1114) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("XXX--0-0-")), "First player wins\n");
}
TEST(BasicTests, test_1115) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("0---X-0X-")), "Game in progress\n");
}
TEST(BasicTests, test_1116) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("XXX-000X0")), "First player wins\n");
}
TEST(BasicTests, test_1117) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("0----X-0X")), "Game in progress\n");
}
TEST(BasicTests, test_1118) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("X-0------")), "Game in progress\n");
}
TEST(BasicTests, test_1119) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("0---X--X0")), "Game in progress\n");
}
TEST(BasicTests, test_1120) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("0X-XX000X")), "Game in progress\n");
}
TEST(BasicTests, test_1121) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("---0--X--")), "Game in progress\n");
}
TEST(BasicTests, test_1122) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("X0X0-X---")), "Game in progress\n");
}
TEST(BasicTests, test_1123) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("0--X-----")), "Game in progress\n");
}
TEST(BasicTests, test_1124) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("-X---0---")), "Game in progress\n");
}
TEST(BasicTests, test_1125) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("X000XXXX0")), "Draw\n");
}
TEST(BasicTests, test_1126) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("-X--0-0--")), "Game in progress\n");
}
TEST(BasicTests, test_1127) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("--X0X0---")), "Game in progress\n");
}
TEST(BasicTests, test_1128) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("----00-X-")), "Game in progress\n");
}
TEST(BasicTests, test_1129) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("XX-0X00X0")), "First player wins\n");
}
TEST(BasicTests, test_1130) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("--X0-X-0-")), "Game in progress\n");
}
TEST(BasicTests, test_1131) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("---0----X")), "Game in progress\n");
}
TEST(BasicTests, test_1132) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("--X-X--0-")), "Game in progress\n");
}
TEST(BasicTests, test_1133) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("0X-X0XX00")), "Second player wins\n");
}
TEST(BasicTests, test_1134) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("-X0--0XX0")), "Second player wins\n");
}
TEST(BasicTests, test_1135) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("0-0-X-0X-")), "Game in progress\n");
}
TEST(BasicTests, test_1136) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("------0--")), "Game in progress\n");
}
TEST(BasicTests, test_1137) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("0X-X--0--")), "Game in progress\n");
}
TEST(BasicTests, test_1138) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("-00XX---X")), "Game in progress\n");
}
TEST(BasicTests, test_1139) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("0XXX0-00-")), "Game in progress\n");
}
TEST(BasicTests, test_1140) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("00-X0XXX0")), "Second player wins\n");
}
TEST(BasicTests, test_1141) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("--0X--X--")), "Game in progress\n");
}
TEST(BasicTests, test_1142) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("X0X0XX0X0")), "Draw\n");
}
TEST(BasicTests, test_1143) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("0-X------")), "Game in progress\n");
}
TEST(BasicTests, test_1144) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("0XX0--0--")), "Second player wins\n");
}
TEST(BasicTests, test_1145) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("X-X--00--")), "Game in progress\n");
}
TEST(BasicTests, test_1146) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("X-0-0X0X0")), "Second player wins\n");
}
TEST(BasicTests, test_1147) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("X0000XX0X")), "Second player wins\n");
}
TEST(BasicTests, test_1148) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("0-0X0XXX0")), "Second player wins\n");
}
TEST(BasicTests, test_1149) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("X00X-----")), "Game in progress\n");
}
TEST(BasicTests, test_1150) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("---X0----")), "Game in progress\n");
}
TEST(BasicTests, test_1151) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("-0-XX-X0-")), "Game in progress\n");
}
TEST(BasicTests, test_1152) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("0-X-X0-0X")), "Game in progress\n");
}
TEST(BasicTests, test_1153) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("X000XXX00")), "Draw\n");
}
TEST(BasicTests, test_1154) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("X---0----")), "Game in progress\n");
}
TEST(BasicTests, test_1155) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("0-0--XX-X")), "Game in progress\n");
}
TEST(BasicTests, test_1156) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("-0X----0-")), "Game in progress\n");
}
TEST(BasicTests, test_1157) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("000XX0-XX")), "Second player wins\n");
}
TEST(BasicTests, test_1158) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("X-0X-0X-0")), "First player wins\n");
}
TEST(BasicTests, test_1159) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("XX000-X0X")), "Game in progress\n");
}
TEST(BasicTests, test_1160) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("------0--")), "Game in progress\n");
}
TEST(BasicTests, test_1161) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("0--X--0-X")), "Game in progress\n");
}
TEST(BasicTests, test_1162) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("XX0-0X-00")), "Game in progress\n");
}
TEST(BasicTests, test_1163) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("X---0XX-0")), "Game in progress\n");
}
TEST(BasicTests, test_1164) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("0-X-0X-0X")), "First player wins\n");
}
TEST(BasicTests, test_1165) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("-X0--X00-")), "Game in progress\n");
}
TEST(BasicTests, test_1166) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("0XX0XX-00")), "Game in progress\n");
}
TEST(BasicTests, test_1167) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("0-X-X0X0X")), "First player wins\n");
}
TEST(BasicTests, test_1168) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("X0X000XXX")), "Second player wins\n");
}
TEST(BasicTests, test_1169) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("XX-X0X000")), "Second player wins\n");
}
TEST(BasicTests, test_1170) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("-0X----0-")), "Game in progress\n");
}
TEST(BasicTests, test_1171) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("---X---0-")), "Game in progress\n");
}
TEST(BasicTests, test_1172) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("0--XX00XX")), "Game in progress\n");
}
TEST(BasicTests, test_1173) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("X000X0XX0")), "Second player wins\n");
}
TEST(BasicTests, test_1174) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("0XXX--0X0")), "Game in progress\n");
}
TEST(BasicTests, test_1175) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("-XX0--X0-")), "Game in progress\n");
}
TEST(BasicTests, test_1176) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("X-XX0-00X")), "Game in progress\n");
}
TEST(BasicTests, test_1177) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("---X--X0-")), "Game in progress\n");
}
TEST(BasicTests, test_1178) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("000XX0X-X")), "Second player wins\n");
}
TEST(BasicTests, test_1179) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("--0-----X")), "Game in progress\n");
}
TEST(BasicTests, test_1180) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("---0---0X")), "Game in progress\n");
}
TEST(BasicTests, test_1181) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("X0XX--0-0")), "Game in progress\n");
}
TEST(BasicTests, test_1182) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("-0X00-XXX")), "First player wins\n");
}
TEST(BasicTests, test_1183) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("---0XX0--")), "Game in progress\n");
}
TEST(BasicTests, test_1184) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("00--0XXXX")), "First player wins\n");
}
TEST(BasicTests, test_1185) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("-0--X00-X")), "Game in progress\n");
}
TEST(BasicTests, test_1186) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("X--0----X")), "Game in progress\n");
}
TEST(BasicTests, test_1187) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("--0-0-XX0")), "Game in progress\n");
}
TEST(BasicTests, test_1188) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("0-X--0-X-")), "Game in progress\n");
}
TEST(BasicTests, test_1189) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("-X0X0X0-X")), "Second player wins\n");
}
TEST(BasicTests, test_1190) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("----00-XX")), "Game in progress\n");
}
TEST(BasicTests, test_1191) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("X---0--X-")), "Game in progress\n");
}
TEST(BasicTests, test_1192) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("000-XXXX0")), "Second player wins\n");
}
TEST(BasicTests, test_1193) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("00XXX0---")), "Game in progress\n");
}
TEST(BasicTests, test_1194) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("X0-X0X0X0")), "Game in progress\n");
}
TEST(BasicTests, test_1195) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("----X----")), "Game in progress\n");
}
TEST(BasicTests, test_1196) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("0XX0XX0X0")), "Second player wins\n");
}
TEST(BasicTests, test_1197) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("-0----X0-")), "Game in progress\n");
}
TEST(BasicTests, test_1198) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("0-0XXX--0")), "First player wins\n");
}
TEST(BasicTests, test_1199) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("X0X0-X0-X")), "First player wins\n");
}
TEST(BasicTests, test_1200) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("X00XX0---")), "Game in progress\n");
}
TEST(BasicTests, test_1201) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("X---0X0X-")), "Game in progress\n");
}
TEST(BasicTests, test_1202) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("---X-0---")), "Game in progress\n");
}
TEST(BasicTests, test_1203) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("0XX-0X-0-")), "Game in progress\n");
}
TEST(BasicTests, test_1204) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("X------X0")), "Game in progress\n");
}
TEST(BasicTests, test_1205) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("-X0-----X")), "Game in progress\n");
}
TEST(BasicTests, test_1206) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("0XX-000XX")), "Game in progress\n");
}
TEST(BasicTests, test_1207) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("XX0X-0-0X")), "Game in progress\n");
}
TEST(BasicTests, test_1208) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("0-0X0-XX-")), "Game in progress\n");
}
TEST(BasicTests, test_1209) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("0-XX0XX00")), "Second player wins\n");
}
TEST(BasicTests, test_1210) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("-00XXX--0")), "First player wins\n");
}
TEST(BasicTests, test_1211) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("X0---0X--")), "Game in progress\n");
}
TEST(BasicTests, test_1212) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("-00-XXX00")), "Game in progress\n");
}
TEST(BasicTests, test_1213) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("00-X-X0-X")), "Game in progress\n");
}
TEST(BasicTests, test_1214) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("00X-X0X-0")), "First player wins\n");
}
TEST(BasicTests, test_1215) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("---0X00XX")), "Game in progress\n");
}
TEST(BasicTests, test_1216) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("0--XXX00-")), "First player wins\n");
}
TEST(BasicTests, test_1217) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("--0-X-0-X")), "Game in progress\n");
}
TEST(BasicTests, test_1218) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("--X-X000-")), "Game in progress\n");
}
TEST(BasicTests, test_1219) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("--0-X-0X-")), "Game in progress\n");
}
TEST(BasicTests, test_1220) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("-X----0-X")), "Game in progress\n");
}
TEST(BasicTests, test_1221) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("-X------0")), "Game in progress\n");
}
TEST(BasicTests, test_1222) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("XX-00X-0-")), "Game in progress\n");
}
TEST(BasicTests, test_1223) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("-0---X---")), "Game in progress\n");
}
TEST(BasicTests, test_1224) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("-XX0---0-")), "Game in progress\n");
}
TEST(BasicTests, test_1225) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("0X0XX00X0")), "First player wins\n");
}
TEST(BasicTests, test_1226) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("-0----X--")), "Game in progress\n");
}
TEST(BasicTests, test_1227) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("XXXX000-0")), "First player wins\n");
}
TEST(BasicTests, test_1228) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("-0-0-0-XX")), "Game in progress\n");
}
TEST(BasicTests, test_1229) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("X-0-X-X-0")), "Game in progress\n");
}
TEST(BasicTests, test_1230) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("---0-----")), "Game in progress\n");
}
TEST(BasicTests, test_1231) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("X-0-X00X0")), "Second player wins\n");
}
TEST(BasicTests, test_1232) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("X0-XX-0X0")), "Game in progress\n");
}
TEST(BasicTests, test_1233) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("0X------0")), "Game in progress\n");
}
TEST(BasicTests, test_1234) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("X-00X00XX")), "First player wins\n");
}
TEST(BasicTests, test_1235) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("-0--0XX0X")), "Second player wins\n");
}
TEST(BasicTests, test_1236) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("---0---X-")), "Game in progress\n");
}
TEST(BasicTests, test_1237) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("XXXX00000")), "First player wins\n");
}
TEST(BasicTests, test_1238) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("X0X00XX00")), "Second player wins\n");
}
TEST(BasicTests, test_1239) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("0X0XX0X00")), "Second player wins\n");
}
TEST(BasicTests, test_1240) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("-0X0-00XX")), "Game in progress\n");
}
TEST(BasicTests, test_1241) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("X-0X----0")), "Game in progress\n");
}
TEST(BasicTests, test_1242) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("-X--00XX0")), "Game in progress\n");
}
TEST(BasicTests, test_1243) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("---0-----")), "Game in progress\n");
}
TEST(BasicTests, test_1244) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("XX0X--0--")), "Game in progress\n");
}
TEST(BasicTests, test_1245) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("X00X0-XX0")), "First player wins\n");
}
TEST(BasicTests, test_1246) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("X-00--XX-")), "Game in progress\n");
}
TEST(BasicTests, test_1247) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("-X0---0-X")), "Game in progress\n");
}
TEST(BasicTests, test_1248) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("XX-0--0-0")), "Game in progress\n");
}
TEST(BasicTests, test_1249) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("--0-XX-0-")), "Game in progress\n");
}
TEST(BasicTests, test_1250) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("---X0--X0")), "Game in progress\n");
}
TEST(BasicTests, test_1251) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("X-00X0X0X")), "First player wins\n");
}
TEST(BasicTests, test_1252) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("0--X----0")), "Game in progress\n");
}
TEST(BasicTests, test_1253) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("X0-0X-0X-")), "Game in progress\n");
}
TEST(BasicTests, test_1254) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("---X0----")), "Game in progress\n");
}
TEST(BasicTests, test_1255) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("0XX000XX-")), "Second player wins\n");
}
TEST(BasicTests, test_1256) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("--X0X---0")), "Game in progress\n");
}
TEST(BasicTests, test_1257) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("X-X-0----")), "Game in progress\n");
}
TEST(BasicTests, test_1258) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("-------X0")), "Game in progress\n");
}
TEST(BasicTests, test_1259) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("00----0XX")), "Game in progress\n");
}
TEST(BasicTests, test_1260) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("--X0-0X0X")), "Game in progress\n");
}
TEST(BasicTests, test_1261) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("00XXXX0--")), "First player wins\n");
}
TEST(BasicTests, test_1262) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("0XX0X-0-X")), "Second player wins\n");
}
TEST(BasicTests, test_1263) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("0-X------")), "Game in progress\n");
}
TEST(BasicTests, test_1264) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("0-0X0XXX-")), "Game in progress\n");
}
TEST(BasicTests, test_1265) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("X-00-0XX-")), "Game in progress\n");
}
TEST(BasicTests, test_1266) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("0X0000XXX")), "Second player wins\n");
}
TEST(BasicTests, test_1267) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("X-0-0X0X-")), "Second player wins\n");
}
TEST(BasicTests, test_1268) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("0XX-X000X")), "Game in progress\n");
}
TEST(BasicTests, test_1269) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("-X-XXX000")), "First player wins\n");
}
TEST(BasicTests, test_1270) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("X-0X-----")), "Game in progress\n");
}
TEST(BasicTests, test_1271) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("0X0XX0X00")), "Second player wins\n");
}
TEST(BasicTests, test_1272) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("-0-0X-X-X")), "Game in progress\n");
}
TEST(BasicTests, test_1273) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("-0-X--X--")), "Game in progress\n");
}
TEST(BasicTests, test_1274) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("XX000X0X0")), "Second player wins\n");
}
TEST(BasicTests, test_1275) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("00X00-XXX")), "First player wins\n");
}
TEST(BasicTests, test_1276) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("0-0XX-0X-")), "Game in progress\n");
}
TEST(BasicTests, test_1277) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("0XX-X0-X0")), "First player wins\n");
}
TEST(BasicTests, test_1278) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("X0-X-0-X0")), "Game in progress\n");
}
TEST(BasicTests, test_1279) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("00--X0XX0")), "Game in progress\n");
}
TEST(BasicTests, test_1280) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("-XX0-000X")), "Game in progress\n");
}
TEST(BasicTests, test_1281) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("00-XXXX0-")), "First player wins\n");
}
TEST(BasicTests, test_1282) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("---X-0X--")), "Game in progress\n");
}
TEST(BasicTests, test_1283) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("---X--0X0")), "Game in progress\n");
}
TEST(BasicTests, test_1284) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("0X-------")), "Game in progress\n");
}
TEST(BasicTests, test_1285) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("X-X00-0XX")), "Game in progress\n");
}
TEST(BasicTests, test_1286) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("0---X-0--")), "Game in progress\n");
}
TEST(BasicTests, test_1287) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("--------X")), "Game in progress\n");
}
TEST(BasicTests, test_1288) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("X0XX0X0-0")), "Game in progress\n");
}
TEST(BasicTests, test_1289) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("00X0-XX0X")), "First player wins\n");
}
TEST(BasicTests, test_1290) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("---0-----")), "Game in progress\n");
}
TEST(BasicTests, test_1291) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("XX-00-0-X")), "Game in progress\n");
}
TEST(BasicTests, test_1292) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("0XX0---0-")), "Game in progress\n");
}
TEST(BasicTests, test_1293) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("-X0--0--X")), "Game in progress\n");
}
TEST(BasicTests, test_1294) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("---X0----")), "Game in progress\n");
}
TEST(BasicTests, test_1295) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("-X00X0X--")), "Game in progress\n");
}
TEST(BasicTests, test_1296) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("----0-X--")), "Game in progress\n");
}
TEST(BasicTests, test_1297) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("0-X---0--")), "Game in progress\n");
}
TEST(BasicTests, test_1298) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("--0-----X")), "Game in progress\n");
}
TEST(BasicTests, test_1299) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("-X-0--0XX")), "Game in progress\n");
}
TEST(BasicTests, test_1300) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("--0--X0-X")), "Game in progress\n");
}
TEST(BasicTests, test_1301) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("-0-X-X-0-")), "Game in progress\n");
}
TEST(BasicTests, test_1302) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("--X------")), "Game in progress\n");
}
TEST(BasicTests, test_1303) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("0XXX0X0-0")), "Second player wins\n");
}
TEST(BasicTests, test_1304) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("----0----")), "Game in progress\n");
}
TEST(BasicTests, test_1305) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("0-0X--X-X")), "Game in progress\n");
}
TEST(BasicTests, test_1306) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("0XX-X-X00")), "First player wins\n");
}
TEST(BasicTests, test_1307) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("--------0")), "Game in progress\n");
}
TEST(BasicTests, test_1308) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("------X-0")), "Game in progress\n");
}
TEST(BasicTests, test_1309) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("---X0--X0")), "Game in progress\n");
}
TEST(BasicTests, test_1310) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("0-0X--X0-")), "Game in progress\n");
}
TEST(BasicTests, test_1311) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("0-0X-0X-X")), "Game in progress\n");
}
TEST(BasicTests, test_1312) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("0-X-XX000")), "Second player wins\n");
}
TEST(BasicTests, test_1313) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("0X0XXX0-0")), "First player wins\n");
}
TEST(BasicTests, test_1314) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("0X--X-0X0")), "First player wins\n");
}
TEST(BasicTests, test_1315) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("-X---X0--")), "Game in progress\n");
}
TEST(BasicTests, test_1316) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("-0X------")), "Game in progress\n");
}
TEST(BasicTests, test_1317) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("00X0X--X0")), "Game in progress\n");
}
TEST(BasicTests, test_1318) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("00X0-XX--")), "Game in progress\n");
}
TEST(BasicTests, test_1319) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("---0---X-")), "Game in progress\n");
}
TEST(BasicTests, test_1320) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("X000XXXX0")), "Draw\n");
}
TEST(BasicTests, test_1321) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("X-----0--")), "Game in progress\n");
}
TEST(BasicTests, test_1322) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("----0--X-")), "Game in progress\n");
}
TEST(BasicTests, test_1323) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("XX000X00X")), "Second player wins\n");
}
TEST(BasicTests, test_1324) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("-0-0X-0XX")), "Game in progress\n");
}
TEST(BasicTests, test_1325) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("0--------")), "Game in progress\n");
}
TEST(BasicTests, test_1326) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("-X0XX0---")), "Game in progress\n");
}
TEST(BasicTests, test_1327) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("X0X0XX0X0")), "Draw\n");
}
TEST(BasicTests, test_1328) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("-XX0--00-")), "Game in progress\n");
}
TEST(BasicTests, test_1329) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("XX00X-0X0")), "First player wins\n");
}
TEST(BasicTests, test_1330) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("-----0--X")), "Game in progress\n");
}
TEST(BasicTests, test_1331) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("X---XX-00")), "Game in progress\n");
}
TEST(BasicTests, test_1332) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("X-X00---0")), "Game in progress\n");
}
TEST(BasicTests, test_1333) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("0X-0X0XX0")), "First player wins\n");
}
TEST(BasicTests, test_1334) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("---0-----")), "Game in progress\n");
}
TEST(BasicTests, test_1335) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("----0X---")), "Game in progress\n");
}
TEST(BasicTests, test_1336) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("X-0X0XX0-")), "First player wins\n");
}
TEST(BasicTests, test_1337) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("0X-X-0XX0")), "Game in progress\n");
}
TEST(BasicTests, test_1338) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("--0XX0-X0")), "Second player wins\n");
}
TEST(BasicTests, test_1339) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("----0----")), "Game in progress\n");
}
TEST(BasicTests, test_1340) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("0----XX0-")), "Game in progress\n");
}
TEST(BasicTests, test_1341) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("X0XXX000X")), "First player wins\n");
}
TEST(BasicTests, test_1342) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("000X0XXX0")), "Second player wins\n");
}
TEST(BasicTests, test_1343) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("-X-X-0-0-")), "Game in progress\n");
}
TEST(BasicTests, test_1344) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("-XX0XX000")), "Second player wins\n");
}
TEST(BasicTests, test_1345) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("0X00XX00X")), "Second player wins\n");
}
TEST(BasicTests, test_1346) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("X--------")), "Game in progress\n");
}
TEST(BasicTests, test_1347) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("X00XXX-0-")), "First player wins\n");
}
TEST(BasicTests, test_1348) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("00X0-XX0X")), "First player wins\n");
}
TEST(BasicTests, test_1349) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("--0---X--")), "Game in progress\n");
}
TEST(BasicTests, test_1350) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("-X---0-0-")), "Game in progress\n");
}
TEST(BasicTests, test_1351) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("--0------")), "Game in progress\n");
}
TEST(BasicTests, test_1352) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("0X-X0--0X")), "Game in progress\n");
}
TEST(BasicTests, test_1353) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("-0XX0X-00")), "Second player wins\n");
}
TEST(BasicTests, test_1354) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("0--0-X--X")), "Game in progress\n");
}
TEST(BasicTests, test_1355) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("0--XX--0-")), "Game in progress\n");
}
TEST(BasicTests, test_1356) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("X-X--00--")), "Game in progress\n");
}
TEST(BasicTests, test_1357) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("0X0XXX000")), "First player wins\n");
}
TEST(BasicTests, test_1358) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("X00XX0XX0")), "First player wins\n");
}
TEST(BasicTests, test_1359) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("0XX0-X0X0")), "Second player wins\n");
}
TEST(BasicTests, test_1360) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("X0X0-00XX")), "Game in progress\n");
}
TEST(BasicTests, test_1361) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("-X-0-X-X0")), "Game in progress\n");
}
TEST(BasicTests, test_1362) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("00--X----")), "Game in progress\n");
}
TEST(BasicTests, test_1363) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("00-XXXX-0")), "First player wins\n");
}
TEST(BasicTests, test_1364) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("X0---0---")), "Game in progress\n");
}
TEST(BasicTests, test_1365) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("0X--0----")), "Game in progress\n");
}
TEST(BasicTests, test_1366) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("--------X")), "Game in progress\n");
}
TEST(BasicTests, test_1367) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("--0-0XX--")), "Game in progress\n");
}
TEST(BasicTests, test_1368) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("-XX0X---0")), "Game in progress\n");
}
TEST(BasicTests, test_1369) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("-0-0-X--X")), "Game in progress\n");
}
TEST(BasicTests, test_1370) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("--X00-X0X")), "Game in progress\n");
}
TEST(BasicTests, test_1371) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("-----X-X0")), "Game in progress\n");
}
TEST(BasicTests, test_1372) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("-------X-")), "Game in progress\n");
}
TEST(BasicTests, test_1373) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("-0-X0-X0X")), "Second player wins\n");
}
TEST(BasicTests, test_1374) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("X00XX0X-0")), "First player wins\n");
}
TEST(BasicTests, test_1375) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("X-00-00XX")), "Game in progress\n");
}
TEST(BasicTests, test_1376) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("X0XX0XX00")), "First player wins\n");
}
TEST(BasicTests, test_1377) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("XX0X00X00")), "First player wins\n");
}
TEST(BasicTests, test_1378) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("X0-X--0-0")), "Game in progress\n");
}
TEST(BasicTests, test_1379) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("---X-X0--")), "Game in progress\n");
}
TEST(BasicTests, test_1380) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("0-0-XX-X-")), "Game in progress\n");
}
TEST(BasicTests, test_1381) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("0-0X-X0X0")), "Game in progress\n");
}
TEST(BasicTests, test_1382) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("-----0---")), "Game in progress\n");
}
TEST(BasicTests, test_1383) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("--------X")), "Game in progress\n");
}
TEST(BasicTests, test_1384) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("X-0X0X0--")), "Second player wins\n");
}
TEST(BasicTests, test_1385) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("-XX--X-00")), "Game in progress\n");
}
TEST(BasicTests, test_1386) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("0X0XX-X0-")), "Game in progress\n");
}
TEST(BasicTests, test_1387) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("0X---0-XX")), "Game in progress\n");
}
TEST(BasicTests, test_1388) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("-----X0--")), "Game in progress\n");
}
TEST(BasicTests, test_1389) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("X---0---X")), "Game in progress\n");
}
TEST(BasicTests, test_1390) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("0X---0-XX")), "Game in progress\n");
}
TEST(BasicTests, test_1391) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("-XX00X--0")), "Game in progress\n");
}
TEST(BasicTests, test_1392) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("X-0X000XX")), "Second player wins\n");
}
TEST(BasicTests, test_1393) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("0X0X-00X-")), "Game in progress\n");
}
TEST(BasicTests, test_1394) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("-----X---")), "Game in progress\n");
}
TEST(BasicTests, test_1395) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("00X0XX0XX")), "Second player wins\n");
}
TEST(BasicTests, test_1396) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("--00X--X-")), "Game in progress\n");
}
TEST(BasicTests, test_1397) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("XX0XX000X")), "First player wins\n");
}
TEST(BasicTests, test_1398) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("-X--X---0")), "Game in progress\n");
}
TEST(BasicTests, test_1399) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("-0-0X0XX-")), "Game in progress\n");
}
TEST(BasicTests, test_1400) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("--XX-00X-")), "Game in progress\n");
}
TEST(BasicTests, test_1401) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("X0XX00---")), "Game in progress\n");
}
TEST(BasicTests, test_1402) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("--------X")), "Game in progress\n");
}
TEST(BasicTests, test_1403) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("00XX---X0")), "Game in progress\n");
}
TEST(BasicTests, test_1404) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("X00X00XX0")), "First player wins\n");
}
TEST(BasicTests, test_1405) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("X---0X---")), "Game in progress\n");
}
TEST(BasicTests, test_1406) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("X00X00X0X")), "First player wins\n");
}
TEST(BasicTests, test_1407) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("00XX0XX00")), "Second player wins\n");
}
TEST(BasicTests, test_1408) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("--0X---0-")), "Game in progress\n");
}
TEST(BasicTests, test_1409) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("-X0------")), "Game in progress\n");
}
TEST(BasicTests, test_1410) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("--000X0XX")), "Second player wins\n");
}
TEST(BasicTests, test_1411) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("----X-00-")), "Game in progress\n");
}
TEST(BasicTests, test_1412) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("0-X0XX00-")), "Second player wins\n");
}
TEST(BasicTests, test_1413) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("X0-XX--00")), "Game in progress\n");
}
TEST(BasicTests, test_1414) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("0XX0XX00-")), "Second player wins\n");
}
TEST(BasicTests, test_1415) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("-0X0X0-0X")), "Game in progress\n");
}
TEST(BasicTests, test_1416) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("-----0---")), "Game in progress\n");
}
TEST(BasicTests, test_1417) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("0XX0X0X00")), "First player wins\n");
}
TEST(BasicTests, test_1418) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("00X0XXX0X")), "First player wins\n");
}
TEST(BasicTests, test_1419) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("0X0X-0XX-")), "Game in progress\n");
}
TEST(BasicTests, test_1420) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("XX00X0X00")), "Second player wins\n");
}
TEST(BasicTests, test_1421) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("-XX000X0X")), "Second player wins\n");
}
TEST(BasicTests, test_1422) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("--00--X--")), "Game in progress\n");
}
TEST(BasicTests, test_1423) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("XXX00--0-")), "First player wins\n");
}
TEST(BasicTests, test_1424) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("XXX-000X0")), "First player wins\n");
}
TEST(BasicTests, test_1425) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("0-----X0-")), "Game in progress\n");
}
TEST(BasicTests, test_1426) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("000-XXX0X")), "Second player wins\n");
}
TEST(BasicTests, test_1427) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("X0-X0X0-X")), "Game in progress\n");
}
TEST(BasicTests, test_1428) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("----X0--X")), "Game in progress\n");
}
TEST(BasicTests, test_1429) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("X00X0X--X")), "Game in progress\n");
}
TEST(BasicTests, test_1430) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("0--XX00X-")), "Game in progress\n");
}
TEST(BasicTests, test_1431) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("-X------0")), "Game in progress\n");
}
TEST(BasicTests, test_1432) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("00-XX00XX")), "Game in progress\n");
}
TEST(BasicTests, test_1433) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("0X0--0XXX")), "First player wins\n");
}
TEST(BasicTests, test_1434) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("------X--")), "Game in progress\n");
}
TEST(BasicTests, test_1435) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("--X0X0X0-")), "First player wins\n");
}
TEST(BasicTests, test_1436) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("X000X00XX")), "First player wins\n");
}
TEST(BasicTests, test_1437) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("00--X-0-X")), "Game in progress\n");
}
TEST(BasicTests, test_1438) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("-0-X-----")), "Game in progress\n");
}
TEST(BasicTests, test_1439) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("--0-X-X0-")), "Game in progress\n");
}
TEST(BasicTests, test_1440) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("--------X")), "Game in progress\n");
}
TEST(BasicTests, test_1441) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("----X---0")), "Game in progress\n");
}
TEST(BasicTests, test_1442) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("-----X---")), "Game in progress\n");
}
TEST(BasicTests, test_1443) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("00X-X-0XX")), "Game in progress\n");
}
TEST(BasicTests, test_1444) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("XX-00-0X0")), "Game in progress\n");
}
TEST(BasicTests, test_1445) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("-X-0X---0")), "Game in progress\n");
}
TEST(BasicTests, test_1446) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("-----X---")), "Game in progress\n");
}
TEST(BasicTests, test_1447) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("0-0-X---X")), "Game in progress\n");
}
TEST(BasicTests, test_1448) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("-X-00--X-")), "Game in progress\n");
}
TEST(BasicTests, test_1449) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("-----0---")), "Game in progress\n");
}
TEST(BasicTests, test_1450) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("0XX0XXX00")), "First player wins\n");
}
TEST(BasicTests, test_1451) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("-X0-X00XX")), "First player wins\n");
}
TEST(BasicTests, test_1452) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("0X0XX00X0")), "First player wins\n");
}
TEST(BasicTests, test_1453) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("-0X-0--0X")), "Second player wins\n");
}
TEST(BasicTests, test_1454) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("X0-------")), "Game in progress\n");
}
TEST(BasicTests, test_1455) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("0--XX0X00")), "Game in progress\n");
}
TEST(BasicTests, test_1456) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("-0-------")), "Game in progress\n");
}
TEST(BasicTests, test_1457) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("-0---X---")), "Game in progress\n");
}
TEST(BasicTests, test_1458) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("0--X--X0-")), "Game in progress\n");
}
TEST(BasicTests, test_1459) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("-X0--0X0X")), "Game in progress\n");
}
TEST(BasicTests, test_1460) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("XX0X0000X")), "Second player wins\n");
}
TEST(BasicTests, test_1461) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("-----0---")), "Game in progress\n");
}
TEST(BasicTests, test_1462) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("0-X-X-00X")), "Game in progress\n");
}
TEST(BasicTests, test_1463) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("000X0X-XX")), "Second player wins\n");
}
TEST(BasicTests, test_1464) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("--0-X----")), "Game in progress\n");
}
TEST(BasicTests, test_1465) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("X------0-")), "Game in progress\n");
}
TEST(BasicTests, test_1466) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("----X0-0-")), "Game in progress\n");
}
TEST(BasicTests, test_1467) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("X---0--X-")), "Game in progress\n");
}
TEST(BasicTests, test_1468) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("000X---X-")), "Second player wins\n");
}
TEST(BasicTests, test_1469) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("XX000--X-")), "Game in progress\n");
}
TEST(BasicTests, test_1470) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("000X0X-XX")), "Second player wins\n");
}
TEST(BasicTests, test_1471) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("-0X-X-X-0")), "First player wins\n");
}
TEST(BasicTests, test_1472) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("X--0-X0X-")), "Game in progress\n");
}
TEST(BasicTests, test_1473) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("00-XX0X-X")), "Game in progress\n");
}
TEST(BasicTests, test_1474) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("X00XX000X")), "First player wins\n");
}
TEST(BasicTests, test_1475) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("---X-0-0X")), "Game in progress\n");
}
TEST(BasicTests, test_1476) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("X0-0X0XX0")), "Game in progress\n");
}
TEST(BasicTests, test_1477) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("X0-00X-XX")), "Game in progress\n");
}
TEST(BasicTests, test_1478) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("0XXX-00X-")), "Game in progress\n");
}
TEST(BasicTests, test_1479) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("-0X0X00-X")), "Game in progress\n");
}
TEST(BasicTests, test_1480) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("--X0---X-")), "Game in progress\n");
}
TEST(BasicTests, test_1481) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("0XXX0X0-0")), "Second player wins\n");
}
TEST(BasicTests, test_1482) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("------X-0")), "Game in progress\n");
}
TEST(BasicTests, test_1483) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("X0-00X-XX")), "Game in progress\n");
}
TEST(BasicTests, test_1484) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("0XXX0X00-")), "Game in progress\n");
}
TEST(BasicTests, test_1485) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("-00XX0XX0")), "Second player wins\n");
}
TEST(BasicTests, test_1486) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("-0X------")), "Game in progress\n");
}
TEST(BasicTests, test_1487) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("--X-0---0")), "Game in progress\n");
}
TEST(BasicTests, test_1488) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("-0--0---X")), "Game in progress\n");
}
TEST(BasicTests, test_1489) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("---0-----")), "Game in progress\n");
}
TEST(BasicTests, test_1490) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("--0X0---X")), "Game in progress\n");
}
TEST(BasicTests, test_1491) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("00X0XXX00")), "First player wins\n");
}
TEST(BasicTests, test_1492) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("X00X0XX0X")), "First player wins\n");
}
TEST(BasicTests, test_1493) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("XX0X-X-00")), "Game in progress\n");
}
TEST(BasicTests, test_1494) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("00XX-0XX0")), "Game in progress\n");
}
TEST(BasicTests, test_1495) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("X--00----")), "Game in progress\n");
}
TEST(BasicTests, test_1496) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("-----X00X")), "Game in progress\n");
}
TEST(BasicTests, test_1497) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("-----X---")), "Game in progress\n");
}
TEST(BasicTests, test_1498) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("X0X0-----")), "Game in progress\n");
}
TEST(BasicTests, test_1499) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("-0XX--X0-")), "Game in progress\n");
}
TEST(BasicTests, test_1500) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("0XX00XX-0")), "Second player wins\n");
}
TEST(BasicTests, test_1501) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("X00000XXX")), "Second player wins\n");
}
TEST(BasicTests, test_1502) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("XX0--0-X0")), "Second player wins\n");
}
TEST(BasicTests, test_1503) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("--X-0X0-0")), "Game in progress\n");
}
TEST(BasicTests, test_1504) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("X000X-X-X")), "First player wins\n");
}
TEST(BasicTests, test_1505) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("XX0X000XX")), "Second player wins\n");
}
TEST(BasicTests, test_1506) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("XX00X0X0X")), "First player wins\n");
}
TEST(BasicTests, test_1507) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("00X0-X0-X")), "Second player wins\n");
}
TEST(BasicTests, test_1508) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("XX0X00X0-")), "First player wins\n");
}
TEST(BasicTests, test_1509) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("---X-----")), "Game in progress\n");
}
TEST(BasicTests, test_1510) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("0--------")), "Game in progress\n");
}
TEST(BasicTests, test_1511) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("X-0X-000X")), "Game in progress\n");
}
TEST(BasicTests, test_1512) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("00X-0-XX-")), "Game in progress\n");
}
TEST(BasicTests, test_1513) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("0X------0")), "Game in progress\n");
}
TEST(BasicTests, test_1514) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("XXX000X0-")), "First player wins\n");
}
TEST(BasicTests, test_1515) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("XX-00-0X0")), "Game in progress\n");
}
TEST(BasicTests, test_1516) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("X------0-")), "Game in progress\n");
}
TEST(BasicTests, test_1517) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("X0-X-XX00")), "First player wins\n");
}
TEST(BasicTests, test_1518) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("0XXX0XX00")), "Second player wins\n");
}
TEST(BasicTests, test_1519) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("----X-0-0")), "Game in progress\n");
}
TEST(BasicTests, test_1520) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("X-00-X--0")), "Game in progress\n");
}
TEST(BasicTests, test_1521) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("----X--0-")), "Game in progress\n");
}
TEST(BasicTests, test_1522) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("X--------")), "Game in progress\n");
}
TEST(BasicTests, test_1523) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("-0-X0-0X-")), "Game in progress\n");
}
TEST(BasicTests, test_1524) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("--0XX--00")), "Game in progress\n");
}
TEST(BasicTests, test_1525) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("X------0-")), "Game in progress\n");
}
TEST(BasicTests, test_1526) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("-0XX0X--0")), "Game in progress\n");
}
TEST(BasicTests, test_1527) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("XXX0XX000")), "First player wins\n");
}
TEST(BasicTests, test_1528) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("-0-----XX")), "Game in progress\n");
}
TEST(BasicTests, test_1529) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("X00-0-XX-")), "Game in progress\n");
}
TEST(BasicTests, test_1530) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("0-XX0-0-X")), "Game in progress\n");
}
TEST(BasicTests, test_1531) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("0--0-X-XX")), "Game in progress\n");
}
TEST(BasicTests, test_1532) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("000XXXXX0")), "Second player wins\n");
}
TEST(BasicTests, test_1533) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("X---0----")), "Game in progress\n");
}
TEST(BasicTests, test_1534) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("---X-0X0-")), "Game in progress\n");
}
TEST(BasicTests, test_1535) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("-X0-00X-X")), "Game in progress\n");
}
TEST(BasicTests, test_1536) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("----00--X")), "Game in progress\n");
}
TEST(BasicTests, test_1537) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("------0--")), "Game in progress\n");
}
TEST(BasicTests, test_1538) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("---XX0---")), "Game in progress\n");
}
TEST(BasicTests, test_1539) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("---0XX0X0")), "Game in progress\n");
}
TEST(BasicTests, test_1540) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("-0X0----X")), "Game in progress\n");
}
TEST(BasicTests, test_1541) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("0--X-X0X0")), "Game in progress\n");
}
TEST(BasicTests, test_1542) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("-0XXX0X00")), "First player wins\n");
}
TEST(BasicTests, test_1543) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("--X------")), "Game in progress\n");
}
TEST(BasicTests, test_1544) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("------X--")), "Game in progress\n");
}
TEST(BasicTests, test_1545) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("0X--0--X-")), "Game in progress\n");
}
TEST(BasicTests, test_1546) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("0X-X-0--X")), "Game in progress\n");
}
TEST(BasicTests, test_1547) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("-0XX-X-00")), "Game in progress\n");
}
TEST(BasicTests, test_1548) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("XX-00X-00")), "Game in progress\n");
}
TEST(BasicTests, test_1549) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("-XX00-X0X")), "Game in progress\n");
}
TEST(BasicTests, test_1550) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("-------0-")), "Game in progress\n");
}
TEST(BasicTests, test_1551) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("------0-X")), "Game in progress\n");
}
TEST(BasicTests, test_1552) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("X-----0--")), "Game in progress\n");
}
TEST(BasicTests, test_1553) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("0X---0X--")), "Game in progress\n");
}
TEST(BasicTests, test_1554) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("0-XXX0X00")), "First player wins\n");
}
TEST(BasicTests, test_1555) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("-0--X-X00")), "Game in progress\n");
}
TEST(BasicTests, test_1556) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("-X---0--X")), "Game in progress\n");
}
TEST(BasicTests, test_1557) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("-0---X-X-")), "Game in progress\n");
}
TEST(BasicTests, test_1558) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("-X-0XX-0-")), "Game in progress\n");
}
TEST(BasicTests, test_1559) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("0XX0XX-00")), "Game in progress\n");
}
TEST(BasicTests, test_1560) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("XXX0--X00")), "First player wins\n");
}
TEST(BasicTests, test_1561) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("X00X00XXX")), "First player wins\n");
}
TEST(BasicTests, test_1562) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("X0XX-0-X0")), "Game in progress\n");
}
TEST(BasicTests, test_1563) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("X---0-X00")), "Game in progress\n");
}
TEST(BasicTests, test_1564) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("-000XXX0X")), "Game in progress\n");
}
TEST(BasicTests, test_1565) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("X0X000-XX")), "Second player wins\n");
}
TEST(BasicTests, test_1566) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("X00XXXX00")), "First player wins\n");
}
TEST(BasicTests, test_1567) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("X-0--X---")), "Game in progress\n");
}
TEST(BasicTests, test_1568) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("-000---XX")), "Game in progress\n");
}
TEST(BasicTests, test_1569) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("-0--00XXX")), "First player wins\n");
}
TEST(BasicTests, test_1570) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("-X0--0X--")), "Game in progress\n");
}
TEST(BasicTests, test_1571) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("--0----X0")), "Game in progress\n");
}
TEST(BasicTests, test_1572) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("X-00XXX00")), "Game in progress\n");
}
TEST(BasicTests, test_1573) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("-X-------")), "Game in progress\n");
}
TEST(BasicTests, test_1574) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("X--XX0-00")), "Game in progress\n");
}
TEST(BasicTests, test_1575) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("X0000XXXX")), "First player wins\n");
}
TEST(BasicTests, test_1576) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("X00X0XXX0")), "First player wins\n");
}
TEST(BasicTests, test_1577) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("00---X---")), "Game in progress\n");
}
TEST(BasicTests, test_1578) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("--X----0-")), "Game in progress\n");
}
TEST(BasicTests, test_1579) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("-----X--0")), "Game in progress\n");
}
TEST(BasicTests, test_1580) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("X--------")), "Game in progress\n");
}
TEST(BasicTests, test_1581) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("00XXX0X00")), "First player wins\n");
}
TEST(BasicTests, test_1582) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("0-X0X0-X-")), "Game in progress\n");
}
TEST(BasicTests, test_1583) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("X-----0-X")), "Game in progress\n");
}
TEST(BasicTests, test_1584) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("------X--")), "Game in progress\n");
}
TEST(BasicTests, test_1585) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("XX00X0-0X")), "First player wins\n");
}
TEST(BasicTests, test_1586) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("--0-0X--X")), "Game in progress\n");
}
TEST(BasicTests, test_1587) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("---0-XX0X")), "Game in progress\n");
}
TEST(BasicTests, test_1588) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("----X0---")), "Game in progress\n");
}
TEST(BasicTests, test_1589) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("--X------")), "Game in progress\n");
}
TEST(BasicTests, test_1590) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("-XX0X---0")), "Game in progress\n");
}
TEST(BasicTests, test_1591) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("X---00X-X")), "Game in progress\n");
}
TEST(BasicTests, test_1592) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("--X------")), "Game in progress\n");
}
TEST(BasicTests, test_1593) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("XX0-0-0X0")), "Second player wins\n");
}
TEST(BasicTests, test_1594) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("----0-X--")), "Game in progress\n");
}
TEST(BasicTests, test_1595) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("-0---X00X")), "Game in progress\n");
}
TEST(BasicTests, test_1596) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("XXXXX0000")), "First player wins\n");
}
TEST(BasicTests, test_1597) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("0X0XX0X00")), "Second player wins\n");
}
TEST(BasicTests, test_1598) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("-----X-00")), "Game in progress\n");
}
TEST(BasicTests, test_1599) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("--0----X-")), "Game in progress\n");
}
TEST(BasicTests, test_1600) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("XXX000X00")), "First player wins\n");
}
TEST(BasicTests, test_1601) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("XX0-0--X0")), "Game in progress\n");
}
TEST(BasicTests, test_1602) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("0X0XX0X0X")), "Draw\n");
}
TEST(BasicTests, test_1603) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("-00-X-X0-")), "Game in progress\n");
}
TEST(BasicTests, test_1604) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("0X0XXXX00")), "First player wins\n");
}
TEST(BasicTests, test_1605) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("X000X0XX0")), "Second player wins\n");
}
TEST(BasicTests, test_1606) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("00-X0X-XX")), "Game in progress\n");
}
TEST(BasicTests, test_1607) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("--0X0--X-")), "Game in progress\n");
}
TEST(BasicTests, test_1608) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("X-0-0---X")), "Game in progress\n");
}
TEST(BasicTests, test_1609) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("0XX00X0X0")), "Second player wins\n");
}
TEST(BasicTests, test_1610) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("--0-X0X0-")), "Game in progress\n");
}
TEST(BasicTests, test_1611) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("-X0-0-XX-")), "Game in progress\n");
}
TEST(BasicTests, test_1612) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("----X-00X")), "Game in progress\n");
}
TEST(BasicTests, test_1613) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("X0XXX000X")), "First player wins\n");
}
TEST(BasicTests, test_1614) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("0X0X000XX")), "Second player wins\n");
}
TEST(BasicTests, test_1615) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("--X--0---")), "Game in progress\n");
}
TEST(BasicTests, test_1616) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("--0--0X-X")), "Game in progress\n");
}
TEST(BasicTests, test_1617) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("0XX0XXX00")), "First player wins\n");
}
TEST(BasicTests, test_1618) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("XX0000XX0")), "Second player wins\n");
}
TEST(BasicTests, test_1619) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("0-X-0X---")), "Game in progress\n");
}
TEST(BasicTests, test_1620) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("---0X0X--")), "Game in progress\n");
}
TEST(BasicTests, test_1621) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("XX0000X0X")), "Second player wins\n");
}
TEST(BasicTests, test_1622) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("--0-X-X--")), "Game in progress\n");
}
TEST(BasicTests, test_1623) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("---X--0--")), "Game in progress\n");
}
TEST(BasicTests, test_1624) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("-0--X-X--")), "Game in progress\n");
}
TEST(BasicTests, test_1625) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("-X00-XXX0")), "Game in progress\n");
}
TEST(BasicTests, test_1626) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("X-0---X--")), "Game in progress\n");
}
TEST(BasicTests, test_1627) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("00X0XXX00")), "First player wins\n");
}
TEST(BasicTests, test_1628) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("-------X-")), "Game in progress\n");
}
TEST(BasicTests, test_1629) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("X---X-0--")), "Game in progress\n");
}
TEST(BasicTests, test_1630) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("-----X---")), "Game in progress\n");
}
TEST(BasicTests, test_1631) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("0XXX00X00")), "Second player wins\n");
}
TEST(BasicTests, test_1632) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("X-X-0--00")), "Game in progress\n");
}
TEST(BasicTests, test_1633) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("00-XXXX0-")), "First player wins\n");
}
TEST(BasicTests, test_1634) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("00XX00X-X")), "Game in progress\n");
}
TEST(BasicTests, test_1635) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("-----0---")), "Game in progress\n");
}
TEST(BasicTests, test_1636) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("X--------")), "Game in progress\n");
}
TEST(BasicTests, test_1637) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("0XX00-X0X")), "Game in progress\n");
}
TEST(BasicTests, test_1638) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("X-0X00--X")), "Game in progress\n");
}
TEST(BasicTests, test_1639) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("------X0-")), "Game in progress\n");
}
TEST(BasicTests, test_1640) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("XXX00X0X0")), "First player wins\n");
}
TEST(BasicTests, test_1641) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("-X-00X--0")), "Game in progress\n");
}
TEST(BasicTests, test_1642) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("X---0X-0-")), "Game in progress\n");
}
TEST(BasicTests, test_1643) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("XXX0X0-00")), "First player wins\n");
}
TEST(BasicTests, test_1644) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("0---X--0X")), "Game in progress\n");
}
TEST(BasicTests, test_1645) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("-00----X-")), "Game in progress\n");
}
TEST(BasicTests, test_1646) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("0X--X-X00")), "Game in progress\n");
}
TEST(BasicTests, test_1647) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("-0X--X--0")), "Game in progress\n");
}
TEST(BasicTests, test_1648) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("X00XX0-0X")), "First player wins\n");
}
TEST(BasicTests, test_1649) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("--0------")), "Game in progress\n");
}
TEST(BasicTests, test_1650) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("0-X---0X-")), "Game in progress\n");
}
TEST(BasicTests, test_1651) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("-X00--X--")), "Game in progress\n");
}
TEST(BasicTests, test_1652) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("X---000X-")), "Game in progress\n");
}
TEST(BasicTests, test_1653) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("-X0--X0X0")), "Game in progress\n");
}
TEST(BasicTests, test_1654) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("---X-----")), "Game in progress\n");
}
TEST(BasicTests, test_1655) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("0X0XX0X0X")), "Draw\n");
}
TEST(BasicTests, test_1656) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("XX00XX000")), "Second player wins\n");
}
TEST(BasicTests, test_1657) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("X----0---")), "Game in progress\n");
}
TEST(BasicTests, test_1658) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("-0X0X0XX0")), "First player wins\n");
}
TEST(BasicTests, test_1659) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("----X----")), "Game in progress\n");
}
TEST(BasicTests, test_1660) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("X00---X-X")), "Game in progress\n");
}
TEST(BasicTests, test_1661) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("00X0-X0XX")), "Second player wins\n");
}
TEST(BasicTests, test_1662) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("-0--X-X--")), "Game in progress\n");
}
TEST(BasicTests, test_1663) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("X000--X-X")), "Game in progress\n");
}
TEST(BasicTests, test_1664) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("X00-0X---")), "Game in progress\n");
}
TEST(BasicTests, test_1665) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("XX--0---0")), "Game in progress\n");
}
TEST(BasicTests, test_1666) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("----0---X")), "Game in progress\n");
}
TEST(BasicTests, test_1667) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("----X---0")), "Game in progress\n");
}
TEST(BasicTests, test_1668) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("X0-X0X0X0")), "Game in progress\n");
}
TEST(BasicTests, test_1669) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("XX----00-")), "Game in progress\n");
}
TEST(BasicTests, test_1670) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("-000XXX0-")), "Game in progress\n");
}
TEST(BasicTests, test_1671) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("XX0X0XX00")), "First player wins\n");
}
TEST(BasicTests, test_1672) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("X------0-")), "Game in progress\n");
}
TEST(BasicTests, test_1673) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("-00-0X-XX")), "Game in progress\n");
}
TEST(BasicTests, test_1674) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("------0--")), "Game in progress\n");
}
TEST(BasicTests, test_1675) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("0X00XX0X-")), "Second player wins\n");
}
TEST(BasicTests, test_1676) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("0XX0--XX0")), "Game in progress\n");
}
TEST(BasicTests, test_1677) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("0--------")), "Game in progress\n");
}
TEST(BasicTests, test_1678) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("0X----X--")), "Game in progress\n");
}
TEST(BasicTests, test_1679) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("-0--X0---")), "Game in progress\n");
}
TEST(BasicTests, test_1680) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("--0--0-X-")), "Game in progress\n");
}
TEST(BasicTests, test_1681) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("---0-----")), "Game in progress\n");
}
TEST(BasicTests, test_1682) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("0XX00X00X")), "Second player wins\n");
}
TEST(BasicTests, test_1683) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("X0X0X0X--")), "First player wins\n");
}
TEST(BasicTests, test_1684) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("X--0-XX00")), "Game in progress\n");
}
TEST(BasicTests, test_1685) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("X00----X-")), "Game in progress\n");
}
TEST(BasicTests, test_1686) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("--X--00X-")), "Game in progress\n");
}
TEST(BasicTests, test_1687) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("X-0--0X--")), "Game in progress\n");
}
TEST(BasicTests, test_1688) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("X-0-0XX0-")), "Game in progress\n");
}
TEST(BasicTests, test_1689) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("XXX-0-00X")), "First player wins\n");
}
TEST(BasicTests, test_1690) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("00000XXXX")), "Second player wins\n");
}
TEST(BasicTests, test_1691) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("--X----00")), "Game in progress\n");
}
TEST(BasicTests, test_1692) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("X0--X00X-")), "Game in progress\n");
}
TEST(BasicTests, test_1693) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("X-X-00X00")), "Game in progress\n");
}
TEST(BasicTests, test_1694) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("-0----0-X")), "Game in progress\n");
}
TEST(BasicTests, test_1695) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("X0--X0X0-")), "Game in progress\n");
}
TEST(BasicTests, test_1696) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("--0X-0-X-")), "Game in progress\n");
}
TEST(BasicTests, test_1697) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("X0X0X0X00")), "First player wins\n");
}
TEST(BasicTests, test_1698) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("-0X0-X---")), "Game in progress\n");
}
TEST(BasicTests, test_1699) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("XX000--X0")), "Game in progress\n");
}
TEST(BasicTests, test_1700) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("XX000X0X0")), "Second player wins\n");
}
TEST(BasicTests, test_1701) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("0X-XXX000")), "First player wins\n");
}
TEST(BasicTests, test_1702) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("XX00XX0X0")), "First player wins\n");
}
TEST(BasicTests, test_1703) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("--0--X0X-")), "Game in progress\n");
}
TEST(BasicTests, test_1704) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("000XX0-XX")), "Second player wins\n");
}
TEST(BasicTests, test_1705) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("X000XXX0-")), "Game in progress\n");
}
TEST(BasicTests, test_1706) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("-------X-")), "Game in progress\n");
}
TEST(BasicTests, test_1707) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("-X0X00XX0")), "Second player wins\n");
}
TEST(BasicTests, test_1708) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("--XX0--0-")), "Game in progress\n");
}
TEST(BasicTests, test_1709) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("XXX0-0X00")), "First player wins\n");
}
TEST(BasicTests, test_1710) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("-000XXX--")), "Game in progress\n");
}
TEST(BasicTests, test_1711) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("XX-----00")), "Game in progress\n");
}
TEST(BasicTests, test_1712) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("--XX--000")), "Second player wins\n");
}
TEST(BasicTests, test_1713) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("--0--X-0X")), "Game in progress\n");
}
TEST(BasicTests, test_1714) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("X-0X000XX")), "Second player wins\n");
}
TEST(BasicTests, test_1715) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("--------0")), "Game in progress\n");
}
TEST(BasicTests, test_1716) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("XX---00--")), "Game in progress\n");
}
TEST(BasicTests, test_1717) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("0X00XX0-X")), "Second player wins\n");
}
TEST(BasicTests, test_1718) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("------X-0")), "Game in progress\n");
}
TEST(BasicTests, test_1719) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("00-0X--X-")), "Game in progress\n");
}
TEST(BasicTests, test_1720) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("000XXX-X0")), "Second player wins\n");
}
TEST(BasicTests, test_1721) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("00X00XXX0")), "Second player wins\n");
}
TEST(BasicTests, test_1722) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("XX000XXX0")), "Draw\n");
}
TEST(BasicTests, test_1723) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("X00XX0X00")), "First player wins\n");
}
TEST(BasicTests, test_1724) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("00-X-X0--")), "Game in progress\n");
}
TEST(BasicTests, test_1725) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("---00X-X-")), "Game in progress\n");
}
TEST(BasicTests, test_1726) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("--0X--0X-")), "Game in progress\n");
}
TEST(BasicTests, test_1727) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("X--XX000-")), "Game in progress\n");
}
TEST(BasicTests, test_1728) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("0-0-XX0XX")), "Game in progress\n");
}
TEST(BasicTests, test_1729) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("X-0X0XX00")), "First player wins\n");
}
TEST(BasicTests, test_1730) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("---0----X")), "Game in progress\n");
}
TEST(BasicTests, test_1731) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("0-000X-XX")), "Game in progress\n");
}
TEST(BasicTests, test_1732) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("0--0--X--")), "Game in progress\n");
}
TEST(BasicTests, test_1733) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("0-X00XXX-")), "Game in progress\n");
}
TEST(BasicTests, test_1734) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("--XX00X--")), "Game in progress\n");
}
TEST(BasicTests, test_1735) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("XXX-X-000")), "First player wins\n");
}
TEST(BasicTests, test_1736) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("000XX0XXX")), "Second player wins\n");
}
TEST(BasicTests, test_1737) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("---X--0--")), "Game in progress\n");
}
TEST(BasicTests, test_1738) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("-0-X--X-0")), "Game in progress\n");
}
TEST(BasicTests, test_1739) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("0X0XX0X00")), "Second player wins\n");
}
TEST(BasicTests, test_1740) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("0----X--X")), "Game in progress\n");
}
TEST(BasicTests, test_1741) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("X0--X-0--")), "Game in progress\n");
}
TEST(BasicTests, test_1742) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("XX-0--0X-")), "Game in progress\n");
}
TEST(BasicTests, test_1743) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("-00-X-0XX")), "Game in progress\n");
}
TEST(BasicTests, test_1744) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("---X----0")), "Game in progress\n");
}
TEST(BasicTests, test_1745) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("0X0XXXX00")), "First player wins\n");
}
TEST(BasicTests, test_1746) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("0X-----X-")), "Game in progress\n");
}
TEST(BasicTests, test_1747) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("0-----X--")), "Game in progress\n");
}
TEST(BasicTests, test_1748) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("XX0X-X000")), "Second player wins\n");
}
TEST(BasicTests, test_1749) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("0-X0XX--0")), "Game in progress\n");
}
TEST(BasicTests, test_1750) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("X0-X0X0-0")), "Game in progress\n");
}
TEST(BasicTests, test_1751) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("XX--000XX")), "Game in progress\n");
}
TEST(BasicTests, test_1752) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("0--X-----")), "Game in progress\n");
}
TEST(BasicTests, test_1753) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("X--XX00--")), "Game in progress\n");
}
TEST(BasicTests, test_1754) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("-0------X")), "Game in progress\n");
}
TEST(BasicTests, test_1755) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("X--X00X0X")), "First player wins\n");
}
TEST(BasicTests, test_1756) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("0X00-0-XX")), "Game in progress\n");
}
TEST(BasicTests, test_1757) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("--0X----0")), "Game in progress\n");
}
TEST(BasicTests, test_1758) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("0XXX00X0X")), "Draw\n");
}
TEST(BasicTests, test_1759) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("X0X-0X--0")), "Game in progress\n");
}
TEST(BasicTests, test_1760) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("0XX0-0--X")), "Game in progress\n");
}
TEST(BasicTests, test_1761) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("000-X-X0X")), "Second player wins\n");
}
TEST(BasicTests, test_1762) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("X0X0X0X0-")), "First player wins\n");
}
TEST(BasicTests, test_1763) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("-X0X0-XX0")), "Game in progress\n");
}
TEST(BasicTests, test_1764) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("-0XX0-X0-")), "Second player wins\n");
}
TEST(BasicTests, test_1765) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("XX0X000-X")), "Second player wins\n");
}
TEST(BasicTests, test_1766) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("-X0XX0X00")), "Second player wins\n");
}
TEST(BasicTests, test_1767) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("0XX0X0X0-")), "First player wins\n");
}
TEST(BasicTests, test_1768) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("0-XX0X0-0")), "Second player wins\n");
}
TEST(BasicTests, test_1769) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("0XX00XX0-")), "Game in progress\n");
}
TEST(BasicTests, test_1770) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("X000X0X--")), "Game in progress\n");
}
TEST(BasicTests, test_1771) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("000XX-0XX")), "Second player wins\n");
}
TEST(BasicTests, test_1772) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("X00-XX-0X")), "First player wins\n");
}
TEST(BasicTests, test_1773) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("0--X-----")), "Game in progress\n");
}
TEST(BasicTests, test_1774) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("---X0----")), "Game in progress\n");
}
TEST(BasicTests, test_1775) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("--X-X00-0")), "Game in progress\n");
}
TEST(BasicTests, test_1776) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("---0-----")), "Game in progress\n");
}
TEST(BasicTests, test_1777) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("0XX0-XX0-")), "Game in progress\n");
}
TEST(BasicTests, test_1778) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("X-0--00XX")), "Game in progress\n");
}
TEST(BasicTests, test_1779) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("0XX0XX0-0")), "Second player wins\n");
}
TEST(BasicTests, test_1780) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("X0X00----")), "Game in progress\n");
}
TEST(BasicTests, test_1781) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("0XX--0---")), "Game in progress\n");
}
TEST(BasicTests, test_1782) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("-----0---")), "Game in progress\n");
}
TEST(BasicTests, test_1783) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("X000X-X0X")), "First player wins\n");
}
TEST(BasicTests, test_1784) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("-X-0X--00")), "Game in progress\n");
}
TEST(BasicTests, test_1785) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("00X0XX00X")), "Second player wins\n");
}
TEST(BasicTests, test_1786) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("-X-000--X")), "Second player wins\n");
}
TEST(BasicTests, test_1787) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("-X-00X00X")), "Game in progress\n");
}
TEST(BasicTests, test_1788) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("--X000X-X")), "Second player wins\n");
}
TEST(BasicTests, test_1789) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("--X------")), "Game in progress\n");
}
TEST(BasicTests, test_1790) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("X-XX-00-0")), "Game in progress\n");
}
TEST(BasicTests, test_1791) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("-000XXX-0")), "Game in progress\n");
}
TEST(BasicTests, test_1792) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("X0000--XX")), "Game in progress\n");
}
TEST(BasicTests, test_1793) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("XX00-----")), "Game in progress\n");
}
TEST(BasicTests, test_1794) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("----0----")), "Game in progress\n");
}
TEST(BasicTests, test_1795) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("-0XXX-00-")), "Game in progress\n");
}
TEST(BasicTests, test_1796) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("X00X0XX-0")), "First player wins\n");
}
TEST(BasicTests, test_1797) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("X--0X--0-")), "Game in progress\n");
}
TEST(BasicTests, test_1798) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("0--------")), "Game in progress\n");
}
TEST(BasicTests, test_1799) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("00XXX-X00")), "First player wins\n");
}
TEST(BasicTests, test_1800) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("---0--X--")), "Game in progress\n");
}
TEST(BasicTests, test_1801) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("X----0XX0")), "Game in progress\n");
}
TEST(BasicTests, test_1802) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("--0X0-0-X")), "Second player wins\n");
}
TEST(BasicTests, test_1803) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("--X-X--00")), "Game in progress\n");
}
TEST(BasicTests, test_1804) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("-0-X---0-")), "Game in progress\n");
}
TEST(BasicTests, test_1805) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("X--0X000X")), "First player wins\n");
}
TEST(BasicTests, test_1806) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("0--XXX0X0")), "First player wins\n");
}
TEST(BasicTests, test_1807) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("-------X-")), "Game in progress\n");
}
TEST(BasicTests, test_1808) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("0X-0-----")), "Game in progress\n");
}
TEST(BasicTests, test_1809) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("-X0-X0--0")), "Second player wins\n");
}
TEST(BasicTests, test_1810) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("X00X0XX0X")), "First player wins\n");
}
TEST(BasicTests, test_1811) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("-X-------")), "Game in progress\n");
}
TEST(BasicTests, test_1812) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("X0-00X--X")), "Game in progress\n");
}
TEST(BasicTests, test_1813) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("XX0--X-00")), "Game in progress\n");
}
TEST(BasicTests, test_1814) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("000XXXX0-")), "Second player wins\n");
}
TEST(BasicTests, test_1815) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("------0X-")), "Game in progress\n");
}
TEST(BasicTests, test_1816) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("-X000--XX")), "Game in progress\n");
}
TEST(BasicTests, test_1817) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("0XX0XX0X0")), "Second player wins\n");
}
TEST(BasicTests, test_1818) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("-000-X0XX")), "Game in progress\n");
}
TEST(BasicTests, test_1819) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("-0X-00XX0")), "Game in progress\n");
}
TEST(BasicTests, test_1820) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("-X---0--0")), "Game in progress\n");
}
TEST(BasicTests, test_1821) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("XX0X--00-")), "Game in progress\n");
}
TEST(BasicTests, test_1822) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("000-X-XXX")), "Second player wins\n");
}
TEST(BasicTests, test_1823) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("--------X")), "Game in progress\n");
}
TEST(BasicTests, test_1824) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("---0----X")), "Game in progress\n");
}
TEST(BasicTests, test_1825) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("--0XXX00X")), "First player wins\n");
}
TEST(BasicTests, test_1826) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("XX0000XXX")), "Second player wins\n");
}
TEST(BasicTests, test_1827) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("-X-X00X00")), "Game in progress\n");
}
TEST(BasicTests, test_1828) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("X----0X0X")), "Game in progress\n");
}
TEST(BasicTests, test_1829) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("---0-XX--")), "Game in progress\n");
}
TEST(BasicTests, test_1830) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("X00XXXX00")), "First player wins\n");
}
TEST(BasicTests, test_1831) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("00XX00XXX")), "First player wins\n");
}
TEST(BasicTests, test_1832) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("XXX0-0X0-")), "First player wins\n");
}
TEST(BasicTests, test_1833) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("XX00XX00-")), "Game in progress\n");
}
TEST(BasicTests, test_1834) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("-0----X--")), "Game in progress\n");
}
TEST(BasicTests, test_1835) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("0XX-0---X")), "Game in progress\n");
}
TEST(BasicTests, test_1836) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("0-XX00-X-")), "Game in progress\n");
}
TEST(BasicTests, test_1837) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("-X-------")), "Game in progress\n");
}
TEST(BasicTests, test_1838) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("--------X")), "Game in progress\n");
}
TEST(BasicTests, test_1839) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("--X----0-")), "Game in progress\n");
}
TEST(BasicTests, test_1840) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("--0X-0--X")), "Game in progress\n");
}
TEST(BasicTests, test_1841) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("00--X0XX0")), "Game in progress\n");
}
TEST(BasicTests, test_1842) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("0XX00XXX0")), "Second player wins\n");
}
TEST(BasicTests, test_1843) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("X0X-X-0X0")), "Game in progress\n");
}
TEST(BasicTests, test_1844) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("XX-0-0X--")), "Game in progress\n");
}
TEST(BasicTests, test_1845) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("00X0XX0X-")), "Second player wins\n");
}
TEST(BasicTests, test_1846) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("0X-----0X")), "Game in progress\n");
}
TEST(BasicTests, test_1847) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("--0----0X")), "Game in progress\n");
}
TEST(BasicTests, test_1848) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("X00XXXX00")), "First player wins\n");
}
TEST(BasicTests, test_1849) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("---X-----")), "Game in progress\n");
}
TEST(BasicTests, test_1850) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("XXX000-X0")), "First player wins\n");
}
TEST(BasicTests, test_1851) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("X00X0X0XX")), "Second player wins\n");
}
TEST(BasicTests, test_1852) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("0X-X--0--")), "Game in progress\n");
}
TEST(BasicTests, test_1853) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("X0X------")), "Game in progress\n");
}
TEST(BasicTests, test_1854) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("----XX--0")), "Game in progress\n");
}
TEST(BasicTests, test_1855) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("XX00--0X-")), "Game in progress\n");
}
TEST(BasicTests, test_1856) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("00X0XXXX0")), "First player wins\n");
}
TEST(BasicTests, test_1857) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("XX0XX0X00")), "First player wins\n");
}
TEST(BasicTests, test_1858) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("X-X00X0-0")), "Game in progress\n");
}
TEST(BasicTests, test_1859) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("XX0X0X000")), "Second player wins\n");
}
TEST(BasicTests, test_1860) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("------X0-")), "Game in progress\n");
}
TEST(BasicTests, test_1861) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("0X000X0XX")), "Second player wins\n");
}
TEST(BasicTests, test_1862) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("0X-0-X-0X")), "Game in progress\n");
}
TEST(BasicTests, test_1863) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("----0---X")), "Game in progress\n");
}
TEST(BasicTests, test_1864) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("0X0XX00X0")), "First player wins\n");
}
TEST(BasicTests, test_1865) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("XXX-000-0")), "First player wins\n");
}
TEST(BasicTests, test_1866) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("--0-0-X--")), "Game in progress\n");
}
TEST(BasicTests, test_1867) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("X-X0XX00-")), "Game in progress\n");
}
TEST(BasicTests, test_1868) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("X0-00XXX0")), "Game in progress\n");
}
TEST(BasicTests, test_1869) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("XX00XX0--")), "Game in progress\n");
}
TEST(BasicTests, test_1870) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("--0------")), "Game in progress\n");
}
TEST(BasicTests, test_1871) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("X00-XXX00")), "Game in progress\n");
}
TEST(BasicTests, test_1872) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("X0X00X-0X")), "Second player wins\n");
}
TEST(BasicTests, test_1873) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("00X0X0XX0")), "First player wins\n");
}
TEST(BasicTests, test_1874) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("0X0-XX0X0")), "First player wins\n");
}
TEST(BasicTests, test_1875) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("---0--XX0")), "Game in progress\n");
}
TEST(BasicTests, test_1876) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("--X0X00--")), "Game in progress\n");
}
TEST(BasicTests, test_1877) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("0XX--00-X")), "Game in progress\n");
}
TEST(BasicTests, test_1878) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("-0------X")), "Game in progress\n");
}
TEST(BasicTests, test_1879) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("-0X0---X-")), "Game in progress\n");
}
TEST(BasicTests, test_1880) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("X-0X0X-0-")), "Game in progress\n");
}
TEST(BasicTests, test_1881) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("0000--XXX")), "Second player wins\n");
}
TEST(BasicTests, test_1882) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("X0-XX00X0")), "Game in progress\n");
}
TEST(BasicTests, test_1883) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("--0---X-X")), "Game in progress\n");
}
TEST(BasicTests, test_1884) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("X-00XX--0")), "Game in progress\n");
}
TEST(BasicTests, test_1885) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("XX-0-0XX0")), "Game in progress\n");
}
TEST(BasicTests, test_1886) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("--0-----X")), "Game in progress\n");
}
TEST(BasicTests, test_1887) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("00XXX0-0X")), "Game in progress\n");
}
TEST(BasicTests, test_1888) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("----0---X")), "Game in progress\n");
}
TEST(BasicTests, test_1889) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("X0-X-X--0")), "Game in progress\n");
}
TEST(BasicTests, test_1890) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("-X0-0-0-X")), "Second player wins\n");
}
TEST(BasicTests, test_1891) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("X-------0")), "Game in progress\n");
}
TEST(BasicTests, test_1892) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("X0X0XX00X")), "First player wins\n");
}
TEST(BasicTests, test_1893) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("--X0-0---")), "Game in progress\n");
}
TEST(BasicTests, test_1894) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("0X--0XXX0")), "Second player wins\n");
}
TEST(BasicTests, test_1895) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("0X--0X---")), "Game in progress\n");
}
TEST(BasicTests, test_1896) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("XX00XX00X")), "First player wins\n");
}
TEST(BasicTests, test_1897) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("0-00XXX0X")), "Game in progress\n");
}
TEST(BasicTests, test_1898) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("-0--X-0X-")), "Game in progress\n");
}
TEST(BasicTests, test_1899) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("-00---XX-")), "Game in progress\n");
}
TEST(BasicTests, test_1900) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("00X-X0X--")), "First player wins\n");
}
TEST(BasicTests, test_1901) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("--X0X---0")), "Game in progress\n");
}
TEST(BasicTests, test_1902) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("---0---X0")), "Game in progress\n");
}
TEST(BasicTests, test_1903) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("--X0-0X-0")), "Game in progress\n");
}
TEST(BasicTests, test_1904) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("---X--00-")), "Game in progress\n");
}
TEST(BasicTests, test_1905) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("-X0X--0--")), "Game in progress\n");
}
TEST(BasicTests, test_1906) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("-X0X0X00X")), "Second player wins\n");
}
TEST(BasicTests, test_1907) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("XXXX000-0")), "First player wins\n");
}
TEST(BasicTests, test_1908) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("------X--")), "Game in progress\n");
}
TEST(BasicTests, test_1909) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("X-X---0--")), "Game in progress\n");
}
TEST(BasicTests, test_1910) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("-X-----0-")), "Game in progress\n");
}
TEST(BasicTests, test_1911) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("---0X0X0X")), "Game in progress\n");
}
TEST(BasicTests, test_1912) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("0X---0XX-")), "Game in progress\n");
}
TEST(BasicTests, test_1913) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("--------0")), "Game in progress\n");
}
TEST(BasicTests, test_1914) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("0-00---XX")), "Game in progress\n");
}
TEST(BasicTests, test_1915) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("0-0XXX-0X")), "First player wins\n");
}
TEST(BasicTests, test_1916) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("XXX0-X0-0")), "First player wins\n");
}
TEST(BasicTests, test_1917) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("--X-----0")), "Game in progress\n");
}
TEST(BasicTests, test_1918) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("0XX-X-00-")), "Game in progress\n");
}
TEST(BasicTests, test_1919) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("0X-X-X0--")), "Game in progress\n");
}
TEST(BasicTests, test_1920) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("0---X-00X")), "Game in progress\n");
}
TEST(BasicTests, test_1921) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("0X--XX-00")), "Game in progress\n");
}
TEST(BasicTests, test_1922) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("0X-0X0X0-")), "Game in progress\n");
}
TEST(BasicTests, test_1923) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("X-XX00X00")), "First player wins\n");
}
TEST(BasicTests, test_1924) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("X0X--X00X")), "First player wins\n");
}
TEST(BasicTests, test_1925) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("X0-0-X-0-")), "Game in progress\n");
}
TEST(BasicTests, test_1926) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("--0X-X---")), "Game in progress\n");
}
TEST(BasicTests, test_1927) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("0XX0X0X--")), "First player wins\n");
}
TEST(BasicTests, test_1928) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("------0--")), "Game in progress\n");
}
TEST(BasicTests, test_1929) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("-0XXX-X00")), "First player wins\n");
}
TEST(BasicTests, test_1930) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("XX0XX00-0")), "Second player wins\n");
}
TEST(BasicTests, test_1931) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("00X0--X--")), "Game in progress\n");
}
TEST(BasicTests, test_1932) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("-----X0--")), "Game in progress\n");
}
TEST(BasicTests, test_1933) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("X-X0--0-0")), "Game in progress\n");
}
TEST(BasicTests, test_1934) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("000-X--X-")), "Second player wins\n");
}
TEST(BasicTests, test_1935) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("-0-XX0---")), "Game in progress\n");
}
TEST(BasicTests, test_1936) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("0-XXX-000")), "Second player wins\n");
}
TEST(BasicTests, test_1937) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("---0-----")), "Game in progress\n");
}
TEST(BasicTests, test_1938) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("00XX0XX-0")), "Second player wins\n");
}
TEST(BasicTests, test_1939) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("---X---0-")), "Game in progress\n");
}
TEST(BasicTests, test_1940) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("00-XX----")), "Game in progress\n");
}
TEST(BasicTests, test_1941) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("X0-0X00XX")), "First player wins\n");
}
TEST(BasicTests, test_1942) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("X00X-XX-0")), "First player wins\n");
}
TEST(BasicTests, test_1943) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("XX0X00XX0")), "First player wins\n");
}
TEST(BasicTests, test_1944) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("XX0XX-00-")), "Game in progress\n");
}
TEST(BasicTests, test_1945) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("---X-----")), "Game in progress\n");
}
TEST(BasicTests, test_1946) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("--X------")), "Game in progress\n");
}
TEST(BasicTests, test_1947) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("X--00----")), "Game in progress\n");
}
TEST(BasicTests, test_1948) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("-X00-0-XX")), "Game in progress\n");
}
TEST(BasicTests, test_1949) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("-0--0-0XX")), "Game in progress\n");
}
TEST(BasicTests, test_1950) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("---0--X0-")), "Game in progress\n");
}
TEST(BasicTests, test_1951) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("-------0-")), "Game in progress\n");
}
TEST(BasicTests, test_1952) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("--------0")), "Game in progress\n");
}
TEST(BasicTests, test_1953) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("0-X0-XX0-")), "Game in progress\n");
}
TEST(BasicTests, test_1954) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("0--X0----")), "Game in progress\n");
}
TEST(BasicTests, test_1955) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("-------X-")), "Game in progress\n");
}
TEST(BasicTests, test_1956) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("XX0X--0-0")), "Game in progress\n");
}
TEST(BasicTests, test_1957) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("0XX0X00X0")), "Second player wins\n");
}
TEST(BasicTests, test_1958) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("X0-X-X0X0")), "Game in progress\n");
}
TEST(BasicTests, test_1959) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("0X-0-X--0")), "Game in progress\n");
}
TEST(BasicTests, test_1960) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("-----0--X")), "Game in progress\n");
}
TEST(BasicTests, test_1961) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("0X00--0XX")), "Second player wins\n");
}
TEST(BasicTests, test_1962) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("--0--X-0-")), "Game in progress\n");
}
TEST(BasicTests, test_1963) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("X00XX00X0")), "Second player wins\n");
}
TEST(BasicTests, test_1964) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("-------X0")), "Game in progress\n");
}
TEST(BasicTests, test_1965) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("--XX-0---")), "Game in progress\n");
}
TEST(BasicTests, test_1966) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("---X-0---")), "Game in progress\n");
}
TEST(BasicTests, test_1967) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("XX-X0-000")), "Second player wins\n");
}
TEST(BasicTests, test_1968) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("---0X0X--")), "Game in progress\n");
}
TEST(BasicTests, test_1969) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("X---X---0")), "Game in progress\n");
}
TEST(BasicTests, test_1970) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("-----X---")), "Game in progress\n");
}
TEST(BasicTests, test_1971) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("X0-XXX000")), "First player wins\n");
}
TEST(BasicTests, test_1972) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("0--0X----")), "Game in progress\n");
}
TEST(BasicTests, test_1973) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("X0-------")), "Game in progress\n");
}
TEST(BasicTests, test_1974) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("-----X---")), "Game in progress\n");
}
TEST(BasicTests, test_1975) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("XX00XXX00")), "Draw\n");
}
TEST(BasicTests, test_1976) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("----X--0-")), "Game in progress\n");
}
TEST(BasicTests, test_1977) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("XX--0--X0")), "Game in progress\n");
}
TEST(BasicTests, test_1978) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("-----0X--")), "Game in progress\n");
}
TEST(BasicTests, test_1979) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("0----X---")), "Game in progress\n");
}
TEST(BasicTests, test_1980) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("X-X-0-X-0")), "Game in progress\n");
}
TEST(BasicTests, test_1981) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("-XX0-0---")), "Game in progress\n");
}
TEST(BasicTests, test_1982) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("X--X00-X0")), "Game in progress\n");
}
TEST(BasicTests, test_1983) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("-X-0-----")), "Game in progress\n");
}
TEST(BasicTests, test_1984) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("-X------0")), "Game in progress\n");
}
TEST(BasicTests, test_1985) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("-------X-")), "Game in progress\n");
}
TEST(BasicTests, test_1986) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("-0X-XX000")), "Second player wins\n");
}
TEST(BasicTests, test_1987) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("-0----XX0")), "Game in progress\n");
}
TEST(BasicTests, test_1988) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("0-00XX0XX")), "Second player wins\n");
}
TEST(BasicTests, test_1989) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("X-0----0-")), "Game in progress\n");
}
TEST(BasicTests, test_1990) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("X-X0-X0X0")), "Game in progress\n");
}
TEST(BasicTests, test_1991) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("--X-000X-")), "Game in progress\n");
}
TEST(BasicTests, test_1992) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("XX0-0--X-")), "Game in progress\n");
}
TEST(BasicTests, test_1993) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("X0-00XX-0")), "Game in progress\n");
}
TEST(BasicTests, test_1994) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("X00XX00X0")), "Second player wins\n");
}
TEST(BasicTests, test_1995) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("XX0X000X0")), "Second player wins\n");
}
TEST(BasicTests, test_1996) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("0X-00X---")), "Game in progress\n");
}
TEST(BasicTests, test_1997) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("0X00XXXX0")), "First player wins\n");
}
TEST(BasicTests, test_1998) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("X00X0XX00")), "First player wins\n");
}
TEST(BasicTests, test_1999) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("00-XX0X0X")), "Game in progress\n");
}
TEST(BasicTests, test_2000) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("-0X--X-0-")), "Game in progress\n");
}
TEST(BasicTests, test_2001) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("--0X0-X--")), "Game in progress\n");
}
TEST(BasicTests, test_2002) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("0----X0X-")), "Game in progress\n");
}
TEST(BasicTests, test_2003) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("--0X-0--X")), "Game in progress\n");
}
TEST(BasicTests, test_2004) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("00XX-0XX0")), "Game in progress\n");
}
TEST(BasicTests, test_2005) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("0X0X-----")), "Game in progress\n");
}
TEST(BasicTests, test_2006) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("X--00----")), "Game in progress\n");
}
TEST(BasicTests, test_2007) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("---X-----")), "Game in progress\n");
}
TEST(BasicTests, test_2008) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("-0-XXX--0")), "First player wins\n");
}
TEST(BasicTests, test_2009) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("---X-X--0")), "Game in progress\n");
}
TEST(BasicTests, test_2010) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("00X-X00XX")), "Game in progress\n");
}
TEST(BasicTests, test_2011) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("X0XX00X0X")), "First player wins\n");
}
TEST(BasicTests, test_2012) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("X-X----0-")), "Game in progress\n");
}
TEST(BasicTests, test_2013) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("--X00--X-")), "Game in progress\n");
}
TEST(BasicTests, test_2014) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("X0-X-0-X0")), "Game in progress\n");
}
TEST(BasicTests, test_2015) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("X0-XX0-0-")), "Game in progress\n");
}
TEST(BasicTests, test_2016) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("0--X-----")), "Game in progress\n");
}
TEST(BasicTests, test_2017) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("--0-0--XX")), "Game in progress\n");
}
TEST(BasicTests, test_2018) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("0XX00XXX0")), "Second player wins\n");
}
TEST(BasicTests, test_2019) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("X-X0-X0X0")), "Game in progress\n");
}
TEST(BasicTests, test_2020) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("X-0X-00X-")), "Game in progress\n");
}
TEST(BasicTests, test_2021) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("0-0XX---X")), "Game in progress\n");
}
TEST(BasicTests, test_2022) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("X0-0XX00X")), "First player wins\n");
}
TEST(BasicTests, test_2023) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("-----X--0")), "Game in progress\n");
}
TEST(BasicTests, test_2024) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("0-X0----X")), "Game in progress\n");
}
TEST(BasicTests, test_2025) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("---X-----")), "Game in progress\n");
}
TEST(BasicTests, test_2026) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("--X------")), "Game in progress\n");
}
TEST(BasicTests, test_2027) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("--0X--0XX")), "Game in progress\n");
}
TEST(BasicTests, test_2028) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("-X-0X00--")), "Game in progress\n");
}
TEST(BasicTests, test_2029) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("--0X--0X-")), "Game in progress\n");
}
TEST(BasicTests, test_2030) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("0XXXXX000")), "First player wins\n");
}
TEST(BasicTests, test_2031) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("---X-----")), "Game in progress\n");
}
TEST(BasicTests, test_2032) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("X0X0X-0-0")), "Game in progress\n");
}
TEST(BasicTests, test_2033) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("0--XX0---")), "Game in progress\n");
}
TEST(BasicTests, test_2034) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("0X----00X")), "Game in progress\n");
}
TEST(BasicTests, test_2035) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("00--XX-0-")), "Game in progress\n");
}
TEST(BasicTests, test_2036) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("--X0-----")), "Game in progress\n");
}
TEST(BasicTests, test_2037) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("X00-X-0X0")), "Game in progress\n");
}
TEST(BasicTests, test_2038) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("0--X-----")), "Game in progress\n");
}
TEST(BasicTests, test_2039) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("-------X0")), "Game in progress\n");
}
TEST(BasicTests, test_2040) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("-0--X----")), "Game in progress\n");
}
TEST(BasicTests, test_2041) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("--0-XX---")), "Game in progress\n");
}
TEST(BasicTests, test_2042) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("0X0X-XX0-")), "Game in progress\n");
}
TEST(BasicTests, test_2043) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("--X------")), "Game in progress\n");
}
TEST(BasicTests, test_2044) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("0X0X0-X-X")), "Game in progress\n");
}
TEST(BasicTests, test_2045) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("00XXX0X00")), "First player wins\n");
}
TEST(BasicTests, test_2046) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("--0------")), "Game in progress\n");
}
TEST(BasicTests, test_2047) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("X00XXX0X0")), "First player wins\n");
}
TEST(BasicTests, test_2048) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("-0-X-----")), "Game in progress\n");
}
TEST(BasicTests, test_2049) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("0---0X---")), "Game in progress\n");
}
TEST(BasicTests, test_2050) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("--XX0-0-0")), "Game in progress\n");
}
TEST(BasicTests, test_2051) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("--------0")), "Game in progress\n");
}
TEST(BasicTests, test_2052) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("-----0---")), "Game in progress\n");
}
TEST(BasicTests, test_2053) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("00X0XXX0X")), "First player wins\n");
}
TEST(BasicTests, test_2054) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("0X---X-0-")), "Game in progress\n");
}
TEST(BasicTests, test_2055) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("-0-------")), "Game in progress\n");
}
TEST(BasicTests, test_2056) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("0XXXX0-00")), "Game in progress\n");
}
TEST(BasicTests, test_2057) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("-------X-")), "Game in progress\n");
}
TEST(BasicTests, test_2058) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("0X0X0---X")), "Game in progress\n");
}
TEST(BasicTests, test_2059) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("X0X-XX000")), "Second player wins\n");
}
TEST(BasicTests, test_2060) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("-X-0XX-0-")), "Game in progress\n");
}
TEST(BasicTests, test_2061) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("0XX-X-0-0")), "Game in progress\n");
}
TEST(BasicTests, test_2062) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("X-0-X---0")), "Game in progress\n");
}
TEST(BasicTests, test_2063) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("-X0------")), "Game in progress\n");
}
TEST(BasicTests, test_2064) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("XXXX0000X")), "First player wins\n");
}
TEST(BasicTests, test_2065) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("X00-00XXX")), "First player wins\n");
}
TEST(BasicTests, test_2066) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("--------X")), "Game in progress\n");
}
TEST(BasicTests, test_2067) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("0--0XX-X-")), "Game in progress\n");
}
TEST(BasicTests, test_2068) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("-00X-X--0")), "Game in progress\n");
}
TEST(BasicTests, test_2069) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("0XX0XX0X0")), "Second player wins\n");
}
TEST(BasicTests, test_2070) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("0X---0X--")), "Game in progress\n");
}
TEST(BasicTests, test_2071) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("00X----X-")), "Game in progress\n");
}
TEST(BasicTests, test_2072) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("---X0-X0-")), "Game in progress\n");
}
TEST(BasicTests, test_2073) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("X0-X-X00-")), "Game in progress\n");
}
TEST(BasicTests, test_2074) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("00X0X00XX")), "Second player wins\n");
}
TEST(BasicTests, test_2075) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("X00X00X0X")), "First player wins\n");
}
TEST(BasicTests, test_2076) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("X----X--0")), "Game in progress\n");
}
TEST(BasicTests, test_2077) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("-0---X---")), "Game in progress\n");
}
TEST(BasicTests, test_2078) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("0X0--XX0X")), "Game in progress\n");
}
TEST(BasicTests, test_2079) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("-X0X0X00X")), "Second player wins\n");
}
TEST(BasicTests, test_2080) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("-X-------")), "Game in progress\n");
}
TEST(BasicTests, test_2081) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("0--00XXX-")), "Game in progress\n");
}
TEST(BasicTests, test_2082) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("XX-000-X-")), "Second player wins\n");
}
TEST(BasicTests, test_2083) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("-0---X---")), "Game in progress\n");
}
TEST(BasicTests, test_2084) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("-X00XX0X0")), "First player wins\n");
}
TEST(BasicTests, test_2085) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("0X00XXXX0")), "First player wins\n");
}
TEST(BasicTests, test_2086) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("-XX---000")), "Second player wins\n");
}
TEST(BasicTests, test_2087) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("X0X--0---")), "Game in progress\n");
}
TEST(BasicTests, test_2088) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("X-X0-0---")), "Game in progress\n");
}
TEST(BasicTests, test_2089) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("----X-0--")), "Game in progress\n");
}
TEST(BasicTests, test_2090) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("-----0---")), "Game in progress\n");
}
TEST(BasicTests, test_2091) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("X----0---")), "Game in progress\n");
}
TEST(BasicTests, test_2092) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("-X--0X--0")), "Game in progress\n");
}
TEST(BasicTests, test_2093) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("XX---00-X")), "Game in progress\n");
}
TEST(BasicTests, test_2094) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("0XX--X--0")), "Game in progress\n");
}
TEST(BasicTests, test_2095) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("-X00XX0X0")), "First player wins\n");
}
TEST(BasicTests, test_2096) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("-X0------")), "Game in progress\n");
}
TEST(BasicTests, test_2097) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("-X00XX0X0")), "First player wins\n");
}
TEST(BasicTests, test_2098) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("-X-0-----")), "Game in progress\n");
}
TEST(BasicTests, test_2099) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("0X0XX00XX")), "First player wins\n");
}
TEST(BasicTests, test_2100) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("XX0X0X00X")), "Second player wins\n");
}
TEST(BasicTests, test_2101) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("XXXX00X00")), "First player wins\n");
}
TEST(BasicTests, test_2102) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("---00-X--")), "Game in progress\n");
}
TEST(BasicTests, test_2103) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("--XX0-0-0")), "Game in progress\n");
}
TEST(BasicTests, test_2104) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("0X00XX0-X")), "Second player wins\n");
}
TEST(BasicTests, test_2105) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("X00-00XX-")), "Game in progress\n");
}
TEST(BasicTests, test_2106) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("-0-X--X-0")), "Game in progress\n");
}
TEST(BasicTests, test_2107) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("X--------")), "Game in progress\n");
}
TEST(BasicTests, test_2108) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("---00-X--")), "Game in progress\n");
}
TEST(BasicTests, test_2109) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("-0-X-----")), "Game in progress\n");
}
TEST(BasicTests, test_2110) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("X00---0-X")), "Game in progress\n");
}
TEST(BasicTests, test_2111) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("0X00XX0XX")), "Second player wins\n");
}
TEST(BasicTests, test_2112) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("0X-X-0-0-")), "Game in progress\n");
}
TEST(BasicTests, test_2113) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("XX-000--X")), "Second player wins\n");
}
TEST(BasicTests, test_2114) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("-X00-00XX")), "Game in progress\n");
}
TEST(BasicTests, test_2115) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("XX00-XX00")), "Game in progress\n");
}
TEST(BasicTests, test_2116) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("0XXX0000X")), "Draw\n");
}
TEST(BasicTests, test_2117) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("00X0XX00X")), "Second player wins\n");
}
TEST(BasicTests, test_2118) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("X00XX0X00")), "First player wins\n");
}
TEST(BasicTests, test_2119) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("-X-------")), "Game in progress\n");
}
TEST(BasicTests, test_2120) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("------X--")), "Game in progress\n");
}
TEST(BasicTests, test_2121) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("-0X00X---")), "Game in progress\n");
}
TEST(BasicTests, test_2122) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("-0-X0X---")), "Game in progress\n");
}
TEST(BasicTests, test_2123) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("--0-X0X-X")), "Game in progress\n");
}
TEST(BasicTests, test_2124) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("-0X---0--")), "Game in progress\n");
}
TEST(BasicTests, test_2125) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("0X-X00X-0")), "Second player wins\n");
}
TEST(BasicTests, test_2126) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("0-X-0XX-0")), "Second player wins\n");
}
TEST(BasicTests, test_2127) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("XX-X--0-0")), "Game in progress\n");
}
TEST(BasicTests, test_2128) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("0XXXX00X0")), "First player wins\n");
}
TEST(BasicTests, test_2129) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("X----0---")), "Game in progress\n");
}
TEST(BasicTests, test_2130) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("-0---00XX")), "Game in progress\n");
}
TEST(BasicTests, test_2131) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("------0--")), "Game in progress\n");
}
TEST(BasicTests, test_2132) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("X00X00X-X")), "First player wins\n");
}
TEST(BasicTests, test_2133) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("0X-0--X0X")), "Game in progress\n");
}
TEST(BasicTests, test_2134) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("--X---0--")), "Game in progress\n");
}
TEST(BasicTests, test_2135) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("---X-----")), "Game in progress\n");
}
TEST(BasicTests, test_2136) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("----X----")), "Game in progress\n");
}
TEST(BasicTests, test_2137) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("X-0--0XX0")), "Second player wins\n");
}
TEST(BasicTests, test_2138) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("0X-X0XX00")), "Second player wins\n");
}
TEST(BasicTests, test_2139) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("0--0-X---")), "Game in progress\n");
}
TEST(BasicTests, test_2140) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("0X0XX0-0-")), "Game in progress\n");
}
TEST(BasicTests, test_2141) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("-X0-000XX")), "Second player wins\n");
}
TEST(BasicTests, test_2142) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("00XX00XXX")), "First player wins\n");
}
TEST(BasicTests, test_2143) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("X--X000X-")), "Game in progress\n");
}
TEST(BasicTests, test_2144) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("XX0X0-00X")), "Second player wins\n");
}
TEST(BasicTests, test_2145) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("---0----X")), "Game in progress\n");
}
TEST(BasicTests, test_2146) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("-XX00X0X-")), "Game in progress\n");
}
TEST(BasicTests, test_2147) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("0XXX-00X0")), "Game in progress\n");
}
TEST(BasicTests, test_2148) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("--00XX-X-")), "Game in progress\n");
}
TEST(BasicTests, test_2149) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("--00X-X0-")), "Game in progress\n");
}
TEST(BasicTests, test_2150) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("--------0")), "Game in progress\n");
}
TEST(BasicTests, test_2151) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("X--------")), "Game in progress\n");
}
TEST(BasicTests, test_2152) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("-0-------")), "Game in progress\n");
}
TEST(BasicTests, test_2153) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("---X-0---")), "Game in progress\n");
}
TEST(BasicTests, test_2154) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("000XX0-X-")), "Second player wins\n");
}
TEST(BasicTests, test_2155) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("00XX0X-0X")), "Second player wins\n");
}
TEST(BasicTests, test_2156) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("-0-------")), "Game in progress\n");
}
TEST(BasicTests, test_2157) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("0--X--X0X")), "Game in progress\n");
}
TEST(BasicTests, test_2158) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("------X--")), "Game in progress\n");
}
TEST(BasicTests, test_2159) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("-0X0X00XX")), "Game in progress\n");
}
TEST(BasicTests, test_2160) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("0X0XX000X")), "Draw\n");
}
TEST(BasicTests, test_2161) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("XX00-----")), "Game in progress\n");
}
TEST(BasicTests, test_2162) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("XX-----0-")), "Game in progress\n");
}
TEST(BasicTests, test_2163) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("X-0X00X0X")), "First player wins\n");
}
TEST(BasicTests, test_2164) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("--0XX0XX0")), "Second player wins\n");
}
TEST(BasicTests, test_2165) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("-0-----XX")), "Game in progress\n");
}
TEST(BasicTests, test_2166) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("0XX00-XX0")), "Second player wins\n");
}
TEST(BasicTests, test_2167) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("X-0-0X0--")), "Second player wins\n");
}
TEST(BasicTests, test_2168) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("--0--0XX-")), "Game in progress\n");
}
TEST(BasicTests, test_2169) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("0XX-XX0-0")), "Game in progress\n");
}
TEST(BasicTests, test_2170) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("-X-00-XX0")), "Game in progress\n");
}
TEST(BasicTests, test_2171) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("X-0---X--")), "Game in progress\n");
}
TEST(BasicTests, test_2172) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("-X---0---")), "Game in progress\n");
}
TEST(BasicTests, test_2173) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("---X---0-")), "Game in progress\n");
}
TEST(BasicTests, test_2174) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("XXX00X000")), "First player wins\n");
}
TEST(BasicTests, test_2175) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("X0-X-0-X-")), "Game in progress\n");
}
TEST(BasicTests, test_2176) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("X00X0XXX0")), "First player wins\n");
}
TEST(BasicTests, test_2177) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("0--X-----")), "Game in progress\n");
}
TEST(BasicTests, test_2178) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("0-X-X0-0X")), "Game in progress\n");
}
TEST(BasicTests, test_2179) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("---X-----")), "Game in progress\n");
}
TEST(BasicTests, test_2180) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("-X---X-0-")), "Game in progress\n");
}
TEST(BasicTests, test_2181) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("X00X---0-")), "Game in progress\n");
}
TEST(BasicTests, test_2182) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("X-0-X-0--")), "Game in progress\n");
}
TEST(BasicTests, test_2183) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("----X----")), "Game in progress\n");
}
TEST(BasicTests, test_2184) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("0X000XX0X")), "Draw\n");
}
TEST(BasicTests, test_2185) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("0-X-X-00-")), "Game in progress\n");
}
TEST(BasicTests, test_2186) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("--X0X0X00")), "First player wins\n");
}
TEST(BasicTests, test_2187) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("XX-00X0X0")), "Game in progress\n");
}
TEST(BasicTests, test_2188) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("X-XX0000X")), "Game in progress\n");
}
TEST(BasicTests, test_2189) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("0X0XXX000")), "First player wins\n");
}
TEST(BasicTests, test_2190) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("0X0XX00X-")), "First player wins\n");
}
TEST(BasicTests, test_2191) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("XX-----0-")), "Game in progress\n");
}
TEST(BasicTests, test_2192) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("X00X-X00X")), "Game in progress\n");
}
TEST(BasicTests, test_2193) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("------X--")), "Game in progress\n");
}
TEST(BasicTests, test_2194) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("00--X0X0X")), "Game in progress\n");
}
TEST(BasicTests, test_2195) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("XX00X0XX0")), "First player wins\n");
}
TEST(BasicTests, test_2196) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("----0-X0X")), "Game in progress\n");
}
TEST(BasicTests, test_2197) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("0X0XX00X-")), "First player wins\n");
}
TEST(BasicTests, test_2198) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("XXX00X000")), "First player wins\n");
}
TEST(BasicTests, test_2199) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("---X-----")), "Game in progress\n");
}
TEST(BasicTests, test_2200) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("0X0--X---")), "Game in progress\n");
}
TEST(BasicTests, test_2201) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("--00---X-")), "Game in progress\n");
}
TEST(BasicTests, test_2202) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("X0X000XXX")), "Second player wins\n");
}
TEST(BasicTests, test_2203) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("XX000X0XX")), "Second player wins\n");
}
TEST(BasicTests, test_2204) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("--X------")), "Game in progress\n");
}
TEST(BasicTests, test_2205) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("----X----")), "Game in progress\n");
}
TEST(BasicTests, test_2206) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("--0X-----")), "Game in progress\n");
}
TEST(BasicTests, test_2207) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("00XXX0X0X")), "First player wins\n");
}
TEST(BasicTests, test_2208) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("----0----")), "Game in progress\n");
}
TEST(BasicTests, test_2209) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("0---XX0--")), "Game in progress\n");
}
TEST(BasicTests, test_2210) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("-00X0X0XX")), "Second player wins\n");
}
TEST(BasicTests, test_2211) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("-0-------")), "Game in progress\n");
}
TEST(BasicTests, test_2212) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("X-X0-XX00")), "Game in progress\n");
}
TEST(BasicTests, test_2213) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("X---00X--")), "Game in progress\n");
}
TEST(BasicTests, test_2214) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("-----X-0X")), "Game in progress\n");
}
TEST(BasicTests, test_2215) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("---0--X--")), "Game in progress\n");
}
TEST(BasicTests, test_2216) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("--0-X-X--")), "Game in progress\n");
}
TEST(BasicTests, test_2217) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("-X-0-X---")), "Game in progress\n");
}
TEST(BasicTests, test_2218) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("---0--X-0")), "Game in progress\n");
}
TEST(BasicTests, test_2219) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("--X0-----")), "Game in progress\n");
}
TEST(BasicTests, test_2220) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("000----XX")), "Second player wins\n");
}
TEST(BasicTests, test_2221) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("X00XXX0X0")), "First player wins\n");
}
TEST(BasicTests, test_2222) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("X-X-0-X0-")), "Game in progress\n");
}
TEST(BasicTests, test_2223) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("----00X--")), "Game in progress\n");
}
TEST(BasicTests, test_2224) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("XX000X0X0")), "Second player wins\n");
}
TEST(BasicTests, test_2225) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("0XXXXX000")), "First player wins\n");
}
TEST(BasicTests, test_2226) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("-X0X00--X")), "Game in progress\n");
}
TEST(BasicTests, test_2227) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("X----X--0")), "Game in progress\n");
}
TEST(BasicTests, test_2228) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("X00XXX0-0")), "First player wins\n");
}
TEST(BasicTests, test_2229) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("0XX00-X--")), "Game in progress\n");
}
TEST(BasicTests, test_2230) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("X0X00X-0X")), "Second player wins\n");
}
TEST(BasicTests, test_2231) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("0XX00XX00")), "Second player wins\n");
}
TEST(BasicTests, test_2232) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("-0-0X00XX")), "Game in progress\n");
}
TEST(BasicTests, test_2233) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("XX00-0-X-")), "Game in progress\n");
}
TEST(BasicTests, test_2234) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("-0-X-0---")), "Game in progress\n");
}
TEST(BasicTests, test_2235) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("--------X")), "Game in progress\n");
}
TEST(BasicTests, test_2236) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("0X-0XX00X")), "Second player wins\n");
}
TEST(BasicTests, test_2237) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("0XX00XXX0")), "Second player wins\n");
}
TEST(BasicTests, test_2238) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("-X-------")), "Game in progress\n");
}
TEST(BasicTests, test_2239) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("-----0---")), "Game in progress\n");
}
TEST(BasicTests, test_2240) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("X-0-X----")), "Game in progress\n");
}
TEST(BasicTests, test_2241) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("--X----0-")), "Game in progress\n");
}
TEST(BasicTests, test_2242) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("X---0----")), "Game in progress\n");
}
TEST(BasicTests, test_2243) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("X---0X0--")), "Game in progress\n");
}
TEST(BasicTests, test_2244) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("-------X0")), "Game in progress\n");
}
TEST(BasicTests, test_2245) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("-X0X000XX")), "Second player wins\n");
}
TEST(BasicTests, test_2246) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("-X----0--")), "Game in progress\n");
}
TEST(BasicTests, test_2247) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("XX-0-----")), "Game in progress\n");
}
TEST(BasicTests, test_2248) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("XX-00X-00")), "Game in progress\n");
}
TEST(BasicTests, test_2249) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("X--0-----")), "Game in progress\n");
}
TEST(BasicTests, test_2250) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("0XX------")), "Game in progress\n");
}
TEST(BasicTests, test_2251) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("00XXX00X0")), "Draw\n");
}
TEST(BasicTests, test_2252) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("---00X--X")), "Game in progress\n");
}
TEST(BasicTests, test_2253) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("X----0---")), "Game in progress\n");
}
TEST(BasicTests, test_2254) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("XXXXX0000")), "First player wins\n");
}
TEST(BasicTests, test_2255) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("0-X-XX-00")), "Game in progress\n");
}
TEST(BasicTests, test_2256) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("-------0X")), "Game in progress\n");
}
TEST(BasicTests, test_2257) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("-X--0----")), "Game in progress\n");
}
TEST(BasicTests, test_2258) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("--X0-X--0")), "Game in progress\n");
}
TEST(BasicTests, test_2259) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("----X00X0")), "Game in progress\n");
}
TEST(BasicTests, test_2260) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("X0-X0-X00")), "First player wins\n");
}
TEST(BasicTests, test_2261) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("XXX-0-0X0")), "First player wins\n");
}
TEST(BasicTests, test_2262) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("X00XX-00X")), "First player wins\n");
}
TEST(BasicTests, test_2263) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("---0-----")), "Game in progress\n");
}
TEST(BasicTests, test_2264) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("X--0X-X-0")), "Game in progress\n");
}
TEST(BasicTests, test_2265) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("----X--0-")), "Game in progress\n");
}
TEST(BasicTests, test_2266) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("X--------")), "Game in progress\n");
}
TEST(BasicTests, test_2267) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("-0X---X0-")), "Game in progress\n");
}
TEST(BasicTests, test_2268) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("X----X--0")), "Game in progress\n");
}
TEST(BasicTests, test_2269) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("00X0XXXX0")), "First player wins\n");
}
TEST(BasicTests, test_2270) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("0X0-X0X0-")), "Game in progress\n");
}
TEST(BasicTests, test_2271) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("0--XXXX00")), "First player wins\n");
}
TEST(BasicTests, test_2272) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("0-0-0X--X")), "Game in progress\n");
}
TEST(BasicTests, test_2273) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("00X0X0X0X")), "First player wins\n");
}
TEST(BasicTests, test_2274) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("----0----")), "Game in progress\n");
}
TEST(BasicTests, test_2275) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("0-XX-0---")), "Game in progress\n");
}
TEST(BasicTests, test_2276) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("0-XX-0---")), "Game in progress\n");
}
TEST(BasicTests, test_2277) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("X--------")), "Game in progress\n");
}
TEST(BasicTests, test_2278) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("--X0---X-")), "Game in progress\n");
}
TEST(BasicTests, test_2279) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("0-X0XX00X")), "Second player wins\n");
}
TEST(BasicTests, test_2280) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("X-XX000X0")), "Game in progress\n");
}
TEST(BasicTests, test_2281) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("XX0X0-X00")), "First player wins\n");
}
TEST(BasicTests, test_2282) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("X---0----")), "Game in progress\n");
}
TEST(BasicTests, test_2283) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("-0X0XX00X")), "First player wins\n");
}
TEST(BasicTests, test_2284) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("-0-XX000X")), "Game in progress\n");
}
TEST(BasicTests, test_2285) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("XXX-00--0")), "First player wins\n");
}
TEST(BasicTests, test_2286) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("X-XX00-0-")), "Game in progress\n");
}
TEST(BasicTests, test_2287) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("XX00X0X0X")), "First player wins\n");
}
TEST(BasicTests, test_2288) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("0X-------")), "Game in progress\n");
}
TEST(BasicTests, test_2289) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("--X-0----")), "Game in progress\n");
}
TEST(BasicTests, test_2290) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("X0X-XX-00")), "Game in progress\n");
}
TEST(BasicTests, test_2291) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("X-0XX00X0")), "Second player wins\n");
}
TEST(BasicTests, test_2292) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("-X-X--0-0")), "Game in progress\n");
}
TEST(BasicTests, test_2293) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("00X0X--X-")), "Game in progress\n");
}
TEST(BasicTests, test_2294) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("-X00-0XX0")), "Second player wins\n");
}
TEST(BasicTests, test_2295) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("XX-0-0X0-")), "Game in progress\n");
}
TEST(BasicTests, test_2296) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("X-0---X0X")), "Game in progress\n");
}
TEST(BasicTests, test_2297) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("-0--X----")), "Game in progress\n");
}
TEST(BasicTests, test_2298) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("-X-0-----")), "Game in progress\n");
}
TEST(BasicTests, test_2299) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("-X---X-00")), "Game in progress\n");
}
TEST(BasicTests, test_2300) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("--0------")), "Game in progress\n");
}
TEST(BasicTests, test_2301) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("0X------0")), "Game in progress\n");
}
TEST(BasicTests, test_2302) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("0X--0XX--")), "Game in progress\n");
}
TEST(BasicTests, test_2303) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("0-0-XX0-X")), "Game in progress\n");
}
TEST(BasicTests, test_2304) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("0X-X0X-0X")), "Game in progress\n");
}
TEST(BasicTests, test_2305) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("--0-X--0-")), "Game in progress\n");
}
TEST(BasicTests, test_2306) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("X000-XX0X")), "Game in progress\n");
}
TEST(BasicTests, test_2307) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("-------X-")), "Game in progress\n");
}
TEST(BasicTests, test_2308) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("0XXX0X0--")), "Game in progress\n");
}
TEST(BasicTests, test_2309) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("-X---0X--")), "Game in progress\n");
}
TEST(BasicTests, test_2310) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("-0-X0-XX0")), "Game in progress\n");
}
TEST(BasicTests, test_2311) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("---0X--0X")), "Game in progress\n");
}
TEST(BasicTests, test_2312) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("0--XX00-X")), "Game in progress\n");
}
TEST(BasicTests, test_2313) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("0X00-XX0-")), "Game in progress\n");
}
TEST(BasicTests, test_2314) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("-X-XX-00-")), "Game in progress\n");
}
TEST(BasicTests, test_2315) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("0X0XXX-0-")), "First player wins\n");
}
TEST(BasicTests, test_2316) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("--00XXXX0")), "Game in progress\n");
}
TEST(BasicTests, test_2317) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("X0X00X00X")), "Second player wins\n");
}
TEST(BasicTests, test_2318) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("0X-00X-X-")), "Game in progress\n");
}
TEST(BasicTests, test_2319) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("X-X0--0X0")), "Game in progress\n");
}
TEST(BasicTests, test_2320) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("---0---X-")), "Game in progress\n");
}
TEST(BasicTests, test_2321) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("--0--X0--")), "Game in progress\n");
}
TEST(BasicTests, test_2322) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("00XXXXX00")), "First player wins\n");
}
TEST(BasicTests, test_2323) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("X00XXX00X")), "First player wins\n");
}
TEST(BasicTests, test_2324) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("-0X--X0X-")), "Game in progress\n");
}
TEST(BasicTests, test_2325) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("---0-0--X")), "Game in progress\n");
}
TEST(BasicTests, test_2326) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("-----X0--")), "Game in progress\n");
}
TEST(BasicTests, test_2327) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("------0X-")), "Game in progress\n");
}
TEST(BasicTests, test_2328) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("0XX000XXX")), "Second player wins\n");
}
TEST(BasicTests, test_2329) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("00XX0X-0X")), "Second player wins\n");
}
TEST(BasicTests, test_2330) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("--X-X-0X0")), "Game in progress\n");
}
TEST(BasicTests, test_2331) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("-X0-0-X--")), "Game in progress\n");
}
TEST(BasicTests, test_2332) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("X0-0-X-X0")), "Game in progress\n");
}
TEST(BasicTests, test_2333) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("XX0----00")), "Game in progress\n");
}
TEST(BasicTests, test_2334) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("X--------")), "Game in progress\n");
}
TEST(BasicTests, test_2335) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("-X-0-----")), "Game in progress\n");
}
TEST(BasicTests, test_2336) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("000-0XXXX")), "Second player wins\n");
}
TEST(BasicTests, test_2337) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("00XX0X0X-")), "Game in progress\n");
}
TEST(BasicTests, test_2338) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("00X0X0X0X")), "First player wins\n");
}
TEST(BasicTests, test_2339) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("X-----0--")), "Game in progress\n");
}
TEST(BasicTests, test_2340) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("--0------")), "Game in progress\n");
}
TEST(BasicTests, test_2341) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("XX00XXX00")), "Draw\n");
}
TEST(BasicTests, test_2342) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("-X-----0-")), "Game in progress\n");
}
TEST(BasicTests, test_2343) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("0----X0-X")), "Game in progress\n");
}
TEST(BasicTests, test_2344) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("-0X0-----")), "Game in progress\n");
}
TEST(BasicTests, test_2345) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("-X0-X00X-")), "First player wins\n");
}
TEST(BasicTests, test_2346) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("XXXX00000")), "First player wins\n");
}
TEST(BasicTests, test_2347) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("X0000X-XX")), "Game in progress\n");
}
TEST(BasicTests, test_2348) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("000XXXXX0")), "Second player wins\n");
}
TEST(BasicTests, test_2349) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("0-0X0XX--")), "Game in progress\n");
}
TEST(BasicTests, test_2350) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("X-0-X--0-")), "Game in progress\n");
}
TEST(BasicTests, test_2351) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("--------X")), "Game in progress\n");
}
TEST(BasicTests, test_2352) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("--0--XX-0")), "Game in progress\n");
}
TEST(BasicTests, test_2353) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("0-----0X-")), "Game in progress\n");
}
TEST(BasicTests, test_2354) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("0X0X-00XX")), "Game in progress\n");
}
TEST(BasicTests, test_2355) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("-00X--X--")), "Game in progress\n");
}
TEST(BasicTests, test_2356) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("-----X0-X")), "Game in progress\n");
}
TEST(BasicTests, test_2357) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("X0--0---X")), "Game in progress\n");
}
TEST(BasicTests, test_2358) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("0X0XX0X0X")), "Draw\n");
}
TEST(BasicTests, test_2359) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("0--0X-X--")), "Game in progress\n");
}
TEST(BasicTests, test_2360) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("00XX0-0XX")), "Game in progress\n");
}
TEST(BasicTests, test_2361) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("---X--0X-")), "Game in progress\n");
}
TEST(BasicTests, test_2362) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("-X-------")), "Game in progress\n");
}
TEST(BasicTests, test_2363) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("0--------")), "Game in progress\n");
}
TEST(BasicTests, test_2364) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("-00---X-X")), "Game in progress\n");
}
TEST(BasicTests, test_2365) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("-0-XX00XX")), "Game in progress\n");
}
TEST(BasicTests, test_2366) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("-X00-X---")), "Game in progress\n");
}
TEST(BasicTests, test_2367) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("-X---0---")), "Game in progress\n");
}
TEST(BasicTests, test_2368) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("-X--0----")), "Game in progress\n");
}
TEST(BasicTests, test_2369) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("0-X------")), "Game in progress\n");
}
TEST(BasicTests, test_2370) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("X--------")), "Game in progress\n");
}
TEST(BasicTests, test_2371) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("0-X-0--X-")), "Game in progress\n");
}
TEST(BasicTests, test_2372) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("-X---0-X0")), "Game in progress\n");
}
TEST(BasicTests, test_2373) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("-X--0-XX0")), "Game in progress\n");
}
TEST(BasicTests, test_2374) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("-000XXX0-")), "Game in progress\n");
}
TEST(BasicTests, test_2375) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("X-0X-X-00")), "Game in progress\n");
}
TEST(BasicTests, test_2376) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("000XX00XX")), "Second player wins\n");
}
TEST(BasicTests, test_2377) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("---0XX0-0")), "Game in progress\n");
}
TEST(BasicTests, test_2378) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("--X---0--")), "Game in progress\n");
}
TEST(BasicTests, test_2379) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("------0--")), "Game in progress\n");
}
TEST(BasicTests, test_2380) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("X000X0-X-")), "Game in progress\n");
}
TEST(BasicTests, test_2381) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("---0XX0--")), "Game in progress\n");
}
TEST(BasicTests, test_2382) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("-X-00X-X0")), "Game in progress\n");
}
TEST(BasicTests, test_2383) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("0XXX0X0X0")), "Second player wins\n");
}
TEST(BasicTests, test_2384) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("00-XXX--0")), "First player wins\n");
}
TEST(BasicTests, test_2385) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("-X-0-----")), "Game in progress\n");
}
TEST(BasicTests, test_2386) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("-0XX--0--")), "Game in progress\n");
}
TEST(BasicTests, test_2387) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("-0----0X-")), "Game in progress\n");
}
TEST(BasicTests, test_2388) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("0-X-0X0XX")), "First player wins\n");
}
TEST(BasicTests, test_2389) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("-----0---")), "Game in progress\n");
}
TEST(BasicTests, test_2390) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("XX0--0-X-")), "Game in progress\n");
}
TEST(BasicTests, test_2391) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("0-0XX0X0-")), "Game in progress\n");
}
TEST(BasicTests, test_2392) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("XX0-0---0")), "Game in progress\n");
}
TEST(BasicTests, test_2393) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("-0-0-0XXX")), "First player wins\n");
}
TEST(BasicTests, test_2394) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("XX0-000XX")), "Second player wins\n");
}
TEST(BasicTests, test_2395) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("X000X0X-X")), "First player wins\n");
}
TEST(BasicTests, test_2396) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("X-X0--00X")), "Game in progress\n");
}
TEST(BasicTests, test_2397) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("0X---0---")), "Game in progress\n");
}
TEST(BasicTests, test_2398) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("X0X00XXX0")), "Draw\n");
}
TEST(BasicTests, test_2399) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("--00-X--X")), "Game in progress\n");
}
TEST(BasicTests, test_2400) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("--0-X----")), "Game in progress\n");
}
TEST(BasicTests, test_2401) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("0--X0XX00")), "Second player wins\n");
}
TEST(BasicTests, test_2402) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("X-00--X--")), "Game in progress\n");
}
TEST(BasicTests, test_2403) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("0XXX-00X0")), "Game in progress\n");
}
TEST(BasicTests, test_2404) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("00X0X-X0X")), "First player wins\n");
}
TEST(BasicTests, test_2405) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("-X0-X0--0")), "Second player wins\n");
}
TEST(BasicTests, test_2406) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("-X---X-0-")), "Game in progress\n");
}
TEST(BasicTests, test_2407) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("-----0---")), "Game in progress\n");
}
TEST(BasicTests, test_2408) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("-0-X0XX--")), "Game in progress\n");
}
TEST(BasicTests, test_2409) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("------0--")), "Game in progress\n");
}
TEST(BasicTests, test_2410) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("X0--X----")), "Game in progress\n");
}
TEST(BasicTests, test_2411) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("----0--X-")), "Game in progress\n");
}
TEST(BasicTests, test_2412) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("0X0XX000X")), "Draw\n");
}
TEST(BasicTests, test_2413) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("---X-----")), "Game in progress\n");
}
TEST(BasicTests, test_2414) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("-X00XX---")), "Game in progress\n");
}
TEST(BasicTests, test_2415) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("-0--X-X00")), "Game in progress\n");
}
TEST(BasicTests, test_2416) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("X--X0X-0-")), "Game in progress\n");
}
TEST(BasicTests, test_2417) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("--------0")), "Game in progress\n");
}
TEST(BasicTests, test_2418) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("------0--")), "Game in progress\n");
}
TEST(BasicTests, test_2419) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("0---0-X0X")), "Game in progress\n");
}
TEST(BasicTests, test_2420) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("XX---0-00")), "Game in progress\n");
}
TEST(BasicTests, test_2421) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("X0------0")), "Game in progress\n");
}
TEST(BasicTests, test_2422) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("-------X-")), "Game in progress\n");
}
TEST(BasicTests, test_2423) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("-0-------")), "Game in progress\n");
}
TEST(BasicTests, test_2424) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("---00---X")), "Game in progress\n");
}
TEST(BasicTests, test_2425) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("0X-X0X-00")), "Second player wins\n");
}
TEST(BasicTests, test_2426) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("-X-------")), "Game in progress\n");
}
TEST(BasicTests, test_2427) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("---X----0")), "Game in progress\n");
}
TEST(BasicTests, test_2428) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("-----0---")), "Game in progress\n");
}
TEST(BasicTests, test_2429) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("X0XX0X-00")), "Second player wins\n");
}
TEST(BasicTests, test_2430) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("---0--X--")), "Game in progress\n");
}
TEST(BasicTests, test_2431) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("-XX-----0")), "Game in progress\n");
}
TEST(BasicTests, test_2432) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("0X0-X-0X-")), "First player wins\n");
}
TEST(BasicTests, test_2433) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("X--XX--00")), "Game in progress\n");
}
TEST(BasicTests, test_2434) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("00XX0-X-X")), "Game in progress\n");
}
TEST(BasicTests, test_2435) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("00-XXX--0")), "First player wins\n");
}
TEST(BasicTests, test_2436) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("-X-X-00--")), "Game in progress\n");
}
TEST(BasicTests, test_2437) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("X0X------")), "Game in progress\n");
}
TEST(BasicTests, test_2438) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("0--------")), "Game in progress\n");
}
TEST(BasicTests, test_2439) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("0X-X-0-0X")), "Game in progress\n");
}
TEST(BasicTests, test_2440) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("--X-0X---")), "Game in progress\n");
}
TEST(BasicTests, test_2441) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("--XX0---0")), "Game in progress\n");
}
TEST(BasicTests, test_2442) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("000-XXX-0")), "Second player wins\n");
}
TEST(BasicTests, test_2443) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("-0-0X-X-X")), "Game in progress\n");
}
TEST(BasicTests, test_2444) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("-XX000---")), "Second player wins\n");
}
TEST(BasicTests, test_2445) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("00X-X0XX0")), "First player wins\n");
}
TEST(BasicTests, test_2446) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("-0XXX0X-0")), "First player wins\n");
}
TEST(BasicTests, test_2447) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("X-X00X0--")), "Game in progress\n");
}
TEST(BasicTests, test_2448) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("0X------0")), "Game in progress\n");
}
TEST(BasicTests, test_2449) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("--X-00---")), "Game in progress\n");
}
TEST(BasicTests, test_2450) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("-------X-")), "Game in progress\n");
}
TEST(BasicTests, test_2451) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("-0X0----X")), "Game in progress\n");
}
TEST(BasicTests, test_2452) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("--0---X--")), "Game in progress\n");
}
TEST(BasicTests, test_2453) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("X--00--X0")), "Game in progress\n");
}
TEST(BasicTests, test_2454) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("X--X--0--")), "Game in progress\n");
}
TEST(BasicTests, test_2455) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("00X------")), "Game in progress\n");
}
TEST(BasicTests, test_2456) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("0--------")), "Game in progress\n");
}
TEST(BasicTests, test_2457) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("0XX-0---0")), "Second player wins\n");
}
TEST(BasicTests, test_2458) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("XX0X000-X")), "Second player wins\n");
}
TEST(BasicTests, test_2459) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("XXXX00-00")), "First player wins\n");
}
TEST(BasicTests, test_2460) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("0X-0-0XX-")), "Game in progress\n");
}
TEST(BasicTests, test_2461) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("--XX-000-")), "Game in progress\n");
}
TEST(BasicTests, test_2462) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("-X-00-XX-")), "Game in progress\n");
}
TEST(BasicTests, test_2463) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("-0-------")), "Game in progress\n");
}
TEST(BasicTests, test_2464) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("00XXXX000")), "First player wins\n");
}
TEST(BasicTests, test_2465) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("0000XXX0X")), "Second player wins\n");
}
TEST(BasicTests, test_2466) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("-X0X00X0X")), "Game in progress\n");
}
TEST(BasicTests, test_2467) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("--0------")), "Game in progress\n");
}
TEST(BasicTests, test_2468) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("--0------")), "Game in progress\n");
}
TEST(BasicTests, test_2469) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("-0-------")), "Game in progress\n");
}
TEST(BasicTests, test_2470) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("0X00XX0X0")), "Second player wins\n");
}
TEST(BasicTests, test_2471) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("-00--XXX0")), "Game in progress\n");
}
TEST(BasicTests, test_2472) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("0----X--0")), "Game in progress\n");
}
TEST(BasicTests, test_2473) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("--X0---0X")), "Game in progress\n");
}
TEST(BasicTests, test_2474) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("-X00-X---")), "Game in progress\n");
}
TEST(BasicTests, test_2475) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("-X0---X--")), "Game in progress\n");
}
TEST(BasicTests, test_2476) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("X0-X-000X")), "Game in progress\n");
}
TEST(BasicTests, test_2477) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("XX-XX000-")), "Game in progress\n");
}
TEST(BasicTests, test_2478) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("-X0--0--X")), "Game in progress\n");
}
TEST(BasicTests, test_2479) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("X-X--0--0")), "Game in progress\n");
}
TEST(BasicTests, test_2480) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("00XXX-0X0")), "Game in progress\n");
}
TEST(BasicTests, test_2481) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("-X00X0X0-")), "Game in progress\n");
}
TEST(BasicTests, test_2482) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("0XX00X-0X")), "First player wins\n");
}
TEST(BasicTests, test_2483) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("00XX-00X-")), "Game in progress\n");
}
TEST(BasicTests, test_2484) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("0X-0XX0-0")), "Second player wins\n");
}
TEST(BasicTests, test_2485) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("-X0--0-X-")), "Game in progress\n");
}
TEST(BasicTests, test_2486) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("0-X-0X0X-")), "Game in progress\n");
}
TEST(BasicTests, test_2487) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("0X-00-0XX")), "Second player wins\n");
}
TEST(BasicTests, test_2488) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("-X--0----")), "Game in progress\n");
}
TEST(BasicTests, test_2489) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("------X--")), "Game in progress\n");
}
TEST(BasicTests, test_2490) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("0X-0-00XX")), "Second player wins\n");
}
TEST(BasicTests, test_2491) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("-XX00-XX0")), "Game in progress\n");
}
TEST(BasicTests, test_2492) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("0X0XX00X0")), "First player wins\n");
}
TEST(BasicTests, test_2493) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("---X--0--")), "Game in progress\n");
}
TEST(BasicTests, test_2494) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("-X-0--0X-")), "Game in progress\n");
}
TEST(BasicTests, test_2495) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("X0XX000XX")), "Draw\n");
}
TEST(BasicTests, test_2496) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("XXX0000XX")), "First player wins\n");
}
TEST(BasicTests, test_2497) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("000X--XXX")), "Second player wins\n");
}
TEST(BasicTests, test_2498) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("X-X0-00X0")), "Game in progress\n");
}
TEST(BasicTests, test_2499) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("00X0XX0X0")), "Second player wins\n");
}
TEST(BasicTests, test_2500) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("0-X------")), "Game in progress\n");
}
TEST(BasicTests, test_2501) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("-XX00-X0X")), "Game in progress\n");
}
TEST(BasicTests, test_2502) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("00-0XX0XX")), "Second player wins\n");
}
TEST(BasicTests, test_2503) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("-0X0-00XX")), "Game in progress\n");
}
TEST(BasicTests, test_2504) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("X00--XXX0")), "Game in progress\n");
}
TEST(BasicTests, test_2505) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("-0XXX-00-")), "Game in progress\n");
}
TEST(BasicTests, test_2506) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("---0---0X")), "Game in progress\n");
}
TEST(BasicTests, test_2507) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("00XXX0---")), "Game in progress\n");
}
TEST(BasicTests, test_2508) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("-----0---")), "Game in progress\n");
}
TEST(BasicTests, test_2509) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("X0X0-X00X")), "First player wins\n");
}
TEST(BasicTests, test_2510) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("------XX0")), "Game in progress\n");
}
TEST(BasicTests, test_2511) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("X-0X00--X")), "Game in progress\n");
}
TEST(BasicTests, test_2512) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("-0--XX00-")), "Game in progress\n");
}
TEST(BasicTests, test_2513) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("---X00---")), "Game in progress\n");
}
TEST(BasicTests, test_2514) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("X00X-0-XX")), "Game in progress\n");
}
TEST(BasicTests, test_2515) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("-0---X-X-")), "Game in progress\n");
}
TEST(BasicTests, test_2516) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("-X-00-X--")), "Game in progress\n");
}
TEST(BasicTests, test_2517) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("XX0X000XX")), "Second player wins\n");
}
TEST(BasicTests, test_2518) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("-0-X--X--")), "Game in progress\n");
}
TEST(BasicTests, test_2519) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("00-XX0-0X")), "Game in progress\n");
}
TEST(BasicTests, test_2520) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("0X---X---")), "Game in progress\n");
}
TEST(BasicTests, test_2521) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("-0X--X-00")), "Game in progress\n");
}
TEST(BasicTests, test_2522) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("-0--0--XX")), "Game in progress\n");
}
TEST(BasicTests, test_2523) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("0X-0-----")), "Game in progress\n");
}
TEST(BasicTests, test_2524) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("0X00X0XX0")), "First player wins\n");
}
TEST(BasicTests, test_2525) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("------X0-")), "Game in progress\n");
}
TEST(BasicTests, test_2526) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("---0---X-")), "Game in progress\n");
}
TEST(BasicTests, test_2527) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("-----0---")), "Game in progress\n");
}
TEST(BasicTests, test_2528) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("-00X-0--X")), "Game in progress\n");
}
TEST(BasicTests, test_2529) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("---X-0---")), "Game in progress\n");
}
TEST(BasicTests, test_2530) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("-------0X")), "Game in progress\n");
}
TEST(BasicTests, test_2531) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("X------0-")), "Game in progress\n");
}
TEST(BasicTests, test_2532) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("X0X00XX-0")), "Game in progress\n");
}
TEST(BasicTests, test_2533) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("---0XX-0X")), "Game in progress\n");
}
TEST(BasicTests, test_2534) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("00-0-XX--")), "Game in progress\n");
}
TEST(BasicTests, test_2535) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("X00--X-0X")), "Game in progress\n");
}
TEST(BasicTests, test_2536) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("-0-0X-X0-")), "Game in progress\n");
}
TEST(BasicTests, test_2537) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("0X0XX0X0X")), "Draw\n");
}
TEST(BasicTests, test_2538) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("-----X--0")), "Game in progress\n");
}
TEST(BasicTests, test_2539) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("--0-XX00X")), "Game in progress\n");
}
TEST(BasicTests, test_2540) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("00-0-XX0X")), "Game in progress\n");
}
TEST(BasicTests, test_2541) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("-X-X000-X")), "Game in progress\n");
}
TEST(BasicTests, test_2542) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("---0-----")), "Game in progress\n");
}
TEST(BasicTests, test_2543) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("-----X0-0")), "Game in progress\n");
}
TEST(BasicTests, test_2544) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("---X-0-0X")), "Game in progress\n");
}
TEST(BasicTests, test_2545) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("00-XXXX0-")), "First player wins\n");
}
TEST(BasicTests, test_2546) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("-X--0--0-")), "Game in progress\n");
}
TEST(BasicTests, test_2547) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("X--0XX0--")), "Game in progress\n");
}
TEST(BasicTests, test_2548) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("X0-X-0X-0")), "First player wins\n");
}
TEST(BasicTests, test_2549) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("0X00X0XXX")), "First player wins\n");
}
TEST(BasicTests, test_2550) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("0--X----0")), "Game in progress\n");
}
TEST(BasicTests, test_2551) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("0XX0X0XX0")), "First player wins\n");
}
TEST(BasicTests, test_2552) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("X0X0XX00X")), "First player wins\n");
}
TEST(BasicTests, test_2553) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("0-00XX-X0")), "Game in progress\n");
}
TEST(BasicTests, test_2554) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("-XX00-X--")), "Game in progress\n");
}
TEST(BasicTests, test_2555) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("00XX-00X-")), "Game in progress\n");
}
TEST(BasicTests, test_2556) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("XX--0XX00")), "Game in progress\n");
}
TEST(BasicTests, test_2557) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("--X-X000-")), "Game in progress\n");
}
TEST(BasicTests, test_2558) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("-0--X--X-")), "Game in progress\n");
}
TEST(BasicTests, test_2559) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("-0X-----0")), "Game in progress\n");
}
TEST(BasicTests, test_2560) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("X0X0X000X")), "First player wins\n");
}
TEST(BasicTests, test_2561) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("XXX0X0-00")), "First player wins\n");
}
TEST(BasicTests, test_2562) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("-0----X--")), "Game in progress\n");
}
TEST(BasicTests, test_2563) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("XX0X-00X0")), "Second player wins\n");
}
TEST(BasicTests, test_2564) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("0-----X--")), "Game in progress\n");
}
TEST(BasicTests, test_2565) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("X0XX000XX")), "Draw\n");
}
TEST(BasicTests, test_2566) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("000X0XX-X")), "Second player wins\n");
}
TEST(BasicTests, test_2567) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("X-00X---0")), "Game in progress\n");
}
TEST(BasicTests, test_2568) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("----00-XX")), "Game in progress\n");
}
TEST(BasicTests, test_2569) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("XX---0--0")), "Game in progress\n");
}
TEST(BasicTests, test_2570) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("0--X0-0-X")), "Game in progress\n");
}
TEST(BasicTests, test_2571) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("--0-0-XX-")), "Game in progress\n");
}
TEST(BasicTests, test_2572) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("X-0-XX00X")), "First player wins\n");
}
TEST(BasicTests, test_2573) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("------X--")), "Game in progress\n");
}
TEST(BasicTests, test_2574) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("--X---X0-")), "Game in progress\n");
}
TEST(BasicTests, test_2575) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("X-X0-----")), "Game in progress\n");
}
TEST(BasicTests, test_2576) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("X00000XXX")), "Second player wins\n");
}
TEST(BasicTests, test_2577) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("--0X-----")), "Game in progress\n");
}
TEST(BasicTests, test_2578) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("XXX00X0X0")), "First player wins\n");
}
TEST(BasicTests, test_2579) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("X--0-0-0X")), "Game in progress\n");
}
TEST(BasicTests, test_2580) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("--X--0--X")), "Game in progress\n");
}
TEST(BasicTests, test_2581) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("------0--")), "Game in progress\n");
}
TEST(BasicTests, test_2582) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("---X-----")), "Game in progress\n");
}
TEST(BasicTests, test_2583) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("X-00---0X")), "Game in progress\n");
}
TEST(BasicTests, test_2584) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("---X0----")), "Game in progress\n");
}
TEST(BasicTests, test_2585) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("-X0-X-0-0")), "Game in progress\n");
}
TEST(BasicTests, test_2586) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("0--0--X--")), "Game in progress\n");
}
TEST(BasicTests, test_2587) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("0XX00XX0X")), "First player wins\n");
}
TEST(BasicTests, test_2588) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("-0X0XXX00")), "First player wins\n");
}
TEST(BasicTests, test_2589) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("-X0-0-X--")), "Game in progress\n");
}
TEST(BasicTests, test_2590) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("X000-XX-X")), "Game in progress\n");
}
TEST(BasicTests, test_2591) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("0X0X0XX0X")), "Draw\n");
}
TEST(BasicTests, test_2592) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("0X-X--0--")), "Game in progress\n");
}
TEST(BasicTests, test_2593) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("XX0000XXX")), "Second player wins\n");
}
TEST(BasicTests, test_2594) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("-----0-X-")), "Game in progress\n");
}
TEST(BasicTests, test_2595) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("XX--0-0-X")), "Game in progress\n");
}
TEST(BasicTests, test_2596) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("-X0-0----")), "Game in progress\n");
}
TEST(BasicTests, test_2597) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("XX00-X-0-")), "Game in progress\n");
}
TEST(BasicTests, test_2598) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("--X0-0X--")), "Game in progress\n");
}
TEST(BasicTests, test_2599) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("-0--X----")), "Game in progress\n");
}
TEST(BasicTests, test_2600) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("-0--X-0--")), "Game in progress\n");
}
TEST(BasicTests, test_2601) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("X00X00--X")), "Game in progress\n");
}
TEST(BasicTests, test_2602) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("--X0XX0-0")), "Game in progress\n");
}
TEST(BasicTests, test_2603) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("0X0-0--XX")), "Game in progress\n");
}
TEST(BasicTests, test_2604) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("---0--X--")), "Game in progress\n");
}
TEST(BasicTests, test_2605) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("X---0----")), "Game in progress\n");
}
TEST(BasicTests, test_2606) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("X-0XX-0X0")), "Game in progress\n");
}
TEST(BasicTests, test_2607) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("-0---0X0X")), "Game in progress\n");
}
TEST(BasicTests, test_2608) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("-00-X--0X")), "Game in progress\n");
}
TEST(BasicTests, test_2609) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("----X-0--")), "Game in progress\n");
}
TEST(BasicTests, test_2610) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("-0-0X-X0-")), "Game in progress\n");
}
TEST(BasicTests, test_2611) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("0-X0-X---")), "Game in progress\n");
}
TEST(BasicTests, test_2612) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("--X--00--")), "Game in progress\n");
}
TEST(BasicTests, test_2613) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("X00X--0XX")), "Game in progress\n");
}
TEST(BasicTests, test_2614) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("X0X-X0--0")), "Game in progress\n");
}
TEST(BasicTests, test_2615) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("XXX-00-0-")), "First player wins\n");
}
TEST(BasicTests, test_2616) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("X00X-0X--")), "First player wins\n");
}
TEST(BasicTests, test_2617) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("0XX----0-")), "Game in progress\n");
}
TEST(BasicTests, test_2618) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("----0-0-X")), "Game in progress\n");
}
TEST(BasicTests, test_2619) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("X--XX--00")), "Game in progress\n");
}
TEST(BasicTests, test_2620) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("X00-0XX0X")), "Second player wins\n");
}
TEST(BasicTests, test_2621) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("X-0------")), "Game in progress\n");
}
TEST(BasicTests, test_2622) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("-------X-")), "Game in progress\n");
}
TEST(BasicTests, test_2623) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("00X-0X0XX")), "First player wins\n");
}
TEST(BasicTests, test_2624) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("00XXX0-0-")), "Game in progress\n");
}
TEST(BasicTests, test_2625) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("0--00XX--")), "Game in progress\n");
}
TEST(BasicTests, test_2626) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("X0X0XX00X")), "First player wins\n");
}
TEST(BasicTests, test_2627) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("-----X---")), "Game in progress\n");
}
TEST(BasicTests, test_2628) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("0X0X00XXX")), "First player wins\n");
}
TEST(BasicTests, test_2629) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("0---X00X-")), "Game in progress\n");
}
TEST(BasicTests, test_2630) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("0X0--X-X0")), "Game in progress\n");
}
TEST(BasicTests, test_2631) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("--0--0-XX")), "Game in progress\n");
}
TEST(BasicTests, test_2632) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("--X--X-00")), "Game in progress\n");
}
TEST(BasicTests, test_2633) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("----0---X")), "Game in progress\n");
}
TEST(BasicTests, test_2634) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("0----XXX0")), "Game in progress\n");
}
TEST(BasicTests, test_2635) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("--X0-X0-0")), "Game in progress\n");
}
TEST(BasicTests, test_2636) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("X-0XX0-X0")), "Second player wins\n");
}
TEST(BasicTests, test_2637) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("--0--X---")), "Game in progress\n");
}
TEST(BasicTests, test_2638) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("0X00XXX-0")), "Game in progress\n");
}
TEST(BasicTests, test_2639) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("----X----")), "Game in progress\n");
}
TEST(BasicTests, test_2640) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("-0-X0----")), "Game in progress\n");
}
TEST(BasicTests, test_2641) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("--------X")), "Game in progress\n");
}
TEST(BasicTests, test_2642) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("X00X00XX-")), "First player wins\n");
}
TEST(BasicTests, test_2643) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("X--X00---")), "Game in progress\n");
}
TEST(BasicTests, test_2644) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("X0-000XXX")), "Second player wins\n");
}
TEST(BasicTests, test_2645) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("----0---X")), "Game in progress\n");
}
TEST(BasicTests, test_2646) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("X-0-X0X0-")), "Game in progress\n");
}
TEST(BasicTests, test_2647) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("0X-0X-X0X")), "Game in progress\n");
}
TEST(BasicTests, test_2648) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("0--XX----")), "Game in progress\n");
}
TEST(BasicTests, test_2649) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("0X-00XX0X")), "Game in progress\n");
}
TEST(BasicTests, test_2650) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("X0X00X0XX")), "First player wins\n");
}
TEST(BasicTests, test_2651) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("0X0XXX00-")), "First player wins\n");
}
TEST(BasicTests, test_2652) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("-----X0--")), "Game in progress\n");
}
TEST(BasicTests, test_2653) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("X0XX00X0X")), "First player wins\n");
}
TEST(BasicTests, test_2654) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("X---0X0-0")), "Game in progress\n");
}
TEST(BasicTests, test_2655) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("X-0XX00-0")), "Second player wins\n");
}
TEST(BasicTests, test_2656) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("0-----0X-")), "Game in progress\n");
}
TEST(BasicTests, test_2657) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("0XX000X-X")), "Second player wins\n");
}
TEST(BasicTests, test_2658) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("-----0-XX")), "Game in progress\n");
}
TEST(BasicTests, test_2659) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("0-X0-0X--")), "Game in progress\n");
}
TEST(BasicTests, test_2660) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("-0-XX-0X0")), "Game in progress\n");
}
TEST(BasicTests, test_2661) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("---X-----")), "Game in progress\n");
}
TEST(BasicTests, test_2662) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("0XX0X000X")), "Second player wins\n");
}
TEST(BasicTests, test_2663) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("-----X0-0")), "Game in progress\n");
}
TEST(BasicTests, test_2664) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("-X-XX--00")), "Game in progress\n");
}
TEST(BasicTests, test_2665) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("0X-XX00--")), "Game in progress\n");
}
TEST(BasicTests, test_2666) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("--------0")), "Game in progress\n");
}
TEST(BasicTests, test_2667) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("-----0X--")), "Game in progress\n");
}
TEST(BasicTests, test_2668) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("XX0X0X000")), "Second player wins\n");
}
TEST(BasicTests, test_2669) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("X00X0X0X0")), "Second player wins\n");
}
TEST(BasicTests, test_2670) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("-----0---")), "Game in progress\n");
}
TEST(BasicTests, test_2671) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("0X-X0-X0X")), "Game in progress\n");
}
TEST(BasicTests, test_2672) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("----X0--X")), "Game in progress\n");
}
TEST(BasicTests, test_2673) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("0XX-0-X00")), "Second player wins\n");
}
TEST(BasicTests, test_2674) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("-0-------")), "Game in progress\n");
}
TEST(BasicTests, test_2675) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("00X-XX-X0")), "Game in progress\n");
}
TEST(BasicTests, test_2676) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("-X-X0-00-")), "Game in progress\n");
}
TEST(BasicTests, test_2677) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("-X-00---X")), "Game in progress\n");
}
TEST(BasicTests, test_2678) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("X0X0-X0-0")), "Game in progress\n");
}
TEST(BasicTests, test_2679) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("--0--XX0-")), "Game in progress\n");
}
TEST(BasicTests, test_2680) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("--XX0---0")), "Game in progress\n");
}
TEST(BasicTests, test_2681) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("-X-00-X0-")), "Game in progress\n");
}
TEST(BasicTests, test_2682) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("-0---X-0X")), "Game in progress\n");
}
TEST(BasicTests, test_2683) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("X0X000X-X")), "Second player wins\n");
}
TEST(BasicTests, test_2684) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("-0000X-XX")), "Game in progress\n");
}
TEST(BasicTests, test_2685) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("X--00X--X")), "Game in progress\n");
}
TEST(BasicTests, test_2686) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("-0X-X0X-0")), "First player wins\n");
}
TEST(BasicTests, test_2687) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("--0------")), "Game in progress\n");
}
TEST(BasicTests, test_2688) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("X-X00-0-X")), "Game in progress\n");
}
TEST(BasicTests, test_2689) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("0XXX-0X00")), "Game in progress\n");
}
TEST(BasicTests, test_2690) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("---X-----")), "Game in progress\n");
}
TEST(BasicTests, test_2691) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("---0X--X-")), "Game in progress\n");
}
TEST(BasicTests, test_2692) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("0X0X0-X0X")), "Game in progress\n");
}
TEST(BasicTests, test_2693) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("--X0-----")), "Game in progress\n");
}
TEST(BasicTests, test_2694) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("0-X00--X-")), "Game in progress\n");
}
TEST(BasicTests, test_2695) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("--0------")), "Game in progress\n");
}
TEST(BasicTests, test_2696) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("0X-0XX00X")), "Second player wins\n");
}
TEST(BasicTests, test_2697) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("--X------")), "Game in progress\n");
}
TEST(BasicTests, test_2698) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("-0X0X-0-X")), "Game in progress\n");
}
TEST(BasicTests, test_2699) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("--------0")), "Game in progress\n");
}
TEST(BasicTests, test_2700) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("-----X---")), "Game in progress\n");
}
TEST(BasicTests, test_2701) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("X-0-X0-X-")), "Game in progress\n");
}
TEST(BasicTests, test_2702) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("-XX00XX00")), "Game in progress\n");
}
TEST(BasicTests, test_2703) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("-X---0---")), "Game in progress\n");
}
TEST(BasicTests, test_2704) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("X0X0--0-X")), "Game in progress\n");
}
TEST(BasicTests, test_2705) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("XX00XX000")), "Second player wins\n");
}
TEST(BasicTests, test_2706) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("---X-----")), "Game in progress\n");
}
TEST(BasicTests, test_2707) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("XX0-0---0")), "Game in progress\n");
}
TEST(BasicTests, test_2708) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("-0-------")), "Game in progress\n");
}
TEST(BasicTests, test_2709) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("0X0XX--0-")), "Game in progress\n");
}
TEST(BasicTests, test_2710) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("00XXX0X00")), "First player wins\n");
}
TEST(BasicTests, test_2711) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("--X---00-")), "Game in progress\n");
}
TEST(BasicTests, test_2712) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("0XX-0-X0-")), "Game in progress\n");
}
TEST(BasicTests, test_2713) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("X0X00X-X0")), "Game in progress\n");
}
TEST(BasicTests, test_2714) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("--X-0X---")), "Game in progress\n");
}
TEST(BasicTests, test_2715) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("00X0XX--X")), "First player wins\n");
}
TEST(BasicTests, test_2716) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("XX00X000X")), "First player wins\n");
}
TEST(BasicTests, test_2717) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("--X------")), "Game in progress\n");
}
TEST(BasicTests, test_2718) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("XXXX00X00")), "First player wins\n");
}
TEST(BasicTests, test_2719) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("00XX-X00X")), "First player wins\n");
}
TEST(BasicTests, test_2720) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("-X0XX-0--")), "Game in progress\n");
}
TEST(BasicTests, test_2721) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("XXX00X0X0")), "First player wins\n");
}
TEST(BasicTests, test_2722) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("0XXXX000X")), "Draw\n");
}
TEST(BasicTests, test_2723) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("X000XX0X0")), "Draw\n");
}
TEST(BasicTests, test_2724) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("-0X00-X--")), "Game in progress\n");
}
TEST(BasicTests, test_2725) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("0XX0X0-0X")), "Game in progress\n");
}
TEST(BasicTests, test_2726) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("X-00-XX0X")), "Game in progress\n");
}
TEST(BasicTests, test_2727) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("-0--0X0-X")), "Game in progress\n");
}
TEST(BasicTests, test_2728) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("-00XX-0XX")), "Game in progress\n");
}
TEST(BasicTests, test_2729) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("X00XX0X0X")), "First player wins\n");
}
TEST(BasicTests, test_2730) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("0X-0XX0X0")), "Second player wins\n");
}
TEST(BasicTests, test_2731) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("---0-X-X0")), "Game in progress\n");
}
TEST(BasicTests, test_2732) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("-0---0--X")), "Game in progress\n");
}
TEST(BasicTests, test_2733) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("X0-00XX0X")), "Second player wins\n");
}
TEST(BasicTests, test_2734) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("XX00XX0-0")), "Game in progress\n");
}
TEST(BasicTests, test_2735) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("---0-----")), "Game in progress\n");
}
TEST(BasicTests, test_2736) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("X--0--X0-")), "Game in progress\n");
}
TEST(BasicTests, test_2737) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("-------0-")), "Game in progress\n");
}
TEST(BasicTests, test_2738) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("X--0-0X0X")), "Game in progress\n");
}
TEST(BasicTests, test_2739) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("X00X0XX00")), "First player wins\n");
}
TEST(BasicTests, test_2740) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("0X-0-0XX0")), "Game in progress\n");
}
TEST(BasicTests, test_2741) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("---0X-0--")), "Game in progress\n");
}
TEST(BasicTests, test_2742) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("---X0--0-")), "Game in progress\n");
}
TEST(BasicTests, test_2743) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("XXX00000X")), "First player wins\n");
}
TEST(BasicTests, test_2744) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("------X--")), "Game in progress\n");
}
TEST(BasicTests, test_2745) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("0XX--0X0X")), "Game in progress\n");
}
TEST(BasicTests, test_2746) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("-00XXX00-")), "First player wins\n");
}
TEST(BasicTests, test_2747) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("X00XX000X")), "First player wins\n");
}
TEST(BasicTests, test_2748) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("----X----")), "Game in progress\n");
}
TEST(BasicTests, test_2749) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("XXX00XX00")), "First player wins\n");
}
TEST(BasicTests, test_2750) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("0-X----X-")), "Game in progress\n");
}
TEST(BasicTests, test_2751) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("-0XXX000-")), "Game in progress\n");
}
TEST(BasicTests, test_2752) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("XXX0000XX")), "First player wins\n");
}
TEST(BasicTests, test_2753) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("-------0-")), "Game in progress\n");
}
TEST(BasicTests, test_2754) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("--0XX00X0")), "Second player wins\n");
}
TEST(BasicTests, test_2755) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("-00X-XX--")), "Game in progress\n");
}
TEST(BasicTests, test_2756) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("-X-0-X-0X")), "Game in progress\n");
}
TEST(BasicTests, test_2757) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("----0----")), "Game in progress\n");
}
TEST(BasicTests, test_2758) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("XXX000-X0")), "First player wins\n");
}
TEST(BasicTests, test_2759) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("0-0X-X0X-")), "Game in progress\n");
}
TEST(BasicTests, test_2760) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("-------0X")), "Game in progress\n");
}
TEST(BasicTests, test_2761) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("0-X-X--X0")), "Game in progress\n");
}
TEST(BasicTests, test_2762) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("--X------")), "Game in progress\n");
}
TEST(BasicTests, test_2763) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("0X0X0XX0X")), "Draw\n");
}
TEST(BasicTests, test_2764) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("X0X0X00XX")), "First player wins\n");
}
TEST(BasicTests, test_2765) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("XXX00X0X0")), "First player wins\n");
}
TEST(BasicTests, test_2766) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("000X0-XXX")), "Second player wins\n");
}
TEST(BasicTests, test_2767) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("-XX---0--")), "Game in progress\n");
}
TEST(BasicTests, test_2768) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("-----0--X")), "Game in progress\n");
}
TEST(BasicTests, test_2769) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("0-X0-00XX")), "Second player wins\n");
}
TEST(BasicTests, test_2770) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("0-0-X----")), "Game in progress\n");
}
TEST(BasicTests, test_2771) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("-------X-")), "Game in progress\n");
}
TEST(BasicTests, test_2772) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("X0--0-X--")), "Game in progress\n");
}
TEST(BasicTests, test_2773) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("0X-XX00-X")), "Game in progress\n");
}
TEST(BasicTests, test_2774) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("X0X0-X--0")), "Game in progress\n");
}
TEST(BasicTests, test_2775) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("X000-XXX0")), "Game in progress\n");
}
TEST(BasicTests, test_2776) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("------X--")), "Game in progress\n");
}
TEST(BasicTests, test_2777) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("X0--00-XX")), "Game in progress\n");
}
TEST(BasicTests, test_2778) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("X-X0000X-")), "Second player wins\n");
}
TEST(BasicTests, test_2779) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("X-0XX-00-")), "Game in progress\n");
}
TEST(BasicTests, test_2780) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("X-0--0-X-")), "Game in progress\n");
}
TEST(BasicTests, test_2781) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("0X-0X00XX")), "Second player wins\n");
}
TEST(BasicTests, test_2782) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("0-0X0-0XX")), "Second player wins\n");
}
TEST(BasicTests, test_2783) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("-X00XX00X")), "Game in progress\n");
}
TEST(BasicTests, test_2784) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("0-X-0X0--")), "Game in progress\n");
}
TEST(BasicTests, test_2785) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("--X------")), "Game in progress\n");
}
TEST(BasicTests, test_2786) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("------0-X")), "Game in progress\n");
}
TEST(BasicTests, test_2787) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("-X----0--")), "Game in progress\n");
}
TEST(BasicTests, test_2788) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("-0-------")), "Game in progress\n");
}
TEST(BasicTests, test_2789) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("X00X-X00-")), "Game in progress\n");
}
TEST(BasicTests, test_2790) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("XX00X0---")), "Game in progress\n");
}
TEST(BasicTests, test_2791) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("0XX---00-")), "Game in progress\n");
}
TEST(BasicTests, test_2792) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("X0--X--0-")), "Game in progress\n");
}
TEST(BasicTests, test_2793) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("0-00XXXX0")), "Game in progress\n");
}
TEST(BasicTests, test_2794) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("0X0X--0--")), "Game in progress\n");
}
TEST(BasicTests, test_2795) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("-X0-----X")), "Game in progress\n");
}
TEST(BasicTests, test_2796) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("00--X--X-")), "Game in progress\n");
}
TEST(BasicTests, test_2797) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("0X-X-X000")), "Second player wins\n");
}
TEST(BasicTests, test_2798) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("-------0X")), "Game in progress\n");
}
TEST(BasicTests, test_2799) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("0--------")), "Game in progress\n");
}
TEST(BasicTests, test_2800) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("X--0-X-0-")), "Game in progress\n");
}
TEST(BasicTests, test_2801) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("X--X-X-00")), "Game in progress\n");
}
TEST(BasicTests, test_2802) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("0X0-0XX0X")), "Game in progress\n");
}
TEST(BasicTests, test_2803) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("-X-----0-")), "Game in progress\n");
}
TEST(BasicTests, test_2804) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("------X-0")), "Game in progress\n");
}
TEST(BasicTests, test_2805) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("-------0-")), "Game in progress\n");
}
TEST(BasicTests, test_2806) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("XX-0-----")), "Game in progress\n");
}
TEST(BasicTests, test_2807) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("-0--X0-X-")), "Game in progress\n");
}
TEST(BasicTests, test_2808) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("X0X-000-X")), "Game in progress\n");
}
TEST(BasicTests, test_2809) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("0X0XX--0X")), "Game in progress\n");
}
TEST(BasicTests, test_2810) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("X0--X----")), "Game in progress\n");
}
TEST(BasicTests, test_2811) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("-----X---")), "Game in progress\n");
}
TEST(BasicTests, test_2812) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("-X------0")), "Game in progress\n");
}
TEST(BasicTests, test_2813) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("-0-XX00--")), "Game in progress\n");
}
TEST(BasicTests, test_2814) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("XXX-0X0-0")), "First player wins\n");
}
TEST(BasicTests, test_2815) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("0--X0-X-X")), "Game in progress\n");
}
TEST(BasicTests, test_2816) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("0--0XX0XX")), "Second player wins\n");
}
TEST(BasicTests, test_2817) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("-------X-")), "Game in progress\n");
}
TEST(BasicTests, test_2818) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("--0--X-X-")), "Game in progress\n");
}
TEST(BasicTests, test_2819) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("0X0X0XX00")), "Second player wins\n");
}
TEST(BasicTests, test_2820) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("X-------0")), "Game in progress\n");
}
TEST(BasicTests, test_2821) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("-X0-XXX00")), "Game in progress\n");
}
TEST(BasicTests, test_2822) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("---0XX---")), "Game in progress\n");
}
TEST(BasicTests, test_2823) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("-00X0-0XX")), "Second player wins\n");
}
TEST(BasicTests, test_2824) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("0XXX0X0X0")), "Second player wins\n");
}
TEST(BasicTests, test_2825) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("-X----0-0")), "Game in progress\n");
}
TEST(BasicTests, test_2826) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("-0-X-0X0X")), "Game in progress\n");
}
TEST(BasicTests, test_2827) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("---0-X---")), "Game in progress\n");
}
TEST(BasicTests, test_2828) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("------X--")), "Game in progress\n");
}
TEST(BasicTests, test_2829) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("0--------")), "Game in progress\n");
}
TEST(BasicTests, test_2830) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("--0X----0")), "Game in progress\n");
}
TEST(BasicTests, test_2831) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("X----00X-")), "Game in progress\n");
}
TEST(BasicTests, test_2832) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("--------0")), "Game in progress\n");
}
TEST(BasicTests, test_2833) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("--X-00XX0")), "Game in progress\n");
}
TEST(BasicTests, test_2834) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("-----X---")), "Game in progress\n");
}
TEST(BasicTests, test_2835) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("----0-X--")), "Game in progress\n");
}
TEST(BasicTests, test_2836) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("X----X--0")), "Game in progress\n");
}
TEST(BasicTests, test_2837) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("X0--X--0-")), "Game in progress\n");
}
TEST(BasicTests, test_2838) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("00X-0X-X0")), "Second player wins\n");
}
TEST(BasicTests, test_2839) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("-X---X-00")), "Game in progress\n");
}
TEST(BasicTests, test_2840) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("0X0XX0X0X")), "Draw\n");
}
TEST(BasicTests, test_2841) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("00XXX000X")), "Draw\n");
}
TEST(BasicTests, test_2842) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("--0X-----")), "Game in progress\n");
}
TEST(BasicTests, test_2843) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("0-X-X0XX0")), "First player wins\n");
}
TEST(BasicTests, test_2844) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("0XX0-00XX")), "Second player wins\n");
}
TEST(BasicTests, test_2845) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("0--------")), "Game in progress\n");
}
TEST(BasicTests, test_2846) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("0----XX--")), "Game in progress\n");
}
TEST(BasicTests, test_2847) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("0-----X-0")), "Game in progress\n");
}
TEST(BasicTests, test_2848) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("0--0-X-XX")), "Game in progress\n");
}
TEST(BasicTests, test_2849) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("X--X00--X")), "Game in progress\n");
}
TEST(BasicTests, test_2850) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("XX-X0-X00")), "First player wins\n");
}
TEST(BasicTests, test_2851) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("---XX0--0")), "Game in progress\n");
}
TEST(BasicTests, test_2852) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("-X00-X0X-")), "Game in progress\n");
}
TEST(BasicTests, test_2853) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("X0X0000XX")), "Second player wins\n");
}
TEST(BasicTests, test_2854) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("0X-XX00--")), "Game in progress\n");
}
TEST(BasicTests, test_2855) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("X0--0-XX-")), "Game in progress\n");
}
TEST(BasicTests, test_2856) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("X--------")), "Game in progress\n");
}
TEST(BasicTests, test_2857) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("-X----X-0")), "Game in progress\n");
}
TEST(BasicTests, test_2858) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("X-------0")), "Game in progress\n");
}
TEST(BasicTests, test_2859) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("0X0XX-X0-")), "Game in progress\n");
}
TEST(BasicTests, test_2860) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("-0--X-X--")), "Game in progress\n");
}
TEST(BasicTests, test_2861) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("X--------")), "Game in progress\n");
}
TEST(BasicTests, test_2862) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("----X00X-")), "Game in progress\n");
}
TEST(BasicTests, test_2863) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("---0----X")), "Game in progress\n");
}
TEST(BasicTests, test_2864) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("------0--")), "Game in progress\n");
}
TEST(BasicTests, test_2865) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("0X0X0XX0X")), "Draw\n");
}
TEST(BasicTests, test_2866) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("00-X0X0-X")), "Game in progress\n");
}
TEST(BasicTests, test_2867) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("0X0X000XX")), "Second player wins\n");
}
TEST(BasicTests, test_2868) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("000X0X0XX")), "Second player wins\n");
}
TEST(BasicTests, test_2869) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("00X-XX00X")), "First player wins\n");
}
TEST(BasicTests, test_2870) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("-0--0X---")), "Game in progress\n");
}
TEST(BasicTests, test_2871) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("-0--0X--X")), "Game in progress\n");
}
TEST(BasicTests, test_2872) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("-0-----X-")), "Game in progress\n");
}
TEST(BasicTests, test_2873) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("--------X")), "Game in progress\n");
}
TEST(BasicTests, test_2874) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("XX-0XX-00")), "Game in progress\n");
}
TEST(BasicTests, test_2875) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("-0-X00X-X")), "Game in progress\n");
}
TEST(BasicTests, test_2876) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("-0X00XX-0")), "Game in progress\n");
}
TEST(BasicTests, test_2877) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("X----0---")), "Game in progress\n");
}
TEST(BasicTests, test_2878) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("----XX00-")), "Game in progress\n");
}
TEST(BasicTests, test_2879) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("--0------")), "Game in progress\n");
}
TEST(BasicTests, test_2880) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("X000XXXX0")), "Draw\n");
}
TEST(BasicTests, test_2881) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("-00----XX")), "Game in progress\n");
}
TEST(BasicTests, test_2882) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("XX-0---0X")), "Game in progress\n");
}
TEST(BasicTests, test_2883) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("-X0X-0-0X")), "Game in progress\n");
}
TEST(BasicTests, test_2884) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("X-----0--")), "Game in progress\n");
}
TEST(BasicTests, test_2885) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("XX0X00X0X")), "First player wins\n");
}
TEST(BasicTests, test_2886) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("X--X00---")), "Game in progress\n");
}
TEST(BasicTests, test_2887) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("XXX00-0X0")), "First player wins\n");
}
TEST(BasicTests, test_2888) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("-X-X0XX00")), "Game in progress\n");
}
TEST(BasicTests, test_2889) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("----0-XX-")), "Game in progress\n");
}
TEST(BasicTests, test_2890) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("--00-X0X-")), "Game in progress\n");
}
TEST(BasicTests, test_2891) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("--X-0X00X")), "First player wins\n");
}
TEST(BasicTests, test_2892) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("0X0X0XX00")), "Second player wins\n");
}
TEST(BasicTests, test_2893) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("-X000-XXX")), "First player wins\n");
}
TEST(BasicTests, test_2894) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("-----X---")), "Game in progress\n");
}
TEST(BasicTests, test_2895) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("000X-XX0X")), "Second player wins\n");
}
TEST(BasicTests, test_2896) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("X0X-00---")), "Game in progress\n");
}
TEST(BasicTests, test_2897) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("-00X0XX0X")), "Second player wins\n");
}
TEST(BasicTests, test_2898) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("0X000XXXX")), "First player wins\n");
}
TEST(BasicTests, test_2899) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("-XX00-0X0")), "Game in progress\n");
}
TEST(BasicTests, test_2900) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("-----0---")), "Game in progress\n");
}
TEST(BasicTests, test_2901) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("-XX--0-00")), "Game in progress\n");
}
TEST(BasicTests, test_2902) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("-------0-")), "Game in progress\n");
}
TEST(BasicTests, test_2903) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("---X-0---")), "Game in progress\n");
}
TEST(BasicTests, test_2904) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("0XX00X0X0")), "Second player wins\n");
}
TEST(BasicTests, test_2905) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("-XX00-0-X")), "Game in progress\n");
}
TEST(BasicTests, test_2906) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("-X-----00")), "Game in progress\n");
}
TEST(BasicTests, test_2907) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("0XXX000X0")), "Second player wins\n");
}
TEST(BasicTests, test_2908) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("-X-0-----")), "Game in progress\n");
}
TEST(BasicTests, test_2909) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("-X-0--X0-")), "Game in progress\n");
}
TEST(BasicTests, test_2910) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("-X-00XX-0")), "Game in progress\n");
}
TEST(BasicTests, test_2911) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("----X---0")), "Game in progress\n");
}
TEST(BasicTests, test_2912) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("------X00")), "Game in progress\n");
}
TEST(BasicTests, test_2913) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("-X0------")), "Game in progress\n");
}
TEST(BasicTests, test_2914) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("0-X------")), "Game in progress\n");
}
TEST(BasicTests, test_2915) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("00XXX0X0X")), "First player wins\n");
}
TEST(BasicTests, test_2916) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("------X0-")), "Game in progress\n");
}
TEST(BasicTests, test_2917) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("000--XXX-")), "Second player wins\n");
}
TEST(BasicTests, test_2918) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("X00-X0XX0")), "Second player wins\n");
}
TEST(BasicTests, test_2919) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("0--X0-X0X")), "Game in progress\n");
}
TEST(BasicTests, test_2920) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("00XXX00XX")), "Draw\n");
}
TEST(BasicTests, test_2921) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("X0X---0X0")), "Game in progress\n");
}
TEST(BasicTests, test_2922) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("-----0-X-")), "Game in progress\n");
}
TEST(BasicTests, test_2923) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("-0--X----")), "Game in progress\n");
}
TEST(BasicTests, test_2924) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("-0-------")), "Game in progress\n");
}
TEST(BasicTests, test_2925) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("X-0-X-0-0")), "Game in progress\n");
}
TEST(BasicTests, test_2926) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("-0---X--0")), "Game in progress\n");
}
TEST(BasicTests, test_2927) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("---X0-XX0")), "Game in progress\n");
}
TEST(BasicTests, test_2928) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("0X-X0--0-")), "Game in progress\n");
}
TEST(BasicTests, test_2929) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("--------X")), "Game in progress\n");
}
TEST(BasicTests, test_2930) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("---X--0--")), "Game in progress\n");
}
TEST(BasicTests, test_2931) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("-X-XX0--0")), "Game in progress\n");
}
TEST(BasicTests, test_2932) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("-0000XXXX")), "First player wins\n");
}
TEST(BasicTests, test_2933) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("-X00--0-X")), "Game in progress\n");
}
TEST(BasicTests, test_2934) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("--------0")), "Game in progress\n");
}
TEST(BasicTests, test_2935) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("--X-0----")), "Game in progress\n");
}
TEST(BasicTests, test_2936) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("-X----0X0")), "Game in progress\n");
}
TEST(BasicTests, test_2937) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("-00X---X-")), "Game in progress\n");
}
TEST(BasicTests, test_2938) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("00X-XX0X-")), "Game in progress\n");
}
TEST(BasicTests, test_2939) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("-------0-")), "Game in progress\n");
}
TEST(BasicTests, test_2940) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("--X-00X-X")), "Game in progress\n");
}
TEST(BasicTests, test_2941) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("XX0X--00-")), "Game in progress\n");
}
TEST(BasicTests, test_2942) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("X-00---XX")), "Game in progress\n");
}
TEST(BasicTests, test_2943) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("0-X0X0X0X")), "First player wins\n");
}
TEST(BasicTests, test_2944) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("---X-----")), "Game in progress\n");
}
TEST(BasicTests, test_2945) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("--0------")), "Game in progress\n");
}
TEST(BasicTests, test_2946) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("---X----0")), "Game in progress\n");
}
TEST(BasicTests, test_2947) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("X0X-X00X-")), "Game in progress\n");
}
TEST(BasicTests, test_2948) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("--X------")), "Game in progress\n");
}
TEST(BasicTests, test_2949) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("--X------")), "Game in progress\n");
}
TEST(BasicTests, test_2950) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("0X--0X0XX")), "Game in progress\n");
}
TEST(BasicTests, test_2951) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("X-X00-00X")), "Game in progress\n");
}
TEST(BasicTests, test_2952) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("--------X")), "Game in progress\n");
}
TEST(BasicTests, test_2953) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("00-XX-00X")), "Game in progress\n");
}
TEST(BasicTests, test_2954) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("0-X-0--X-")), "Game in progress\n");
}
TEST(BasicTests, test_2955) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("---X-----")), "Game in progress\n");
}
TEST(BasicTests, test_2956) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("--X-X000X")), "Game in progress\n");
}
TEST(BasicTests, test_2957) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("---0X--0-")), "Game in progress\n");
}
TEST(BasicTests, test_2958) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("-0X0X00X-")), "Game in progress\n");
}
TEST(BasicTests, test_2959) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("0-X---X--")), "Game in progress\n");
}
TEST(BasicTests, test_2960) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("XX----0--")), "Game in progress\n");
}
TEST(BasicTests, test_2961) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("0-X------")), "Game in progress\n");
}
TEST(BasicTests, test_2962) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("XXX-00X00")), "First player wins\n");
}
TEST(BasicTests, test_2963) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("--0-----X")), "Game in progress\n");
}
TEST(BasicTests, test_2964) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("XX--X0--0")), "Game in progress\n");
}
TEST(BasicTests, test_2965) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("0X0X---X0")), "Game in progress\n");
}
TEST(BasicTests, test_2966) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("0X0-X-X0-")), "Game in progress\n");
}
TEST(BasicTests, test_2967) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("00XXXX00X")), "First player wins\n");
}
TEST(BasicTests, test_2968) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("XX----0--")), "Game in progress\n");
}
TEST(BasicTests, test_2969) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("0X-0X0XX0")), "First player wins\n");
}
TEST(BasicTests, test_2970) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("X-0------")), "Game in progress\n");
}
TEST(BasicTests, test_2971) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("--X----0X")), "Game in progress\n");
}
TEST(BasicTests, test_2972) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("XXX-X00-0")), "First player wins\n");
}
TEST(BasicTests, test_2973) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("000-XXX0X")), "Second player wins\n");
}
TEST(BasicTests, test_2974) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("00X-0--XX")), "Game in progress\n");
}
TEST(BasicTests, test_2975) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("--X0-0-0X")), "Game in progress\n");
}
TEST(BasicTests, test_2976) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("0XX0X0X0X")), "First player wins\n");
}
TEST(BasicTests, test_2977) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("XX000XXX0")), "Draw\n");
}
TEST(BasicTests, test_2978) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("-----0--X")), "Game in progress\n");
}
TEST(BasicTests, test_2979) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("0XX000XX-")), "Second player wins\n");
}
TEST(BasicTests, test_2980) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("0000XXXXX")), "Second player wins\n");
}
TEST(BasicTests, test_2981) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("X0---X---")), "Game in progress\n");
}
TEST(BasicTests, test_2982) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("---XX0-0-")), "Game in progress\n");
}
TEST(BasicTests, test_2983) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("----0--XX")), "Game in progress\n");
}
TEST(BasicTests, test_2984) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("X0-0X0---")), "Game in progress\n");
}
TEST(BasicTests, test_2985) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("-----X--0")), "Game in progress\n");
}
TEST(BasicTests, test_2986) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("-----X--0")), "Game in progress\n");
}
TEST(BasicTests, test_2987) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("0X0X00X-X")), "Game in progress\n");
}
TEST(BasicTests, test_2988) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("0000XXXX-")), "Second player wins\n");
}
TEST(BasicTests, test_2989) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("X000X-X0X")), "First player wins\n");
}
TEST(BasicTests, test_2990) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("X00------")), "Game in progress\n");
}
TEST(BasicTests, test_2991) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("-X000XXX0")), "Game in progress\n");
}
TEST(BasicTests, test_2992) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("-X-0-X0--")), "Game in progress\n");
}
TEST(BasicTests, test_2993) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("0------X-")), "Game in progress\n");
}
TEST(BasicTests, test_2994) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("--X00-0-X")), "Game in progress\n");
}
TEST(BasicTests, test_2995) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("--------X")), "Game in progress\n");
}
TEST(BasicTests, test_2996) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("0X--0---X")), "Game in progress\n");
}
TEST(BasicTests, test_2997) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("X000X--XX")), "First player wins\n");
}
TEST(BasicTests, test_2998) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("X0---0---")), "Game in progress\n");
}
TEST(BasicTests, test_2999) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("X-X00XX0-")), "Game in progress\n");
}
TEST(BasicTests, test_3000) {
    ASSERT_EQ(Resolver::resolve(StateHelper::eraseSpaces("X0X0XX-00")), "Game in progress\n");
}
