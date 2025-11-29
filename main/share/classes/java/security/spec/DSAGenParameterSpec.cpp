#include <java/security/spec/DSAGenParameterSpec.h>

#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace security {
		namespace spec {

$FieldInfo _DSAGenParameterSpec_FieldInfo_[] = {
	{"pLen", "I", nullptr, $PRIVATE | $FINAL, $field(DSAGenParameterSpec, pLen)},
	{"qLen", "I", nullptr, $PRIVATE | $FINAL, $field(DSAGenParameterSpec, qLen)},
	{"seedLen", "I", nullptr, $PRIVATE | $FINAL, $field(DSAGenParameterSpec, seedLen)},
	{}
};

$MethodInfo _DSAGenParameterSpec_MethodInfo_[] = {
	{"<init>", "(II)V", nullptr, $PUBLIC, $method(static_cast<void(DSAGenParameterSpec::*)(int32_t,int32_t)>(&DSAGenParameterSpec::init$))},
	{"<init>", "(III)V", nullptr, $PUBLIC, $method(static_cast<void(DSAGenParameterSpec::*)(int32_t,int32_t,int32_t)>(&DSAGenParameterSpec::init$))},
	{"getPrimePLength", "()I", nullptr, $PUBLIC, $method(static_cast<int32_t(DSAGenParameterSpec::*)()>(&DSAGenParameterSpec::getPrimePLength))},
	{"getSeedLength", "()I", nullptr, $PUBLIC, $method(static_cast<int32_t(DSAGenParameterSpec::*)()>(&DSAGenParameterSpec::getSeedLength))},
	{"getSubprimeQLength", "()I", nullptr, $PUBLIC, $method(static_cast<int32_t(DSAGenParameterSpec::*)()>(&DSAGenParameterSpec::getSubprimeQLength))},
	{}
};

$ClassInfo _DSAGenParameterSpec_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"java.security.spec.DSAGenParameterSpec",
	"java.lang.Object",
	"java.security.spec.AlgorithmParameterSpec",
	_DSAGenParameterSpec_FieldInfo_,
	_DSAGenParameterSpec_MethodInfo_
};

$Object* allocate$DSAGenParameterSpec($Class* clazz) {
	return $of($alloc(DSAGenParameterSpec));
}

void DSAGenParameterSpec::init$(int32_t primePLen, int32_t subprimeQLen) {
	DSAGenParameterSpec::init$(primePLen, subprimeQLen, subprimeQLen);
}

void DSAGenParameterSpec::init$(int32_t primePLen, int32_t subprimeQLen, int32_t seedLen) {
	switch (primePLen) {
	case 1024:
		{
			if (subprimeQLen != 160) {
				$throwNew($IllegalArgumentException, "subprimeQLen must be 160 when primePLen=1024"_s);
			}
			break;
		}
	case 2048:
		{
			if (subprimeQLen != 224 && subprimeQLen != 256) {
				$throwNew($IllegalArgumentException, "subprimeQLen must be 224 or 256 when primePLen=2048"_s);
			}
			break;
		}
	case 3072:
		{
			if (subprimeQLen != 256) {
				$throwNew($IllegalArgumentException, "subprimeQLen must be 256 when primePLen=3072"_s);
			}
			break;
		}
	default:
		{
			$throwNew($IllegalArgumentException, "primePLen must be 1024, 2048, or 3072"_s);
		}
	}
	if (seedLen < subprimeQLen) {
		$throwNew($IllegalArgumentException, "seedLen must be equal to or greater than subprimeQLen"_s);
	}
	this->pLen = primePLen;
	this->qLen = subprimeQLen;
	this->seedLen = seedLen;
}

int32_t DSAGenParameterSpec::getPrimePLength() {
	return this->pLen;
}

int32_t DSAGenParameterSpec::getSubprimeQLength() {
	return this->qLen;
}

int32_t DSAGenParameterSpec::getSeedLength() {
	return this->seedLen;
}

DSAGenParameterSpec::DSAGenParameterSpec() {
}

$Class* DSAGenParameterSpec::load$($String* name, bool initialize) {
	$loadClass(DSAGenParameterSpec, name, initialize, &_DSAGenParameterSpec_ClassInfo_, allocate$DSAGenParameterSpec);
	return class$;
}

$Class* DSAGenParameterSpec::class$ = nullptr;

		} // spec
	} // security
} // java