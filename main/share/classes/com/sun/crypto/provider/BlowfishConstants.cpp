#include <com/sun/crypto/provider/BlowfishConstants.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

#undef BLOWFISH_BLOCK_SIZE
#undef BLOWFISH_MAX_KEYSIZE

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;

namespace com {
	namespace sun {
		namespace crypto {
			namespace provider {

$FieldInfo _BlowfishConstants_FieldInfo_[] = {
	{"BLOWFISH_BLOCK_SIZE", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(BlowfishConstants, BLOWFISH_BLOCK_SIZE)},
	{"BLOWFISH_MAX_KEYSIZE", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(BlowfishConstants, BLOWFISH_MAX_KEYSIZE)},
	{}
};

$ClassInfo _BlowfishConstants_ClassInfo_ = {
	$INTERFACE | $ABSTRACT,
	"com.sun.crypto.provider.BlowfishConstants",
	nullptr,
	nullptr,
	_BlowfishConstants_FieldInfo_
};

$Object* allocate$BlowfishConstants($Class* clazz) {
	return $of($alloc(BlowfishConstants));
}

$Class* BlowfishConstants::load$($String* name, bool initialize) {
	$loadClass(BlowfishConstants, name, initialize, &_BlowfishConstants_ClassInfo_, allocate$BlowfishConstants);
	return class$;
}

$Class* BlowfishConstants::class$ = nullptr;

			} // provider
		} // crypto
	} // sun
} // com