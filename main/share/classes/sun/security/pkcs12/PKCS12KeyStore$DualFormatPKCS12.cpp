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

void PKCS12KeyStore$DualFormatPKCS12::init$() {
	$load($PKCS12KeyStore);
	$load($JavaKeyStore$JKS);
	$KeyStoreDelegator::init$("PKCS12"_s, $PKCS12KeyStore::class$, "JKS"_s, $JavaKeyStore$JKS::class$);
}

PKCS12KeyStore$DualFormatPKCS12::PKCS12KeyStore$DualFormatPKCS12() {
}

$Class* PKCS12KeyStore$DualFormatPKCS12::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(PKCS12KeyStore$DualFormatPKCS12, init$, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.security.pkcs12.PKCS12KeyStore$DualFormatPKCS12", "sun.security.pkcs12.PKCS12KeyStore", "DualFormatPKCS12", $PUBLIC | $STATIC | $FINAL},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL | $ACC_SUPER,
		"sun.security.pkcs12.PKCS12KeyStore$DualFormatPKCS12",
		"sun.security.util.KeyStoreDelegator",
		nullptr,
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"sun.security.pkcs12.PKCS12KeyStore"
	};
	$loadClass(PKCS12KeyStore$DualFormatPKCS12, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(PKCS12KeyStore$DualFormatPKCS12);
	});
	return class$;
}

$Class* PKCS12KeyStore$DualFormatPKCS12::class$ = nullptr;

		} // pkcs12
	} // security
} // sun