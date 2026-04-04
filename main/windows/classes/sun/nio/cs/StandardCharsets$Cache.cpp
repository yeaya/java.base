#include <sun/nio/cs/StandardCharsets$Cache.h>
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

void StandardCharsets$Cache::init$() {
	$PreHashedMap::init$(StandardCharsets$Cache::ROWS, StandardCharsets$Cache::SIZE, StandardCharsets$Cache::SHIFT, StandardCharsets$Cache::MASK);
}

void StandardCharsets$Cache::init($ObjectArray* ht) {
	$useLocalObjectStack();
	$nc(ht)->set(0, $$new($ObjectArray, {
		"ibm862"_s,
		nullptr
	}));
	ht->set(2, $$new($ObjectArray, {
		"windows-31j"_s,
		nullptr
	}));
	ht->set(4, $$new($ObjectArray, {
		"ibm866"_s,
		nullptr,
		$$new($ObjectArray, {
			"utf-16le"_s,
			nullptr
		})
	}));
	ht->set(5, $$new($ObjectArray, {
		"utf-32"_s,
		nullptr
	}));
	ht->set(6, $$new($ObjectArray, {
		"windows-1250"_s,
		nullptr
	}));
	ht->set(7, $$new($ObjectArray, {
		"windows-1251"_s,
		nullptr
	}));
	ht->set(8, $$new($ObjectArray, {
		"windows-1252"_s,
		nullptr,
		$$new($ObjectArray, {
			"utf-32be"_s,
			nullptr
		})
	}));
	ht->set(9, $$new($ObjectArray, {
		"windows-1253"_s,
		nullptr
	}));
	ht->set(10, $$new($ObjectArray, {
		"windows-1254"_s,
		nullptr
	}));
	ht->set(11, $$new($ObjectArray, {
		"windows-1255"_s,
		nullptr,
		$$new($ObjectArray, {
			"gb18030"_s,
			nullptr,
			$$new($ObjectArray, {
				"utf-16"_s,
				nullptr
			})
		})
	}));
	ht->set(12, $$new($ObjectArray, {
		"windows-1256"_s,
		nullptr,
		$$new($ObjectArray, {
			"x-ms950-hkscs"_s,
			nullptr
		})
	}));
	ht->set(13, $$new($ObjectArray, {
		"windows-1257"_s,
		nullptr
	}));
	ht->set(14, $$new($ObjectArray, {
		"windows-1258"_s,
		nullptr,
		$$new($ObjectArray, {
			"utf-16be"_s,
			nullptr
		})
	}));
	ht->set(15, $$new($ObjectArray, {
		"x-johab"_s,
		nullptr
	}));
	ht->set(16, $$new($ObjectArray, {
		"jis_x0201"_s,
		nullptr,
		$$new($ObjectArray, {
			"iso-8859-1"_s,
			nullptr
		})
	}));
	ht->set(17, $$new($ObjectArray, {
		"iso-8859-2"_s,
		nullptr
	}));
	ht->set(18, $$new($ObjectArray, {
		"utf-8"_s,
		nullptr
	}));
	ht->set(19, $$new($ObjectArray, {
		"iso-8859-4"_s,
		nullptr
	}));
	ht->set(20, $$new($ObjectArray, {
		"iso-8859-5"_s,
		nullptr
	}));
	ht->set(22, $$new($ObjectArray, {
		"x-ibm874"_s,
		nullptr,
		$$new($ObjectArray, {
			"iso-8859-7"_s,
			nullptr
		})
	}));
	ht->set(23, $$new($ObjectArray, {
		"shift_jis"_s,
		nullptr
	}));
	ht->set(24, $$new($ObjectArray, {
		"iso-8859-9"_s,
		nullptr
	}));
	ht->set(25, $$new($ObjectArray, {
		"x-ms950-hkscs-xp"_s,
		nullptr
	}));
	ht->set(28, $$new($ObjectArray, {
		"x-ibm737"_s,
		nullptr
	}));
	ht->set(31, $$new($ObjectArray, {
		"x-windows-949"_s,
		nullptr,
		$$new($ObjectArray, {
			"ibm850"_s,
			nullptr
		})
	}));
	ht->set(33, $$new($ObjectArray, {
		"ibm852"_s,
		nullptr,
		$$new($ObjectArray, {
			"ibm775"_s,
			nullptr
		})
	}));
	ht->set(34, $$new($ObjectArray, {
		"us-ascii"_s,
		nullptr
	}));
	ht->set(35, $$new($ObjectArray, {
		"iso-8859-13"_s,
		nullptr
	}));
	ht->set(36, $$new($ObjectArray, {
		"ibm855"_s,
		nullptr,
		$$new($ObjectArray, {
			"ibm437"_s,
			nullptr
		})
	}));
	ht->set(37, $$new($ObjectArray, {
		"iso-8859-15"_s,
		nullptr
	}));
	ht->set(38, $$new($ObjectArray, {
		"ibm857"_s,
		nullptr,
		$$new($ObjectArray, {
			"iso-8859-16"_s,
			nullptr,
			$$new($ObjectArray, {
				"x-utf-32le-bom"_s,
				nullptr
			})
		})
	}));
	ht->set(39, $$new($ObjectArray, {
		"ibm00858"_s,
		nullptr
	}));
	ht->set(44, $$new($ObjectArray, {
		"x-utf-16le-bom"_s,
		nullptr
	}));
	ht->set(47, $$new($ObjectArray, {
		"cesu-8"_s,
		nullptr
	}));
	ht->set(48, $$new($ObjectArray, {
		"x-mswin-936"_s,
		nullptr,
		$$new($ObjectArray, {
			"gbk"_s,
			nullptr,
			$$new($ObjectArray, {
				"x-utf-32be-bom"_s,
				nullptr
			})
		})
	}));
	ht->set(53, $$new($ObjectArray, {
		"x-windows-950"_s,
		nullptr
	}));
	ht->set(54, $$new($ObjectArray, {
		"x-windows-874"_s,
		nullptr
	}));
	ht->set(56, $$new($ObjectArray, {
		"koi8-r"_s,
		nullptr
	}));
	ht->set(59, $$new($ObjectArray, {
		"koi8-u"_s,
		nullptr
	}));
	ht->set(62, $$new($ObjectArray, {
		"utf-32le"_s,
		nullptr
	}));
}

StandardCharsets$Cache::StandardCharsets$Cache() {
}

$Class* StandardCharsets$Cache::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"ROWS", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(StandardCharsets$Cache, ROWS)},
		{"SIZE", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(StandardCharsets$Cache, SIZE)},
		{"SHIFT", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(StandardCharsets$Cache, SHIFT)},
		{"MASK", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(StandardCharsets$Cache, MASK)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PRIVATE, $method(StandardCharsets$Cache, init$, void)},
		{"init", "([Ljava/lang/Object;)V", nullptr, $PROTECTED, $virtualMethod(StandardCharsets$Cache, init, void, $ObjectArray*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.nio.cs.StandardCharsets$Cache", "sun.nio.cs.StandardCharsets", "Cache", $PRIVATE | $STATIC | $FINAL},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"sun.nio.cs.StandardCharsets$Cache",
		"sun.util.PreHashedMap",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		"Lsun/util/PreHashedMap<Ljava/nio/charset/Charset;>;",
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"sun.nio.cs.StandardCharsets"
	};
	$loadClass(StandardCharsets$Cache, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(StandardCharsets$Cache);
	});
	return class$;
}

$Class* StandardCharsets$Cache::class$ = nullptr;

		} // cs
	} // nio
} // sun