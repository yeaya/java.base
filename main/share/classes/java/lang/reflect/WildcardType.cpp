#include <java/lang/reflect/WildcardType.h>
#include <java/lang/reflect/Type.h>
#include <jcpp.h>

using $TypeArray = $Array<::java::lang::reflect::Type>;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace lang {
		namespace reflect {

$Class* WildcardType::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"getLowerBounds", "()[Ljava/lang/reflect/Type;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(WildcardType, getLowerBounds, $TypeArray*)},
		{"getUpperBounds", "()[Ljava/lang/reflect/Type;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(WildcardType, getUpperBounds, $TypeArray*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"java.lang.reflect.WildcardType",
		nullptr,
		"java.lang.reflect.Type",
		nullptr,
		methodInfos$$
	};
	$loadClass(WildcardType, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(WildcardType);
	});
	return class$;
}

$Class* WildcardType::class$ = nullptr;

		} // reflect
	} // lang
} // java