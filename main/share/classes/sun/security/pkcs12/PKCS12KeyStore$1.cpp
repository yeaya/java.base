#include <sun/security/pkcs12/PKCS12KeyStore$1.h>
#include <java/security/Security.h>
#include <sun/security/pkcs12/PKCS12KeyStore.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Security = ::java::security::Security;

namespace sun {
	namespace security {
		namespace pkcs12 {

void PKCS12KeyStore$1::init$() {
}

$Object* PKCS12KeyStore$1::run() {
	$useLocalObjectStack();
	$var($String, result, nullptr);
	$var($String, name1, "keystore.pkcs12.keyProtectionAlgorithm"_s);
	$var($String, name2, "keystore.PKCS12.keyProtectionAlgorithm"_s);
	$assign(result, $System::getProperty(name1));
	if (result != nullptr) {
		return $of(result);
	}
	$assign(result, $System::getProperty(name2));
	if (result != nullptr) {
		return $of(result);
	}
	$assign(result, $Security::getProperty(name1));
	if (result != nullptr) {
		return $of(result);
	}
	return $of($Security::getProperty(name2));
}

PKCS12KeyStore$1::PKCS12KeyStore$1() {
}

$Class* PKCS12KeyStore$1::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(PKCS12KeyStore$1, init$, void)},
		{"run", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(PKCS12KeyStore$1, run, $Object*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"sun.security.pkcs12.PKCS12KeyStore",
		"defaultKeyProtectionAlgorithm",
		"()Ljava/lang/String;"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.security.pkcs12.PKCS12KeyStore$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.security.pkcs12.PKCS12KeyStore$1",
		"java.lang.Object",
		"java.security.PrivilegedAction",
		nullptr,
		methodInfos$$,
		"Ljava/lang/Object;Ljava/security/PrivilegedAction<Ljava/lang/String;>;",
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"sun.security.pkcs12.PKCS12KeyStore"
	};
	$loadClass(PKCS12KeyStore$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(PKCS12KeyStore$1);
	});
	return class$;
}

$Class* PKCS12KeyStore$1::class$ = nullptr;

		} // pkcs12
	} // security
} // sun