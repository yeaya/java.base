#include <sun/nio/cs/StandardCharsets$Classes.h>

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

$FieldInfo _StandardCharsets$Classes_FieldInfo_[] = {
	{"ROWS", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(StandardCharsets$Classes, ROWS)},
	{"SIZE", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(StandardCharsets$Classes, SIZE)},
	{"SHIFT", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(StandardCharsets$Classes, SHIFT)},
	{"MASK", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(StandardCharsets$Classes, MASK)},
	{}
};

$MethodInfo _StandardCharsets$Classes_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(StandardCharsets$Classes::*)()>(&StandardCharsets$Classes::init$))},
	{"init", "([Ljava/lang/Object;)V", nullptr, $PROTECTED},
	{}
};

$InnerClassInfo _StandardCharsets$Classes_InnerClassesInfo_[] = {
	{"sun.nio.cs.StandardCharsets$Classes", "sun.nio.cs.StandardCharsets", "Classes", $PRIVATE | $STATIC | $FINAL},
	{}
};

$ClassInfo _StandardCharsets$Classes_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"sun.nio.cs.StandardCharsets$Classes",
	"sun.util.PreHashedMap",
	nullptr,
	_StandardCharsets$Classes_FieldInfo_,
	_StandardCharsets$Classes_MethodInfo_,
	"Lsun/util/PreHashedMap<Ljava/lang/String;>;",
	nullptr,
	_StandardCharsets$Classes_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.nio.cs.StandardCharsets"
};

$Object* allocate$StandardCharsets$Classes($Class* clazz) {
	return $of($alloc(StandardCharsets$Classes));
}

void StandardCharsets$Classes::init$() {
	$PreHashedMap::init$(StandardCharsets$Classes::ROWS, StandardCharsets$Classes::SIZE, StandardCharsets$Classes::SHIFT, StandardCharsets$Classes::MASK);
}

void StandardCharsets$Classes::init($ObjectArray* ht) {
	$useLocalCurrentObjectStackCache();
	$nc(ht)->set(0, $$new($ObjectArray, {
		$of("ibm862"_s),
		$of("IBM862"_s)
	}));
	ht->set(1, $$new($ObjectArray, {
		$of("euc-kr"_s),
		$of("EUC_KR"_s)
	}));
	ht->set(2, $$new($ObjectArray, {
		$of("windows-31j"_s),
		$of("MS932"_s)
	}));
	ht->set(3, $$new($ObjectArray, {
		$of("x-pck"_s),
		$of("PCK"_s)
	}));
	ht->set(4, $$new($ObjectArray, {
		$of("ibm866"_s),
		$of("IBM866"_s),
		$of($$new($ObjectArray, {
			$of("utf-16le"_s),
			$of("UTF_16LE"_s)
		}))
	}));
	ht->set(5, $$new($ObjectArray, {
		$of("tis-620"_s),
		$of("TIS_620"_s),
		$of($$new($ObjectArray, {
			$of("utf-32"_s),
			$of("UTF_32"_s)
		}))
	}));
	ht->set(6, $$new($ObjectArray, {
		$of("windows-1250"_s),
		$of("MS1250"_s)
	}));
	ht->set(7, $$new($ObjectArray, {
		$of("windows-1251"_s),
		$of("MS1251"_s)
	}));
	ht->set(8, $$new($ObjectArray, {
		$of("x-big5-solaris"_s),
		$of("Big5_Solaris"_s),
		$of($$new($ObjectArray, {
			$of("windows-1252"_s),
			$of("MS1252"_s),
			$of($$new($ObjectArray, {
				$of("utf-32be"_s),
				$of("UTF_32BE"_s)
			}))
		}))
	}));
	ht->set(9, $$new($ObjectArray, {
		$of("x-jis0208"_s),
		$of("JIS_X_0208"_s),
		$of($$new($ObjectArray, {
			$of("windows-1253"_s),
			$of("MS1253"_s)
		}))
	}));
	ht->set(10, $$new($ObjectArray, {
		$of("windows-1254"_s),
		$of("MS1254"_s)
	}));
	ht->set(11, $$new($ObjectArray, {
		$of("gb18030"_s),
		$of("GB18030"_s),
		$of($$new($ObjectArray, {
			$of("utf-16"_s),
			$of("UTF_16"_s)
		}))
	}));
	ht->set(12, $$new($ObjectArray, {
		$of("x-iso-8859-11"_s),
		$of("ISO_8859_11"_s)
	}));
	ht->set(13, $$new($ObjectArray, {
		$of("windows-1257"_s),
		$of("MS1257"_s)
	}));
	ht->set(14, $$new($ObjectArray, {
		$of("utf-16be"_s),
		$of("UTF_16BE"_s)
	}));
	ht->set(15, $$new($ObjectArray, {
		$of("x-johab"_s),
		$of("Johab"_s)
	}));
	ht->set(16, $$new($ObjectArray, {
		$of("jis_x0201"_s),
		$of("JIS_X_0201"_s),
		$of($$new($ObjectArray, {
			$of("iso-8859-1"_s),
			$of("ISO_8859_1"_s)
		}))
	}));
	ht->set(17, $$new($ObjectArray, {
		$of("iso-8859-2"_s),
		$of("ISO_8859_2"_s)
	}));
	ht->set(18, $$new($ObjectArray, {
		$of("iso-8859-3"_s),
		$of("ISO_8859_3"_s),
		$of($$new($ObjectArray, {
			$of("x-euc-tw"_s),
			$of("EUC_TW"_s),
			$of($$new($ObjectArray, {
				$of("utf-8"_s),
				$of("UTF_8"_s)
			}))
		}))
	}));
	ht->set(19, $$new($ObjectArray, {
		$of("x-eucjp-open"_s),
		$of("EUC_JP_Open"_s),
		$of($$new($ObjectArray, {
			$of("iso-8859-4"_s),
			$of("ISO_8859_4"_s)
		}))
	}));
	ht->set(20, $$new($ObjectArray, {
		$of("iso-8859-5"_s),
		$of("ISO_8859_5"_s)
	}));
	ht->set(21, $$new($ObjectArray, {
		$of("iso-8859-6"_s),
		$of("ISO_8859_6"_s)
	}));
	ht->set(22, $$new($ObjectArray, {
		$of("x-ibm874"_s),
		$of("IBM874"_s),
		$of($$new($ObjectArray, {
			$of("iso-8859-7"_s),
			$of("ISO_8859_7"_s)
		}))
	}));
	ht->set(23, $$new($ObjectArray, {
		$of("iso-8859-8"_s),
		$of("ISO_8859_8"_s),
		$of($$new($ObjectArray, {
			$of("shift_jis"_s),
			$of("SJIS"_s)
		}))
	}));
	ht->set(24, $$new($ObjectArray, {
		$of("iso-8859-9"_s),
		$of("ISO_8859_9"_s)
	}));
	ht->set(28, $$new($ObjectArray, {
		$of("x-ibm737"_s),
		$of("IBM737"_s)
	}));
	ht->set(31, $$new($ObjectArray, {
		$of("ibm850"_s),
		$of("IBM850"_s)
	}));
	ht->set(32, $$new($ObjectArray, {
		$of("euc-jp"_s),
		$of("EUC_JP"_s)
	}));
	ht->set(33, $$new($ObjectArray, {
		$of("ibm852"_s),
		$of("IBM852"_s),
		$of($$new($ObjectArray, {
			$of("ibm775"_s),
			$of("IBM775"_s)
		}))
	}));
	ht->set(34, $$new($ObjectArray, {
		$of("us-ascii"_s),
		$of("US_ASCII"_s)
	}));
	ht->set(35, $$new($ObjectArray, {
		$of("iso-8859-13"_s),
		$of("ISO_8859_13"_s)
	}));
	ht->set(36, $$new($ObjectArray, {
		$of("ibm855"_s),
		$of("IBM855"_s),
		$of($$new($ObjectArray, {
			$of("ibm437"_s),
			$of("IBM437"_s)
		}))
	}));
	ht->set(37, $$new($ObjectArray, {
		$of("iso-8859-15"_s),
		$of("ISO_8859_15"_s)
	}));
	ht->set(38, $$new($ObjectArray, {
		$of("ibm857"_s),
		$of("IBM857"_s),
		$of($$new($ObjectArray, {
			$of("iso-8859-16"_s),
			$of("ISO_8859_16"_s),
			$of($$new($ObjectArray, {
				$of("x-utf-32le-bom"_s),
				$of("UTF_32LE_BOM"_s)
			}))
		}))
	}));
	ht->set(39, $$new($ObjectArray, {
		$of("ibm00858"_s),
		$of("IBM858"_s)
	}));
	ht->set(40, $$new($ObjectArray, {
		$of("big5-hkscs"_s),
		$of("Big5_HKSCS"_s)
	}));
	ht->set(44, $$new($ObjectArray, {
		$of("x-utf-16le-bom"_s),
		$of("UTF_16LE_BOM"_s)
	}));
	ht->set(47, $$new($ObjectArray, {
		$of("cesu-8"_s),
		$of("CESU_8"_s)
	}));
	ht->set(48, $$new($ObjectArray, {
		$of("gbk"_s),
		$of("GBK"_s),
		$of($$new($ObjectArray, {
			$of("x-utf-32be-bom"_s),
			$of("UTF_32BE_BOM"_s)
		}))
	}));
	ht->set(53, $$new($ObjectArray, {
		$of("big5"_s),
		$of("Big5"_s)
	}));
	ht->set(56, $$new($ObjectArray, {
		$of("koi8-r"_s),
		$of("KOI8_R"_s)
	}));
	ht->set(59, $$new($ObjectArray, {
		$of("koi8-u"_s),
		$of("KOI8_U"_s)
	}));
	ht->set(60, $$new($ObjectArray, {
		$of("x-euc-jp-linux"_s),
		$of("EUC_JP_LINUX"_s),
		$of($$new($ObjectArray, {
			$of("jis_x0212-1990"_s),
			$of("JIS_X_0212"_s)
		}))
	}));
	ht->set(61, $$new($ObjectArray, {
		$of("gb2312"_s),
		$of("EUC_CN"_s)
	}));
	ht->set(62, $$new($ObjectArray, {
		$of("utf-32le"_s),
		$of("UTF_32LE"_s)
	}));
}

StandardCharsets$Classes::StandardCharsets$Classes() {
}

$Class* StandardCharsets$Classes::load$($String* name, bool initialize) {
	$loadClass(StandardCharsets$Classes, name, initialize, &_StandardCharsets$Classes_ClassInfo_, allocate$StandardCharsets$Classes);
	return class$;
}

$Class* StandardCharsets$Classes::class$ = nullptr;

		} // cs
	} // nio
} // sun