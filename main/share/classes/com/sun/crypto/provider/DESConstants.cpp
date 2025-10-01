#include <com/sun/crypto/provider/DESConstants.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

#undef DES_BLOCK_SIZE

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;

namespace com {
	namespace sun {
		namespace crypto {
			namespace provider {

$FieldInfo _DESConstants_FieldInfo_[] = {
	{"DES_BLOCK_SIZE", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(DESConstants, DES_BLOCK_SIZE)},
	{}
};

$ClassInfo _DESConstants_ClassInfo_ = {
	$INTERFACE | $ABSTRACT,
	"com.sun.crypto.provider.DESConstants",
	nullptr,
	nullptr,
	_DESConstants_FieldInfo_
};

$Object* allocate$DESConstants($Class* clazz) {
	return $of($alloc(DESConstants));
}

$Class* DESConstants::load$($String* name, bool initialize) {
	$loadClass(DESConstants, name, initialize, &_DESConstants_ClassInfo_, allocate$DESConstants);
	return class$;
}

$Class* DESConstants::class$ = nullptr;

			} // provider
		} // crypto
	} // sun
} // com