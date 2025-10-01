#include <java/lang/reflect/GenericArrayType.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Type = ::java::lang::reflect::Type;

namespace java {
	namespace lang {
		namespace reflect {

$MethodInfo _GenericArrayType_MethodInfo_[] = {
	{"getGenericComponentType", "()Ljava/lang/reflect/Type;", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _GenericArrayType_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"java.lang.reflect.GenericArrayType",
	nullptr,
	"java.lang.reflect.Type",
	nullptr,
	_GenericArrayType_MethodInfo_
};

$Object* allocate$GenericArrayType($Class* clazz) {
	return $of($alloc(GenericArrayType));
}

$Class* GenericArrayType::load$($String* name, bool initialize) {
	$loadClass(GenericArrayType, name, initialize, &_GenericArrayType_ClassInfo_, allocate$GenericArrayType);
	return class$;
}

$Class* GenericArrayType::class$ = nullptr;

		} // reflect
	} // lang
} // java