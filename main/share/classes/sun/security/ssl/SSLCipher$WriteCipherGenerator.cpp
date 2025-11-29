#include <sun/security/ssl/SSLCipher$WriteCipherGenerator.h>

#include <java/security/Key.h>
#include <java/security/SecureRandom.h>
#include <java/security/spec/AlgorithmParameterSpec.h>
#include <sun/security/ssl/Authenticator.h>
#include <sun/security/ssl/ProtocolVersion.h>
#include <sun/security/ssl/SSLCipher$SSLWriteCipher.h>
#include <sun/security/ssl/SSLCipher.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace sun {
	namespace security {
		namespace ssl {

$MethodInfo _SSLCipher$WriteCipherGenerator_MethodInfo_[] = {
	{"createCipher", "(Lsun/security/ssl/SSLCipher;Lsun/security/ssl/Authenticator;Lsun/security/ssl/ProtocolVersion;Ljava/lang/String;Ljava/security/Key;Ljava/security/spec/AlgorithmParameterSpec;Ljava/security/SecureRandom;)Lsun/security/ssl/SSLCipher$SSLWriteCipher;", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.security.GeneralSecurityException"},
	{}
};

$InnerClassInfo _SSLCipher$WriteCipherGenerator_InnerClassesInfo_[] = {
	{"sun.security.ssl.SSLCipher$WriteCipherGenerator", "sun.security.ssl.SSLCipher", "WriteCipherGenerator", $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _SSLCipher$WriteCipherGenerator_ClassInfo_ = {
	$INTERFACE | $ABSTRACT,
	"sun.security.ssl.SSLCipher$WriteCipherGenerator",
	nullptr,
	nullptr,
	nullptr,
	_SSLCipher$WriteCipherGenerator_MethodInfo_,
	nullptr,
	nullptr,
	_SSLCipher$WriteCipherGenerator_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.security.ssl.SSLCipher"
};

$Object* allocate$SSLCipher$WriteCipherGenerator($Class* clazz) {
	return $of($alloc(SSLCipher$WriteCipherGenerator));
}

$Class* SSLCipher$WriteCipherGenerator::load$($String* name, bool initialize) {
	$loadClass(SSLCipher$WriteCipherGenerator, name, initialize, &_SSLCipher$WriteCipherGenerator_ClassInfo_, allocate$SSLCipher$WriteCipherGenerator);
	return class$;
}

$Class* SSLCipher$WriteCipherGenerator::class$ = nullptr;

		} // ssl
	} // security
} // sun