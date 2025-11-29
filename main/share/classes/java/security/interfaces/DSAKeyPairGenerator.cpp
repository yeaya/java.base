#include <java/security/interfaces/DSAKeyPairGenerator.h>

#include <java/security/SecureRandom.h>
#include <java/security/interfaces/DSAParams.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace security {
		namespace interfaces {

$MethodInfo _DSAKeyPairGenerator_MethodInfo_[] = {
	{"initialize", "(Ljava/security/interfaces/DSAParams;Ljava/security/SecureRandom;)V", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.security.InvalidParameterException"},
	{"initialize", "(IZLjava/security/SecureRandom;)V", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.security.InvalidParameterException"},
	{}
};

$ClassInfo _DSAKeyPairGenerator_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"java.security.interfaces.DSAKeyPairGenerator",
	nullptr,
	nullptr,
	nullptr,
	_DSAKeyPairGenerator_MethodInfo_
};

$Object* allocate$DSAKeyPairGenerator($Class* clazz) {
	return $of($alloc(DSAKeyPairGenerator));
}

$Class* DSAKeyPairGenerator::load$($String* name, bool initialize) {
	$loadClass(DSAKeyPairGenerator, name, initialize, &_DSAKeyPairGenerator_ClassInfo_, allocate$DSAKeyPairGenerator);
	return class$;
}

$Class* DSAKeyPairGenerator::class$ = nullptr;

		} // interfaces
	} // security
} // java