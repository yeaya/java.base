#include <com/sun/crypto/provider/AESConstants.h>

#include <jcpp.h>

#undef AES_BLOCK_SIZE
#undef AES_KEYSIZES

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;

namespace com {
	namespace sun {
		namespace crypto {
			namespace provider {

$FieldInfo _AESConstants_FieldInfo_[] = {
	{"AES_BLOCK_SIZE", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(AESConstants, AES_BLOCK_SIZE)},
	{"AES_KEYSIZES", "[I", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(AESConstants, AES_KEYSIZES)},
	{}
};

$ClassInfo _AESConstants_ClassInfo_ = {
	$INTERFACE | $ABSTRACT,
	"com.sun.crypto.provider.AESConstants",
	nullptr,
	nullptr,
	_AESConstants_FieldInfo_
};

$Object* allocate$AESConstants($Class* clazz) {
	return $of($alloc(AESConstants));
}

$ints* AESConstants::AES_KEYSIZES = nullptr;

void clinit$AESConstants($Class* class$) {
	$assignStatic(AESConstants::AES_KEYSIZES, $new($ints, {
		16,
		24,
		32
	}));
}

$Class* AESConstants::load$($String* name, bool initialize) {
	$loadClass(AESConstants, name, initialize, &_AESConstants_ClassInfo_, clinit$AESConstants, allocate$AESConstants);
	return class$;
}

$Class* AESConstants::class$ = nullptr;

			} // provider
		} // crypto
	} // sun
} // com