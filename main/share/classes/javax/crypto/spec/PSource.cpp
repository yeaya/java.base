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
	$FieldInfo fieldInfos$$[] = {
		{"pSrcName", "Ljava/lang/String;", nullptr, $PRIVATE, $field(PSource, pSrcName)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/String;)V", nullptr, $PROTECTED, $method(PSource, init$, void, $String*)},
		{"getAlgorithm", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(PSource, getAlgorithm, $String*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.crypto.spec.PSource$PSpecified", "javax.crypto.spec.PSource", "PSpecified", $PUBLIC | $STATIC | $FINAL},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"javax.crypto.spec.PSource",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"javax.crypto.spec.PSource$PSpecified"
	};
	$loadClass(PSource, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(PSource);
	});
	return class$;
}

$Class* PSource::class$ = nullptr;

		} // spec
	} // crypto
} // javax