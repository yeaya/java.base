#include <java/lang/reflect/AnnotatedType.h>
#include <java/lang/reflect/Type.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Type = ::java::lang::reflect::Type;

namespace java {
	namespace lang {
		namespace reflect {

AnnotatedType* AnnotatedType::getAnnotatedOwnerType() {
	return nullptr;
}

$Class* AnnotatedType::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"getAnnotatedOwnerType", "()Ljava/lang/reflect/AnnotatedType;", nullptr, $PUBLIC, $virtualMethod(AnnotatedType, getAnnotatedOwnerType, AnnotatedType*)},
		{"getAnnotation", "(Ljava/lang/Class;)Ljava/lang/annotation/Annotation;", nullptr, $PUBLIC | $ABSTRACT},
		{"getAnnotations", "()[Ljava/lang/annotation/Annotation;", nullptr, $PUBLIC | $ABSTRACT},
		{"getDeclaredAnnotations", "()[Ljava/lang/annotation/Annotation;", nullptr, $PUBLIC | $ABSTRACT},
		{"getType", "()Ljava/lang/reflect/Type;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(AnnotatedType, getType, $Type*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"java.lang.reflect.AnnotatedType",
		nullptr,
		"java.lang.reflect.AnnotatedElement",
		nullptr,
		methodInfos$$
	};
	$loadClass(AnnotatedType, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(AnnotatedType);
	});
	return class$;
}

$Class* AnnotatedType::class$ = nullptr;

		} // reflect
	} // lang
} // java