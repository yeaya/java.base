#include <javax/crypto/spec/PSource.h>

#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;

namespace javax {
	namespace crypto {
		namespace spec {

$FieldInfo _PSource_FieldInfo_[] = {
	{"pSrcName", "Ljava/lang/String;", nullptr, $PRIVATE, $field(PSource, pSrcName)},
	{}
};

$MethodInfo _PSource_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;)V", nullptr, $PROTECTED, $method(PSource, init$, void, $String*)},
	{"getAlgorithm", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(PSource, getAlgorithm, $String*)},
	{}
};

$InnerClassInfo _PSource_InnerClassesInfo_[] = {
	{"javax.crypto.spec.PSource$PSpecified", "javax.crypto.spec.PSource", "PSpecified", $PUBLIC | $STATIC | $FINAL},
	{}
};

$ClassInfo _PSource_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.crypto.spec.PSource",
	"java.lang.Object",
	nullptr,
	_PSource_FieldInfo_,
	_PSource_MethodInfo_,
	nullptr,
	nullptr,
	_PSource_InnerClassesInfo_,
	nullptr,
	nullptr,
	"javax.crypto.spec.PSource$PSpecified"
};

$Object* allocate$PSource($Class* clazz) {
	return $of($alloc(PSource));
}

void PSource::init$($String* pSrcName) {
	if (pSrcName == nullptr) {
		$throwNew($NullPointerException, "pSource algorithm is null"_s);
	}
	$set(this, pSrcName, pSrcName);
}

$String* PSource::getAlgorithm() {
	return this->pSrcName;
}

PSource::PSource() {
}

$Class* PSource::load$($String* name, bool initialize) {
	$loadClass(PSource, name, initialize, &_PSource_ClassInfo_, allocate$PSource);
	return class$;
}

$Class* PSource::class$ = nullptr;

		} // spec
	} // crypto
} // javax