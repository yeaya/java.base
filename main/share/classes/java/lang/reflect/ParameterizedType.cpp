#include <java/lang/reflect/ParameterizedType.h>

#include <java/lang/reflect/Type.h>
#include <jcpp.h>

using $TypeArray = $Array<::java::lang::reflect::Type>;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Type = ::java::lang::reflect::Type;

namespace java {
	namespace lang {
		namespace reflect {

$MethodInfo _ParameterizedType_MethodInfo_[] = {
	{"getActualTypeArguments", "()[Ljava/lang/reflect/Type;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ParameterizedType, getActualTypeArguments, $TypeArray*)},
	{"getOwnerType", "()Ljava/lang/reflect/Type;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ParameterizedType, getOwnerType, $Type*)},
	{"getRawType", "()Ljava/lang/reflect/Type;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ParameterizedType, getRawType, $Type*)},
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