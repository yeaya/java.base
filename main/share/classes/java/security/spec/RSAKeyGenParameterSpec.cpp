#include <java/security/spec/RSAKeyGenParameterSpec.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/math/BigInteger.h>
#include <java/security/spec/AlgorithmParameterSpec.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $BigInteger = ::java::math::BigInteger;
using $AlgorithmParameterSpec = ::java::security::spec::AlgorithmParameterSpec;

namespace java {
	namespace security {
		namespace spec {

$FieldInfo _RSAKeyGenParameterSpec_FieldInfo_[] = {
	{"keysize", "I", nullptr, $PRIVATE, $field(RSAKeyGenParameterSpec, keysize)},
	{"publicExponent", "Ljava/math/BigInteger;", nullptr, $PRIVATE, $field(RSAKeyGenParameterSpec, publicExponent)},
	{"keyParams", "Ljava/security/spec/AlgorithmParameterSpec;", nullptr, $PRIVATE, $field(RSAKeyGenParameterSpec, keyParams)},
	{"F0", "Ljava/math/BigInteger;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(RSAKeyGenParameterSpec, F0)},
	{"F4", "Ljava/math/BigInteger;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(RSAKeyGenParameterSpec, F4)},
	{}
};

$MethodInfo _RSAKeyGenParameterSpec_MethodInfo_[] = {
	{"<init>", "(ILjava/math/BigInteger;)V", nullptr, $PUBLIC, $method(static_cast<void(RSAKeyGenParameterSpec::*)(int32_t,$BigInteger*)>(&RSAKeyGenParameterSpec::init$))},
	{"<init>", "(ILjava/math/BigInteger;Ljava/security/spec/AlgorithmParameterSpec;)V", nullptr, $PUBLIC, $method(static_cast<void(RSAKeyGenParameterSpec::*)(int32_t,$BigInteger*,$AlgorithmParameterSpec*)>(&RSAKeyGenParameterSpec::init$))},
	{"getKeyParams", "()Ljava/security/spec/AlgorithmParameterSpec;", nullptr, $PUBLIC},
	{"getKeysize", "()I", nullptr, $PUBLIC},
	{"getPublicExponent", "()Ljava/math/BigInteger;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _RSAKeyGenParameterSpec_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"java.security.spec.RSAKeyGenParameterSpec",
	"java.lang.Object",
	"java.security.spec.AlgorithmParameterSpec",
	_RSAKeyGenParameterSpec_FieldInfo_,
	_RSAKeyGenParameterSpec_MethodInfo_
};

$Object* allocate$RSAKeyGenParameterSpec($Class* clazz) {
	return $of($alloc(RSAKeyGenParameterSpec));
}


$BigInteger* RSAKeyGenParameterSpec::F0 = nullptr;

$BigInteger* RSAKeyGenParameterSpec::F4 = nullptr;

void RSAKeyGenParameterSpec::init$(int32_t keysize, $BigInteger* publicExponent) {
	RSAKeyGenParameterSpec::init$(keysize, publicExponent, nullptr);
}

void RSAKeyGenParameterSpec::init$(int32_t keysize, $BigInteger* publicExponent, $AlgorithmParameterSpec* keyParams) {
	this->keysize = keysize;
	$set(this, publicExponent, publicExponent);
	$set(this, keyParams, keyParams);
}

int32_t RSAKeyGenParameterSpec::getKeysize() {
	return this->keysize;
}

$BigInteger* RSAKeyGenParameterSpec::getPublicExponent() {
	return this->publicExponent;
}

$AlgorithmParameterSpec* RSAKeyGenParameterSpec::getKeyParams() {
	return this->keyParams;
}

void clinit$RSAKeyGenParameterSpec($Class* class$) {
	$assignStatic(RSAKeyGenParameterSpec::F0, $BigInteger::valueOf((int64_t)3));
	$assignStatic(RSAKeyGenParameterSpec::F4, $BigInteger::valueOf((int64_t)0x00010001));
}

RSAKeyGenParameterSpec::RSAKeyGenParameterSpec() {
}

$Class* RSAKeyGenParameterSpec::load$($String* name, bool initialize) {
	$loadClass(RSAKeyGenParameterSpec, name, initialize, &_RSAKeyGenParameterSpec_ClassInfo_, clinit$RSAKeyGenParameterSpec, allocate$RSAKeyGenParameterSpec);
	return class$;
}

$Class* RSAKeyGenParameterSpec::class$ = nullptr;

		} // spec
	} // security
} // java