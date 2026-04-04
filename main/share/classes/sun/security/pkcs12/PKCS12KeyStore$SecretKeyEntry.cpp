#include <sun/security/pkcs12/PKCS12KeyStore$SecretKeyEntry.h>
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

void PKCS12KeyStore$SecretKeyEntry::init$() {
	$PKCS12KeyStore$KeyEntry::init$();
}

PKCS12KeyStore$SecretKeyEntry::PKCS12KeyStore$SecretKeyEntry() {
}

$Class* PKCS12KeyStore$SecretKeyEntry::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"protectedSecretKey", "[B", nullptr, 0, $field(PKCS12KeyStore$SecretKeyEntry, protectedSecretKey)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PRIVATE, $method(PKCS12KeyStore$SecretKeyEntry, init$, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.security.pkcs12.PKCS12KeyStore$SecretKeyEntry", "sun.security.pkcs12.PKCS12KeyStore", "SecretKeyEntry", $PRIVATE | $STATIC},
		{"sun.security.pkcs12.PKCS12KeyStore$KeyEntry", "sun.security.pkcs12.PKCS12KeyStore", "KeyEntry", $PRIVATE | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.security.pkcs12.PKCS12KeyStore$SecretKeyEntry",
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
	$loadClass(PKCS12KeyStore$SecretKeyEntry, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(PKCS12KeyStore$SecretKeyEntry);
	});
	return class$;
}

$Class* PKCS12KeyStore$SecretKeyEntry::class$ = nullptr;

		} // pkcs12
	} // security
} // sun