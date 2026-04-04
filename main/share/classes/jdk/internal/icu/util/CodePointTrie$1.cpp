#include <jdk/internal/icu/util/CodePointTrie$1.h>
#include <java/lang/NoSuchFieldError.h>
#include <jdk/internal/icu/util/CodePointTrie$ValueWidth.h>
#include <jdk/internal/icu/util/CodePointTrie.h>
#include <jcpp.h>

#undef BITS_16
#undef BITS_32
#undef BITS_8

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $NoSuchFieldError = ::java::lang::NoSuchFieldError;
using $CodePointTrie$ValueWidth = ::jdk::internal::icu::util::CodePointTrie$ValueWidth;

namespace jdk {
	namespace internal {
		namespace icu {
			namespace util {

$ints* CodePointTrie$1::$SwitchMap$jdk$internal$icu$util$CodePointTrie$ValueWidth = nullptr;

void CodePointTrie$1::clinit$($Class* clazz) {
	$assignStatic(CodePointTrie$1::$SwitchMap$jdk$internal$icu$util$CodePointTrie$ValueWidth, $new($ints, $($CodePointTrie$ValueWidth::values())->length));
	{
		try {
			CodePointTrie$1::$SwitchMap$jdk$internal$icu$util$CodePointTrie$ValueWidth->set($CodePointTrie$ValueWidth::BITS_16->ordinal(), 1);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			CodePointTrie$1::$SwitchMap$jdk$internal$icu$util$CodePointTrie$ValueWidth->set($CodePointTrie$ValueWidth::BITS_32->ordinal(), 2);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			CodePointTrie$1::$SwitchMap$jdk$internal$icu$util$CodePointTrie$ValueWidth->set($CodePointTrie$ValueWidth::BITS_8->ordinal(), 3);
		} catch ($NoSuchFieldError& ex) {
		}
	}
}

CodePointTrie$1::CodePointTrie$1() {
}

$Class* CodePointTrie$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"$SwitchMap$jdk$internal$icu$util$CodePointTrie$ValueWidth", "[I", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(CodePointTrie$1, $SwitchMap$jdk$internal$icu$util$CodePointTrie$ValueWidth)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"jdk.internal.icu.util.CodePointTrie",
		nullptr,
		nullptr
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"jdk.internal.icu.util.CodePointTrie$1", nullptr, nullptr, $STATIC | $SYNTHETIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER | $SYNTHETIC,
		"jdk.internal.icu.util.CodePointTrie$1",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		nullptr,
		nullptr,
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"jdk.internal.icu.util.CodePointTrie"
	};
	$loadClass(CodePointTrie$1, name, initialize, &classInfo$$, CodePointTrie$1::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(CodePointTrie$1);
	});
	return class$;
}

$Class* CodePointTrie$1::class$ = nullptr;

			} // util
		} // icu
	} // internal
} // jdk