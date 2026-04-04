#include <sun/security/pkcs12/PKCS12KeyStore$KeyEntry.h>
#include <sun/security/pkcs12/PKCS12KeyStore$Entry.h>
#include <sun/security/pkcs12/PKCS12KeyStore.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $PKCS12KeyStore$Entry = ::sun::security::pkcs12::PKCS12KeyStore$Entry;

namespace sun {
	namespace security {
		namespace pkcs12 {

void PKCS12KeyStore$KeyEntry::init$() {
	$PKCS12KeyStore$Entry::init$();
}

PKCS12KeyStore$KeyEntry::PKCS12KeyStore$KeyEntry() {
}

$Class* PKCS12KeyStore$KeyEntry::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PRIVATE, $method(PKCS12KeyStore$KeyEntry, init$, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.security.pkcs12.PKCS12KeyStore$KeyEntry", "sun.security.pkcs12.PKCS12KeyStore", "KeyEntry", $PRIVATE | $STATIC},
		{"sun.security.pkcs12.PKCS12KeyStore$Entry", "sun.security.pkcs12.PKCS12KeyStore", "Entry", $PRIVATE | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.security.pkcs12.PKCS12KeyStore$KeyEntry",
		"sun.security.pkcs12.PKCS12KeyStore$Entry",
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
	$loadClass(PKCS12KeyStore$KeyEntry, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(PKCS12KeyStore$KeyEntry);
	});
	return class$;
}

$Class* PKCS12KeyStore$KeyEntry::class$ = nullptr;

		} // pkcs12
	} // security
} // sun