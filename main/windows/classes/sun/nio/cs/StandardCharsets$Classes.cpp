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

void StandardCharsets$Classes::init$() {
	$PreHashedMap::init$(StandardCharsets$Classes::ROWS, StandardCharsets$Classes::SIZE, StandardCharsets$Classes::SHIFT, StandardCharsets$Classes::MASK);
}

void StandardCharsets$Classes::init($ObjectArray* ht) {
	$useLocalObjectStack();
	$nc(ht)->set(0, $$new($ObjectArray, {
		"ibm862"_s,
		"IBM862"_s
	}));
	ht->set(2, $$new($ObjectArray, {
		"windows-31j"_s,
		"MS932"_s
	}));
	ht->set(4, $$new($ObjectArray, {
		"ibm866"_s,
		"IBM866"_s,
		$$new($ObjectArray, {
			"utf-16le"_s,
			"UTF_16LE"_s
		})
	}));
	ht->set(5, $$new($ObjectArray, {
		"utf-32"_s,
		"UTF_32"_s
	}));
	ht->set(6, $$new($ObjectArray, {
		"windows-1250"_s,
		"MS1250"_s
	}));
	ht->set(7, $$new($ObjectArray, {
		"windows-1251"_s,
		"MS1251"_s
	}));
	ht->set(8, $$new($ObjectArray, {
		"windows-1252"_s,
		"MS1252"_s,
		$$new($ObjectArray, {
			"utf-32be"_s,
			"UTF_32BE"_s
		})
	}));
	ht->set(9, $$new($ObjectArray, {
		"windows-1253"_s,
		"MS1253"_s
	}));
	ht->set(10, $$new($ObjectArray, {
		"windows-1254"_s,
		"MS1254"_s
	}));
	ht->set(11, $$new($ObjectArray, {
		"windows-1255"_s,
		"MS1255"_s,
		$$new($ObjectArray, {
			"gb18030"_s,
			"GB18030"_s,
			$$new($ObjectArray, {
				"utf-16"_s,
				"UTF_16"_s
			})
		})
	}));
	ht->set(12, $$new($ObjectArray, {
		"windows-1256"_s,
		"MS1256"_s,
		$$new($ObjectArray, {
			"x-ms950-hkscs"_s,
			"MS950_HKSCS"_s
		})
	}));
	ht->set(13, $$new($ObjectArray, {
		"windows-1257"_s,
		"MS1257"_s
	}));
	ht->set(14, $$new($ObjectArray, {
		"windows-1258"_s,
		"MS1258"_s,
		$$new($ObjectArray, {
			"utf-16be"_s,
			"UTF_16BE"_s
		})
	}));
	ht->set(15, $$new($ObjectArray, {
		"x-johab"_s,
		"Johab"_s
	}));
	ht->set(16, $$new($ObjectArray, {
		"jis_x0201"_s,
		"JIS_X_0201"_s,
		$$new($ObjectArray, {
			"iso-8859-1"_s,
			"ISO_8859_1"_s
		})
	}));
	ht->set(17, $$new($ObjectArray, {
		"iso-8859-2"_s,
		"ISO_8859_2"_s
	}));
	ht->set(18, $$new($ObjectArray, {
		"utf-8"_s,
		"UTF_8"_s
	}));
	ht->set(19, $$new($ObjectArray, {
		"iso-8859-4"_s,
		"ISO_8859_4"_s
	}));
	ht->set(20, $$new($ObjectArray, {
		"iso-8859-5"_s,
		"ISO_8859_5"_s
	}));
	ht->set(22, $$new($ObjectArray, {
		"x-ibm874"_s,
		"IBM874"_s,
		$$new($ObjectArray, {
			"iso-8859-7"_s,
			"ISO_8859_7"_s
		})
	}));
	ht->set(23, $$new($ObjectArray, {
		"shift_jis"_s,
		"SJIS"_s
	}));
	ht->set(24, $$new($ObjectArray, {
		"iso-8859-9"_s,
		"ISO_8859_9"_s
	}));
	ht->set(25, $$new($ObjectArray, {
		"x-ms950-hkscs-xp"_s,
		"MS950_HKSCS_XP"_s
	}));
	ht->set(28, $$new($ObjectArray, {
		"x-ibm737"_s,
		"IBM737"_s
	}));
	ht->set(31, $$new($ObjectArray, {
		"x-windows-949"_s,
		"MS949"_s,
		$$new($ObjectArray, {
			"ibm850"_s,
			"IBM850"_s
		})
	}));
	ht->set(33, $$new($ObjectArray, {
		"ibm852"_s,
		"IBM852"_s,
		$$new($ObjectArray, {
			"ibm775"_s,
			"IBM775"_s
		})
	}));
	ht->set(34, $$new($ObjectArray, {
		"us-ascii"_s,
		"US_ASCII"_s
	}));
	ht->set(35, $$new($ObjectArray, {
		"iso-8859-13"_s,
		"ISO_8859_13"_s
	}));
	ht->set(36, $$new($ObjectArray, {
		"ibm855"_s,
		"IBM855"_s,
		$$new($ObjectArray, {
			"ibm437"_s,
			"IBM437"_s
		})
	}));
	ht->set(37, $$new($ObjectArray, {
		"iso-8859-15"_s,
		"ISO_8859_15"_s
	}));
	ht->set(38, $$new($ObjectArray, {
		"ibm857"_s,
		"IBM857"_s,
		$$new($ObjectArray, {
			"iso-8859-16"_s,
			"ISO_8859_16"_s,
			$$new($ObjectArray, {
				"x-utf-32le-bom"_s,
				"UTF_32LE_BOM"_s
			})
		})
	}));
	ht->set(39, $$new($ObjectArray, {
		"ibm00858"_s,
		"IBM858"_s
	}));
	ht->set(44, $$new($ObjectArray, {
		"x-utf-16le-bom"_s,
		"UTF_16LE_BOM"_s
	}));
	ht->set(47, $$new($ObjectArray, {
		"cesu-8"_s,
		"CESU_8"_s
	}));
	ht->set(48, $$new($ObjectArray, {
		"x-mswin-936"_s,
		"MS936"_s,
		$$new($ObjectArray, {
			"gbk"_s,
			"GBK"_s,
			$$new($ObjectArray, {
				"x-utf-32be-bom"_s,
				"UTF_32BE_BOM"_s
			})
		})
	}));
	ht->set(53, $$new($ObjectArray, {
		"x-windows-950"_s,
		"MS950"_s
	}));
	ht->set(54, $$new($ObjectArray, {
		"x-windows-874"_s,
		"MS874"_s
	}));
	ht->set(56, $$new($ObjectArray, {
		"koi8-r"_s,
		"KOI8_R"_s
	}));
	ht->set(59, $$new($ObjectArray, {
		"koi8-u"_s,
		"KOI8_U"_s
	}));
	ht->set(62, $$new($ObjectArray, {
		"utf-32le"_s,
		"UTF_32LE"_s
	}));
}

StandardCharsets$Classes::StandardCharsets$Classes() {
}

$Class* StandardCharsets$Classes::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"ROWS", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(StandardCharsets$Classes, ROWS)},
		{"SIZE", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(StandardCharsets$Classes, SIZE)},
		{"SHIFT", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(StandardCharsets$Classes, SHIFT)},
		{"MASK", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(StandardCharsets$Classes, MASK)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PRIVATE, $method(StandardCharsets$Classes, init$, void)},
		{"init", "([Ljava/lang/Object;)V", nullptr, $PROTECTED, $virtualMethod(StandardCharsets$Classes, init, void, $ObjectArray*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.nio.cs.StandardCharsets$Classes", "sun.nio.cs.StandardCharsets", "Classes", $PRIVATE | $STATIC | $FINAL},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"sun.nio.cs.StandardCharsets$Classes",
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
	$loadClass(StandardCharsets$Classes, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(StandardCharsets$Classes);
	});
	return class$;
}

$Class* StandardCharsets$Classes::class$ = nullptr;

		} // cs
	} // nio
} // sun