#include <sun/security/pkcs12/PKCS12KeyStore$RetryWithZero.h>
#include <sun/security/pkcs12/PKCS12KeyStore.h>
#include <sun/security/util/Debug.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $Exception = ::java::lang::Exception;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $PKCS12KeyStore = ::sun::security::pkcs12::PKCS12KeyStore;

namespace sun {
	namespace security {
		namespace pkcs12 {

$Object* PKCS12KeyStore$RetryWithZero::run(PKCS12KeyStore$RetryWithZero* f, $chars* password) {
	try {
		return $nc(f)->tryOnce(password);
	} catch ($Exception& e) {
		if ($nc(password)->length == 0) {
			$init($PKCS12KeyStore);
			if ($PKCS12KeyStore::debug != nullptr) {
				$PKCS12KeyStore::debug->println("Retry with a NUL password"_s);
			}
			return $nc(f)->tryOnce($$new($chars, 1));
		}
		$throw(e);
	}
	$shouldNotReachHere();
}

$Class* PKCS12KeyStore$RetryWithZero::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"run", "(Lsun/security/pkcs12/PKCS12KeyStore$RetryWithZero;[C)Ljava/lang/Object;", "<S:Ljava/lang/Object;>(Lsun/security/pkcs12/PKCS12KeyStore$RetryWithZero<TS;>;[C)TS;", $PUBLIC | $STATIC, $staticMethod(PKCS12KeyStore$RetryWithZero, run, $Object*, PKCS12KeyStore$RetryWithZero*, $chars*), "java.lang.Exception"},
		{"tryOnce", "([C)Ljava/lang/Object;", "([C)TT;", $PUBLIC | $ABSTRACT, $virtualMethod(PKCS12KeyStore$RetryWithZero, tryOnce, $Object*, $chars*), "java.lang.Exception"},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.security.pkcs12.PKCS12KeyStore$RetryWithZero", "sun.security.pkcs12.PKCS12KeyStore", "RetryWithZero", $PRIVATE | $STATIC | $INTERFACE | $ABSTRACT},
		{}
	};
	$CompoundAttribute annotations$$[] = {
		{"Ljava/lang/FunctionalInterface;", nullptr},
		{}
	};
	$ClassInfo classInfo$$ = {
		$INTERFACE | $ABSTRACT,
		"sun.security.pkcs12.PKCS12KeyStore$RetryWithZero",
		nullptr,
		nullptr,
		nullptr,
		methodInfos$$,
		"<T:Ljava/lang/Object;>Ljava/lang/Object;",
		nullptr,
		innerClassesInfo$$,
		annotations$$,
		nullptr,
		nullptr,
		"sun.security.pkcs12.PKCS12KeyStore"
	};
	$loadClass(PKCS12KeyStore$RetryWithZero, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(PKCS12KeyStore$RetryWithZero);
	});
	return class$;
}

$Class* PKCS12KeyStore$RetryWithZero::class$ = nullptr;

		} // pkcs12
	} // security
} // sun