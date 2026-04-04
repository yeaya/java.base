#include <com/sun/crypto/provider/BlowfishConstants.h>
#include <jcpp.h>

#undef BLOWFISH_BLOCK_SIZE
#undef BLOWFISH_MAX_KEYSIZE

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;

namespace com {
	namespace sun {
		namespace crypto {
			namespace provider {

$Class* BlowfishConstants::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"BLOWFISH_BLOCK_SIZE", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(BlowfishConstants, BLOWFISH_BLOCK_SIZE)},
		{"BLOWFISH_MAX_KEYSIZE", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(BlowfishConstants, BLOWFISH_MAX_KEYSIZE)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$INTERFACE | $ABSTRACT,
		"com.sun.crypto.provider.BlowfishConstants",
		nullptr,
		nullptr,
		fieldInfos$$
	};
	$loadClass(BlowfishConstants, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(BlowfishConstants);
	});
	return class$;
}

$Class* BlowfishConstants::class$ = nullptr;

			} // provider
		} // crypto
	} // sun
} // com