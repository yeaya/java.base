#include <sun/security/ssl/SSLKeyAgreementGenerator.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <sun/security/ssl/HandshakeContext.h>
#include <sun/security/ssl/SSLKeyDerivation.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $HandshakeContext = ::sun::security::ssl::HandshakeContext;
using $SSLKeyDerivation = ::sun::security::ssl::SSLKeyDerivation;

namespace sun {
	namespace security {
		namespace ssl {

$MethodInfo _SSLKeyAgreementGenerator_MethodInfo_[] = {
	{"createKeyDerivation", "(Lsun/security/ssl/HandshakeContext;)Lsun/security/ssl/SSLKeyDerivation;", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.io.IOException"},
	{}
};

$ClassInfo _SSLKeyAgreementGenerator_ClassInfo_ = {
	$INTERFACE | $ABSTRACT,
	"sun.security.ssl.SSLKeyAgreementGenerator",
	nullptr,
	nullptr,
	nullptr,
	_SSLKeyAgreementGenerator_MethodInfo_
};

$Object* allocate$SSLKeyAgreementGenerator($Class* clazz) {
	return $of($alloc(SSLKeyAgreementGenerator));
}

$Class* SSLKeyAgreementGenerator::load$($String* name, bool initialize) {
	$loadClass(SSLKeyAgreementGenerator, name, initialize, &_SSLKeyAgreementGenerator_ClassInfo_, allocate$SSLKeyAgreementGenerator);
	return class$;
}

$Class* SSLKeyAgreementGenerator::class$ = nullptr;

		} // ssl
	} // security
} // sun