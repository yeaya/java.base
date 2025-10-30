#include <sun/security/ssl/JsseJce$EcAvailability.h>

#include <java/security/AlgorithmParameters.h>
#include <java/security/KeyFactory.h>
#include <java/security/KeyPairGenerator.h>
#include <java/security/Signature.h>
#include <javax/crypto/KeyAgreement.h>
#include <sun/security/ssl/JsseJce.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AlgorithmParameters = ::java::security::AlgorithmParameters;
using $KeyFactory = ::java::security::KeyFactory;
using $KeyPairGenerator = ::java::security::KeyPairGenerator;
using $Signature = ::java::security::Signature;
using $KeyAgreement = ::javax::crypto::KeyAgreement;
using $JsseJce = ::sun::security::ssl::JsseJce;

namespace sun {
	namespace security {
		namespace ssl {

$FieldInfo _JsseJce$EcAvailability_FieldInfo_[] = {
	{"isAvailable", "Z", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(JsseJce$EcAvailability, isAvailable)},
	{}
};

$MethodInfo _JsseJce$EcAvailability_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(JsseJce$EcAvailability::*)()>(&JsseJce$EcAvailability::init$))},
	{}
};

$InnerClassInfo _JsseJce$EcAvailability_InnerClassesInfo_[] = {
	{"sun.security.ssl.JsseJce$EcAvailability", "sun.security.ssl.JsseJce", "EcAvailability", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _JsseJce$EcAvailability_ClassInfo_ = {
	$ACC_SUPER,
	"sun.security.ssl.JsseJce$EcAvailability",
	"java.lang.Object",
	nullptr,
	_JsseJce$EcAvailability_FieldInfo_,
	_JsseJce$EcAvailability_MethodInfo_,
	nullptr,
	nullptr,
	_JsseJce$EcAvailability_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.security.ssl.JsseJce"
};

$Object* allocate$JsseJce$EcAvailability($Class* clazz) {
	return $of($alloc(JsseJce$EcAvailability));
}

bool JsseJce$EcAvailability::isAvailable = false;

void JsseJce$EcAvailability::init$() {
}

void clinit$JsseJce$EcAvailability($Class* class$) {
	{
		bool mediator = true;
		try {
			$Signature::getInstance("SHA1withECDSA"_s);
			$Signature::getInstance("NONEwithECDSA"_s);
			$KeyAgreement::getInstance("ECDH"_s);
			$KeyFactory::getInstance("EC"_s);
			$KeyPairGenerator::getInstance("EC"_s);
			$AlgorithmParameters::getInstance("EC"_s);
		} catch ($Exception& e) {
			mediator = false;
		}
		JsseJce$EcAvailability::isAvailable = mediator;
	}
}

JsseJce$EcAvailability::JsseJce$EcAvailability() {
}

$Class* JsseJce$EcAvailability::load$($String* name, bool initialize) {
	$loadClass(JsseJce$EcAvailability, name, initialize, &_JsseJce$EcAvailability_ClassInfo_, clinit$JsseJce$EcAvailability, allocate$JsseJce$EcAvailability);
	return class$;
}

$Class* JsseJce$EcAvailability::class$ = nullptr;

		} // ssl
	} // security
} // sun