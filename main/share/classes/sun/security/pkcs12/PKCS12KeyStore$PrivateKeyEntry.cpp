#include <sun/security/pkcs12/PKCS12KeyStore$PrivateKeyEntry.h>
#include <java/security/cert/Certificate.h>
#include <sun/security/pkcs12/PKCS12KeyStore$KeyEntry.h>
#include <sun/security/pkcs12/PKCS12KeyStore.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $PKCS12KeyStore$KeyEntry = ::sun::security::pkcs12::PKCS12KeyStore$KeyEntry;

namespace sun {
	namespace security {
		namespace pkcs12 {

void PKCS12KeyStore$PrivateKeyEntry::init$() {
	$PKCS12KeyStore$KeyEntry::init$();
}

PKCS12KeyStore$PrivateKeyEntry::PKCS12KeyStore$PrivateKeyEntry() {
}

$Class* PKCS12KeyStore$PrivateKeyEntry::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"protectedPrivKey", "[B", nullptr, 0, $field(PKCS12KeyStore$PrivateKeyEntry, protectedPrivKey)},
		{"chain", "[Ljava/security/cert/Certificate;", nullptr, 0, $field(PKCS12KeyStore$PrivateKeyEntry, chain)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PRIVATE, $method(PKCS12KeyStore$PrivateKeyEntry, init$, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.security.pkcs12.PKCS12KeyStore$PrivateKeyEntry", "sun.security.pkcs12.PKCS12KeyStore", "PrivateKeyEntry", $PRIVATE | $STATIC},
		{"sun.security.pkcs12.PKCS12KeyStore$KeyEntry", "sun.security.pkcs12.PKCS12KeyStore", "KeyEntry", $PRIVATE | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.security.pkcs12.PKCS12KeyStore$PrivateKeyEntry",
		"sun.security.pkcs12.PKCS12KeyStore$KeyEntry",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"sun.security.pkcs12.PKCS12KeyStore"
	};
	$loadClass(PKCS12KeyStore$PrivateKeyEntry, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(PKCS12KeyStore$PrivateKeyEntry);
	});
	return class$;
}

$Class* PKCS12KeyStore$PrivateKeyEntry::class$ = nullptr;

		} // pkcs12
	} // security
} // sun