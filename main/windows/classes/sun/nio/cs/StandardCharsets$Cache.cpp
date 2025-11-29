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

$FieldInfo _StandardCharsets$Cache_FieldInfo_[] = {
	{"ROWS", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(StandardCharsets$Cache, ROWS)},
	{"SIZE", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(StandardCharsets$Cache, SIZE)},
	{"SHIFT", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(StandardCharsets$Cache, SHIFT)},
	{"MASK", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(StandardCharsets$Cache, MASK)},
	{}
};

$MethodInfo _StandardCharsets$Cache_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(StandardCharsets$Cache::*)()>(&StandardCharsets$Cache::init$))},
	{"init", "([Ljava/lang/Object;)V", nullptr, $PROTECTED},
	{}
};

$InnerClassInfo _StandardCharsets$Cache_InnerClassesInfo_[] = {
	{"sun.nio.cs.StandardCharsets$Cache", "sun.nio.cs.StandardCharsets", "Cache", $PRIVATE | $STATIC | $FINAL},
	{}
};

$ClassInfo _StandardCharsets$Cache_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"sun.nio.cs.StandardCharsets$Cache",
	"sun.util.PreHashedMap",
	nullptr,
	_StandardCharsets$Cache_FieldInfo_,
	_StandardCharsets$Cache_MethodInfo_,
	"Lsun/util/PreHashedMap<Ljava/nio/charset/Charset;>;",
	nullptr,
	_StandardCharsets$Cache_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.nio.cs.StandardCharsets"
};

$Object* allocate$StandardCharsets$Cache($Class* clazz) {
	return $of($alloc(StandardCharsets$Cache));
}

void StandardCharsets$Cache::init$() {
	$PreHashedMap::init$(StandardCharsets$Cache::ROWS, StandardCharsets$Cache::SIZE, StandardCharsets$Cache::SHIFT, StandardCharsets$Cache::MASK);
}

void StandardCharsets$Cache::init($ObjectArray* ht) {
	$useLocalCurrentObjectStackCache();
	$nc(ht)->set(0, $$new($ObjectArray, {
		$of("ibm862"_s),
		($Object*)nullptr
	}));
	ht->set(2, $$new($ObjectArray, {
		$of("windows-31j"_s),
		($Object*)nullptr
	}));
	ht->set(4, $$new($ObjectArray, {
		$of("ibm866"_s),
		($Object*)nullptr,
		$of($$new($ObjectArray, {
			$of("utf-16le"_s),
			($Object*)nullptr
		}))
	}));
	ht->set(5, $$new($ObjectArray, {
		$of("utf-32"_s),
		($Object*)nullptr
	}));
	ht->set(6, $$new($ObjectArray, {
		$of("windows-1250"_s),
		($Object*)nullptr
	}));
	ht->set(7, $$new($ObjectArray, {
		$of("windows-1251"_s),
		($Object*)nullptr
	}));
	ht->set(8, $$new($ObjectArray, {
		$of("windows-1252"_s),
		($Object*)nullptr,
		$of($$new($ObjectArray, {
			$of("utf-32be"_s),
			($Object*)nullptr
		}))
	}));
	ht->set(9, $$new($ObjectArray, {
		$of("windows-1253"_s),
		($Object*)nullptr
	}));
	ht->set(10, $$new($ObjectArray, {
		$of("windows-1254"_s),
		($Object*)nullptr
	}));
	ht->set(11, $$new($ObjectArray, {
		$of("windows-1255"_s),
		($Object*)nullptr,
		$of($$new($ObjectArray, {
			$of("gb18030"_s),
			($Object*)nullptr,
			$of($$new($ObjectArray, {
				$of("utf-16"_s),
				($Object*)nullptr
			}))
		}))
	}));
	ht->set(12, $$new($ObjectArray, {
		$of("windows-1256"_s),
		($Object*)nullptr,
		$of($$new($ObjectArray, {
			$of("x-ms950-hkscs"_s),
			($Object*)nullptr
		}))
	}));
	ht->set(13, $$new($ObjectArray, {
		$of("windows-1257"_s),
		($Object*)nullptr
	}));
	ht->set(14, $$new($ObjectArray, {
		$of("windows-1258"_s),
		($Object*)nullptr,
		$of($$new($ObjectArray, {
			$of("utf-16be"_s),
			($Object*)nullptr
		}))
	}));
	ht->set(15, $$new($ObjectArray, {
		$of("x-johab"_s),
		($Object*)nullptr
	}));
	ht->set(16, $$new($ObjectArray, {
		$of("jis_x0201"_s),
		($Object*)nullptr,
		$of($$new($ObjectArray, {
			$of("iso-8859-1"_s),
			($Object*)nullptr
		}))
	}));
	ht->set(17, $$new($ObjectArray, {
		$of("iso-8859-2"_s),
		($Object*)nullptr
	}));
	ht->set(18, $$new($ObjectArray, {
		$of("utf-8"_s),
		($Object*)nullptr
	}));
	ht->set(19, $$new($ObjectArray, {
		$of("iso-8859-4"_s),
		($Object*)nullptr
	}));
	ht->set(20, $$new($ObjectArray, {
		$of("iso-8859-5"_s),
		($Object*)nullptr
	}));
	ht->set(22, $$new($ObjectArray, {
		$of("x-ibm874"_s),
		($Object*)nullptr,
		$of($$new($ObjectArray, {
			$of("iso-8859-7"_s),
			($Object*)nullptr
		}))
	}));
	ht->set(23, $$new($ObjectArray, {
		$of("shift_jis"_s),
		($Object*)nullptr
	}));
	ht->set(24, $$new($ObjectArray, {
		$of("iso-8859-9"_s),
		($Object*)nullptr
	}));
	ht->set(25, $$new($ObjectArray, {
		$of("x-ms950-hkscs-xp"_s),
		($Object*)nullptr
	}));
	ht->set(28, $$new($ObjectArray, {
		$of("x-ibm737"_s),
		($Object*)nullptr
	}));
	ht->set(31, $$new($ObjectArray, {
		$of("x-windows-949"_s),
		($Object*)nullptr,
		$of($$new($ObjectArray, {
			$of("ibm850"_s),
			($Object*)nullptr
		}))
	}));
	ht->set(33, $$new($ObjectArray, {
		$of("ibm852"_s),
		($Object*)nullptr,
		$of($$new($ObjectArray, {
			$of("ibm775"_s),
			($Object*)nullptr
		}))
	}));
	ht->set(34, $$new($ObjectArray, {
		$of("us-ascii"_s),
		($Object*)nullptr
	}));
	ht->set(35, $$new($ObjectArray, {
		$of("iso-8859-13"_s),
		($Object*)nullptr
	}));
	ht->set(36, $$new($ObjectArray, {
		$of("ibm855"_s),
		($Object*)nullptr,
		$of($$new($ObjectArray, {
			$of("ibm437"_s),
			($Object*)nullptr
		}))
	}));
	ht->set(37, $$new($ObjectArray, {
		$of("iso-8859-15"_s),
		($Object*)nullptr
	}));
	ht->set(38, $$new($ObjectArray, {
		$of("ibm857"_s),
		($Object*)nullptr,
		$of($$new($ObjectArray, {
			$of("iso-8859-16"_s),
			($Object*)nullptr,
			$of($$new($ObjectArray, {
				$of("x-utf-32le-bom"_s),
				($Object*)nullptr
			}))
		}))
	}));
	ht->set(39, $$new($ObjectArray, {
		$of("ibm00858"_s),
		($Object*)nullptr
	}));
	ht->set(44, $$new($ObjectArray, {
		$of("x-utf-16le-bom"_s),
		($Object*)nullptr
	}));
	ht->set(47, $$new($ObjectArray, {
		$of("cesu-8"_s),
		($Object*)nullptr
	}));
	ht->set(48, $$new($ObjectArray, {
		$of("x-mswin-936"_s),
		($Object*)nullptr,
		$of($$new($ObjectArray, {
			$of("gbk"_s),
			($Object*)nullptr,
			$of($$new($ObjectArray, {
				$of("x-utf-32be-bom"_s),
				($Object*)nullptr
			}))
		}))
	}));
	ht->set(53, $$new($ObjectArray, {
		$of("x-windows-950"_s),
		($Object*)nullptr
	}));
	ht->set(54, $$new($ObjectArray, {
		$of("x-windows-874"_s),
		($Object*)nullptr
	}));
	ht->set(56, $$new($ObjectArray, {
		$of("koi8-r"_s),
		($Object*)nullptr
	}));
	ht->set(59, $$new($ObjectArray, {
		$of("koi8-u"_s),
		($Object*)nullptr
	}));
	ht->set(62, $$new($ObjectArray, {
		$of("utf-32le"_s),
		($Object*)nullptr
	}));
}

StandardCharsets$Cache::StandardCharsets$Cache() {
}

$Class* StandardCharsets$Cache::load$($String* name, bool initialize) {
	$loadClass(StandardCharsets$Cache, name, initialize, &_StandardCharsets$Cache_ClassInfo_, allocate$StandardCharsets$Cache);
	return class$;
}

$Class* StandardCharsets$Cache::class$ = nullptr;

		} // cs
	} // nio
} // sun