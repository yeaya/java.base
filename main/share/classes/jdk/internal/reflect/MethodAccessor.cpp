#include <jdk/internal/reflect/MethodAccessor.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace jdk {
	namespace internal {
		namespace reflect {

$Class* MethodAccessor::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"invoke", "(Ljava/lang/Object;[Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(MethodAccessor, invoke, $Object*, Object$*, $ObjectArray*), "java.lang.IllegalArgumentException,java.lang.reflect.InvocationTargetException"},
		{"*invokeSpecial", "(Ljava/lang/Object;[Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"jdk.internal.reflect.MethodAccessor",
		nullptr,
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(MethodAccessor, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(MethodAccessor);
	});
	return class$;
}

$Class* MethodAccessor::class$ = nullptr;

		} // reflect
	} // internal
} // jdk