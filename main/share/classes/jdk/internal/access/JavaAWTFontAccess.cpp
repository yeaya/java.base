#include <jdk/internal/access/JavaAWTFontAccess.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace jdk {
	namespace internal {
		namespace access {

$Class* JavaAWTFontAccess::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"getTextAttributeConstant", "(Ljava/lang/String;)Ljava/lang/Object;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(JavaAWTFontAccess, getTextAttributeConstant, $Object*, $String*)},
		{"shape", "(Ljava/lang/Object;[CII)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(JavaAWTFontAccess, shape, void, Object$*, $chars*, int32_t, int32_t)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"jdk.internal.access.JavaAWTFontAccess",
		nullptr,
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(JavaAWTFontAccess, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(JavaAWTFontAccess);
	});
	return class$;
}

$Class* JavaAWTFontAccess::class$ = nullptr;

		} // access
	} // internal
} // jdk