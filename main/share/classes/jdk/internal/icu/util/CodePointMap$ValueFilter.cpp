#include <jdk/internal/icu/util/CodePointMap$ValueFilter.h>
#include <jdk/internal/icu/util/CodePointMap.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace jdk {
	namespace internal {
		namespace icu {
			namespace util {

$Class* CodePointMap$ValueFilter::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"apply", "(I)I", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(CodePointMap$ValueFilter, apply, int32_t, int32_t)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"jdk.internal.icu.util.CodePointMap$ValueFilter", "jdk.internal.icu.util.CodePointMap", "ValueFilter", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"jdk.internal.icu.util.CodePointMap$ValueFilter",
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
		"jdk.internal.icu.util.CodePointMap"
	};
	$loadClass(CodePointMap$ValueFilter, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(CodePointMap$ValueFilter);
	});
	return class$;
}

$Class* CodePointMap$ValueFilter::class$ = nullptr;

			} // util
		} // icu
	} // internal
} // jdk