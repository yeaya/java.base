#include <javax/crypto/spec/GCMParameterSpec.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $MethodInfo = ::java::lang::MethodInfo;

namespace javax {
	namespace crypto {
		namespace spec {

void GCMParameterSpec::init$(int32_t tLen, $bytes* src) {
	if (src == nullptr) {
		$throwNew($IllegalArgumentException, "src array is null"_s);
	}
	init(tLen, src, 0, $nc(src)->length);
}

void GCMParameterSpec::init$(int32_t tLen, $bytes* src, int32_t offset, int32_t len) {
	init(tLen, src, offset, len);
}

void GCMParameterSpec::init(int32_t tLen, $bytes* src, int32_t offset, int32_t len) {
	if (tLen < 0) {
		$throwNew($IllegalArgumentException, "Length argument is negative"_s);
	}
	this->tLen = tLen;
	if ((src == nullptr) || (len < 0) || (offset < 0) || (len > (src->length - offset))) {
		$throwNew($IllegalArgumentException, "Invalid buffer arguments"_s);
	}
	$set(this, iv, $new($bytes, len));
	$System::arraycopy(src, offset, this->iv, 0, len);
}

int32_t GCMParameterSpec::getTLen() {
	return this->tLen;
}

$bytes* GCMParameterSpec::getIV() {
	return $cast($bytes, $nc(this->iv)->clone());
}

GCMParameterSpec::GCMParameterSpec() {
}

$Class* GCMParameterSpec::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"iv", "[B", nullptr, $PRIVATE, $field(GCMParameterSpec, iv)},
		{"tLen", "I", nullptr, $PRIVATE, $field(GCMParameterSpec, tLen)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(I[B)V", nullptr, $PUBLIC, $method(GCMParameterSpec, init$, void, int32_t, $bytes*)},
		{"<init>", "(I[BII)V", nullptr, $PUBLIC, $method(GCMParameterSpec, init$, void, int32_t, $bytes*, int32_t, int32_t)},
		{"getIV", "()[B", nullptr, $PUBLIC, $virtualMethod(GCMParameterSpec, getIV, $bytes*)},
		{"getTLen", "()I", nullptr, $PUBLIC, $virtualMethod(GCMParameterSpec, getTLen, int32_t)},
		{"init", "(I[BII)V", nullptr, $PRIVATE, $method(GCMParameterSpec, init, void, int32_t, $bytes*, int32_t, int32_t)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"javax.crypto.spec.GCMParameterSpec",
		"java.lang.Object",
		"java.security.spec.AlgorithmParameterSpec",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(GCMParameterSpec, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(GCMParameterSpec);
	});
	return class$;
}

$Class* GCMParameterSpec::class$ = nullptr;

		} // spec
	} // crypto
} // javax