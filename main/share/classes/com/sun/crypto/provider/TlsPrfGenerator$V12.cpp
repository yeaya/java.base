#include <com/sun/crypto/provider/TlsPrfGenerator$V12.h>

#include <com/sun/crypto/provider/TlsPrfGenerator.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/crypto/SecretKey.h>
#include <jcpp.h>

using $TlsPrfGenerator = ::com::sun::crypto::provider::TlsPrfGenerator;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $SecretKey = ::javax::crypto::SecretKey;

namespace com {
	namespace sun {
		namespace crypto {
			namespace provider {

$MethodInfo _TlsPrfGenerator$V12_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(TlsPrfGenerator$V12::*)()>(&TlsPrfGenerator$V12::init$))},
	{"engineGenerateKey", "()Ljavax/crypto/SecretKey;", nullptr, $PROTECTED},
	{}
};

$InnerClassInfo _TlsPrfGenerator$V12_InnerClassesInfo_[] = {
	{"com.sun.crypto.provider.TlsPrfGenerator$V12", "com.sun.crypto.provider.TlsPrfGenerator", "V12", $PUBLIC | $STATIC},
	{}
};

$ClassInfo _TlsPrfGenerator$V12_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.crypto.provider.TlsPrfGenerator$V12",
	"com.sun.crypto.provider.TlsPrfGenerator",
	nullptr,
	nullptr,
	_TlsPrfGenerator$V12_MethodInfo_,
	nullptr,
	nullptr,
	_TlsPrfGenerator$V12_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.crypto.provider.TlsPrfGenerator"
};

$Object* allocate$TlsPrfGenerator$V12($Class* clazz) {
	return $of($alloc(TlsPrfGenerator$V12));
}

void TlsPrfGenerator$V12::init$() {
	$TlsPrfGenerator::init$();
}

$SecretKey* TlsPrfGenerator$V12::engineGenerateKey() {
	return engineGenerateKey0(true);
}

TlsPrfGenerator$V12::TlsPrfGenerator$V12() {
}

$Class* TlsPrfGenerator$V12::load$($String* name, bool initialize) {
	$loadClass(TlsPrfGenerator$V12, name, initialize, &_TlsPrfGenerator$V12_ClassInfo_, allocate$TlsPrfGenerator$V12);
	return class$;
}

$Class* TlsPrfGenerator$V12::class$ = nullptr;

			} // provider
		} // crypto
	} // sun
} // com