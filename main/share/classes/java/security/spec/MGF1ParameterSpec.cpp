#include <java/security/spec/MGF1ParameterSpec.h>

#include <jcpp.h>

#undef SHA1

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $AlgorithmParameterSpec = ::java::security::spec::AlgorithmParameterSpec;

namespace java {
	namespace security {
		namespace spec {

$FieldInfo _MGF1ParameterSpec_FieldInfo_[] = {
	{"SHA1", "Ljava/security/spec/MGF1ParameterSpec;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(MGF1ParameterSpec, SHA1)},
	{"SHA224", "Ljava/security/spec/MGF1ParameterSpec;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(MGF1ParameterSpec, SHA224)},
	{"SHA256", "Ljava/security/spec/MGF1ParameterSpec;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(MGF1ParameterSpec, SHA256)},
	{"SHA384", "Ljava/security/spec/MGF1ParameterSpec;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(MGF1ParameterSpec, SHA384)},
	{"SHA512", "Ljava/security/spec/MGF1ParameterSpec;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(MGF1ParameterSpec, SHA512)},
	{"SHA512_224", "Ljava/security/spec/MGF1ParameterSpec;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(MGF1ParameterSpec, SHA512_224)},
	{"SHA512_256", "Ljava/security/spec/MGF1ParameterSpec;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(MGF1ParameterSpec, SHA512_256)},
	{"SHA3_224", "Ljava/security/spec/MGF1ParameterSpec;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(MGF1ParameterSpec, SHA3_224)},
	{"SHA3_256", "Ljava/security/spec/MGF1ParameterSpec;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(MGF1ParameterSpec, SHA3_256)},
	{"SHA3_384", "Ljava/security/spec/MGF1ParameterSpec;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(MGF1ParameterSpec, SHA3_384)},
	{"SHA3_512", "Ljava/security/spec/MGF1ParameterSpec;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(MGF1ParameterSpec, SHA3_512)},
	{"mdName", "Ljava/lang/String;", nullptr, $PRIVATE, $field(MGF1ParameterSpec, mdName)},
	{}
};

$MethodInfo _MGF1ParameterSpec_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(MGF1ParameterSpec::*)($String*)>(&MGF1ParameterSpec::init$))},
	{"getDigestAlgorithm", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _MGF1ParameterSpec_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"java.security.spec.MGF1ParameterSpec",
	"java.lang.Object",
	"java.security.spec.AlgorithmParameterSpec",
	_MGF1ParameterSpec_FieldInfo_,
	_MGF1ParameterSpec_MethodInfo_
};

$Object* allocate$MGF1ParameterSpec($Class* clazz) {
	return $of($alloc(MGF1ParameterSpec));
}

MGF1ParameterSpec* MGF1ParameterSpec::SHA1 = nullptr;
MGF1ParameterSpec* MGF1ParameterSpec::SHA224 = nullptr;
MGF1ParameterSpec* MGF1ParameterSpec::SHA256 = nullptr;
MGF1ParameterSpec* MGF1ParameterSpec::SHA384 = nullptr;
MGF1ParameterSpec* MGF1ParameterSpec::SHA512 = nullptr;
MGF1ParameterSpec* MGF1ParameterSpec::SHA512_224 = nullptr;
MGF1ParameterSpec* MGF1ParameterSpec::SHA512_256 = nullptr;
MGF1ParameterSpec* MGF1ParameterSpec::SHA3_224 = nullptr;
MGF1ParameterSpec* MGF1ParameterSpec::SHA3_256 = nullptr;
MGF1ParameterSpec* MGF1ParameterSpec::SHA3_384 = nullptr;
MGF1ParameterSpec* MGF1ParameterSpec::SHA3_512 = nullptr;

void MGF1ParameterSpec::init$($String* mdName) {
	if (mdName == nullptr) {
		$throwNew($NullPointerException, "digest algorithm is null"_s);
	}
	$set(this, mdName, mdName);
}

$String* MGF1ParameterSpec::getDigestAlgorithm() {
	return this->mdName;
}

$String* MGF1ParameterSpec::toString() {
	return $str({"MGF1ParameterSpec[hashAlgorithm="_s, this->mdName, "]"_s});
}

void clinit$MGF1ParameterSpec($Class* class$) {
	$assignStatic(MGF1ParameterSpec::SHA1, $new(MGF1ParameterSpec, "SHA-1"_s));
	$assignStatic(MGF1ParameterSpec::SHA224, $new(MGF1ParameterSpec, "SHA-224"_s));
	$assignStatic(MGF1ParameterSpec::SHA256, $new(MGF1ParameterSpec, "SHA-256"_s));
	$assignStatic(MGF1ParameterSpec::SHA384, $new(MGF1ParameterSpec, "SHA-384"_s));
	$assignStatic(MGF1ParameterSpec::SHA512, $new(MGF1ParameterSpec, "SHA-512"_s));
	$assignStatic(MGF1ParameterSpec::SHA512_224, $new(MGF1ParameterSpec, "SHA-512/224"_s));
	$assignStatic(MGF1ParameterSpec::SHA512_256, $new(MGF1ParameterSpec, "SHA-512/256"_s));
	$assignStatic(MGF1ParameterSpec::SHA3_224, $new(MGF1ParameterSpec, "SHA3-224"_s));
	$assignStatic(MGF1ParameterSpec::SHA3_256, $new(MGF1ParameterSpec, "SHA3-256"_s));
	$assignStatic(MGF1ParameterSpec::SHA3_384, $new(MGF1ParameterSpec, "SHA3-384"_s));
	$assignStatic(MGF1ParameterSpec::SHA3_512, $new(MGF1ParameterSpec, "SHA3-512"_s));
}

MGF1ParameterSpec::MGF1ParameterSpec() {
}

$Class* MGF1ParameterSpec::load$($String* name, bool initialize) {
	$loadClass(MGF1ParameterSpec, name, initialize, &_MGF1ParameterSpec_ClassInfo_, clinit$MGF1ParameterSpec, allocate$MGF1ParameterSpec);
	return class$;
}

$Class* MGF1ParameterSpec::class$ = nullptr;

		} // spec
	} // security
} // java