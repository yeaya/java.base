#include <apple/security/KeychainStore$TrustedCertEntry.h>
#include <apple/security/KeychainStore.h>
#include <java/security/cert/Certificate.h>
#include <java/util/Date.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace apple {
	namespace security {

void KeychainStore$TrustedCertEntry::init$() {
}

KeychainStore$TrustedCertEntry::KeychainStore$TrustedCertEntry() {
}

$Class* KeychainStore$TrustedCertEntry::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"date", "Ljava/util/Date;", nullptr, 0, $field(KeychainStore$TrustedCertEntry, date)},
		{"cert", "Ljava/security/cert/Certificate;", nullptr, 0, $field(KeychainStore$TrustedCertEntry, cert)},
		{"certRef", "J", nullptr, 0, $field(KeychainStore$TrustedCertEntry, certRef)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(KeychainStore$TrustedCertEntry, init$, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"apple.security.KeychainStore$TrustedCertEntry", "apple.security.KeychainStore", "TrustedCertEntry", $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"apple.security.KeychainStore$TrustedCertEntry",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"apple.security.KeychainStore"
	};
	$loadClass(KeychainStore$TrustedCertEntry, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(KeychainStore$TrustedCertEntry);
	});
	return class$;
}

$Class* KeychainStore$TrustedCertEntry::class$ = nullptr;

	} // security
} // apple