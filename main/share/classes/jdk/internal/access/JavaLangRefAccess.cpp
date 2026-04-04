#include <jdk/internal/access/JavaLangRefAccess.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace jdk {
	namespace internal {
		namespace access {

$Class* JavaLangRefAccess::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"runFinalization", "()V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(JavaLangRefAccess, runFinalization, void)},
		{"waitForReferenceProcessing", "()Z", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(JavaLangRefAccess, waitForReferenceProcessing, bool), "java.lang.InterruptedException"},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"jdk.internal.access.JavaLangRefAccess",
		nullptr,
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(JavaLangRefAccess, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(JavaLangRefAccess);
	});
	return class$;
}

$Class* JavaLangRefAccess::class$ = nullptr;

		} // access
	} // internal
} // jdk