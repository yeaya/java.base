#include <jdk/internal/access/JavaBeansAccess.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Constructor = ::java::lang::reflect::Constructor;
using $Method = ::java::lang::reflect::Method;

namespace jdk {
	namespace internal {
		namespace access {

$Class* JavaBeansAccess::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"getConstructorPropertiesValue", "(Ljava/lang/reflect/Constructor;)[Ljava/lang/String;", "(Ljava/lang/reflect/Constructor<*>;)[Ljava/lang/String;", $PUBLIC | $ABSTRACT, $virtualMethod(JavaBeansAccess, getConstructorPropertiesValue, $StringArray*, $Constructor*)},
		{"getReadMethod", "(Ljava/lang/Class;Ljava/lang/String;)Ljava/lang/reflect/Method;", "(Ljava/lang/Class<*>;Ljava/lang/String;)Ljava/lang/reflect/Method;", $PUBLIC | $ABSTRACT, $virtualMethod(JavaBeansAccess, getReadMethod, $Method*, $Class*, $String*), "java.lang.Exception"},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"jdk.internal.access.JavaBeansAccess",
		nullptr,
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(JavaBeansAccess, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(JavaBeansAccess);
	});
	return class$;
}

$Class* JavaBeansAccess::class$ = nullptr;

		} // access
	} // internal
} // jdk