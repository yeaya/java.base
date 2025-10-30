#include <java/lang/reflect/AnnotatedType.h>

#include <java/lang/reflect/Type.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AnnotatedElement = ::java::lang::reflect::AnnotatedElement;
using $Type = ::java::lang::reflect::Type;

namespace java {
	namespace lang {
		namespace reflect {

$MethodInfo _AnnotatedType_MethodInfo_[] = {
	{"getAnnotatedOwnerType", "()Ljava/lang/reflect/AnnotatedType;", nullptr, $PUBLIC},
	{"getAnnotation", "(Ljava/lang/Class;)Ljava/lang/annotation/Annotation;", nullptr, $PUBLIC | $ABSTRACT},
	{"getAnnotations", "()[Ljava/lang/annotation/Annotation;", nullptr, $PUBLIC | $ABSTRACT},
	{"getDeclaredAnnotations", "()[Ljava/lang/annotation/Annotation;", nullptr, $PUBLIC | $ABSTRACT},
	{"getType", "()Ljava/lang/reflect/Type;", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _AnnotatedType_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"java.lang.reflect.AnnotatedType",
	nullptr,
	"java.lang.reflect.AnnotatedElement",
	nullptr,
	_AnnotatedType_MethodInfo_
};

$Object* allocate$AnnotatedType($Class* clazz) {
	return $of($alloc(AnnotatedType));
}

AnnotatedType* AnnotatedType::getAnnotatedOwnerType() {
	return nullptr;
}

$Class* AnnotatedType::load$($String* name, bool initialize) {
	$loadClass(AnnotatedType, name, initialize, &_AnnotatedType_ClassInfo_, allocate$AnnotatedType);
	return class$;
}

$Class* AnnotatedType::class$ = nullptr;

		} // reflect
	} // lang
} // java