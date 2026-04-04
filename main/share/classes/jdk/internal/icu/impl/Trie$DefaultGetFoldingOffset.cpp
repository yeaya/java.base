#include <jdk/internal/icu/impl/Trie$DefaultGetFoldingOffset.h>
#include <jdk/internal/icu/impl/Trie.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace jdk {
	namespace internal {
		namespace icu {
			namespace impl {

void Trie$DefaultGetFoldingOffset::init$() {
}

int32_t Trie$DefaultGetFoldingOffset::getFoldingOffset(int32_t value) {
	return value;
}

Trie$DefaultGetFoldingOffset::Trie$DefaultGetFoldingOffset() {
}

$Class* Trie$DefaultGetFoldingOffset::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PRIVATE, $method(Trie$DefaultGetFoldingOffset, init$, void)},
		{"getFoldingOffset", "(I)I", nullptr, $PUBLIC, $virtualMethod(Trie$DefaultGetFoldingOffset, getFoldingOffset, int32_t, int32_t)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"jdk.internal.icu.impl.Trie$DefaultGetFoldingOffset", "jdk.internal.icu.impl.Trie", "DefaultGetFoldingOffset", $PRIVATE | $STATIC},
		{"jdk.internal.icu.impl.Trie$DataManipulate", "jdk.internal.icu.impl.Trie", "DataManipulate", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"jdk.internal.icu.impl.Trie$DefaultGetFoldingOffset",
		"java.lang.Object",
		"jdk.internal.icu.impl.Trie$DataManipulate",
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"jdk.internal.icu.impl.Trie"
	};
	$loadClass(Trie$DefaultGetFoldingOffset, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Trie$DefaultGetFoldingOffset);
	});
	return class$;
}

$Class* Trie$DefaultGetFoldingOffset::class$ = nullptr;

			} // impl
		} // icu
	} // internal
} // jdk