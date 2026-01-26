#include <jdk/internal/access/JavaAWTFontAccess.h>

#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace jdk {
	namespace internal {
		namespace access {

$MethodInfo _JavaAWTFontAccess_MethodInfo_[] = {
	{"getTextAttributeConstant", "(Ljava/lang/String;)Ljava/lang/Object;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(JavaAWTFontAccess, getTextAttributeConstant, $Object*, $String*)},
	{"shape", "(Ljava/lang/Object;[CII)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(JavaAWTFontAccess, shape, void, Object$*, $chars*, int32_t, int32_t)},
	{}
};

$ClassInfo _JavaAWTFontAccess_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"jdk.internal.access.JavaAWTFontAccess",
	nullptr,
	nullptr,
	nullptr,
	_JavaAWTFontAccess_MethodInfo_
};

$Object* allocate$JavaAWTFontAccess($Class* clazz) {
	return $of($alloc(JavaAWTFontAccess));
}

$Class* JavaAWTFontAccess::load$($String* name, bool initialize) {
	$loadClass(JavaAWTFontAccess, name, initialize, &_JavaAWTFontAccess_ClassInfo_, allocate$JavaAWTFontAccess);
	return class$;
}

$Class* JavaAWTFontAccess::class$ = nullptr;

		} // access
	} // internal
} // jdk