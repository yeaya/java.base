#include <jdk/internal/reflect/ConstructorAccessor.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace jdk {
	namespace internal {
		namespace reflect {

$Class* ConstructorAccessor::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"newInstance", "([Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ConstructorAccessor, newInstance, $Object*, $ObjectArray*), "java.lang.InstantiationException,java.lang.IllegalArgumentException,java.lang.reflect.InvocationTargetException"},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"jdk.internal.reflect.ConstructorAccessor",
		nullptr,
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(ConstructorAccessor, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ConstructorAccessor);
	});
	return class$;
}

$Class* ConstructorAccessor::class$ = nullptr;

		} // reflect
	} // internal
} // jdk