#include <java/lang/reflect/AnnotatedTypeVariable.h>
#include <java/lang/reflect/AnnotatedType.h>
#include <jcpp.h>

using $AnnotatedTypeArray = $Array<::java::lang::reflect::AnnotatedType>;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AnnotatedType = ::java::lang::reflect::AnnotatedType;

namespace java {
	namespace lang {
		namespace reflect {

$Class* AnnotatedTypeVariable::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"getAnnotatedBounds", "()[Ljava/lang/reflect/AnnotatedType;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(AnnotatedTypeVariable, getAnnotatedBounds, $AnnotatedTypeArray*)},
		{"getAnnotatedOwnerType", "()Ljava/lang/reflect/AnnotatedType;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(AnnotatedTypeVariable, getAnnotatedOwnerType, $AnnotatedType*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"java.lang.reflect.AnnotatedTypeVariable",
		nullptr,
		"java.lang.reflect.AnnotatedType",
		nullptr,
		methodInfos$$
	};
	$loadClass(AnnotatedTypeVariable, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(AnnotatedTypeVariable);
	});
	return class$;
}

$Class* AnnotatedTypeVariable::class$ = nullptr;

		} // reflect
	} // lang
} // java