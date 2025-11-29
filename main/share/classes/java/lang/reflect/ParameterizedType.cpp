#include <java/lang/reflect/ParameterizedType.h>

#include <java/lang/reflect/Type.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace lang {
		namespace reflect {

$MethodInfo _ParameterizedType_MethodInfo_[] = {
	{"getActualTypeArguments", "()[Ljava/lang/reflect/Type;", nullptr, $PUBLIC | $ABSTRACT},
	{"getOwnerType", "()Ljava/lang/reflect/Type;", nullptr, $PUBLIC | $ABSTRACT},
	{"getRawType", "()Ljava/lang/reflect/Type;", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _ParameterizedType_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"java.lang.reflect.ParameterizedType",
	nullptr,
	"java.lang.reflect.Type",
	nullptr,
	_ParameterizedType_MethodInfo_
};

$Object* allocate$ParameterizedType($Class* clazz) {
	return $of($alloc(ParameterizedType));
}

$Class* ParameterizedType::load$($String* name, bool initialize) {
	$loadClass(ParameterizedType, name, initialize, &_ParameterizedType_ClassInfo_, allocate$ParameterizedType);
	return class$;
}

$Class* ParameterizedType::class$ = nullptr;

		} // reflect
	} // lang
} // java