#include <com/sun/crypto/provider/JceKeyStore$TrustedCertEntry.h>
#include <com/sun/crypto/provider/JceKeyStore.h>
#include <java/security/cert/Certificate.h>
#include <java/util/Date.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace crypto {
			namespace provider {

void JceKeyStore$TrustedCertEntry::init$() {
}

JceKeyStore$TrustedCertEntry::JceKeyStore$TrustedCertEntry() {
}

$Class* JceKeyStore$TrustedCertEntry::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"date", "Ljava/util/Date;", nullptr, 0, $field(JceKeyStore$TrustedCertEntry, date)},
		{"cert", "Ljava/security/cert/Certificate;", nullptr, 0, $field(JceKeyStore$TrustedCertEntry, cert)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PRIVATE, $method(JceKeyStore$TrustedCertEntry, init$, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.crypto.provider.JceKeyStore$TrustedCertEntry", "com.sun.crypto.provider.JceKeyStore", "TrustedCertEntry", $PRIVATE | $STATIC | $FINAL},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"com.sun.crypto.provider.JceKeyStore$TrustedCertEntry",
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
		"com.sun.crypto.provider.JceKeyStore"
	};
	$loadClass(JceKeyStore$TrustedCertEntry, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(JceKeyStore$TrustedCertEntry);
	});
	return class$;
}

$Class* JceKeyStore$TrustedCertEntry::class$ = nullptr;

			} // provider
		} // crypto
	} // sun
} // com