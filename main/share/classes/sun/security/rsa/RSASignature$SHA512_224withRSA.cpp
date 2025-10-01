#include <sun/security/rsa/RSASignature$SHA512_224withRSA.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
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

$MethodInfo _RSASignature$SHA512_224withRSA_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(RSASignature$SHA512_224withRSA::*)()>(&RSASignature$SHA512_224withRSA::init$))},
	{}
};

$InnerClassInfo _RSASignature$SHA512_224withRSA_InnerClassesInfo_[] = {
	{"sun.security.rsa.RSASignature$SHA512_224withRSA", "sun.security.rsa.RSASignature", "SHA512_224withRSA", $PUBLIC | $STATIC | $FINAL},
	{}
};

$ClassInfo _RSASignature$SHA512_224withRSA_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"sun.security.rsa.RSASignature$SHA512_224withRSA",
	"sun.security.rsa.RSASignature",
	nullptr,
	nullptr,
	_RSASignature$SHA512_224withRSA_MethodInfo_,
	nullptr,
	nullptr,
	_RSASignature$SHA512_224withRSA_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.security.rsa.RSASignature"
};

$Object* allocate$RSASignature$SHA512_224withRSA($Class* clazz) {
	return $of($alloc(RSASignature$SHA512_224withRSA));
}

void RSASignature$SHA512_224withRSA::init$() {
	$init($AlgorithmId);
	$RSASignature::init$("SHA-512/224"_s, $AlgorithmId::SHA512_224_oid, 11);
}

RSASignature$SHA512_224withRSA::RSASignature$SHA512_224withRSA() {
}

$Class* RSASignature$SHA512_224withRSA::load$($String* name, bool initialize) {
	$loadClass(RSASignature$SHA512_224withRSA, name, initialize, &_RSASignature$SHA512_224withRSA_ClassInfo_, allocate$RSASignature$SHA512_224withRSA);
	return class$;
}

$Class* RSASignature$SHA512_224withRSA::class$ = nullptr;

		} // rsa
	} // security
} // sun