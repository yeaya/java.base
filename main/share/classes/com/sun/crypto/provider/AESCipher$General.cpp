#include <com/sun/crypto/provider/AESCipher$General.h>

#include <com/sun/crypto/provider/AESCipher.h>
#include <jcpp.h>

using $AESCipher = ::com::sun::crypto::provider::AESCipher;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace crypto {
			namespace provider {

$MethodInfo _AESCipher$General_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(AESCipher$General::*)()>(&AESCipher$General::init$))},
	{}
};

$InnerClassInfo _AESCipher$General_InnerClassesInfo_[] = {
	{"com.sun.crypto.provider.AESCipher$General", "com.sun.crypto.provider.AESCipher", "General", $PUBLIC | $STATIC | $FINAL},
	{}
};

$ClassInfo _AESCipher$General_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"com.sun.crypto.provider.AESCipher$General",
	"com.sun.crypto.provider.AESCipher",
	nullptr,
	nullptr,
	_AESCipher$General_MethodInfo_,
	nullptr,
	nullptr,
	_AESCipher$General_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.crypto.provider.AESCipher"
};

$Object* allocate$AESCipher$General($Class* clazz) {
	return $of($alloc(AESCipher$General));
}

void AESCipher$General::init$() {
	$AESCipher::init$(-1);
}

AESCipher$General::AESCipher$General() {
}

$Class* AESCipher$General::load$($String* name, bool initialize) {
	$loadClass(AESCipher$General, name, initialize, &_AESCipher$General_ClassInfo_, allocate$AESCipher$General);
	return class$;
}

$Class* AESCipher$General::class$ = nullptr;

			} // provider
		} // crypto
	} // sun
} // com