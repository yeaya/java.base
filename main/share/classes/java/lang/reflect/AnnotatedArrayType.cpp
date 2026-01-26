#include <java/lang/reflect/AnnotatedArrayType.h>

#include <java/lang/reflect/AnnotatedType.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AnnotatedType = ::java::lang::reflect::AnnotatedType;

namespace java {
	namespace lang {
		namespace reflect {

$MethodInfo _AnnotatedArrayType_MethodInfo_[] = {
	{"getAnnotatedGenericComponentType", "()Ljava/lang/reflect/AnnotatedType;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(AnnotatedArrayType, getAnnotatedGenericComponentType, $AnnotatedType*)},
	{"getAnnotatedOwnerType", "()Ljava/lang/reflect/AnnotatedType;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(AnnotatedArrayType, getAnnotatedOwnerType, $AnnotatedType*)},
	{}
};

$ClassInfo _AnnotatedArrayType_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"java.lang.reflect.AnnotatedArrayType",
	nullptr,
	"java.lang.reflect.AnnotatedType",
	nullptr,
	_AnnotatedArrayType_MethodInfo_
};

$Object* allocate$AnnotatedArrayType($Class* clazz) {
	return $of($alloc(AnnotatedArrayType));
}

$Class* AnnotatedArrayType::load$($String* name, bool initialize) {
	$loadClass(AnnotatedArrayType, name, initialize, &_AnnotatedArrayType_ClassInfo_, allocate$AnnotatedArrayType);
	return class$;
}

$Class* AnnotatedArrayType::class$ = nullptr;

		} // reflect
	} // lang
} // java