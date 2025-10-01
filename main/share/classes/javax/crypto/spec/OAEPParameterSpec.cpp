#include <javax/crypto/spec/OAEPParameterSpec.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/NullPointerException.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/security/spec/AlgorithmParameterSpec.h>
#include <java/security/spec/MGF1ParameterSpec.h>
#include <javax/crypto/spec/PSource$PSpecified.h>
#include <javax/crypto/spec/PSource.h>
#include <jcpp.h>

#undef SHA1
#undef DEFAULT

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $AlgorithmParameterSpec = ::java::security::spec::AlgorithmParameterSpec;
using $MGF1ParameterSpec = ::java::security::spec::MGF1ParameterSpec;
using $PSource = ::javax::crypto::spec::PSource;
using $PSource$PSpecified = ::javax::crypto::spec::PSource$PSpecified;

namespace javax {
	namespace crypto {
		namespace spec {

$FieldInfo _OAEPParameterSpec_FieldInfo_[] = {
	{"mdName", "Ljava/lang/String;", nullptr, $PRIVATE, $field(OAEPParameterSpec, mdName)},
	{"mgfName", "Ljava/lang/String;", nullptr, $PRIVATE, $field(OAEPParameterSpec, mgfName)},
	{"mgfSpec", "Ljava/security/spec/AlgorithmParameterSpec;", nullptr, $PRIVATE, $field(OAEPParameterSpec, mgfSpec)},
	{"pSrc", "Ljavax/crypto/spec/PSource;", nullptr, $PRIVATE, $field(OAEPParameterSpec, pSrc)},
	{"DEFAULT", "Ljavax/crypto/spec/OAEPParameterSpec;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(OAEPParameterSpec, DEFAULT)},
	{}
};

$MethodInfo _OAEPParameterSpec_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(OAEPParameterSpec::*)()>(&OAEPParameterSpec::init$))},
	{"<init>", "(Ljava/lang/String;Ljava/lang/String;Ljava/security/spec/AlgorithmParameterSpec;Ljavax/crypto/spec/PSource;)V", nullptr, $PUBLIC, $method(static_cast<void(OAEPParameterSpec::*)($String*,$String*,$AlgorithmParameterSpec*,$PSource*)>(&OAEPParameterSpec::init$))},
	{"getDigestAlgorithm", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"getMGFAlgorithm", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"getMGFParameters", "()Ljava/security/spec/AlgorithmParameterSpec;", nullptr, $PUBLIC},
	{"getPSource", "()Ljavax/crypto/spec/PSource;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _OAEPParameterSpec_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.crypto.spec.OAEPParameterSpec",
	"java.lang.Object",
	"java.security.spec.AlgorithmParameterSpec",
	_OAEPParameterSpec_FieldInfo_,
	_OAEPParameterSpec_MethodInfo_
};

$Object* allocate$OAEPParameterSpec($Class* clazz) {
	return $of($alloc(OAEPParameterSpec));
}


OAEPParameterSpec* OAEPParameterSpec::DEFAULT = nullptr;

void OAEPParameterSpec::init$() {
	$set(this, mdName, "SHA-1"_s);
	$set(this, mgfName, "MGF1"_s);
	$init($MGF1ParameterSpec);
	$set(this, mgfSpec, $MGF1ParameterSpec::SHA1);
	$init($PSource$PSpecified);
	$set(this, pSrc, $PSource$PSpecified::DEFAULT);
}

void OAEPParameterSpec::init$($String* mdName, $String* mgfName, $AlgorithmParameterSpec* mgfSpec, $PSource* pSrc) {
	$set(this, mdName, "SHA-1"_s);
	$set(this, mgfName, "MGF1"_s);
	$init($MGF1ParameterSpec);
	$set(this, mgfSpec, $MGF1ParameterSpec::SHA1);
	$init($PSource$PSpecified);
	$set(this, pSrc, $PSource$PSpecified::DEFAULT);
	if (mdName == nullptr) {
		$throwNew($NullPointerException, "digest algorithm is null"_s);
	}
	if (mgfName == nullptr) {
		$throwNew($NullPointerException, "mask generation function algorithm is null"_s);
	}
	if (pSrc == nullptr) {
		$throwNew($NullPointerException, "source of the encoding input is null"_s);
	}
	$set(this, mdName, mdName);
	$set(this, mgfName, mgfName);
	$set(this, mgfSpec, mgfSpec);
	$set(this, pSrc, pSrc);
}

$String* OAEPParameterSpec::getDigestAlgorithm() {
	return this->mdName;
}

$String* OAEPParameterSpec::getMGFAlgorithm() {
	return this->mgfName;
}

$AlgorithmParameterSpec* OAEPParameterSpec::getMGFParameters() {
	return this->mgfSpec;
}

$PSource* OAEPParameterSpec::getPSource() {
	return this->pSrc;
}

void clinit$OAEPParameterSpec($Class* class$) {
	$assignStatic(OAEPParameterSpec::DEFAULT, $new(OAEPParameterSpec));
}

OAEPParameterSpec::OAEPParameterSpec() {
}

$Class* OAEPParameterSpec::load$($String* name, bool initialize) {
	$loadClass(OAEPParameterSpec, name, initialize, &_OAEPParameterSpec_ClassInfo_, clinit$OAEPParameterSpec, allocate$OAEPParameterSpec);
	return class$;
}

$Class* OAEPParameterSpec::class$ = nullptr;

		} // spec
	} // crypto
} // javax