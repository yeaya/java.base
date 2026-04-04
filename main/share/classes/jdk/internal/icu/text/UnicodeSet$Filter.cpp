#include <jdk/internal/icu/text/UnicodeSet$Filter.h>
#include <jdk/internal/icu/text/UnicodeSet.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace jdk {
	namespace internal {
		namespace icu {
			namespace text {

$Class* UnicodeSet$Filter::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"contains", "(I)Z", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(UnicodeSet$Filter, contains, bool, int32_t)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"jdk.internal.icu.text.UnicodeSet$Filter", "jdk.internal.icu.text.UnicodeSet", "Filter", $PRIVATE | $STATIC | $INTERFACE | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$INTERFACE | $ABSTRACT,
		"jdk.internal.icu.text.UnicodeSet$Filter",
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
		"jdk.internal.icu.text.UnicodeSet"
	};
	$loadClass(UnicodeSet$Filter, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(UnicodeSet$Filter);
	});
	return class$;
}

$Class* UnicodeSet$Filter::class$ = nullptr;

			} // text
		} // icu
	} // internal
} // jdk