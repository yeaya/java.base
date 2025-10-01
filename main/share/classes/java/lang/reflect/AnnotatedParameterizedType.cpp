#include <java/lang/reflect/AnnotatedParameterizedType.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/AnnotatedType.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $AnnotatedTypeArray = $Array<::java::lang::reflect::AnnotatedType>;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AnnotatedType = ::java::lang::reflect::AnnotatedType;

namespace java {
	namespace lang {
		namespace reflect {

$MethodInfo _AnnotatedParameterizedType_MethodInfo_[] = {
	{"getAnnotatedActualTypeArguments", "()[Ljava/lang/reflect/AnnotatedType;", nullptr, $PUBLIC | $ABSTRACT},
	{"getAnnotatedOwnerType", "()Ljava/lang/reflect/AnnotatedType;", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _AnnotatedParameterizedType_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"java.lang.reflect.AnnotatedParameterizedType",
	nullptr,
	"java.lang.reflect.AnnotatedType",
	nullptr,
	_AnnotatedParameterizedType_MethodInfo_
};

$Object* allocate$AnnotatedParameterizedType($Class* clazz) {
	return $of($alloc(AnnotatedParameterizedType));
}

$Class* AnnotatedParameterizedType::load$($String* name, bool initialize) {
	$loadClass(AnnotatedParameterizedType, name, initialize, &_AnnotatedParameterizedType_ClassInfo_, allocate$AnnotatedParameterizedType);
	return class$;
}

$Class* AnnotatedParameterizedType::class$ = nullptr;

		} // reflect
	} // lang
} // java