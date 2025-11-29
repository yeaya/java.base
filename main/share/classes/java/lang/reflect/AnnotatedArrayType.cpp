#include <java/lang/reflect/AnnotatedArrayType.h>

#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace lang {
		namespace reflect {

$MethodInfo _AnnotatedArrayType_MethodInfo_[] = {
	{"getAnnotatedGenericComponentType", "()Ljava/lang/reflect/AnnotatedType;", nullptr, $PUBLIC | $ABSTRACT},
	{"getAnnotatedOwnerType", "()Ljava/lang/reflect/AnnotatedType;", nullptr, $PUBLIC | $ABSTRACT},
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