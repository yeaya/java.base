#include <sun/nio/cs/StandardCharsets$Aliases.h>
#include <sun/nio/cs/StandardCharsets.h>
#include <sun/util/PreHashedMap.h>
#include <jcpp.h>

#undef MASK
#undef ROWS
#undef SHIFT
#undef SIZE

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $PreHashedMap = ::sun::util::PreHashedMap;

namespace sun {
	namespace nio {
		namespace cs {

void StandardCharsets$Aliases::init$() {
	$PreHashedMap::init$(StandardCharsets$Aliases::ROWS, StandardCharsets$Aliases::SIZE, StandardCharsets$Aliases::SHIFT, StandardCharsets$Aliases::MASK);
}

void StandardCharsets$Aliases::init($ObjectArray* ht) {
	$useLocalObjectStack();
	$nc(ht)->set(1, $$new($ObjectArray, {
		"csisolatin0"_s,
		"iso-8859-15"_s
	}));
	ht->set(2, $$new($ObjectArray, {
		"x0208"_s,
		"x-jis0208"_s,
		$$new($ObjectArray, {
			"csisolatin1"_s,
			"iso-8859-1"_s
		})
	}));
	ht->set(3, $$new($ObjectArray, {
		"csisolatin2"_s,
		"iso-8859-2"_s
	}));
	ht->set(4, $$new($ObjectArray, {
		"csisolatin3"_s,
		"iso-8859-3"_s
	}));
	ht->set(5, $$new($ObjectArray, {
		"csisolatin4"_s,
		"iso-8859-4"_s
	}));
	ht->set(6, $$new($ObjectArray, {
		"csisolatin5"_s,
		"iso-8859-9"_s
	}));
	ht->set(10, $$new($ObjectArray, {
		"csisolatin9"_s,
		"iso-8859-15"_s
	}));
	ht->set(19, $$new($ObjectArray, {
		"unicodelittle"_s,
		"x-utf-16le-bom"_s
	}));
	ht->set(23, $$new($ObjectArray, {
		"ksc5601-1987"_s,
		"euc-kr"_s
	}));
	ht->set(24, $$new($ObjectArray, {
		"iso646-us"_s,
		"us-ascii"_s
	}));
	ht->set(25, $$new($ObjectArray, {
		"jis_x0208-1983"_s,
		"x-jis0208"_s,
		$$new($ObjectArray, {
			"iso_8859-7:1987"_s,
			"iso-8859-7"_s
		})
	}));
	ht->set(26, $$new($ObjectArray, {
		"912"_s,
		"iso-8859-2"_s
	}));
	ht->set(27, $$new($ObjectArray, {
		"913"_s,
		"iso-8859-3"_s,
		$$new($ObjectArray, {
			"x0212"_s,
			"jis_x0212-1990"_s
		})
	}));
	ht->set(28, $$new($ObjectArray, {
		"914"_s,
		"iso-8859-4"_s
	}));
	ht->set(29, $$new($ObjectArray, {
		"915"_s,
		"iso-8859-5"_s
	}));
	ht->set(30, $$new($ObjectArray, {
		"916"_s,
		"iso-8859-8"_s
	}));
	ht->set(35, $$new($ObjectArray, {
		"latin10"_s,
		"iso-8859-16"_s
	}));
	ht->set(49, $$new($ObjectArray, {
		"ksc5601-1992"_s,
		"x-johab"_s
	}));
	ht->set(55, $$new($ObjectArray, {
		"ibm-1252"_s,
		"windows-1252"_s,
		$$new($ObjectArray, {
			"920"_s,
			"iso-8859-9"_s
		})
	}));
	ht->set(58, $$new($ObjectArray, {
		"923"_s,
		"iso-8859-15"_s
	}));
	ht->set(86, $$new($ObjectArray, {
		"csisolatincyrillic"_s,
		"iso-8859-5"_s,
		$$new($ObjectArray, {
			"8859_1"_s,
			"iso-8859-1"_s
		})
	}));
	ht->set(87, $$new($ObjectArray, {
		"8859_2"_s,
		"iso-8859-2"_s
	}));
	ht->set(88, $$new($ObjectArray, {
		"8859_3"_s,
		"iso-8859-3"_s
	}));
	ht->set(89, $$new($ObjectArray, {
		"8859_4"_s,
		"iso-8859-4"_s
	}));
	ht->set(90, $$new($ObjectArray, {
		"813"_s,
		"iso-8859-7"_s,
		$$new($ObjectArray, {
			"8859_5"_s,
			"iso-8859-5"_s
		})
	}));
	ht->set(91, $$new($ObjectArray, {
		"8859_6"_s,
		"iso-8859-6"_s
	}));
	ht->set(92, $$new($ObjectArray, {
		"8859_7"_s,
		"iso-8859-7"_s
	}));
	ht->set(93, $$new($ObjectArray, {
		"8859_8"_s,
		"iso-8859-8"_s
	}));
	ht->set(94, $$new($ObjectArray, {
		"8859_9"_s,
		"iso-8859-9"_s
	}));
	ht->set(95, $$new($ObjectArray, {
		"iso_8859-1:1987"_s,
		"iso-8859-1"_s
	}));
	ht->set(96, $$new($ObjectArray, {
		"819"_s,
		"iso-8859-1"_s
	}));
	ht->set(98, $$new($ObjectArray, {
		"5601"_s,
		"euc-kr"_s
	}));
	ht->set(106, $$new($ObjectArray, {
		"unicode-1-1-utf-8"_s,
		"utf-8"_s
	}));
	ht->set(121, $$new($ObjectArray, {
		"ecma-114"_s,
		"iso-8859-6"_s,
		$$new($ObjectArray, {
			"x-utf-16le"_s,
			"utf-16le"_s
		})
	}));
	ht->set(125, $$new($ObjectArray, {
		"ecma-118"_s,
		"iso-8859-7"_s
	}));
	ht->set(127, $$new($ObjectArray, {
		"ks_c_5601-1987"_s,
		"euc-kr"_s
	}));
	ht->set(129, $$new($ObjectArray, {
		"eucjis"_s,
		"euc-jp"_s
	}));
	ht->set(134, $$new($ObjectArray, {
		"asmo-708"_s,
		"iso-8859-6"_s,
		$$new($ObjectArray, {
			"koi8_r"_s,
			"koi8-r"_s
		})
	}));
	ht->set(135, $$new($ObjectArray, {
		"euc-jp-linux"_s,
		"x-euc-jp-linux"_s
	}));
	ht->set(137, $$new($ObjectArray, {
		"koi8_u"_s,
		"koi8-u"_s
	}));
	ht->set(141, $$new($ObjectArray, {
		"cp912"_s,
		"iso-8859-2"_s
	}));
	ht->set(142, $$new($ObjectArray, {
		"cp913"_s,
		"iso-8859-3"_s
	}));
	ht->set(143, $$new($ObjectArray, {
		"euc_tw"_s,
		"x-euc-tw"_s,
		$$new($ObjectArray, {
			"cp914"_s,
			"iso-8859-4"_s
		})
	}));
	ht->set(144, $$new($ObjectArray, {
		"cp915"_s,
		"iso-8859-5"_s
	}));
	ht->set(145, $$new($ObjectArray, {
		"cp916"_s,
		"iso-8859-8"_s
	}));
	ht->set(151, $$new($ObjectArray, {
		"jis0201"_s,
		"jis_x0201"_s
	}));
	ht->set(158, $$new($ObjectArray, {
		"jis0208"_s,
		"x-jis0208"_s
	}));
	ht->set(164, $$new($ObjectArray, {
		"x-eucjp"_s,
		"euc-jp"_s
	}));
	ht->set(170, $$new($ObjectArray, {
		"cp920"_s,
		"iso-8859-9"_s
	}));
	ht->set(172, $$new($ObjectArray, {
		"arabic"_s,
		"iso-8859-6"_s
	}));
	ht->set(173, $$new($ObjectArray, {
		"cp923"_s,
		"iso-8859-15"_s
	}));
	ht->set(177, $$new($ObjectArray, {
		"utf_32le_bom"_s,
		"x-utf-32le-bom"_s
	}));
	ht->set(183, $$new($ObjectArray, {
		"jis0212"_s,
		"jis_x0212-1990"_s
	}));
	ht->set(185, $$new($ObjectArray, {
		"iso_8859-8:1988"_s,
		"iso-8859-8"_s
	}));
	ht->set(192, $$new($ObjectArray, {
		"utf_16be"_s,
		"utf-16be"_s
	}));
	ht->set(199, $$new($ObjectArray, {
		"cspc8codepage437"_s,
		"ibm437"_s,
		$$new($ObjectArray, {
			"ansi-1251"_s,
			"windows-1251"_s
		})
	}));
	ht->set(205, $$new($ObjectArray, {
		"cp813"_s,
		"iso-8859-7"_s
	}));
	ht->set(207, $$new($ObjectArray, {
		"cp936"_s,
		"gbk"_s
	}));
	ht->set(211, $$new($ObjectArray, {
		"850"_s,
		"ibm850"_s,
		$$new($ObjectArray, {
			"cp819"_s,
			"iso-8859-1"_s
		})
	}));
	ht->set(213, $$new($ObjectArray, {
		"852"_s,
		"ibm852"_s
	}));
	ht->set(216, $$new($ObjectArray, {
		"pck"_s,
		"x-pck"_s,
		$$new($ObjectArray, {
			"855"_s,
			"ibm855"_s
		})
	}));
	ht->set(217, $$new($ObjectArray, {
		"cswindows31j"_s,
		"windows-31j"_s
	}));
	ht->set(218, $$new($ObjectArray, {
		"857"_s,
		"ibm857"_s,
		$$new($ObjectArray, {
			"iso-ir-6"_s,
			"us-ascii"_s
		})
	}));
	ht->set(219, $$new($ObjectArray, {
		"858"_s,
		"ibm00858"_s,
		$$new($ObjectArray, {
			"737"_s,
			"x-ibm737"_s
		})
	}));
	ht->set(221, $$new($ObjectArray, {
		"euc-tw"_s,
		"x-euc-tw"_s
	}));
	ht->set(225, $$new($ObjectArray, {
		"csascii"_s,
		"us-ascii"_s
	}));
	ht->set(242, $$new($ObjectArray, {
		"ms932"_s,
		"windows-31j"_s,
		$$new($ObjectArray, {
			"ibm1252"_s,
			"windows-1252"_s
		})
	}));
	ht->set(244, $$new($ObjectArray, {
		"862"_s,
		"ibm862"_s
	}));
	ht->set(248, $$new($ObjectArray, {
		"866"_s,
		"ibm866"_s
	}));
	ht->set(253, $$new($ObjectArray, {
		"x-utf-32be"_s,
		"utf-32be"_s
	}));
	ht->set(254, $$new($ObjectArray, {
		"iso_8859-2:1987"_s,
		"iso-8859-2"_s
	}));
	ht->set(259, $$new($ObjectArray, {
		"unicodebig"_s,
		"utf-16"_s
	}));
	ht->set(269, $$new($ObjectArray, {
		"iso8859_15_fdis"_s,
		"iso-8859-15"_s
	}));
	ht->set(277, $$new($ObjectArray, {
		"874"_s,
		"x-ibm874"_s
	}));
	ht->set(280, $$new($ObjectArray, {
		"unicodelittleunmarked"_s,
		"utf-16le"_s
	}));
	ht->set(281, $$new($ObjectArray, {
		"ibm-1089"_s,
		"iso-8859-6"_s
	}));
	ht->set(283, $$new($ObjectArray, {
		"iso8859_1"_s,
		"iso-8859-1"_s
	}));
	ht->set(284, $$new($ObjectArray, {
		"iso8859_2"_s,
		"iso-8859-2"_s
	}));
	ht->set(285, $$new($ObjectArray, {
		"iso8859_3"_s,
		"iso-8859-3"_s,
		$$new($ObjectArray, {
			"csiso885915"_s,
			"iso-8859-15"_s
		})
	}));
	ht->set(286, $$new($ObjectArray, {
		"csiso885916"_s,
		"iso-8859-16"_s,
		$$new($ObjectArray, {
			"iso8859_4"_s,
			"iso-8859-4"_s
		})
	}));
	ht->set(287, $$new($ObjectArray, {
		"iso8859_5"_s,
		"iso-8859-5"_s
	}));
	ht->set(288, $$new($ObjectArray, {
		"iso8859_6"_s,
		"iso-8859-6"_s
	}));
	ht->set(289, $$new($ObjectArray, {
		"iso8859_7"_s,
		"iso-8859-7"_s
	}));
	ht->set(290, $$new($ObjectArray, {
		"iso8859_8"_s,
		"iso-8859-8"_s
	}));
	ht->set(291, $$new($ObjectArray, {
		"iso8859_9"_s,
		"iso-8859-9"_s
	}));
	ht->set(294, $$new($ObjectArray, {
		"ibm912"_s,
		"iso-8859-2"_s
	}));
	ht->set(295, $$new($ObjectArray, {
		"ibm913"_s,
		"iso-8859-3"_s
	}));
	ht->set(296, $$new($ObjectArray, {
		"ibm914"_s,
		"iso-8859-4"_s
	}));
	ht->set(297, $$new($ObjectArray, {
		"ibm915"_s,
		"iso-8859-5"_s
	}));
	ht->set(298, $$new($ObjectArray, {
		"ibm916"_s,
		"iso-8859-8"_s
	}));
	ht->set(305, $$new($ObjectArray, {
		"iso_8859-13"_s,
		"iso-8859-13"_s
	}));
	ht->set(307, $$new($ObjectArray, {
		"iso_8859-15"_s,
		"iso-8859-15"_s
	}));
	ht->set(308, $$new($ObjectArray, {
		"iso_8859-16"_s,
		"iso-8859-16"_s
	}));
	ht->set(312, $$new($ObjectArray, {
		"greek8"_s,
		"iso-8859-7"_s,
		$$new($ObjectArray, {
			"646"_s,
			"us-ascii"_s
		})
	}));
	ht->set(318, $$new($ObjectArray, {
		"ms_kanji"_s,
		"shift_jis"_s
	}));
	ht->set(321, $$new($ObjectArray, {
		"ibm-912"_s,
		"iso-8859-2"_s
	}));
	ht->set(322, $$new($ObjectArray, {
		"ibm-913"_s,
		"iso-8859-3"_s,
		$$new($ObjectArray, {
			"csiso87jisx0208"_s,
			"x-jis0208"_s
		})
	}));
	ht->set(323, $$new($ObjectArray, {
		"ibm920"_s,
		"iso-8859-9"_s,
		$$new($ObjectArray, {
			"ibm-914"_s,
			"iso-8859-4"_s
		})
	}));
	ht->set(324, $$new($ObjectArray, {
		"ibm-915"_s,
		"iso-8859-5"_s
	}));
	ht->set(325, $$new($ObjectArray, {
		"ibm-916"_s,
		"iso-8859-8"_s,
		$$new($ObjectArray, {
			"l1"_s,
			"iso-8859-1"_s
		})
	}));
	ht->set(326, $$new($ObjectArray, {
		"cp850"_s,
		"ibm850"_s,
		$$new($ObjectArray, {
			"ibm923"_s,
			"iso-8859-15"_s,
			$$new($ObjectArray, {
				"l2"_s,
				"iso-8859-2"_s
			})
		})
	}));
	ht->set(327, $$new($ObjectArray, {
		"l3"_s,
		"iso-8859-3"_s,
		$$new($ObjectArray, {
			"cyrillic"_s,
			"iso-8859-5"_s
		})
	}));
	ht->set(328, $$new($ObjectArray, {
		"cp852"_s,
		"ibm852"_s,
		$$new($ObjectArray, {
			"l4"_s,
			"iso-8859-4"_s
		})
	}));
	ht->set(329, $$new($ObjectArray, {
		"l5"_s,
		"iso-8859-9"_s
	}));
	ht->set(331, $$new($ObjectArray, {
		"cp855"_s,
		"ibm855"_s
	}));
	ht->set(333, $$new($ObjectArray, {
		"cp857"_s,
		"ibm857"_s,
		$$new($ObjectArray, {
			"l9"_s,
			"iso-8859-15"_s
		})
	}));
	ht->set(334, $$new($ObjectArray, {
		"cp858"_s,
		"ibm00858"_s,
		$$new($ObjectArray, {
			"cp737"_s,
			"x-ibm737"_s
		})
	}));
	ht->set(336, $$new($ObjectArray, {
		"iso_8859_1"_s,
		"iso-8859-1"_s
	}));
	ht->set(339, $$new($ObjectArray, {
		"koi8"_s,
		"koi8-r"_s
	}));
	ht->set(341, $$new($ObjectArray, {
		"775"_s,
		"ibm775"_s
	}));
	ht->set(345, $$new($ObjectArray, {
		"iso_8859-9:1989"_s,
		"iso-8859-9"_s
	}));
	ht->set(350, $$new($ObjectArray, {
		"eucjp-open"_s,
		"x-eucjp-open"_s,
		$$new($ObjectArray, {
			"euccn"_s,
			"gb2312"_s,
			$$new($ObjectArray, {
				"ibm-920"_s,
				"iso-8859-9"_s
			})
		})
	}));
	ht->set(352, $$new($ObjectArray, {
		"1089"_s,
		"iso-8859-6"_s
	}));
	ht->set(353, $$new($ObjectArray, {
		"ibm-923"_s,
		"iso-8859-15"_s
	}));
	ht->set(358, $$new($ObjectArray, {
		"ibm813"_s,
		"iso-8859-7"_s
	}));
	ht->set(359, $$new($ObjectArray, {
		"cp862"_s,
		"ibm862"_s
	}));
	ht->set(363, $$new($ObjectArray, {
		"cp866"_s,
		"ibm866"_s
	}));
	ht->set(364, $$new($ObjectArray, {
		"ibm819"_s,
		"iso-8859-1"_s
	}));
	ht->set(378, $$new($ObjectArray, {
		"ansi_x3.4-1968"_s,
		"us-ascii"_s
	}));
	ht->set(385, $$new($ObjectArray, {
		"ibm-813"_s,
		"iso-8859-7"_s
	}));
	ht->set(391, $$new($ObjectArray, {
		"ibm-819"_s,
		"iso-8859-1"_s
	}));
	ht->set(392, $$new($ObjectArray, {
		"cp874"_s,
		"x-ibm874"_s
	}));
	ht->set(393, $$new($ObjectArray, {
		"extended_unix_code_packed_format_for_japanese"_s,
		"euc-jp"_s
	}));
	ht->set(405, $$new($ObjectArray, {
		"iso-ir-100"_s,
		"iso-8859-1"_s
	}));
	ht->set(406, $$new($ObjectArray, {
		"iso-ir-101"_s,
		"iso-8859-2"_s
	}));
	ht->set(408, $$new($ObjectArray, {
		"437"_s,
		"ibm437"_s
	}));
	ht->set(410, $$new($ObjectArray, {
		"iso-ir-226"_s,
		"iso-8859-16"_s
	}));
	ht->set(414, $$new($ObjectArray, {
		"iso-ir-109"_s,
		"iso-8859-3"_s,
		$$new($ObjectArray, {
			"iso_8859-3:1988"_s,
			"iso-8859-3"_s
		})
	}));
	ht->set(417, $$new($ObjectArray, {
		"iso-8859-11"_s,
		"x-iso-8859-11"_s
	}));
	ht->set(421, $$new($ObjectArray, {
		"iso-8859-15"_s,
		"iso-8859-15"_s
	}));
	ht->set(422, $$new($ObjectArray, {
		"csiso159jisx02121990"_s,
		"jis_x0212-1990"_s
	}));
	ht->set(428, $$new($ObjectArray, {
		"latin0"_s,
		"iso-8859-15"_s
	}));
	ht->set(429, $$new($ObjectArray, {
		"latin1"_s,
		"iso-8859-1"_s
	}));
	ht->set(430, $$new($ObjectArray, {
		"latin2"_s,
		"iso-8859-2"_s
	}));
	ht->set(431, $$new($ObjectArray, {
		"latin3"_s,
		"iso-8859-3"_s
	}));
	ht->set(432, $$new($ObjectArray, {
		"latin4"_s,
		"iso-8859-4"_s
	}));
	ht->set(433, $$new($ObjectArray, {
		"latin5"_s,
		"iso-8859-9"_s
	}));
	ht->set(436, $$new($ObjectArray, {
		"iso-ir-110"_s,
		"iso-8859-4"_s
	}));
	ht->set(437, $$new($ObjectArray, {
		"latin9"_s,
		"iso-8859-15"_s
	}));
	ht->set(438, $$new($ObjectArray, {
		"ansi_x3.4-1986"_s,
		"us-ascii"_s
	}));
	ht->set(442, $$new($ObjectArray, {
		"x-euc-cn"_s,
		"gb2312"_s
	}));
	ht->set(443, $$new($ObjectArray, {
		"utf-32be-bom"_s,
		"x-utf-32be-bom"_s
	}));
	ht->set(449, $$new($ObjectArray, {
		"sjis"_s,
		"shift_jis"_s
	}));
	ht->set(455, $$new($ObjectArray, {
		"euc_jp_linux"_s,
		"x-euc-jp-linux"_s
	}));
	ht->set(456, $$new($ObjectArray, {
		"cp775"_s,
		"ibm775"_s
	}));
	ht->set(468, $$new($ObjectArray, {
		"ibm1089"_s,
		"iso-8859-6"_s
	}));
	ht->set(471, $$new($ObjectArray, {
		"shift_jis"_s,
		"shift_jis"_s
	}));
	ht->set(473, $$new($ObjectArray, {
		"iso-ir-126"_s,
		"iso-8859-7"_s
	}));
	ht->set(474, $$new($ObjectArray, {
		"iso-ir-127"_s,
		"iso-8859-6"_s
	}));
	ht->set(479, $$new($ObjectArray, {
		"ibm850"_s,
		"ibm850"_s
	}));
	ht->set(481, $$new($ObjectArray, {
		"ibm852"_s,
		"ibm852"_s
	}));
	ht->set(484, $$new($ObjectArray, {
		"ibm855"_s,
		"ibm855"_s
	}));
	ht->set(486, $$new($ObjectArray, {
		"ibm857"_s,
		"ibm857"_s
	}));
	ht->set(487, $$new($ObjectArray, {
		"ibm858"_s,
		"ibm00858"_s,
		$$new($ObjectArray, {
			"ibm737"_s,
			"x-ibm737"_s
		})
	}));
	ht->set(502, $$new($ObjectArray, {
		"x-sjis"_s,
		"shift_jis"_s,
		$$new($ObjectArray, {
			"utf_16le"_s,
			"utf-16le"_s
		})
	}));
	ht->set(506, $$new($ObjectArray, {
		"iso-ir-138"_s,
		"iso-8859-8"_s,
		$$new($ObjectArray, {
			"ibm-850"_s,
			"ibm850"_s
		})
	}));
	ht->set(508, $$new($ObjectArray, {
		"ibm-852"_s,
		"ibm852"_s
	}));
	ht->set(511, $$new($ObjectArray, {
		"ibm-855"_s,
		"ibm855"_s
	}));
	ht->set(512, $$new($ObjectArray, {
		"ibm862"_s,
		"ibm862"_s
	}));
	ht->set(513, $$new($ObjectArray, {
		"ibm-857"_s,
		"ibm857"_s
	}));
	ht->set(514, $$new($ObjectArray, {
		"ibm-858"_s,
		"ibm00858"_s,
		$$new($ObjectArray, {
			"ibm-737"_s,
			"x-ibm737"_s
		})
	}));
	ht->set(516, $$new($ObjectArray, {
		"ibm866"_s,
		"ibm866"_s
	}));
	ht->set(520, $$new($ObjectArray, {
		"unicodebigunmarked"_s,
		"utf-16be"_s
	}));
	ht->set(523, $$new($ObjectArray, {
		"cp437"_s,
		"ibm437"_s
	}));
	ht->set(524, $$new($ObjectArray, {
		"utf16"_s,
		"utf-16"_s
	}));
	ht->set(526, $$new($ObjectArray, {
		"windows-932"_s,
		"windows-31j"_s
	}));
	ht->set(530, $$new($ObjectArray, {
		"windows-936"_s,
		"gbk"_s
	}));
	ht->set(533, $$new($ObjectArray, {
		"iso-ir-144"_s,
		"iso-8859-5"_s
	}));
	ht->set(537, $$new($ObjectArray, {
		"iso-ir-148"_s,
		"iso-8859-9"_s
	}));
	ht->set(539, $$new($ObjectArray, {
		"ibm-862"_s,
		"ibm862"_s
	}));
	ht->set(543, $$new($ObjectArray, {
		"ibm-866"_s,
		"ibm866"_s
	}));
	ht->set(545, $$new($ObjectArray, {
		"ibm874"_s,
		"x-ibm874"_s
	}));
	ht->set(550, $$new($ObjectArray, {
		"ksc_5601"_s,
		"euc-kr"_s
	}));
	ht->set(555, $$new($ObjectArray, {
		"big5hkscs"_s,
		"big5-hkscs"_s
	}));
	ht->set(563, $$new($ObjectArray, {
		"x-utf-32le"_s,
		"utf-32le"_s
	}));
	ht->set(569, $$new($ObjectArray, {
		"eucjp"_s,
		"euc-jp"_s,
		$$new($ObjectArray, {
			"iso-ir-159"_s,
			"jis_x0212-1990"_s
		})
	}));
	ht->set(572, $$new($ObjectArray, {
		"ibm-874"_s,
		"x-ibm874"_s
	}));
	ht->set(573, $$new($ObjectArray, {
		"iso_8859-4:1988"_s,
		"iso-8859-4"_s
	}));
	ht->set(576, $$new($ObjectArray, {
		"gb18030-2000"_s,
		"gb18030"_s
	}));
	ht->set(577, $$new($ObjectArray, {
		"default"_s,
		"us-ascii"_s
	}));
	ht->set(582, $$new($ObjectArray, {
		"utf32"_s,
		"utf-32"_s
	}));
	ht->set(583, $$new($ObjectArray, {
		"pc-multilingual-850+euro"_s,
		"ibm00858"_s
	}));
	ht->set(588, $$new($ObjectArray, {
		"elot_928"_s,
		"iso-8859-7"_s
	}));
	ht->set(590, $$new($ObjectArray, {
		"csisolatinhebrew"_s,
		"iso-8859-8"_s
	}));
	ht->set(591, $$new($ObjectArray, {
		"cshalfwidthkatakana"_s,
		"jis_x0201"_s
	}));
	ht->set(593, $$new($ObjectArray, {
		"csisolatingreek"_s,
		"iso-8859-7"_s
	}));
	ht->set(598, $$new($ObjectArray, {
		"csibm857"_s,
		"ibm857"_s
	}));
	ht->set(602, $$new($ObjectArray, {
		"euckr"_s,
		"euc-kr"_s
	}));
	ht->set(609, $$new($ObjectArray, {
		"ibm775"_s,
		"ibm775"_s
	}));
	ht->set(617, $$new($ObjectArray, {
		"cp1250"_s,
		"windows-1250"_s
	}));
	ht->set(618, $$new($ObjectArray, {
		"cp1251"_s,
		"windows-1251"_s
	}));
	ht->set(619, $$new($ObjectArray, {
		"cp1252"_s,
		"windows-1252"_s
	}));
	ht->set(620, $$new($ObjectArray, {
		"cp1253"_s,
		"windows-1253"_s
	}));
	ht->set(621, $$new($ObjectArray, {
		"cp1254"_s,
		"windows-1254"_s
	}));
	ht->set(624, $$new($ObjectArray, {
		"csibm862"_s,
		"ibm862"_s,
		$$new($ObjectArray, {
			"cp1257"_s,
			"windows-1257"_s
		})
	}));
	ht->set(628, $$new($ObjectArray, {
		"csibm866"_s,
		"ibm866"_s,
		$$new($ObjectArray, {
			"cesu8"_s,
			"cesu-8"_s
		})
	}));
	ht->set(630, $$new($ObjectArray, {
		"iso8859_11"_s,
		"x-iso-8859-11"_s
	}));
	ht->set(631, $$new($ObjectArray, {
		"euc_cn"_s,
		"gb2312"_s
	}));
	ht->set(632, $$new($ObjectArray, {
		"iso8859_13"_s,
		"iso-8859-13"_s
	}));
	ht->set(634, $$new($ObjectArray, {
		"iso8859_15"_s,
		"iso-8859-15"_s,
		$$new($ObjectArray, {
			"utf_32be"_s,
			"utf-32be"_s
		})
	}));
	ht->set(635, $$new($ObjectArray, {
		"iso8859_16"_s,
		"iso-8859-16"_s,
		$$new($ObjectArray, {
			"utf_32be_bom"_s,
			"x-utf-32be-bom"_s
		})
	}));
	ht->set(636, $$new($ObjectArray, {
		"ibm-775"_s,
		"ibm775"_s
	}));
	ht->set(654, $$new($ObjectArray, {
		"cp00858"_s,
		"ibm00858"_s
	}));
	ht->set(661, $$new($ObjectArray, {
		"x-euc-jp"_s,
		"euc-jp"_s
	}));
	ht->set(669, $$new($ObjectArray, {
		"8859_13"_s,
		"iso-8859-13"_s
	}));
	ht->set(670, $$new($ObjectArray, {
		"us"_s,
		"us-ascii"_s
	}));
	ht->set(671, $$new($ObjectArray, {
		"8859_15"_s,
		"iso-8859-15"_s
	}));
	ht->set(676, $$new($ObjectArray, {
		"ibm437"_s,
		"ibm437"_s
	}));
	ht->set(679, $$new($ObjectArray, {
		"cp367"_s,
		"us-ascii"_s
	}));
	ht->set(685, $$new($ObjectArray, {
		"cns11643"_s,
		"x-euc-tw"_s
	}));
	ht->set(686, $$new($ObjectArray, {
		"iso-10646-ucs-2"_s,
		"utf-16be"_s
	}));
	ht->set(694, $$new($ObjectArray, {
		"big5_hkscs"_s,
		"big5-hkscs"_s
	}));
	ht->set(702, $$new($ObjectArray, {
		"euc_jp_solaris"_s,
		"x-eucjp-open"_s
	}));
	ht->set(703, $$new($ObjectArray, {
		"ibm-437"_s,
		"ibm437"_s
	}));
	ht->set(709, $$new($ObjectArray, {
		"euc-cn"_s,
		"gb2312"_s
	}));
	ht->set(710, $$new($ObjectArray, {
		"iso8859-13"_s,
		"iso-8859-13"_s
	}));
	ht->set(712, $$new($ObjectArray, {
		"iso8859-15"_s,
		"iso-8859-15"_s
	}));
	ht->set(731, $$new($ObjectArray, {
		"iso-ir-87"_s,
		"x-jis0208"_s
	}));
	ht->set(732, $$new($ObjectArray, {
		"iso_8859-5:1988"_s,
		"iso-8859-5"_s
	}));
	ht->set(733, $$new($ObjectArray, {
		"ksc5601"_s,
		"euc-kr"_s,
		$$new($ObjectArray, {
			"unicode"_s,
			"utf-16"_s
		})
	}));
	ht->set(760, $$new($ObjectArray, {
		"big5hk"_s,
		"big5-hkscs"_s
	}));
	ht->set(768, $$new($ObjectArray, {
		"greek"_s,
		"iso-8859-7"_s
	}));
	ht->set(771, $$new($ObjectArray, {
		"ms1361"_s,
		"x-johab"_s
	}));
	ht->set(774, $$new($ObjectArray, {
		"ascii7"_s,
		"us-ascii"_s
	}));
	ht->set(781, $$new($ObjectArray, {
		"iso8859-1"_s,
		"iso-8859-1"_s
	}));
	ht->set(782, $$new($ObjectArray, {
		"iso8859-2"_s,
		"iso-8859-2"_s
	}));
	ht->set(783, $$new($ObjectArray, {
		"iso8859-3"_s,
		"iso-8859-3"_s,
		$$new($ObjectArray, {
			"cskoi8r"_s,
			"koi8-r"_s
		})
	}));
	ht->set(784, $$new($ObjectArray, {
		"jis_x0201"_s,
		"jis_x0201"_s,
		$$new($ObjectArray, {
			"iso8859-4"_s,
			"iso-8859-4"_s
		})
	}));
	ht->set(785, $$new($ObjectArray, {
		"iso8859-5"_s,
		"iso-8859-5"_s
	}));
	ht->set(786, $$new($ObjectArray, {
		"iso8859-6"_s,
		"iso-8859-6"_s
	}));
	ht->set(787, $$new($ObjectArray, {
		"iso8859-7"_s,
		"iso-8859-7"_s
	}));
	ht->set(788, $$new($ObjectArray, {
		"iso8859-8"_s,
		"iso-8859-8"_s
	}));
	ht->set(789, $$new($ObjectArray, {
		"iso8859-9"_s,
		"iso-8859-9"_s
	}));
	ht->set(804, $$new($ObjectArray, {
		"johab"_s,
		"x-johab"_s
	}));
	ht->set(813, $$new($ObjectArray, {
		"ccsid00858"_s,
		"ibm00858"_s
	}));
	ht->set(818, $$new($ObjectArray, {
		"cspc862latinhebrew"_s,
		"ibm862"_s
	}));
	ht->set(827, $$new($ObjectArray, {
		"tis620.2533"_s,
		"tis-620"_s
	}));
	ht->set(832, $$new($ObjectArray, {
		"ibm367"_s,
		"us-ascii"_s
	}));
	ht->set(834, $$new($ObjectArray, {
		"iso_8859-1"_s,
		"iso-8859-1"_s
	}));
	ht->set(835, $$new($ObjectArray, {
		"iso_8859-2"_s,
		"iso-8859-2"_s,
		$$new($ObjectArray, {
			"x-utf-16be"_s,
			"utf-16be"_s
		})
	}));
	ht->set(836, $$new($ObjectArray, {
		"iso_8859-3"_s,
		"iso-8859-3"_s,
		$$new($ObjectArray, {
			"sun_eu_greek"_s,
			"iso-8859-7"_s
		})
	}));
	ht->set(837, $$new($ObjectArray, {
		"iso_8859-16:2001"_s,
		"iso-8859-16"_s,
		$$new($ObjectArray, {
			"iso_8859-4"_s,
			"iso-8859-4"_s
		})
	}));
	ht->set(838, $$new($ObjectArray, {
		"iso_8859-5"_s,
		"iso-8859-5"_s
	}));
	ht->set(839, $$new($ObjectArray, {
		"iso_8859-6"_s,
		"iso-8859-6"_s
	}));
	ht->set(840, $$new($ObjectArray, {
		"gb2312-80"_s,
		"gb2312"_s,
		$$new($ObjectArray, {
			"cspcp852"_s,
			"ibm852"_s,
			$$new($ObjectArray, {
				"iso_8859-7"_s,
				"iso-8859-7"_s
			})
		})
	}));
	ht->set(841, $$new($ObjectArray, {
		"iso_8859-8"_s,
		"iso-8859-8"_s,
		$$new($ObjectArray, {
			"ksc5601_1987"_s,
			"euc-kr"_s,
			$$new($ObjectArray, {
				"shift-jis"_s,
				"shift_jis"_s
			})
		})
	}));
	ht->set(842, $$new($ObjectArray, {
		"iso_8859-9"_s,
		"iso-8859-9"_s
	}));
	ht->set(843, $$new($ObjectArray, {
		"cspcp855"_s,
		"ibm855"_s
	}));
	ht->set(845, $$new($ObjectArray, {
		"cp1089"_s,
		"iso-8859-6"_s
	}));
	ht->set(846, $$new($ObjectArray, {
		"windows-437"_s,
		"ibm437"_s
	}));
	ht->set(849, $$new($ObjectArray, {
		"ascii"_s,
		"us-ascii"_s
	}));
	ht->set(850, $$new($ObjectArray, {
		"euc_jp"_s,
		"euc-jp"_s
	}));
	ht->set(863, $$new($ObjectArray, {
		"cscesu-8"_s,
		"cesu-8"_s
	}));
	ht->set(867, $$new($ObjectArray, {
		"ksc5601_1992"_s,
		"x-johab"_s
	}));
	ht->set(880, $$new($ObjectArray, {
		"gb2312-1980"_s,
		"gb2312"_s
	}));
	ht->set(881, $$new($ObjectArray, {
		"utf8"_s,
		"utf-8"_s
	}));
	ht->set(883, $$new($ObjectArray, {
		"euc_kr"_s,
		"euc-kr"_s
	}));
	ht->set(886, $$new($ObjectArray, {
		"euctw"_s,
		"x-euc-tw"_s
	}));
	ht->set(890, $$new($ObjectArray, {
		"iso_8859-6:1987"_s,
		"iso-8859-6"_s
	}));
	ht->set(891, $$new($ObjectArray, {
		"csisolatinarabic"_s,
		"iso-8859-6"_s
	}));
	ht->set(893, $$new($ObjectArray, {
		"gb2312"_s,
		"gb2312"_s
	}));
	ht->set(895, $$new($ObjectArray, {
		"hebrew"_s,
		"iso-8859-8"_s
	}));
	ht->set(896, $$new($ObjectArray, {
		"iso_646.irv:1983"_s,
		"us-ascii"_s
	}));
	ht->set(907, $$new($ObjectArray, {
		"l10"_s,
		"iso-8859-16"_s
	}));
	ht->set(909, $$new($ObjectArray, {
		"cp5346"_s,
		"windows-1250"_s
	}));
	ht->set(910, $$new($ObjectArray, {
		"cp5347"_s,
		"windows-1251"_s
	}));
	ht->set(911, $$new($ObjectArray, {
		"cp5348"_s,
		"windows-1252"_s
	}));
	ht->set(912, $$new($ObjectArray, {
		"cp5349"_s,
		"windows-1253"_s
	}));
	ht->set(918, $$new($ObjectArray, {
		"tis620"_s,
		"tis-620"_s
	}));
	ht->set(925, $$new($ObjectArray, {
		"iso_646.irv:1991"_s,
		"us-ascii"_s
	}));
	ht->set(929, $$new($ObjectArray, {
		"big5_solaris"_s,
		"x-big5-solaris"_s
	}));
	ht->set(933, $$new($ObjectArray, {
		"csbig5"_s,
		"big5"_s
	}));
	ht->set(934, $$new($ObjectArray, {
		"cp5350"_s,
		"windows-1254"_s
	}));
	ht->set(936, $$new($ObjectArray, {
		"big5-hkscs"_s,
		"big5-hkscs"_s
	}));
	ht->set(937, $$new($ObjectArray, {
		"cp5353"_s,
		"windows-1257"_s
	}));
	ht->set(944, $$new($ObjectArray, {
		"latin-9"_s,
		"iso-8859-15"_s,
		$$new($ObjectArray, {
			"utf_32le"_s,
			"utf-32le"_s
		})
	}));
	ht->set(956, $$new($ObjectArray, {
		"jis_x0212-1990"_s,
		"jis_x0212-1990"_s
	}));
	ht->set(957, $$new($ObjectArray, {
		"utf_16"_s,
		"utf-16"_s
	}));
	ht->set(962, $$new($ObjectArray, {
		"csshiftjis"_s,
		"shift_jis"_s
	}));
	ht->set(984, $$new($ObjectArray, {
		"cseucpkdfmtjapanese"_s,
		"euc-jp"_s,
		$$new($ObjectArray, {
			"jis_c6226-1983"_s,
			"x-jis0208"_s
		})
	}));
	ht->set(993, $$new($ObjectArray, {
		"cspc850multilingual"_s,
		"ibm850"_s
	}));
	ht->set(1002, $$new($ObjectArray, {
		"cseuckr"_s,
		"euc-kr"_s
	}));
	ht->set(1009, $$new($ObjectArray, {
		"utf-32le-bom"_s,
		"x-utf-32le-bom"_s
	}));
	ht->set(1015, $$new($ObjectArray, {
		"utf_32"_s,
		"utf-32"_s
	}));
	ht->set(1019, $$new($ObjectArray, {
		"x0201"_s,
		"jis_x0201"_s
	}));
}

StandardCharsets$Aliases::StandardCharsets$Aliases() {
}

$Class* StandardCharsets$Aliases::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"ROWS", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(StandardCharsets$Aliases, ROWS)},
		{"SIZE", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(StandardCharsets$Aliases, SIZE)},
		{"SHIFT", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(StandardCharsets$Aliases, SHIFT)},
		{"MASK", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(StandardCharsets$Aliases, MASK)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PRIVATE, $method(StandardCharsets$Aliases, init$, void)},
		{"init", "([Ljava/lang/Object;)V", nullptr, $PROTECTED, $virtualMethod(StandardCharsets$Aliases, init, void, $ObjectArray*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.nio.cs.StandardCharsets$Aliases", "sun.nio.cs.StandardCharsets", "Aliases", $PRIVATE | $STATIC | $FINAL},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"sun.nio.cs.StandardCharsets$Aliases",
		"sun.util.PreHashedMap",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		"Lsun/util/PreHashedMap<Ljava/lang/String;>;",
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"sun.nio.cs.StandardCharsets"
	};
	$loadClass(StandardCharsets$Aliases, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(StandardCharsets$Aliases);
	});
	return class$;
}

$Class* StandardCharsets$Aliases::class$ = nullptr;

		} // cs
	} // nio
} // sun