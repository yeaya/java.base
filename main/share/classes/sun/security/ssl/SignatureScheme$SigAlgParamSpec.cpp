#include <sun/security/ssl/SignatureScheme$SigAlgParamSpec.h>

#include <java/lang/Enum.h>
#include <java/security/AlgorithmParameters.h>
#include <java/security/InvalidAlgorithmParameterException.h>
#include <java/security/NoSuchAlgorithmException.h>
#include <java/security/Signature.h>
#include <java/security/spec/AlgorithmParameterSpec.h>
#include <java/security/spec/MGF1ParameterSpec.h>
#include <java/security/spec/PSSParameterSpec.h>
#include <sun/security/ssl/SSLLogger.h>
#include <sun/security/ssl/SignatureScheme.h>
#include <jcpp.h>

#undef RSA_PSS_SHA256
#undef RSA_PSS_SHA384
#undef RSA_PSS_SHA512

using $SignatureScheme$SigAlgParamSpecArray = $Array<::sun::security::ssl::SignatureScheme$SigAlgParamSpec>;
using $ClassInfo = ::java::lang::ClassInfo;
using $Enum = ::java::lang::Enum;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $AlgorithmParameters = ::java::security::AlgorithmParameters;
using $InvalidAlgorithmParameterException = ::java::security::InvalidAlgorithmParameterException;
using $NoSuchAlgorithmException = ::java::security::NoSuchAlgorithmException;
using $Signature = ::java::security::Signature;
using $AlgorithmParameterSpec = ::java::security::spec::AlgorithmParameterSpec;
using $MGF1ParameterSpec = ::java::security::spec::MGF1ParameterSpec;
using $PSSParameterSpec = ::java::security::spec::PSSParameterSpec;
using $SSLLogger = ::sun::security::ssl::SSLLogger;

namespace sun {
	namespace security {
		namespace ssl {

$FieldInfo _SignatureScheme$SigAlgParamSpec_FieldInfo_[] = {
	{"RSA_PSS_SHA256", "Lsun/security/ssl/SignatureScheme$SigAlgParamSpec;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(SignatureScheme$SigAlgParamSpec, RSA_PSS_SHA256)},
	{"RSA_PSS_SHA384", "Lsun/security/ssl/SignatureScheme$SigAlgParamSpec;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(SignatureScheme$SigAlgParamSpec, RSA_PSS_SHA384)},
	{"RSA_PSS_SHA512", "Lsun/security/ssl/SignatureScheme$SigAlgParamSpec;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(SignatureScheme$SigAlgParamSpec, RSA_PSS_SHA512)},
	{"$VALUES", "[Lsun/security/ssl/SignatureScheme$SigAlgParamSpec;", nullptr, $PRIVATE | $STATIC | $FINAL | $SYNTHETIC, $staticField(SignatureScheme$SigAlgParamSpec, $VALUES)},
	{"parameterSpec", "Ljava/security/spec/AlgorithmParameterSpec;", nullptr, $PRIVATE | $FINAL, $field(SignatureScheme$SigAlgParamSpec, parameterSpec)},
	{"parameters", "Ljava/security/AlgorithmParameters;", nullptr, $PRIVATE | $FINAL, $field(SignatureScheme$SigAlgParamSpec, parameters)},
	{"isAvailable", "Z", nullptr, $PRIVATE | $FINAL, $field(SignatureScheme$SigAlgParamSpec, isAvailable)},
	{}
};

$MethodInfo _SignatureScheme$SigAlgParamSpec_MethodInfo_[] = {
	{"$values", "()[Lsun/security/ssl/SignatureScheme$SigAlgParamSpec;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(SignatureScheme$SigAlgParamSpec, $values, $SignatureScheme$SigAlgParamSpecArray*)},
	{"<init>", "(Ljava/lang/String;ILjava/lang/String;I)V", "(Ljava/lang/String;I)V", $PRIVATE, $method(SignatureScheme$SigAlgParamSpec, init$, void, $String*, int32_t, $String*, int32_t)},
	{"valueOf", "(Ljava/lang/String;)Lsun/security/ssl/SignatureScheme$SigAlgParamSpec;", nullptr, $PUBLIC | $STATIC, $staticMethod(SignatureScheme$SigAlgParamSpec, valueOf, SignatureScheme$SigAlgParamSpec*, $String*)},
	{"values", "()[Lsun/security/ssl/SignatureScheme$SigAlgParamSpec;", nullptr, $PUBLIC | $STATIC, $staticMethod(SignatureScheme$SigAlgParamSpec, values, $SignatureScheme$SigAlgParamSpecArray*)},
	{}
};

$InnerClassInfo _SignatureScheme$SigAlgParamSpec_InnerClassesInfo_[] = {
	{"sun.security.ssl.SignatureScheme$SigAlgParamSpec", "sun.security.ssl.SignatureScheme", "SigAlgParamSpec", $STATIC | $FINAL | $ENUM},
	{}
};

$ClassInfo _SignatureScheme$SigAlgParamSpec_ClassInfo_ = {
	$FINAL | $ACC_SUPER | $ENUM,
	"sun.security.ssl.SignatureScheme$SigAlgParamSpec",
	"java.lang.Enum",
	nullptr,
	_SignatureScheme$SigAlgParamSpec_FieldInfo_,
	_SignatureScheme$SigAlgParamSpec_MethodInfo_,
	"Ljava/lang/Enum<Lsun/security/ssl/SignatureScheme$SigAlgParamSpec;>;",
	nullptr,
	_SignatureScheme$SigAlgParamSpec_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.security.ssl.SignatureScheme"
};

$Object* allocate$SignatureScheme$SigAlgParamSpec($Class* clazz) {
	return $of($alloc(SignatureScheme$SigAlgParamSpec));
}

SignatureScheme$SigAlgParamSpec* SignatureScheme$SigAlgParamSpec::RSA_PSS_SHA256 = nullptr;
SignatureScheme$SigAlgParamSpec* SignatureScheme$SigAlgParamSpec::RSA_PSS_SHA384 = nullptr;
SignatureScheme$SigAlgParamSpec* SignatureScheme$SigAlgParamSpec::RSA_PSS_SHA512 = nullptr;
$SignatureScheme$SigAlgParamSpecArray* SignatureScheme$SigAlgParamSpec::$VALUES = nullptr;

$SignatureScheme$SigAlgParamSpecArray* SignatureScheme$SigAlgParamSpec::$values() {
	$init(SignatureScheme$SigAlgParamSpec);
	return $new($SignatureScheme$SigAlgParamSpecArray, {
		SignatureScheme$SigAlgParamSpec::RSA_PSS_SHA256,
		SignatureScheme$SigAlgParamSpec::RSA_PSS_SHA384,
		SignatureScheme$SigAlgParamSpec::RSA_PSS_SHA512
	});
}

$SignatureScheme$SigAlgParamSpecArray* SignatureScheme$SigAlgParamSpec::values() {
	$init(SignatureScheme$SigAlgParamSpec);
	return $cast($SignatureScheme$SigAlgParamSpecArray, SignatureScheme$SigAlgParamSpec::$VALUES->clone());
}

SignatureScheme$SigAlgParamSpec* SignatureScheme$SigAlgParamSpec::valueOf($String* name) {
	$init(SignatureScheme$SigAlgParamSpec);
	return $cast(SignatureScheme$SigAlgParamSpec, $Enum::valueOf(SignatureScheme$SigAlgParamSpec::class$, name));
}

void SignatureScheme$SigAlgParamSpec::init$($String* $enum$name, int32_t $enum$ordinal, $String* hash, int32_t saltLength) {
	$useLocalCurrentObjectStackCache();
	$Enum::init$($enum$name, $enum$ordinal);
	$var($PSSParameterSpec, pssParamSpec, $new($PSSParameterSpec, hash, "MGF1"_s, $$new($MGF1ParameterSpec, hash), saltLength, 1));
	$var($AlgorithmParameters, pssParams, nullptr);
	bool mediator = true;
	try {
		$var($Signature, signer, $Signature::getInstance("RSASSA-PSS"_s));
		$nc(signer)->setParameter(pssParamSpec);
		$assign(pssParams, signer->getParameters());
	} catch ($InvalidAlgorithmParameterException& exp) {
		mediator = false;
		$init($SSLLogger);
		if ($SSLLogger::isOn$ && $SSLLogger::isOn("ssl,handshake"_s)) {
			$SSLLogger::warning($$str({"RSASSA-PSS signature with "_s, hash, " is not supported by the underlying providers"_s}), $$new($ObjectArray, {$of(exp)}));
		}
	} catch ($NoSuchAlgorithmException& exp) {
		mediator = false;
		$init($SSLLogger);
		if ($SSLLogger::isOn$ && $SSLLogger::isOn("ssl,handshake"_s)) {
			$SSLLogger::warning($$str({"RSASSA-PSS signature with "_s, hash, " is not supported by the underlying providers"_s}), $$new($ObjectArray, {$of(exp)}));
		}
	} catch ($RuntimeException& exp) {
		mediator = false;
		$init($SSLLogger);
		if ($SSLLogger::isOn$ && $SSLLogger::isOn("ssl,handshake"_s)) {
			$SSLLogger::warning($$str({"RSASSA-PSS signature with "_s, hash, " is not supported by the underlying providers"_s}), $$new($ObjectArray, {$of(exp)}));
		}
	}
	this->isAvailable = mediator;
	$set(this, parameterSpec, mediator ? static_cast<$AlgorithmParameterSpec*>(pssParamSpec) : ($AlgorithmParameterSpec*)nullptr);
	$set(this, parameters, mediator ? pssParams : ($AlgorithmParameters*)nullptr);
}

void clinit$SignatureScheme$SigAlgParamSpec($Class* class$) {
	$assignStatic(SignatureScheme$SigAlgParamSpec::RSA_PSS_SHA256, $new(SignatureScheme$SigAlgParamSpec, "RSA_PSS_SHA256"_s, 0, "SHA-256"_s, 32));
	$assignStatic(SignatureScheme$SigAlgParamSpec::RSA_PSS_SHA384, $new(SignatureScheme$SigAlgParamSpec, "RSA_PSS_SHA384"_s, 1, "SHA-384"_s, 48));
	$assignStatic(SignatureScheme$SigAlgParamSpec::RSA_PSS_SHA512, $new(SignatureScheme$SigAlgParamSpec, "RSA_PSS_SHA512"_s, 2, "SHA-512"_s, 64));
	$assignStatic(SignatureScheme$SigAlgParamSpec::$VALUES, SignatureScheme$SigAlgParamSpec::$values());
}

SignatureScheme$SigAlgParamSpec::SignatureScheme$SigAlgParamSpec() {
}

$Class* SignatureScheme$SigAlgParamSpec::load$($String* name, bool initialize) {
	$loadClass(SignatureScheme$SigAlgParamSpec, name, initialize, &_SignatureScheme$SigAlgParamSpec_ClassInfo_, clinit$SignatureScheme$SigAlgParamSpec, allocate$SignatureScheme$SigAlgParamSpec);
	return class$;
}

$Class* SignatureScheme$SigAlgParamSpec::class$ = nullptr;

		} // ssl
	} // security
} // sun