#include <sun/security/pkcs12/PKCS12KeyStore$RetryWithZero.h>

#include <sun/security/pkcs12/PKCS12KeyStore.h>
#include <sun/security/util/Debug.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $Exception = ::java::lang::Exception;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $PKCS12KeyStore = ::sun::security::pkcs12::PKCS12KeyStore;
using $Debug = ::sun::security::util::Debug;

namespace sun {
	namespace security {
		namespace pkcs12 {

$CompoundAttribute _PKCS12KeyStore$RetryWithZero_Annotations_[] = {
	{"Ljava/lang/FunctionalInterface;", nullptr},
	{}
};

$MethodInfo _PKCS12KeyStore$RetryWithZero_MethodInfo_[] = {
	{"run", "(Lsun/security/pkcs12/PKCS12KeyStore$RetryWithZero;[C)Ljava/lang/Object;", "<S:Ljava/lang/Object;>(Lsun/security/pkcs12/PKCS12KeyStore$RetryWithZero<TS;>;[C)TS;", $PUBLIC | $STATIC, $method(static_cast<$Object*(*)(PKCS12KeyStore$RetryWithZero*,$chars*)>(&PKCS12KeyStore$RetryWithZero::run)), "java.lang.Exception"},
	{"tryOnce", "([C)Ljava/lang/Object;", "([C)TT;", $PUBLIC | $ABSTRACT, nullptr, "java.lang.Exception"},
	{}
};

$InnerClassInfo _PKCS12KeyStore$RetryWithZero_InnerClassesInfo_[] = {
	{"sun.security.pkcs12.PKCS12KeyStore$RetryWithZero", "sun.security.pkcs12.PKCS12KeyStore", "RetryWithZero", $PRIVATE | $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _PKCS12KeyStore$RetryWithZero_ClassInfo_ = {
	$INTERFACE | $ABSTRACT,
	"sun.security.pkcs12.PKCS12KeyStore$RetryWithZero",
	nullptr,
	nullptr,
	nullptr,
	_PKCS12KeyStore$RetryWithZero_MethodInfo_,
	"<T:Ljava/lang/Object;>Ljava/lang/Object;",
	nullptr,
	_PKCS12KeyStore$RetryWithZero_InnerClassesInfo_,
	_PKCS12KeyStore$RetryWithZero_Annotations_,
	nullptr,
	nullptr,
	"sun.security.pkcs12.PKCS12KeyStore"
};

$Object* allocate$PKCS12KeyStore$RetryWithZero($Class* clazz) {
	return $of($alloc(PKCS12KeyStore$RetryWithZero));
}

$Object* PKCS12KeyStore$RetryWithZero::run(PKCS12KeyStore$RetryWithZero* f, $chars* password) {
	try {
		return $of($nc(f)->tryOnce(password));
	} catch ($Exception& e) {
		if ($nc(password)->length == 0) {
			$init($PKCS12KeyStore);
			if ($PKCS12KeyStore::debug != nullptr) {
				$nc($PKCS12KeyStore::debug)->println("Retry with a NUL password"_s);
			}
			return $of($nc(f)->tryOnce($$new($chars, 1)));
		}
		$throw(e);
	}
	$shouldNotReachHere();
}

$Class* PKCS12KeyStore$RetryWithZero::load$($String* name, bool initialize) {
	$loadClass(PKCS12KeyStore$RetryWithZero, name, initialize, &_PKCS12KeyStore$RetryWithZero_ClassInfo_, allocate$PKCS12KeyStore$RetryWithZero);
	return class$;
}

$Class* PKCS12KeyStore$RetryWithZero::class$ = nullptr;

		} // pkcs12
	} // security
} // sun