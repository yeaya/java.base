#include <java/lang/reflect/AnnotatedWildcardType.h>
#include <java/lang/reflect/AnnotatedType.h>
#include <jcpp.h>

using $AnnotatedTypeArray = $Array<::java::lang::reflect::AnnotatedType>;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AnnotatedType = ::java::lang::reflect::AnnotatedType;

namespace java {
	namespace lang {
		namespace reflect {

$Class* AnnotatedWildcardType::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"getAnnotatedLowerBounds", "()[Ljava/lang/reflect/AnnotatedType;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(AnnotatedWildcardType, getAnnotatedLowerBounds, $AnnotatedTypeArray*)},
		{"getAnnotatedOwnerType", "()Ljava/lang/reflect/AnnotatedType;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(AnnotatedWildcardType, getAnnotatedOwnerType, $AnnotatedType*)},
		{"getAnnotatedUpperBounds", "()[Ljava/lang/reflect/AnnotatedType;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(AnnotatedWildcardType, getAnnotatedUpperBounds, $AnnotatedTypeArray*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"java.lang.reflect.AnnotatedWildcardType",
		nullptr,
		"java.lang.reflect.AnnotatedType",
		nullptr,
		methodInfos$$
	};
	$loadClass(AnnotatedWildcardType, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(AnnotatedWildcardType);
	});
	return class$;
}

$Class* AnnotatedWildcardType::class$ = nullptr;

		} // reflect
	} // lang
} // java