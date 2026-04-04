#include <com/sun/crypto/provider/DESConstants.h>
#include <jcpp.h>

#undef DES_BLOCK_SIZE

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;

namespace com {
	namespace sun {
		namespace crypto {
			namespace provider {

$Class* DESConstants::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"DES_BLOCK_SIZE", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(DESConstants, DES_BLOCK_SIZE)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$INTERFACE | $ABSTRACT,
		"com.sun.crypto.provider.DESConstants",
		nullptr,
		nullptr,
		fieldInfos$$
	};
	$loadClass(DESConstants, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(DESConstants);
	});
	return class$;
}

$Class* DESConstants::class$ = nullptr;

			} // provider
		} // crypto
	} // sun
} // com