#include <com/sun/crypto/provider/Padding.h>

#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace crypto {
			namespace provider {

$MethodInfo _Padding_MethodInfo_[] = {
	{"padLength", "(I)I", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Padding, padLength, int32_t, int32_t)},
	{"padWithLen", "([BII)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Padding, padWithLen, void, $bytes*, int32_t, int32_t), "javax.crypto.ShortBufferException"},
	{"unpad", "([BII)I", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Padding, unpad, int32_t, $bytes*, int32_t, int32_t)},
	{}
};

$ClassInfo _Padding_ClassInfo_ = {
	$INTERFACE | $ABSTRACT,
	"com.sun.crypto.provider.Padding",
	nullptr,
	nullptr,
	nullptr,
	_Padding_MethodInfo_
};

$Object* allocate$Padding($Class* clazz) {
	return $of($alloc(Padding));
}

$Class* Padding::load$($String* name, bool initialize) {
	$loadClass(Padding, name, initialize, &_Padding_ClassInfo_, allocate$Padding);
	return class$;
}

$Class* Padding::class$ = nullptr;

			} // provider
		} // crypto
	} // sun
} // com