#include <javax/crypto/spec/GCMParameterSpec.h>

#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/IllegalArgumentException.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/System.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $MethodInfo = ::java::lang::MethodInfo;
using $AlgorithmParameterSpec = ::java::security::spec::AlgorithmParameterSpec;

namespace javax {
	namespace crypto {
		namespace spec {

$FieldInfo _GCMParameterSpec_FieldInfo_[] = {
	{"iv", "[B", nullptr, $PRIVATE, $field(GCMParameterSpec, iv)},
	{"tLen", "I", nullptr, $PRIVATE, $field(GCMParameterSpec, tLen)},
	{}
};

$MethodInfo _GCMParameterSpec_MethodInfo_[] = {
	{"<init>", "(I[B)V", nullptr, $PUBLIC, $method(static_cast<void(GCMParameterSpec::*)(int32_t,$bytes*)>(&GCMParameterSpec::init$))},
	{"<init>", "(I[BII)V", nullptr, $PUBLIC, $method(static_cast<void(GCMParameterSpec::*)(int32_t,$bytes*,int32_t,int32_t)>(&GCMParameterSpec::init$))},
	{"getIV", "()[B", nullptr, $PUBLIC},
	{"getTLen", "()I", nullptr, $PUBLIC},
	{"init", "(I[BII)V", nullptr, $PRIVATE, $method(static_cast<void(GCMParameterSpec::*)(int32_t,$bytes*,int32_t,int32_t)>(&GCMParameterSpec::init))},
	{}
};

$ClassInfo _GCMParameterSpec_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.crypto.spec.GCMParameterSpec",
	"java.lang.Object",
	"java.security.spec.AlgorithmParameterSpec",
	_GCMParameterSpec_FieldInfo_,
	_GCMParameterSpec_MethodInfo_
};

$Object* allocate$GCMParameterSpec($Class* clazz) {
	return $of($alloc(GCMParameterSpec));
}

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
	if ((src == nullptr) || (len < 0) || (offset < 0) || (len > ($nc(src)->length - offset))) {
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
	$loadClass(GCMParameterSpec, name, initialize, &_GCMParameterSpec_ClassInfo_, allocate$GCMParameterSpec);
	return class$;
}

$Class* GCMParameterSpec::class$ = nullptr;

		} // spec
	} // crypto
} // javax