#include <sun/security/pkcs/PKCS7$SecureRandomHolder.h>

#include <java/security/NoSuchAlgorithmException.h>
#include <java/security/SecureRandom.h>
#include <sun/security/pkcs/PKCS7.h>
#include <jcpp.h>

#undef RANDOM

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NoSuchAlgorithmException = ::java::security::NoSuchAlgorithmException;
using $SecureRandom = ::java::security::SecureRandom;

namespace sun {
	namespace security {
		namespace pkcs {

$FieldInfo _PKCS7$SecureRandomHolder_FieldInfo_[] = {
	{"RANDOM", "Ljava/security/SecureRandom;", nullptr, $STATIC | $FINAL, $staticField(PKCS7$SecureRandomHolder, RANDOM)},
	{}
};

$MethodInfo _PKCS7$SecureRandomHolder_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(PKCS7$SecureRandomHolder::*)()>(&PKCS7$SecureRandomHolder::init$))},
	{}
};

$InnerClassInfo _PKCS7$SecureRandomHolder_InnerClassesInfo_[] = {
	{"sun.security.pkcs.PKCS7$SecureRandomHolder", "sun.security.pkcs.PKCS7", "SecureRandomHolder", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _PKCS7$SecureRandomHolder_ClassInfo_ = {
	$ACC_SUPER,
	"sun.security.pkcs.PKCS7$SecureRandomHolder",
	"java.lang.Object",
	nullptr,
	_PKCS7$SecureRandomHolder_FieldInfo_,
	_PKCS7$SecureRandomHolder_MethodInfo_,
	nullptr,
	nullptr,
	_PKCS7$SecureRandomHolder_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.security.pkcs.PKCS7"
};

$Object* allocate$PKCS7$SecureRandomHolder($Class* clazz) {
	return $of($alloc(PKCS7$SecureRandomHolder));
}

$SecureRandom* PKCS7$SecureRandomHolder::RANDOM = nullptr;

void PKCS7$SecureRandomHolder::init$() {
}

void clinit$PKCS7$SecureRandomHolder($Class* class$) {
	{
		$var($SecureRandom, tmp, nullptr);
		try {
			$assign(tmp, $SecureRandom::getInstance("SHA1PRNG"_s));
		} catch ($NoSuchAlgorithmException& e) {
		}
		$assignStatic(PKCS7$SecureRandomHolder::RANDOM, tmp);
	}
}

PKCS7$SecureRandomHolder::PKCS7$SecureRandomHolder() {
}

$Class* PKCS7$SecureRandomHolder::load$($String* name, bool initialize) {
	$loadClass(PKCS7$SecureRandomHolder, name, initialize, &_PKCS7$SecureRandomHolder_ClassInfo_, clinit$PKCS7$SecureRandomHolder, allocate$PKCS7$SecureRandomHolder);
	return class$;
}

$Class* PKCS7$SecureRandomHolder::class$ = nullptr;

		} // pkcs
	} // security
} // sun