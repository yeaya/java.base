#include <jdk/internal/access/JavaAWTAccess.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace jdk {
	namespace internal {
		namespace access {

$Class* JavaAWTAccess::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"getAppletContext", "()Ljava/lang/Object;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(JavaAWTAccess, getAppletContext, $Object*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"jdk.internal.access.JavaAWTAccess",
		nullptr,
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(JavaAWTAccess, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(JavaAWTAccess);
	});
	return class$;
}

$Class* JavaAWTAccess::class$ = nullptr;

		} // access
	} // internal
} // jdk