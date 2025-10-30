#include <java/security/spec/PSSParameterSpec.h>

#include <java/security/spec/AlgorithmParameterSpec.h>
#include <java/security/spec/MGF1ParameterSpec.h>
#include <java/util/Objects.h>
#include <jcpp.h>

#undef DEFAULT
#undef SHA1
#undef TRAILER_FIELD_BC

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $AlgorithmParameterSpec = ::java::security::spec::AlgorithmParameterSpec;
using $MGF1ParameterSpec = ::java::security::spec::MGF1ParameterSpec;
using $Objects = ::java::util::Objects;

namespace java {
	namespace security {
		namespace spec {

$FieldInfo _PSSParameterSpec_FieldInfo_[] = {
	{"mdName", "Ljava/lang/String;", nullptr, $PRIVATE | $FINAL, $field(PSSParameterSpec, mdName)},
	{"mgfName", "Ljava/lang/String;", nullptr, $PRIVATE | $FINAL, $field(PSSParameterSpec, mgfName)},
	{"mgfSpec", "Ljava/security/spec/AlgorithmParameterSpec;", nullptr, $PRIVATE | $FINAL, $field(PSSParameterSpec, mgfSpec)},
	{"saltLen", "I", nullptr, $PRIVATE | $FINAL, $field(PSSParameterSpec, saltLen)},
	{"trailerField", "I", nullptr, $PRIVATE | $FINAL, $field(PSSParameterSpec, trailerField)},
	{"TRAILER_FIELD_BC", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(PSSParameterSpec, TRAILER_FIELD_BC)},
	{"DEFAULT", "Ljava/security/spec/PSSParameterSpec;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(PSSParameterSpec, DEFAULT)},
	{}
};

$MethodInfo _PSSParameterSpec_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(PSSParameterSpec::*)()>(&PSSParameterSpec::init$))},
	{"<init>", "(Ljava/lang/String;Ljava/lang/String;Ljava/security/spec/AlgorithmParameterSpec;II)V", nullptr, $PUBLIC, $method(static_cast<void(PSSParameterSpec::*)($String*,$String*,$AlgorithmParameterSpec*,int32_t,int32_t)>(&PSSParameterSpec::init$))},
	{"<init>", "(I)V", nullptr, $PUBLIC, $method(static_cast<void(PSSParameterSpec::*)(int32_t)>(&PSSParameterSpec::init$))},
	{"getDigestAlgorithm", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"getMGFAlgorithm", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"getMGFParameters", "()Ljava/security/spec/AlgorithmParameterSpec;", nullptr, $PUBLIC},
	{"getSaltLength", "()I", nullptr, $PUBLIC},
	{"getTrailerField", "()I", nullptr, $PUBLIC},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _PSSParameterSpec_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"java.security.spec.PSSParameterSpec",
	"java.lang.Object",
	"java.security.spec.AlgorithmParameterSpec",
	_PSSParameterSpec_FieldInfo_,
	_PSSParameterSpec_MethodInfo_
};

$Object* allocate$PSSParameterSpec($Class* clazz) {
	return $of($alloc(PSSParameterSpec));
}

PSSParameterSpec* PSSParameterSpec::DEFAULT = nullptr;

void PSSParameterSpec::init$() {
	$throwNew($RuntimeException, "default constructor not allowed"_s);
}

void PSSParameterSpec::init$($String* mdName, $String* mgfName, $AlgorithmParameterSpec* mgfSpec, int32_t saltLen, int32_t trailerField) {
	$useLocalCurrentObjectStackCache();
	$Objects::requireNonNull($of(mdName), "digest algorithm is null"_s);
	$Objects::requireNonNull($of(mgfName), "mask generation function algorithm is null"_s);
	if (saltLen < 0) {
		$throwNew($IllegalArgumentException, $$str({"negative saltLen value: "_s, $$str(saltLen)}));
	}
	if (trailerField < 0) {
		$throwNew($IllegalArgumentException, $$str({"negative trailerField: "_s, $$str(trailerField)}));
	}
	$set(this, mdName, mdName);
	$set(this, mgfName, mgfName);
	$set(this, mgfSpec, mgfSpec);
	this->saltLen = saltLen;
	this->trailerField = trailerField;
}

void PSSParameterSpec::init$(int32_t saltLen) {
	$init($MGF1ParameterSpec);
	PSSParameterSpec::init$("SHA-1"_s, "MGF1"_s, $MGF1ParameterSpec::SHA1, saltLen, PSSParameterSpec::TRAILER_FIELD_BC);
}

$String* PSSParameterSpec::getDigestAlgorithm() {
	return this->mdName;
}

$String* PSSParameterSpec::getMGFAlgorithm() {
	return this->mgfName;
}

$AlgorithmParameterSpec* PSSParameterSpec::getMGFParameters() {
	return this->mgfSpec;
}

int32_t PSSParameterSpec::getSaltLength() {
	return this->saltLen;
}

int32_t PSSParameterSpec::getTrailerField() {
	return this->trailerField;
}

$String* PSSParameterSpec::toString() {
	$useLocalCurrentObjectStackCache();
	$var($StringBuilder, sb, $new($StringBuilder, "PSSParameterSpec["_s));
	sb->append($$str({"hashAlgorithm="_s, this->mdName, ", "_s}))->append($$str({"maskGenAlgorithm="_s, this->mgfSpec, ", "_s}))->append($$str({"saltLength="_s, $$str(this->saltLen), ", "_s}))->append($$str({"trailerField="_s, $$str(this->trailerField)}))->append(u']');
	return sb->toString();
}

void clinit$PSSParameterSpec($Class* class$) {
	$init($MGF1ParameterSpec);
	$assignStatic(PSSParameterSpec::DEFAULT, $new(PSSParameterSpec, "SHA-1"_s, "MGF1"_s, $MGF1ParameterSpec::SHA1, 20, PSSParameterSpec::TRAILER_FIELD_BC));
}

PSSParameterSpec::PSSParameterSpec() {
}

$Class* PSSParameterSpec::load$($String* name, bool initialize) {
	$loadClass(PSSParameterSpec, name, initialize, &_PSSParameterSpec_ClassInfo_, clinit$PSSParameterSpec, allocate$PSSParameterSpec);
	return class$;
}

$Class* PSSParameterSpec::class$ = nullptr;

		} // spec
	} // security
} // java