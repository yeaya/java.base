#include <sun/nio/cs/StandardCharsets$Aliases.h>

#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
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
using $StandardCharsets = ::sun::nio::cs::StandardCharsets;
using $PreHashedMap = ::sun::util::PreHashedMap;

namespace sun {
	namespace nio {
		namespace cs {

$FieldInfo _StandardCharsets$Aliases_FieldInfo_[] = {
	{"ROWS", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(StandardCharsets$Aliases, ROWS)},
	{"SIZE", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(StandardCharsets$Aliases, SIZE)},
	{"SHIFT", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(StandardCharsets$Aliases, SHIFT)},
	{"MASK", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(StandardCharsets$Aliases, MASK)},
	{}
};

$MethodInfo _StandardCharsets$Aliases_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(StandardCharsets$Aliases::*)()>(&StandardCharsets$Aliases::init$))},
	{"init", "([Ljava/lang/Object;)V", nullptr, $PROTECTED},
	{}
};

$InnerClassInfo _StandardCharsets$Aliases_InnerClassesInfo_[] = {
	{"sun.nio.cs.StandardCharsets$Aliases", "sun.nio.cs.StandardCharsets", "Aliases", $PRIVATE | $STATIC | $FINAL},
	{}
};

$ClassInfo _StandardCharsets$Aliases_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"sun.nio.cs.StandardCharsets$Aliases",
	"sun.util.PreHashedMap",
	nullptr,
	_StandardCharsets$Aliases_FieldInfo_,
	_StandardCharsets$Aliases_MethodInfo_,
	"Lsun/util/PreHashedMap<Ljava/lang/String;>;",
	nullptr,
	_StandardCharsets$Aliases_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.nio.cs.StandardCharsets"
};

$Object* allocate$StandardCharsets$Aliases($Class* clazz) {
	return $of($alloc(StandardCharsets$Aliases));
}

void StandardCharsets$Aliases::init$() {
	$PreHashedMap::init$(StandardCharsets$Aliases::ROWS, StandardCharsets$Aliases::SIZE, StandardCharsets$Aliases::SHIFT, StandardCharsets$Aliases::MASK);
}

void StandardCharsets$Aliases::init($ObjectArray* ht) {
	$nc(ht)->set(1, $$new($ObjectArray, {
		$of("csisolatin0"_s),
		$of("iso-8859-15"_s)
	}));
	ht->set(2, $$new($ObjectArray, {
		$of("csisolatin1"_s),
		$of("iso-8859-1"_s)
	}));
	ht->set(3, $$new($ObjectArray, {
		$of("csisolatin2"_s),
		$of("iso-8859-2"_s)
	}));
	ht->set(5, $$new($ObjectArray, {
		$of("csisolatin4"_s),
		$of("iso-8859-4"_s)
	}));
	ht->set(6, $$new($ObjectArray, {
		$of("csisolatin5"_s),
		$of("iso-8859-9"_s)
	}));
	ht->set(10, $$new($ObjectArray, {
		$of("csisolatin9"_s),
		$of("iso-8859-15"_s)
	}));
	ht->set(19, $$new($ObjectArray, {
		$of("unicodelittle"_s),
		$of("x-utf-16le-bom"_s)
	}));
	ht->set(24, $$new($ObjectArray, {
		$of("iso646-us"_s),
		$of("us-ascii"_s)
	}));
	ht->set(25, $$new($ObjectArray, {
		$of("iso_8859-7:1987"_s),
		$of("iso-8859-7"_s)
	}));
	ht->set(26, $$new($ObjectArray, {
		$of("912"_s),
		$of("iso-8859-2"_s)
	}));
	ht->set(28, $$new($ObjectArray, {
		$of("914"_s),
		$of("iso-8859-4"_s)
	}));
	ht->set(29, $$new($ObjectArray, {
		$of("915"_s),
		$of("iso-8859-5"_s)
	}));
	ht->set(35, $$new($ObjectArray, {
		$of("latin10"_s),
		$of("iso-8859-16"_s)
	}));
	ht->set(49, $$new($ObjectArray, {
		$of("ksc5601-1992"_s),
		$of("x-johab"_s)
	}));
	ht->set(55, $$new($ObjectArray, {
		$of("ibm-1252"_s),
		$of("windows-1252"_s),
		$of($$new($ObjectArray, {
			$of("920"_s),
			$of("iso-8859-9"_s)
		}))
	}));
	ht->set(58, $$new($ObjectArray, {
		$of("923"_s),
		$of("iso-8859-15"_s)
	}));
	ht->set(86, $$new($ObjectArray, {
		$of("csisolatincyrillic"_s),
		$of("iso-8859-5"_s),
		$of($$new($ObjectArray, {
			$of("8859_1"_s),
			$of("iso-8859-1"_s)
		}))
	}));
	ht->set(87, $$new($ObjectArray, {
		$of("8859_2"_s),
		$of("iso-8859-2"_s)
	}));
	ht->set(89, $$new($ObjectArray, {
		$of("8859_4"_s),
		$of("iso-8859-4"_s)
	}));
	ht->set(90, $$new($ObjectArray, {
		$of("813"_s),
		$of("iso-8859-7"_s),
		$of($$new($ObjectArray, {
			$of("8859_5"_s),
			$of("iso-8859-5"_s)
		}))
	}));
	ht->set(92, $$new($ObjectArray, {
		$of("8859_7"_s),
		$of("iso-8859-7"_s)
	}));
	ht->set(94, $$new($ObjectArray, {
		$of("8859_9"_s),
		$of("iso-8859-9"_s)
	}));
	ht->set(95, $$new($ObjectArray, {
		$of("iso_8859-1:1987"_s),
		$of("iso-8859-1"_s)
	}));
	ht->set(96, $$new($ObjectArray, {
		$of("819"_s),
		$of("iso-8859-1"_s)
	}));
	ht->set(106, $$new($ObjectArray, {
		$of("unicode-1-1-utf-8"_s),
		$of("utf-8"_s)
	}));
	ht->set(110, $$new($ObjectArray, {
		$of("ms-874"_s),
		$of("x-windows-874"_s)
	}));
	ht->set(121, $$new($ObjectArray, {
		$of("x-utf-16le"_s),
		$of("utf-16le"_s)
	}));
	ht->set(125, $$new($ObjectArray, {
		$of("ecma-118"_s),
		$of("iso-8859-7"_s)
	}));
	ht->set(134, $$new($ObjectArray, {
		$of("koi8_r"_s),
		$of("koi8-r"_s)
	}));
	ht->set(137, $$new($ObjectArray, {
		$of("koi8_u"_s),
		$of("koi8-u"_s)
	}));
	ht->set(141, $$new($ObjectArray, {
		$of("cp912"_s),
		$of("iso-8859-2"_s)
	}));
	ht->set(143, $$new($ObjectArray, {
		$of("cp914"_s),
		$of("iso-8859-4"_s)
	}));
	ht->set(144, $$new($ObjectArray, {
		$of("cp915"_s),
		$of("iso-8859-5"_s)
	}));
	ht->set(151, $$new($ObjectArray, {
		$of("jis0201"_s),
		$of("jis_x0201"_s)
	}));
	ht->set(170, $$new($ObjectArray, {
		$of("cp920"_s),
		$of("iso-8859-9"_s)
	}));
	ht->set(173, $$new($ObjectArray, {
		$of("cp923"_s),
		$of("iso-8859-15"_s)
	}));
	ht->set(177, $$new($ObjectArray, {
		$of("utf_32le_bom"_s),
		$of("x-utf-32le-bom"_s)
	}));
	ht->set(192, $$new($ObjectArray, {
		$of("utf_16be"_s),
		$of("utf-16be"_s)
	}));
	ht->set(199, $$new($ObjectArray, {
		$of("cspc8codepage437"_s),
		$of("ibm437"_s),
		$of($$new($ObjectArray, {
			$of("ansi-1251"_s),
			$of("windows-1251"_s)
		}))
	}));
	ht->set(205, $$new($ObjectArray, {
		$of("cp813"_s),
		$of("iso-8859-7"_s)
	}));
	ht->set(207, $$new($ObjectArray, {
		$of("cp936"_s),
		$of("gbk"_s)
	}));
	ht->set(211, $$new($ObjectArray, {
		$of("850"_s),
		$of("ibm850"_s),
		$of($$new($ObjectArray, {
			$of("cp819"_s),
			$of("iso-8859-1"_s)
		}))
	}));
	ht->set(213, $$new($ObjectArray, {
		$of("852"_s),
		$of("ibm852"_s)
	}));
	ht->set(216, $$new($ObjectArray, {
		$of("855"_s),
		$of("ibm855"_s)
	}));
	ht->set(217, $$new($ObjectArray, {
		$of("cswindows31j"_s),
		$of("windows-31j"_s)
	}));
	ht->set(218, $$new($ObjectArray, {
		$of("857"_s),
		$of("ibm857"_s),
		$of($$new($ObjectArray, {
			$of("iso-ir-6"_s),
			$of("us-ascii"_s)
		}))
	}));
	ht->set(219, $$new($ObjectArray, {
		$of("858"_s),
		$of("ibm00858"_s),
		$of($$new($ObjectArray, {
			$of("737"_s),
			$of("x-ibm737"_s)
		}))
	}));
	ht->set(225, $$new($ObjectArray, {
		$of("csascii"_s),
		$of("us-ascii"_s)
	}));
	ht->set(242, $$new($ObjectArray, {
		$of("ms932"_s),
		$of("windows-31j"_s),
		$of($$new($ObjectArray, {
			$of("ibm1252"_s),
			$of("windows-1252"_s)
		}))
	}));
	ht->set(244, $$new($ObjectArray, {
		$of("862"_s),
		$of("ibm862"_s)
	}));
	ht->set(246, $$new($ObjectArray, {
		$of("ms936"_s),
		$of("x-mswin-936"_s)
	}));
	ht->set(248, $$new($ObjectArray, {
		$of("866"_s),
		$of("ibm866"_s)
	}));
	ht->set(253, $$new($ObjectArray, {
		$of("x-utf-32be"_s),
		$of("utf-32be"_s)
	}));
	ht->set(254, $$new($ObjectArray, {
		$of("iso_8859-2:1987"_s),
		$of("iso-8859-2"_s)
	}));
	ht->set(259, $$new($ObjectArray, {
		$of("unicodebig"_s),
		$of("utf-16"_s)
	}));
	ht->set(269, $$new($ObjectArray, {
		$of("iso8859_15_fdis"_s),
		$of("iso-8859-15"_s)
	}));
	ht->set(277, $$new($ObjectArray, {
		$of("874"_s),
		$of("x-ibm874"_s)
	}));
	ht->set(280, $$new($ObjectArray, {
		$of("ms949"_s),
		$of("x-windows-949"_s),
		$of($$new($ObjectArray, {
			$of("unicodelittleunmarked"_s),
			$of("utf-16le"_s)
		}))
	}));
	ht->set(283, $$new($ObjectArray, {
		$of("iso8859_1"_s),
		$of("iso-8859-1"_s)
	}));
	ht->set(284, $$new($ObjectArray, {
		$of("iso8859_2"_s),
		$of("iso-8859-2"_s)
	}));
	ht->set(285, $$new($ObjectArray, {
		$of("csiso885915"_s),
		$of("iso-8859-15"_s)
	}));
	ht->set(286, $$new($ObjectArray, {
		$of("csiso885916"_s),
		$of("iso-8859-16"_s),
		$of($$new($ObjectArray, {
			$of("iso8859_4"_s),
			$of("iso-8859-4"_s)
		}))
	}));
	ht->set(287, $$new($ObjectArray, {
		$of("iso8859_5"_s),
		$of("iso-8859-5"_s)
	}));
	ht->set(289, $$new($ObjectArray, {
		$of("iso8859_7"_s),
		$of("iso-8859-7"_s)
	}));
	ht->set(291, $$new($ObjectArray, {
		$of("iso8859_9"_s),
		$of("iso-8859-9"_s)
	}));
	ht->set(294, $$new($ObjectArray, {
		$of("ibm912"_s),
		$of("iso-8859-2"_s)
	}));
	ht->set(296, $$new($ObjectArray, {
		$of("ibm914"_s),
		$of("iso-8859-4"_s)
	}));
	ht->set(297, $$new($ObjectArray, {
		$of("ibm915"_s),
		$of("iso-8859-5"_s)
	}));
	ht->set(302, $$new($ObjectArray, {
		$of("ms950"_s),
		$of("x-windows-950"_s)
	}));
	ht->set(305, $$new($ObjectArray, {
		$of("iso_8859-13"_s),
		$of("iso-8859-13"_s)
	}));
	ht->set(307, $$new($ObjectArray, {
		$of("iso_8859-15"_s),
		$of("iso-8859-15"_s)
	}));
	ht->set(308, $$new($ObjectArray, {
		$of("iso_8859-16"_s),
		$of("iso-8859-16"_s)
	}));
	ht->set(312, $$new($ObjectArray, {
		$of("greek8"_s),
		$of("iso-8859-7"_s),
		$of($$new($ObjectArray, {
			$of("646"_s),
			$of("us-ascii"_s)
		}))
	}));
	ht->set(318, $$new($ObjectArray, {
		$of("ms_kanji"_s),
		$of("shift_jis"_s)
	}));
	ht->set(321, $$new($ObjectArray, {
		$of("ibm-912"_s),
		$of("iso-8859-2"_s)
	}));
	ht->set(323, $$new($ObjectArray, {
		$of("ibm920"_s),
		$of("iso-8859-9"_s),
		$of($$new($ObjectArray, {
			$of("ibm-914"_s),
			$of("iso-8859-4"_s)
		}))
	}));
	ht->set(324, $$new($ObjectArray, {
		$of("ibm-915"_s),
		$of("iso-8859-5"_s)
	}));
	ht->set(325, $$new($ObjectArray, {
		$of("l1"_s),
		$of("iso-8859-1"_s)
	}));
	ht->set(326, $$new($ObjectArray, {
		$of("cp850"_s),
		$of("ibm850"_s),
		$of($$new($ObjectArray, {
			$of("ibm923"_s),
			$of("iso-8859-15"_s),
			$of($$new($ObjectArray, {
				$of("l2"_s),
				$of("iso-8859-2"_s)
			}))
		}))
	}));
	ht->set(327, $$new($ObjectArray, {
		$of("cyrillic"_s),
		$of("iso-8859-5"_s)
	}));
	ht->set(328, $$new($ObjectArray, {
		$of("cp852"_s),
		$of("ibm852"_s),
		$of($$new($ObjectArray, {
			$of("l4"_s),
			$of("iso-8859-4"_s)
		}))
	}));
	ht->set(329, $$new($ObjectArray, {
		$of("l5"_s),
		$of("iso-8859-9"_s)
	}));
	ht->set(331, $$new($ObjectArray, {
		$of("cp855"_s),
		$of("ibm855"_s)
	}));
	ht->set(333, $$new($ObjectArray, {
		$of("cp857"_s),
		$of("ibm857"_s),
		$of($$new($ObjectArray, {
			$of("l9"_s),
			$of("iso-8859-15"_s)
		}))
	}));
	ht->set(334, $$new($ObjectArray, {
		$of("cp858"_s),
		$of("ibm00858"_s),
		$of($$new($ObjectArray, {
			$of("cp737"_s),
			$of("x-ibm737"_s)
		}))
	}));
	ht->set(336, $$new($ObjectArray, {
		$of("iso_8859_1"_s),
		$of("iso-8859-1"_s)
	}));
	ht->set(339, $$new($ObjectArray, {
		$of("koi8"_s),
		$of("koi8-r"_s)
	}));
	ht->set(341, $$new($ObjectArray, {
		$of("775"_s),
		$of("ibm775"_s)
	}));
	ht->set(345, $$new($ObjectArray, {
		$of("iso_8859-9:1989"_s),
		$of("iso-8859-9"_s)
	}));
	ht->set(350, $$new($ObjectArray, {
		$of("ibm-920"_s),
		$of("iso-8859-9"_s)
	}));
	ht->set(353, $$new($ObjectArray, {
		$of("ibm-923"_s),
		$of("iso-8859-15"_s)
	}));
	ht->set(358, $$new($ObjectArray, {
		$of("ibm813"_s),
		$of("iso-8859-7"_s)
	}));
	ht->set(359, $$new($ObjectArray, {
		$of("cp862"_s),
		$of("ibm862"_s)
	}));
	ht->set(363, $$new($ObjectArray, {
		$of("cp866"_s),
		$of("ibm866"_s)
	}));
	ht->set(364, $$new($ObjectArray, {
		$of("ibm819"_s),
		$of("iso-8859-1"_s)
	}));
	ht->set(378, $$new($ObjectArray, {
		$of("ansi_x3.4-1968"_s),
		$of("us-ascii"_s)
	}));
	ht->set(385, $$new($ObjectArray, {
		$of("ibm-813"_s),
		$of("iso-8859-7"_s)
	}));
	ht->set(391, $$new($ObjectArray, {
		$of("ibm-819"_s),
		$of("iso-8859-1"_s)
	}));
	ht->set(392, $$new($ObjectArray, {
		$of("cp874"_s),
		$of("x-ibm874"_s)
	}));
	ht->set(405, $$new($ObjectArray, {
		$of("iso-ir-100"_s),
		$of("iso-8859-1"_s)
	}));
	ht->set(406, $$new($ObjectArray, {
		$of("iso-ir-101"_s),
		$of("iso-8859-2"_s)
	}));
	ht->set(408, $$new($ObjectArray, {
		$of("437"_s),
		$of("ibm437"_s)
	}));
	ht->set(410, $$new($ObjectArray, {
		$of("iso-ir-226"_s),
		$of("iso-8859-16"_s)
	}));
	ht->set(421, $$new($ObjectArray, {
		$of("iso-8859-15"_s),
		$of("iso-8859-15"_s)
	}));
	ht->set(428, $$new($ObjectArray, {
		$of("latin0"_s),
		$of("iso-8859-15"_s)
	}));
	ht->set(429, $$new($ObjectArray, {
		$of("latin1"_s),
		$of("iso-8859-1"_s)
	}));
	ht->set(430, $$new($ObjectArray, {
		$of("latin2"_s),
		$of("iso-8859-2"_s)
	}));
	ht->set(431, $$new($ObjectArray, {
		$of("ms874"_s),
		$of("x-windows-874"_s)
	}));
	ht->set(432, $$new($ObjectArray, {
		$of("latin4"_s),
		$of("iso-8859-4"_s)
	}));
	ht->set(433, $$new($ObjectArray, {
		$of("latin5"_s),
		$of("iso-8859-9"_s)
	}));
	ht->set(436, $$new($ObjectArray, {
		$of("iso-ir-110"_s),
		$of("iso-8859-4"_s)
	}));
	ht->set(437, $$new($ObjectArray, {
		$of("latin9"_s),
		$of("iso-8859-15"_s)
	}));
	ht->set(438, $$new($ObjectArray, {
		$of("ansi_x3.4-1986"_s),
		$of("us-ascii"_s)
	}));
	ht->set(443, $$new($ObjectArray, {
		$of("utf-32be-bom"_s),
		$of("x-utf-32be-bom"_s)
	}));
	ht->set(449, $$new($ObjectArray, {
		$of("sjis"_s),
		$of("shift_jis"_s)
	}));
	ht->set(456, $$new($ObjectArray, {
		$of("cp775"_s),
		$of("ibm775"_s)
	}));
	ht->set(471, $$new($ObjectArray, {
		$of("shift_jis"_s),
		$of("shift_jis"_s)
	}));
	ht->set(473, $$new($ObjectArray, {
		$of("iso-ir-126"_s),
		$of("iso-8859-7"_s)
	}));
	ht->set(479, $$new($ObjectArray, {
		$of("ibm850"_s),
		$of("ibm850"_s)
	}));
	ht->set(481, $$new($ObjectArray, {
		$of("ibm852"_s),
		$of("ibm852"_s)
	}));
	ht->set(484, $$new($ObjectArray, {
		$of("ibm855"_s),
		$of("ibm855"_s)
	}));
	ht->set(486, $$new($ObjectArray, {
		$of("ibm857"_s),
		$of("ibm857"_s)
	}));
	ht->set(487, $$new($ObjectArray, {
		$of("ibm858"_s),
		$of("ibm00858"_s),
		$of($$new($ObjectArray, {
			$of("ibm737"_s),
			$of("x-ibm737"_s)
		}))
	}));
	ht->set(495, $$new($ObjectArray, {
		$of("ms950_hkscs"_s),
		$of("x-ms950-hkscs"_s)
	}));
	ht->set(502, $$new($ObjectArray, {
		$of("x-sjis"_s),
		$of("shift_jis"_s),
		$of($$new($ObjectArray, {
			$of("utf_16le"_s),
			$of("utf-16le"_s)
		}))
	}));
	ht->set(506, $$new($ObjectArray, {
		$of("ibm-850"_s),
		$of("ibm850"_s)
	}));
	ht->set(508, $$new($ObjectArray, {
		$of("ibm-852"_s),
		$of("ibm852"_s)
	}));
	ht->set(511, $$new($ObjectArray, {
		$of("ibm-855"_s),
		$of("ibm855"_s)
	}));
	ht->set(512, $$new($ObjectArray, {
		$of("ibm862"_s),
		$of("ibm862"_s)
	}));
	ht->set(513, $$new($ObjectArray, {
		$of("ibm-857"_s),
		$of("ibm857"_s)
	}));
	ht->set(514, $$new($ObjectArray, {
		$of("ibm-858"_s),
		$of("ibm00858"_s),
		$of($$new($ObjectArray, {
			$of("ibm-737"_s),
			$of("x-ibm737"_s)
		}))
	}));
	ht->set(516, $$new($ObjectArray, {
		$of("ibm866"_s),
		$of("ibm866"_s)
	}));
	ht->set(520, $$new($ObjectArray, {
		$of("unicodebigunmarked"_s),
		$of("utf-16be"_s)
	}));
	ht->set(523, $$new($ObjectArray, {
		$of("cp437"_s),
		$of("ibm437"_s)
	}));
	ht->set(524, $$new($ObjectArray, {
		$of("utf16"_s),
		$of("utf-16"_s)
	}));
	ht->set(526, $$new($ObjectArray, {
		$of("windows-932"_s),
		$of("windows-31j"_s)
	}));
	ht->set(530, $$new($ObjectArray, {
		$of("windows-936"_s),
		$of("gbk"_s)
	}));
	ht->set(533, $$new($ObjectArray, {
		$of("iso-ir-144"_s),
		$of("iso-8859-5"_s)
	}));
	ht->set(537, $$new($ObjectArray, {
		$of("iso-ir-148"_s),
		$of("iso-8859-9"_s)
	}));
	ht->set(539, $$new($ObjectArray, {
		$of("ibm-862"_s),
		$of("ibm862"_s)
	}));
	ht->set(543, $$new($ObjectArray, {
		$of("ibm-866"_s),
		$of("ibm866"_s)
	}));
	ht->set(545, $$new($ObjectArray, {
		$of("ibm874"_s),
		$of("x-ibm874"_s)
	}));
	ht->set(563, $$new($ObjectArray, {
		$of("x-utf-32le"_s),
		$of("utf-32le"_s)
	}));
	ht->set(564, $$new($ObjectArray, {
		$of("windows-949"_s),
		$of("x-windows-949"_s)
	}));
	ht->set(572, $$new($ObjectArray, {
		$of("ibm-874"_s),
		$of("x-ibm874"_s)
	}));
	ht->set(573, $$new($ObjectArray, {
		$of("iso_8859-4:1988"_s),
		$of("iso-8859-4"_s)
	}));
	ht->set(576, $$new($ObjectArray, {
		$of("gb18030-2000"_s),
		$of("gb18030"_s)
	}));
	ht->set(577, $$new($ObjectArray, {
		$of("default"_s),
		$of("us-ascii"_s)
	}));
	ht->set(579, $$new($ObjectArray, {
		$of("ms_936"_s),
		$of("x-mswin-936"_s)
	}));
	ht->set(582, $$new($ObjectArray, {
		$of("utf32"_s),
		$of("utf-32"_s)
	}));
	ht->set(583, $$new($ObjectArray, {
		$of("pc-multilingual-850+euro"_s),
		$of("ibm00858"_s)
	}));
	ht->set(586, $$new($ObjectArray, {
		$of("windows-950"_s),
		$of("x-windows-950"_s)
	}));
	ht->set(588, $$new($ObjectArray, {
		$of("elot_928"_s),
		$of("iso-8859-7"_s)
	}));
	ht->set(591, $$new($ObjectArray, {
		$of("cshalfwidthkatakana"_s),
		$of("jis_x0201"_s)
	}));
	ht->set(593, $$new($ObjectArray, {
		$of("csisolatingreek"_s),
		$of("iso-8859-7"_s)
	}));
	ht->set(598, $$new($ObjectArray, {
		$of("csibm857"_s),
		$of("ibm857"_s)
	}));
	ht->set(609, $$new($ObjectArray, {
		$of("ibm775"_s),
		$of("ibm775"_s)
	}));
	ht->set(613, $$new($ObjectArray, {
		$of("ms_949"_s),
		$of("x-windows-949"_s)
	}));
	ht->set(617, $$new($ObjectArray, {
		$of("cp1250"_s),
		$of("windows-1250"_s)
	}));
	ht->set(618, $$new($ObjectArray, {
		$of("cp1251"_s),
		$of("windows-1251"_s)
	}));
	ht->set(619, $$new($ObjectArray, {
		$of("cp1252"_s),
		$of("windows-1252"_s)
	}));
	ht->set(620, $$new($ObjectArray, {
		$of("cp1253"_s),
		$of("windows-1253"_s)
	}));
	ht->set(621, $$new($ObjectArray, {
		$of("cp1254"_s),
		$of("windows-1254"_s)
	}));
	ht->set(622, $$new($ObjectArray, {
		$of("cp1255"_s),
		$of("windows-1255"_s)
	}));
	ht->set(623, $$new($ObjectArray, {
		$of("cp1256"_s),
		$of("windows-1256"_s)
	}));
	ht->set(624, $$new($ObjectArray, {
		$of("csibm862"_s),
		$of("ibm862"_s),
		$of($$new($ObjectArray, {
			$of("cp1257"_s),
			$of("windows-1257"_s)
		}))
	}));
	ht->set(625, $$new($ObjectArray, {
		$of("cp1258"_s),
		$of("windows-1258"_s)
	}));
	ht->set(628, $$new($ObjectArray, {
		$of("csibm866"_s),
		$of("ibm866"_s),
		$of($$new($ObjectArray, {
			$of("cesu8"_s),
			$of("cesu-8"_s)
		}))
	}));
	ht->set(632, $$new($ObjectArray, {
		$of("iso8859_13"_s),
		$of("iso-8859-13"_s)
	}));
	ht->set(634, $$new($ObjectArray, {
		$of("iso8859_15"_s),
		$of("iso-8859-15"_s),
		$of($$new($ObjectArray, {
			$of("utf_32be"_s),
			$of("utf-32be"_s)
		}))
	}));
	ht->set(635, $$new($ObjectArray, {
		$of("iso8859_16"_s),
		$of("iso-8859-16"_s),
		$of($$new($ObjectArray, {
			$of("utf_32be_bom"_s),
			$of("x-utf-32be-bom"_s)
		}))
	}));
	ht->set(636, $$new($ObjectArray, {
		$of("ibm-775"_s),
		$of("ibm775"_s)
	}));
	ht->set(654, $$new($ObjectArray, {
		$of("cp00858"_s),
		$of("ibm00858"_s)
	}));
	ht->set(669, $$new($ObjectArray, {
		$of("8859_13"_s),
		$of("iso-8859-13"_s)
	}));
	ht->set(670, $$new($ObjectArray, {
		$of("us"_s),
		$of("us-ascii"_s)
	}));
	ht->set(671, $$new($ObjectArray, {
		$of("8859_15"_s),
		$of("iso-8859-15"_s)
	}));
	ht->set(676, $$new($ObjectArray, {
		$of("ibm437"_s),
		$of("ibm437"_s)
	}));
	ht->set(679, $$new($ObjectArray, {
		$of("cp367"_s),
		$of("us-ascii"_s)
	}));
	ht->set(686, $$new($ObjectArray, {
		$of("iso-10646-ucs-2"_s),
		$of("utf-16be"_s)
	}));
	ht->set(703, $$new($ObjectArray, {
		$of("ibm-437"_s),
		$of("ibm437"_s)
	}));
	ht->set(710, $$new($ObjectArray, {
		$of("iso8859-13"_s),
		$of("iso-8859-13"_s)
	}));
	ht->set(712, $$new($ObjectArray, {
		$of("iso8859-15"_s),
		$of("iso-8859-15"_s)
	}));
	ht->set(715, $$new($ObjectArray, {
		$of("windows-874"_s),
		$of("x-windows-874"_s)
	}));
	ht->set(732, $$new($ObjectArray, {
		$of("iso_8859-5:1988"_s),
		$of("iso-8859-5"_s)
	}));
	ht->set(733, $$new($ObjectArray, {
		$of("unicode"_s),
		$of("utf-16"_s)
	}));
	ht->set(768, $$new($ObjectArray, {
		$of("greek"_s),
		$of("iso-8859-7"_s)
	}));
	ht->set(771, $$new($ObjectArray, {
		$of("ms1361"_s),
		$of("x-johab"_s)
	}));
	ht->set(774, $$new($ObjectArray, {
		$of("ascii7"_s),
		$of("us-ascii"_s)
	}));
	ht->set(781, $$new($ObjectArray, {
		$of("iso8859-1"_s),
		$of("iso-8859-1"_s)
	}));
	ht->set(782, $$new($ObjectArray, {
		$of("iso8859-2"_s),
		$of("iso-8859-2"_s)
	}));
	ht->set(783, $$new($ObjectArray, {
		$of("cskoi8r"_s),
		$of("koi8-r"_s)
	}));
	ht->set(784, $$new($ObjectArray, {
		$of("jis_x0201"_s),
		$of("jis_x0201"_s),
		$of($$new($ObjectArray, {
			$of("iso8859-4"_s),
			$of("iso-8859-4"_s)
		}))
	}));
	ht->set(785, $$new($ObjectArray, {
		$of("iso8859-5"_s),
		$of("iso-8859-5"_s)
	}));
	ht->set(787, $$new($ObjectArray, {
		$of("iso8859-7"_s),
		$of("iso-8859-7"_s)
	}));
	ht->set(789, $$new($ObjectArray, {
		$of("iso8859-9"_s),
		$of("iso-8859-9"_s)
	}));
	ht->set(795, $$new($ObjectArray, {
		$of("windows949"_s),
		$of("x-windows-949"_s)
	}));
	ht->set(804, $$new($ObjectArray, {
		$of("johab"_s),
		$of("x-johab"_s)
	}));
	ht->set(813, $$new($ObjectArray, {
		$of("ccsid00858"_s),
		$of("ibm00858"_s)
	}));
	ht->set(818, $$new($ObjectArray, {
		$of("cspc862latinhebrew"_s),
		$of("ibm862"_s)
	}));
	ht->set(832, $$new($ObjectArray, {
		$of("ibm367"_s),
		$of("us-ascii"_s)
	}));
	ht->set(834, $$new($ObjectArray, {
		$of("iso_8859-1"_s),
		$of("iso-8859-1"_s)
	}));
	ht->set(835, $$new($ObjectArray, {
		$of("iso_8859-2"_s),
		$of("iso-8859-2"_s),
		$of($$new($ObjectArray, {
			$of("x-utf-16be"_s),
			$of("utf-16be"_s)
		}))
	}));
	ht->set(836, $$new($ObjectArray, {
		$of("sun_eu_greek"_s),
		$of("iso-8859-7"_s)
	}));
	ht->set(837, $$new($ObjectArray, {
		$of("iso_8859-16:2001"_s),
		$of("iso-8859-16"_s),
		$of($$new($ObjectArray, {
			$of("iso_8859-4"_s),
			$of("iso-8859-4"_s)
		}))
	}));
	ht->set(838, $$new($ObjectArray, {
		$of("iso_8859-5"_s),
		$of("iso-8859-5"_s)
	}));
	ht->set(840, $$new($ObjectArray, {
		$of("ms950_hkscs_xp"_s),
		$of("x-ms950-hkscs-xp"_s),
		$of($$new($ObjectArray, {
			$of("cspcp852"_s),
			$of("ibm852"_s),
			$of($$new($ObjectArray, {
				$of("iso_8859-7"_s),
				$of("iso-8859-7"_s)
			}))
		}))
	}));
	ht->set(841, $$new($ObjectArray, {
		$of("shift-jis"_s),
		$of("shift_jis"_s)
	}));
	ht->set(842, $$new($ObjectArray, {
		$of("iso_8859-9"_s),
		$of("iso-8859-9"_s)
	}));
	ht->set(843, $$new($ObjectArray, {
		$of("cspcp855"_s),
		$of("ibm855"_s)
	}));
	ht->set(846, $$new($ObjectArray, {
		$of("windows-437"_s),
		$of("ibm437"_s)
	}));
	ht->set(849, $$new($ObjectArray, {
		$of("ascii"_s),
		$of("us-ascii"_s)
	}));
	ht->set(863, $$new($ObjectArray, {
		$of("cscesu-8"_s),
		$of("cesu-8"_s)
	}));
	ht->set(867, $$new($ObjectArray, {
		$of("ksc5601_1992"_s),
		$of("x-johab"_s)
	}));
	ht->set(881, $$new($ObjectArray, {
		$of("utf8"_s),
		$of("utf-8"_s)
	}));
	ht->set(896, $$new($ObjectArray, {
		$of("iso_646.irv:1983"_s),
		$of("us-ascii"_s)
	}));
	ht->set(907, $$new($ObjectArray, {
		$of("l10"_s),
		$of("iso-8859-16"_s)
	}));
	ht->set(909, $$new($ObjectArray, {
		$of("cp5346"_s),
		$of("windows-1250"_s)
	}));
	ht->set(910, $$new($ObjectArray, {
		$of("cp5347"_s),
		$of("windows-1251"_s)
	}));
	ht->set(911, $$new($ObjectArray, {
		$of("cp5348"_s),
		$of("windows-1252"_s)
	}));
	ht->set(912, $$new($ObjectArray, {
		$of("cp5349"_s),
		$of("windows-1253"_s)
	}));
	ht->set(925, $$new($ObjectArray, {
		$of("iso_646.irv:1991"_s),
		$of("us-ascii"_s)
	}));
	ht->set(934, $$new($ObjectArray, {
		$of("cp5350"_s),
		$of("windows-1254"_s)
	}));
	ht->set(937, $$new($ObjectArray, {
		$of("cp5353"_s),
		$of("windows-1257"_s)
	}));
	ht->set(944, $$new($ObjectArray, {
		$of("latin-9"_s),
		$of("iso-8859-15"_s),
		$of($$new($ObjectArray, {
			$of("utf_32le"_s),
			$of("utf-32le"_s)
		}))
	}));
	ht->set(957, $$new($ObjectArray, {
		$of("utf_16"_s),
		$of("utf-16"_s)
	}));
	ht->set(962, $$new($ObjectArray, {
		$of("csshiftjis"_s),
		$of("shift_jis"_s)
	}));
	ht->set(993, $$new($ObjectArray, {
		$of("cspc850multilingual"_s),
		$of("ibm850"_s)
	}));
	ht->set(1009, $$new($ObjectArray, {
		$of("utf-32le-bom"_s),
		$of("x-utf-32le-bom"_s)
	}));
	ht->set(1015, $$new($ObjectArray, {
		$of("utf_32"_s),
		$of("utf-32"_s)
	}));
	ht->set(1019, $$new($ObjectArray, {
		$of("x0201"_s),
		$of("jis_x0201"_s)
	}));
}

StandardCharsets$Aliases::StandardCharsets$Aliases() {
}

$Class* StandardCharsets$Aliases::load$($String* name, bool initialize) {
	$loadClass(StandardCharsets$Aliases, name, initialize, &_StandardCharsets$Aliases_ClassInfo_, allocate$StandardCharsets$Aliases);
	return class$;
}

$Class* StandardCharsets$Aliases::class$ = nullptr;

		} // cs
	} // nio
} // sun