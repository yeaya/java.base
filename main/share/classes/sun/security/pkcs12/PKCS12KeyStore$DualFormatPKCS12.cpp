#include <sun/security/pkcs12/PKCS12KeyStore$DualFormatPKCS12.h>

#include <sun/security/pkcs12/PKCS12KeyStore.h>
#include <sun/security/provider/JavaKeyStore$JKS.h>
#include <sun/security/util/KeyStoreDelegator.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $PKCS12KeyStore = ::sun::security::pkcs12::PKCS12KeyStore;
using $JavaKeyStore$JKS = ::sun::security::provider::JavaKeyStore$JKS;
using $KeyStoreDelegator = ::sun::security::util::KeyStoreDelegator;

namespace sun {
	namespace security {
		namespace pkcs12 {

$MethodInfo _PKCS12KeyStore$DualFormatPKCS12_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(PKCS12KeyStore$DualFormatPKCS12, init$, void)},
	{}
};

$InnerClassInfo _PKCS12KeyStore$DualFormatPKCS12_InnerClassesInfo_[] = {
	{"sun.security.pkcs12.PKCS12KeyStore$DualFormatPKCS12", "sun.security.pkcs12.PKCS12KeyStore", "DualFormatPKCS12", $PUBLIC | $STATIC | $FINAL},
	{}
};

$ClassInfo _PKCS12KeyStore$DualFormatPKCS12_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"sun.security.pkcs12.PKCS12KeyStore$DualFormatPKCS12",
	"sun.security.util.KeyStoreDelegator",
	nullptr,
	nullptr,
	_PKCS12KeyStore$DualFormatPKCS12_MethodInfo_,
	nullptr,
	nullptr,
	_PKCS12KeyStore$DualFormatPKCS12_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.security.pkcs12.PKCS12KeyStore"
};

$Object* allocate$PKCS12KeyStore$DualFormatPKCS12($Class* clazz) {
	return $of($alloc(PKCS12KeyStore$DualFormatPKCS12));
}

void PKCS12KeyStore$DualFormatPKCS12::init$() {
	$load($PKCS12KeyStore);
	$load($JavaKeyStore$JKS);
	$KeyStoreDelegator::init$("PKCS12"_s, $PKCS12KeyStore::class$, "JKS"_s, $JavaKeyStore$JKS::class$);
}

PKCS12KeyStore$DualFormatPKCS12::PKCS12KeyStore$DualFormatPKCS12() {
}

$Class* PKCS12KeyStore$DualFormatPKCS12::load$($String* name, bool initialize) {
	$loadClass(PKCS12KeyStore$DualFormatPKCS12, name, initialize, &_PKCS12KeyStore$DualFormatPKCS12_ClassInfo_, allocate$PKCS12KeyStore$DualFormatPKCS12);
	return class$;
}

$Class* PKCS12KeyStore$DualFormatPKCS12::class$ = nullptr;

		} // pkcs12
	} // security
} // sun