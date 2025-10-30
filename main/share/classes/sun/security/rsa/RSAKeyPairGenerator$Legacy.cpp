#include <sun/security/rsa/RSAKeyPairGenerator$Legacy.h>

#include <sun/security/rsa/RSAKeyPairGenerator.h>
#include <sun/security/rsa/RSAUtil$KeyType.h>
#include <sun/security/util/SecurityProviderConstants.h>
#include <jcpp.h>

#undef DEF_RSA_KEY_SIZE
#undef RSA

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RSAKeyPairGenerator = ::sun::security::rsa::RSAKeyPairGenerator;
using $RSAUtil$KeyType = ::sun::security::rsa::RSAUtil$KeyType;
using $SecurityProviderConstants = ::sun::security::util::SecurityProviderConstants;

namespace sun {
	namespace security {
		namespace rsa {

$MethodInfo _RSAKeyPairGenerator$Legacy_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(RSAKeyPairGenerator$Legacy::*)()>(&RSAKeyPairGenerator$Legacy::init$))},
	{}
};

$InnerClassInfo _RSAKeyPairGenerator$Legacy_InnerClassesInfo_[] = {
	{"sun.security.rsa.RSAKeyPairGenerator$Legacy", "sun.security.rsa.RSAKeyPairGenerator", "Legacy", $PUBLIC | $STATIC | $FINAL},
	{}
};

$ClassInfo _RSAKeyPairGenerator$Legacy_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"sun.security.rsa.RSAKeyPairGenerator$Legacy",
	"sun.security.rsa.RSAKeyPairGenerator",
	nullptr,
	nullptr,
	_RSAKeyPairGenerator$Legacy_MethodInfo_,
	nullptr,
	nullptr,
	_RSAKeyPairGenerator$Legacy_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.security.rsa.RSAKeyPairGenerator"
};

$Object* allocate$RSAKeyPairGenerator$Legacy($Class* clazz) {
	return $of($alloc(RSAKeyPairGenerator$Legacy));
}

void RSAKeyPairGenerator$Legacy::init$() {
	$init($RSAUtil$KeyType);
	$init($SecurityProviderConstants);
	$RSAKeyPairGenerator::init$($RSAUtil$KeyType::RSA, $SecurityProviderConstants::DEF_RSA_KEY_SIZE);
}

RSAKeyPairGenerator$Legacy::RSAKeyPairGenerator$Legacy() {
}

$Class* RSAKeyPairGenerator$Legacy::load$($String* name, bool initialize) {
	$loadClass(RSAKeyPairGenerator$Legacy, name, initialize, &_RSAKeyPairGenerator$Legacy_ClassInfo_, allocate$RSAKeyPairGenerator$Legacy);
	return class$;
}

$Class* RSAKeyPairGenerator$Legacy::class$ = nullptr;

		} // rsa
	} // security
} // sun