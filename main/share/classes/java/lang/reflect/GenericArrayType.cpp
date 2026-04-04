#include <java/lang/reflect/GenericArrayType.h>
#include <java/lang/reflect/Type.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Type = ::java::lang::reflect::Type;

namespace java {
	namespace lang {
		namespace reflect {

$Class* GenericArrayType::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"getGenericComponentType", "()Ljava/lang/reflect/Type;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(GenericArrayType, getGenericComponentType, $Type*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"java.lang.reflect.GenericArrayType",
		nullptr,
		"java.lang.reflect.Type",
		nullptr,
		methodInfos$$
	};
	$loadClass(GenericArrayType, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(GenericArrayType);
	});
	return class$;
}

$Class* GenericArrayType::class$ = nullptr;

		} // reflect
	} // lang
} // java