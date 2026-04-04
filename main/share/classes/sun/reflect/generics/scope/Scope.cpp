#include <sun/reflect/generics/scope/Scope.h>
#include <java/lang/reflect/TypeVariable.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $TypeVariable = ::java::lang::reflect::TypeVariable;

namespace sun {
	namespace reflect {
		namespace generics {
			namespace scope {

$Class* Scope::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"lookup", "(Ljava/lang/String;)Ljava/lang/reflect/TypeVariable;", "(Ljava/lang/String;)Ljava/lang/reflect/TypeVariable<*>;", $PUBLIC | $ABSTRACT, $virtualMethod(Scope, lookup, $TypeVariable*, $String*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"sun.reflect.generics.scope.Scope",
		nullptr,
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(Scope, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Scope);
	});
	return class$;
}

$Class* Scope::class$ = nullptr;

			} // scope
		} // generics
	} // reflect
} // sun