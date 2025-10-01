#include <com/sun/crypto/provider/AESCipher$OidImpl.h>

#include <com/sun/crypto/provider/AESCipher.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/Exception.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/NullPointerException.h>
#include <java/lang/String.h>
#include <java/lang/Throwable.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/security/GeneralSecurityException.h>
#include <java/security/ProviderException.h>
#include <jcpp.h>

using $AESCipher = ::com::sun::crypto::provider::AESCipher;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $GeneralSecurityException = ::java::security::GeneralSecurityException;
using $ProviderException = ::java::security::ProviderException;

namespace com {
	namespace sun {
		namespace crypto {
			namespace provider {

$MethodInfo _AESCipher$OidImpl_MethodInfo_[] = {
	{"<init>", "(ILjava/lang/String;Ljava/lang/String;)V", nullptr, $PROTECTED, $method(static_cast<void(AESCipher$OidImpl::*)(int32_t,$String*,$String*)>(&AESCipher$OidImpl::init$))},
	{}
};

$InnerClassInfo _AESCipher$OidImpl_InnerClassesInfo_[] = {
	{"com.sun.crypto.provider.AESCipher$OidImpl", "com.sun.crypto.provider.AESCipher", "OidImpl", $STATIC | $ABSTRACT},
	{}
};

$ClassInfo _AESCipher$OidImpl_ClassInfo_ = {
	$ACC_SUPER | $ABSTRACT,
	"com.sun.crypto.provider.AESCipher$OidImpl",
	"com.sun.crypto.provider.AESCipher",
	nullptr,
	nullptr,
	_AESCipher$OidImpl_MethodInfo_,
	nullptr,
	nullptr,
	_AESCipher$OidImpl_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.crypto.provider.AESCipher"
};

$Object* allocate$AESCipher$OidImpl($Class* clazz) {
	return $of($alloc(AESCipher$OidImpl));
}

void AESCipher$OidImpl::init$(int32_t keySize, $String* mode, $String* padding) {
	$AESCipher::init$(keySize);
	try {
		engineSetMode(mode);
		engineSetPadding(padding);
	} catch ($GeneralSecurityException&) {
		$var($GeneralSecurityException, gse, $catch());
		$var($ProviderException, pe, $new($ProviderException, "Internal Error"_s));
		pe->initCause(gse);
		$throw(pe);
	}
}

AESCipher$OidImpl::AESCipher$OidImpl() {
}

$Class* AESCipher$OidImpl::load$($String* name, bool initialize) {
	$loadClass(AESCipher$OidImpl, name, initialize, &_AESCipher$OidImpl_ClassInfo_, allocate$AESCipher$OidImpl);
	return class$;
}

$Class* AESCipher$OidImpl::class$ = nullptr;

			} // provider
		} // crypto
	} // sun
} // com