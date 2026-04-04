#include <java/lang/reflect/AnnotatedParameterizedType.h>
#include <java/lang/reflect/AnnotatedType.h>
#include <jcpp.h>

using $AnnotatedTypeArray = $Array<::java::lang::reflect::AnnotatedType>;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AnnotatedType = ::java::lang::reflect::AnnotatedType;

namespace java {
	namespace lang {
		namespace reflect {

$Class* AnnotatedParameterizedType::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"getAnnotatedActualTypeArguments", "()[Ljava/lang/reflect/AnnotatedType;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(AnnotatedParameterizedType, getAnnotatedActualTypeArguments, $AnnotatedTypeArray*)},
		{"getAnnotatedOwnerType", "()Ljava/lang/reflect/AnnotatedType;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(AnnotatedParameterizedType, getAnnotatedOwnerType, $AnnotatedType*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"java.lang.reflect.AnnotatedParameterizedType",
		nullptr,
		"java.lang.reflect.AnnotatedType",
		nullptr,
		methodInfos$$
	};
	$loadClass(AnnotatedParameterizedType, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(AnnotatedParameterizedType);
	});
	return class$;
}

$Class* AnnotatedParameterizedType::class$ = nullptr;

		} // reflect
	} // lang
} // java