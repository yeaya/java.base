#include <jdk/internal/icu/impl/Trie$DataManipulate.h>
#include <jdk/internal/icu/impl/Trie.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace jdk {
	namespace internal {
		namespace icu {
			namespace impl {

$Class* Trie$DataManipulate::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"getFoldingOffset", "(I)I", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Trie$DataManipulate, getFoldingOffset, int32_t, int32_t)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"jdk.internal.icu.impl.Trie$DataManipulate", "jdk.internal.icu.impl.Trie", "DataManipulate", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"jdk.internal.icu.impl.Trie$DataManipulate",
		nullptr,
		nullptr,
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
	$loadClass(Trie$DataManipulate, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Trie$DataManipulate);
	});
	return class$;
}

$Class* Trie$DataManipulate::class$ = nullptr;

			} // impl
		} // icu
	} // internal
} // jdk