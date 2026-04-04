#include <jdk/internal/icu/impl/Trie2$ValueMapper.h>
#include <jdk/internal/icu/impl/Trie2.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace jdk {
	namespace internal {
		namespace icu {
			namespace impl {

$Class* Trie2$ValueMapper::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"map", "(I)I", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Trie2$ValueMapper, map, int32_t, int32_t)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"jdk.internal.icu.impl.Trie2$ValueMapper", "jdk.internal.icu.impl.Trie2", "ValueMapper", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"jdk.internal.icu.impl.Trie2$ValueMapper",
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
		"jdk.internal.icu.impl.Trie2"
	};
	$loadClass(Trie2$ValueMapper, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Trie2$ValueMapper);
	});
	return class$;
}

$Class* Trie2$ValueMapper::class$ = nullptr;

			} // impl
		} // icu
	} // internal
} // jdk