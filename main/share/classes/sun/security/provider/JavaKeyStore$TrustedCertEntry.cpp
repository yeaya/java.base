#include <sun/security/provider/JavaKeyStore$TrustedCertEntry.h>
#include <java/security/cert/Certificate.h>
#include <java/util/Date.h>
#include <sun/security/provider/JavaKeyStore.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace sun {
	namespace security {
		namespace provider {

void JavaKeyStore$TrustedCertEntry::init$() {
}

JavaKeyStore$TrustedCertEntry::JavaKeyStore$TrustedCertEntry() {
}

$Class* JavaKeyStore$TrustedCertEntry::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"date", "Ljava/util/Date;", nullptr, 0, $field(JavaKeyStore$TrustedCertEntry, date)},
		{"cert", "Ljava/security/cert/Certificate;", nullptr, 0, $field(JavaKeyStore$TrustedCertEntry, cert)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PRIVATE, $method(JavaKeyStore$TrustedCertEntry, init$, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.security.provider.JavaKeyStore$TrustedCertEntry", "sun.security.provider.JavaKeyStore", "TrustedCertEntry", $PRIVATE | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.security.provider.JavaKeyStore$TrustedCertEntry",
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
		"sun.security.provider.JavaKeyStore"
	};
	$loadClass(JavaKeyStore$TrustedCertEntry, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(JavaKeyStore$TrustedCertEntry);
	});
	return class$;
}

$Class* JavaKeyStore$TrustedCertEntry::class$ = nullptr;

		} // provider
	} // security
} // sun