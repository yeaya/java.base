#include <java/lang/reflect/AnnotatedArrayType.h>
#include <java/lang/reflect/AnnotatedType.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AnnotatedType = ::java::lang::reflect::AnnotatedType;

namespace java {
	namespace lang {
		namespace reflect {

$Class* AnnotatedArrayType::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"getAnnotatedGenericComponentType", "()Ljava/lang/reflect/AnnotatedType;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(AnnotatedArrayType, getAnnotatedGenericComponentType, $AnnotatedType*)},
		{"getAnnotatedOwnerType", "()Ljava/lang/reflect/AnnotatedType;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(AnnotatedArrayType, getAnnotatedOwnerType, $AnnotatedType*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"java.lang.reflect.AnnotatedArrayType",
		nullptr,
		"java.lang.reflect.AnnotatedType",
		nullptr,
		methodInfos$$
	};
	$loadClass(AnnotatedArrayType, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(AnnotatedArrayType);
	});
	return class$;
}

$Class* AnnotatedArrayType::class$ = nullptr;

		} // reflect
	} // lang
} // java