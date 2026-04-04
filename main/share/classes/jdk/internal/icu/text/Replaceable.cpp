#include <jdk/internal/icu/text/Replaceable.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace jdk {
	namespace internal {
		namespace icu {
			namespace text {

$Class* Replaceable::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"charAt", "(I)C", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Replaceable, charAt, char16_t, int32_t)},
		{"getChars", "(II[CI)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Replaceable, getChars, void, int32_t, int32_t, $chars*, int32_t)},
		{"length", "()I", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Replaceable, length, int32_t)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"jdk.internal.icu.text.Replaceable",
		nullptr,
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(Replaceable, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Replaceable);
	});
	return class$;
}

$Class* Replaceable::class$ = nullptr;

			} // text
		} // icu
	} // internal
} // jdk