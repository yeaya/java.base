#include <java/lang/reflect/WildcardType.h>

#include <java/lang/reflect/Type.h>
#include <jcpp.h>

using $TypeArray = $Array<::java::lang::reflect::Type>;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace lang {
		namespace reflect {

$MethodInfo _WildcardType_MethodInfo_[] = {
	{"getLowerBounds", "()[Ljava/lang/reflect/Type;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(WildcardType, getLowerBounds, $TypeArray*)},
	{"getUpperBounds", "()[Ljava/lang/reflect/Type;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(WildcardType, getUpperBounds, $TypeArray*)},
	{}
};

$ClassInfo _WildcardType_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"java.lang.reflect.WildcardType",
	nullptr,
	"java.lang.reflect.Type",
	nullptr,
	_WildcardType_MethodInfo_
};

$Object* allocate$WildcardType($Class* clazz) {
	return $of($alloc(WildcardType));
}

$Class* WildcardType::load$($String* name, bool initialize) {
	$loadClass(WildcardType, name, initialize, &_WildcardType_ClassInfo_, allocate$WildcardType);
	return class$;
}

$Class* WildcardType::class$ = nullptr;

		} // reflect
	} // lang
} // java