#include <java/lang/reflect/GenericDeclaration.h>
#include <java/lang/reflect/TypeVariable.h>
#include <jcpp.h>

using $TypeVariableArray = $Array<::java::lang::reflect::TypeVariable>;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace lang {
		namespace reflect {

$Class* GenericDeclaration::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"getTypeParameters", "()[Ljava/lang/reflect/TypeVariable;", "()[Ljava/lang/reflect/TypeVariable<*>;", $PUBLIC | $ABSTRACT, $virtualMethod(GenericDeclaration, getTypeParameters, $TypeVariableArray*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"java.lang.reflect.GenericDeclaration",
		nullptr,
		"java.lang.reflect.AnnotatedElement",
		nullptr,
		methodInfos$$
	};
	$loadClass(GenericDeclaration, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(GenericDeclaration);
	});
	return class$;
}

$Class* GenericDeclaration::class$ = nullptr;

		} // reflect
	} // lang
} // java