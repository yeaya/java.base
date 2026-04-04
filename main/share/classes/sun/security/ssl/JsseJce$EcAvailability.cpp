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

namespace sun {
	namespace security {
		namespace ssl {

bool JsseJce$EcAvailability::isAvailable = false;

void JsseJce$EcAvailability::init$() {
}

void JsseJce$EcAvailability::clinit$($Class* clazz) {
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
	$FieldInfo fieldInfos$$[] = {
		{"isAvailable", "Z", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(JsseJce$EcAvailability, isAvailable)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PRIVATE, $method(JsseJce$EcAvailability, init$, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.security.ssl.JsseJce$EcAvailability", "sun.security.ssl.JsseJce", "EcAvailability", $PRIVATE | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.security.ssl.JsseJce$EcAvailability",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"sun.security.ssl.JsseJce"
	};
	$loadClass(JsseJce$EcAvailability, name, initialize, &classInfo$$, JsseJce$EcAvailability::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(JsseJce$EcAvailability);
	});
	return class$;
}

$Class* JsseJce$EcAvailability::class$ = nullptr;

		} // ssl
	} // security
} // sun