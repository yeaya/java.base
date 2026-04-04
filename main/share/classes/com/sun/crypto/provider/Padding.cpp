#include <com/sun/crypto/provider/Padding.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace crypto {
			namespace provider {

$Class* Padding::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"padLength", "(I)I", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Padding, padLength, int32_t, int32_t)},
		{"padWithLen", "([BII)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Padding, padWithLen, void, $bytes*, int32_t, int32_t), "javax.crypto.ShortBufferException"},
		{"unpad", "([BII)I", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Padding, unpad, int32_t, $bytes*, int32_t, int32_t)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$INTERFACE | $ABSTRACT,
		"com.sun.crypto.provider.Padding",
		nullptr,
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(Padding, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Padding);
	});
	return class$;
}

$Class* Padding::class$ = nullptr;

			} // provider
		} // crypto
	} // sun
} // com