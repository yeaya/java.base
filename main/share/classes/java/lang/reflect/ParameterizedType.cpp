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

$Class* ParameterizedType::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"getActualTypeArguments", "()[Ljava/lang/reflect/Type;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ParameterizedType, getActualTypeArguments, $TypeArray*)},
		{"getOwnerType", "()Ljava/lang/reflect/Type;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ParameterizedType, getOwnerType, $Type*)},
		{"getRawType", "()Ljava/lang/reflect/Type;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ParameterizedType, getRawType, $Type*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"java.lang.reflect.ParameterizedType",
		nullptr,
		"java.lang.reflect.Type",
		nullptr,
		methodInfos$$
	};
	$loadClass(ParameterizedType, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ParameterizedType);
	});
	return class$;
}

$Class* ParameterizedType::class$ = nullptr;

		} // reflect
	} // lang
} // java