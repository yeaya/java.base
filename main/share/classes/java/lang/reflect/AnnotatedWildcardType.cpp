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

$MethodInfo _AnnotatedWildcardType_MethodInfo_[] = {
	{"getAnnotatedLowerBounds", "()[Ljava/lang/reflect/AnnotatedType;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(AnnotatedWildcardType, getAnnotatedLowerBounds, $AnnotatedTypeArray*)},
	{"getAnnotatedOwnerType", "()Ljava/lang/reflect/AnnotatedType;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(AnnotatedWildcardType, getAnnotatedOwnerType, $AnnotatedType*)},
	{"getAnnotatedUpperBounds", "()[Ljava/lang/reflect/AnnotatedType;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(AnnotatedWildcardType, getAnnotatedUpperBounds, $AnnotatedTypeArray*)},
	{}
};

$ClassInfo _AnnotatedWildcardType_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"java.lang.reflect.AnnotatedWildcardType",
	nullptr,
	"java.lang.reflect.AnnotatedType",
	nullptr,
	_AnnotatedWildcardType_MethodInfo_
};

$Object* allocate$AnnotatedWildcardType($Class* clazz) {
	return $of($alloc(AnnotatedWildcardType));
}

$Class* AnnotatedWildcardType::load$($String* name, bool initialize) {
	$loadClass(AnnotatedWildcardType, name, initialize, &_AnnotatedWildcardType_ClassInfo_, allocate$AnnotatedWildcardType);
	return class$;
}

$Class* AnnotatedWildcardType::class$ = nullptr;

		} // reflect
	} // lang
} // java