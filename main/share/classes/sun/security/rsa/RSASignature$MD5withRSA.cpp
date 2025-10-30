#include <sun/security/rsa/RSASignature$MD5withRSA.h>

#include <sun/security/rsa/RSASignature.h>
#include <sun/security/util/ObjectIdentifier.h>
#include <sun/security/x509/AlgorithmId.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RSASignature = ::sun::security::rsa::RSASignature;
using $ObjectIdentifier = ::sun::security::util::ObjectIdentifier;
using $AlgorithmId = ::sun::security::x509::AlgorithmId;

namespace sun {
	namespace security {
		namespace rsa {

$MethodInfo _RSASignature$MD5withRSA_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(RSASignature$MD5withRSA::*)()>(&RSASignature$MD5withRSA::init$))},
	{}
};

$InnerClassInfo _RSASignature$MD5withRSA_InnerClassesInfo_[] = {
	{"sun.security.rsa.RSASignature$MD5withRSA", "sun.security.rsa.RSASignature", "MD5withRSA", $PUBLIC | $STATIC | $FINAL},
	{}
};

$ClassInfo _RSASignature$MD5withRSA_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"sun.security.rsa.RSASignature$MD5withRSA",
	"sun.security.rsa.RSASignature",
	nullptr,
	nullptr,
	_RSASignature$MD5withRSA_MethodInfo_,
	nullptr,
	nullptr,
	_RSASignature$MD5withRSA_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.security.rsa.RSASignature"
};

$Object* allocate$RSASignature$MD5withRSA($Class* clazz) {
	return $of($alloc(RSASignature$MD5withRSA));
}

void RSASignature$MD5withRSA::init$() {
	$init($AlgorithmId);
	$RSASignature::init$("MD5"_s, $AlgorithmId::MD5_oid, 10);
}

RSASignature$MD5withRSA::RSASignature$MD5withRSA() {
}

$Class* RSASignature$MD5withRSA::load$($String* name, bool initialize) {
	$loadClass(RSASignature$MD5withRSA, name, initialize, &_RSASignature$MD5withRSA_ClassInfo_, allocate$RSASignature$MD5withRSA);
	return class$;
}

$Class* RSASignature$MD5withRSA::class$ = nullptr;

		} // rsa
	} // security
} // sun