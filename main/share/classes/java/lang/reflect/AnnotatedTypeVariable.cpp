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

$MethodInfo _AnnotatedTypeVariable_MethodInfo_[] = {
	{"getAnnotatedBounds", "()[Ljava/lang/reflect/AnnotatedType;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(AnnotatedTypeVariable, getAnnotatedBounds, $AnnotatedTypeArray*)},
	{"getAnnotatedOwnerType", "()Ljava/lang/reflect/AnnotatedType;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(AnnotatedTypeVariable, getAnnotatedOwnerType, $AnnotatedType*)},
	{}
};

$ClassInfo _AnnotatedTypeVariable_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"java.lang.reflect.AnnotatedTypeVariable",
	nullptr,
	"java.lang.reflect.AnnotatedType",
	nullptr,
	_AnnotatedTypeVariable_MethodInfo_
};

$Object* allocate$AnnotatedTypeVariable($Class* clazz) {
	return $of($alloc(AnnotatedTypeVariable));
}

$Class* AnnotatedTypeVariable::load$($String* name, bool initialize) {
	$loadClass(AnnotatedTypeVariable, name, initialize, &_AnnotatedTypeVariable_ClassInfo_, allocate$AnnotatedTypeVariable);
	return class$;
}

$Class* AnnotatedTypeVariable::class$ = nullptr;

		} // reflect
	} // lang
} // java