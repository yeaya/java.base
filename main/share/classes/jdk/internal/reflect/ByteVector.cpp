#include <jdk/internal/reflect/ByteVector.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace jdk {
	namespace internal {
		namespace reflect {

$Class* ByteVector::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"add", "(B)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ByteVector, add, void, int8_t)},
		{"get", "(I)B", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ByteVector, get, int8_t, int32_t)},
		{"getData", "()[B", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ByteVector, getData, $bytes*)},
		{"getLength", "()I", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ByteVector, getLength, int32_t)},
		{"put", "(IB)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ByteVector, put, void, int32_t, int8_t)},
		{"trim", "()V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ByteVector, trim, void)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$INTERFACE | $ABSTRACT,
		"jdk.internal.reflect.ByteVector",
		nullptr,
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(ByteVector, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ByteVector);
	});
	return class$;
}

$Class* ByteVector::class$ = nullptr;

		} // reflect
	} // internal
} // jdk