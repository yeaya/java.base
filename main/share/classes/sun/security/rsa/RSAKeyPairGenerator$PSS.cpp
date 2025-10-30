#include <sun/security/rsa/RSAKeyPairGenerator$PSS.h>

#include <sun/security/rsa/RSAKeyPairGenerator.h>
#include <sun/security/rsa/RSAUtil$KeyType.h>
#include <sun/security/util/SecurityProviderConstants.h>
#include <jcpp.h>

#undef DEF_RSASSA_PSS_KEY_SIZE
#undef PSS

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RSAKeyPairGenerator = ::sun::security::rsa::RSAKeyPairGenerator;
using $RSAUtil$KeyType = ::sun::security::rsa::RSAUtil$KeyType;
using $SecurityProviderConstants = ::sun::security::util::SecurityProviderConstants;

namespace sun {
	namespace security {
		namespace rsa {

$MethodInfo _RSAKeyPairGenerator$PSS_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(RSAKeyPairGenerator$PSS::*)()>(&RSAKeyPairGenerator$PSS::init$))},
	{}
};

$InnerClassInfo _RSAKeyPairGenerator$PSS_InnerClassesInfo_[] = {
	{"sun.security.rsa.RSAKeyPairGenerator$PSS", "sun.security.rsa.RSAKeyPairGenerator", "PSS", $PUBLIC | $STATIC | $FINAL},
	{}
};

$ClassInfo _RSAKeyPairGenerator$PSS_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"sun.security.rsa.RSAKeyPairGenerator$PSS",
	"sun.security.rsa.RSAKeyPairGenerator",
	nullptr,
	nullptr,
	_RSAKeyPairGenerator$PSS_MethodInfo_,
	nullptr,
	nullptr,
	_RSAKeyPairGenerator$PSS_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.security.rsa.RSAKeyPairGenerator"
};

$Object* allocate$RSAKeyPairGenerator$PSS($Class* clazz) {
	return $of($alloc(RSAKeyPairGenerator$PSS));
}

void RSAKeyPairGenerator$PSS::init$() {
	$init($RSAUtil$KeyType);
	$init($SecurityProviderConstants);
	$RSAKeyPairGenerator::init$($RSAUtil$KeyType::PSS, $SecurityProviderConstants::DEF_RSASSA_PSS_KEY_SIZE);
}

RSAKeyPairGenerator$PSS::RSAKeyPairGenerator$PSS() {
}

$Class* RSAKeyPairGenerator$PSS::load$($String* name, bool initialize) {
	$loadClass(RSAKeyPairGenerator$PSS, name, initialize, &_RSAKeyPairGenerator$PSS_ClassInfo_, allocate$RSAKeyPairGenerator$PSS);
	return class$;
}

$Class* RSAKeyPairGenerator$PSS::class$ = nullptr;

		} // rsa
	} // security
} // sun