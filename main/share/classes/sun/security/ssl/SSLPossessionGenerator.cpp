#include <sun/security/ssl/SSLPossessionGenerator.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <sun/security/ssl/HandshakeContext.h>
#include <sun/security/ssl/SSLPossession.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $HandshakeContext = ::sun::security::ssl::HandshakeContext;
using $SSLPossession = ::sun::security::ssl::SSLPossession;

namespace sun {
	namespace security {
		namespace ssl {

$MethodInfo _SSLPossessionGenerator_MethodInfo_[] = {
	{"createPossession", "(Lsun/security/ssl/HandshakeContext;)Lsun/security/ssl/SSLPossession;", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _SSLPossessionGenerator_ClassInfo_ = {
	$INTERFACE | $ABSTRACT,
	"sun.security.ssl.SSLPossessionGenerator",
	nullptr,
	nullptr,
	nullptr,
	_SSLPossessionGenerator_MethodInfo_
};

$Object* allocate$SSLPossessionGenerator($Class* clazz) {
	return $of($alloc(SSLPossessionGenerator));
}

$Class* SSLPossessionGenerator::load$($String* name, bool initialize) {
	$loadClass(SSLPossessionGenerator, name, initialize, &_SSLPossessionGenerator_ClassInfo_, allocate$SSLPossessionGenerator);
	return class$;
}

$Class* SSLPossessionGenerator::class$ = nullptr;

		} // ssl
	} // security
} // sun