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

$ints* AESConstants::AES_KEYSIZES = nullptr;

void AESConstants::clinit$($Class* clazz) {
	$assignStatic(AESConstants::AES_KEYSIZES, $new($ints, {
		16,
		24,
		32
	}));
}

$Class* AESConstants::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"AES_BLOCK_SIZE", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(AESConstants, AES_BLOCK_SIZE)},
		{"AES_KEYSIZES", "[I", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(AESConstants, AES_KEYSIZES)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$INTERFACE | $ABSTRACT,
		"com.sun.crypto.provider.AESConstants",
		nullptr,
		nullptr,
		fieldInfos$$
	};
	$loadClass(AESConstants, name, initialize, &classInfo$$, AESConstants::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(AESConstants);
	});
	return class$;
}

$Class* AESConstants::class$ = nullptr;

			} // provider
		} // crypto
	} // sun
} // com