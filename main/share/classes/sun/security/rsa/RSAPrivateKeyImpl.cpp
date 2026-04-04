#include <sun/security/rsa/RSAPrivateKeyImpl.h>
#include <java/io/IOException.h>
#include <java/math/BigInteger.h>
#include <java/security/InvalidKeyException.h>
#include <java/security/ProviderException.h>
#include <java/security/spec/AlgorithmParameterSpec.h>
#include <java/util/Arrays.h>
#include <sun/security/pkcs/PKCS8Key.h>
#include <sun/security/rsa/RSAKeyFactory.h>
#include <sun/security/rsa/RSAUtil$KeyType.h>
#include <sun/security/rsa/RSAUtil.h>
#include <sun/security/util/DerOutputStream.h>
#include <sun/security/util/DerValue.h>
#include <sun/security/x509/AlgorithmId.h>
#include <jcpp.h>

using $IOException = ::java::io::IOException;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $BigInteger = ::java::math::BigInteger;
using $InvalidKeyException = ::java::security::InvalidKeyException;
using $ProviderException = ::java::security::ProviderException;
using $AlgorithmParameterSpec = ::java::security::spec::AlgorithmParameterSpec;
using $Arrays = ::java::util::Arrays;
using $PKCS8Key = ::sun::security::pkcs::PKCS8Key;
using $RSAKeyFactory = ::sun::security::rsa::RSAKeyFactory;
using $RSAUtil = ::sun::security::rsa::RSAUtil;
using $RSAUtil$KeyType = ::sun::security::rsa::RSAUtil$KeyType;
using $DerOutputStream = ::sun::security::util::DerOutputStream;
using $DerValue = ::sun::security::util::DerValue;

namespace sun {
	namespace security {
		namespace rsa {

$bytes* RSAPrivateKeyImpl::getEncoded() {
	 return this->$PKCS8Key::getEncoded();
}

$String* RSAPrivateKeyImpl::getFormat() {
	 return this->$PKCS8Key::getFormat();
}

bool RSAPrivateKeyImpl::equals(Object$* object) {
	 return this->$PKCS8Key::equals(object);
}

int32_t RSAPrivateKeyImpl::hashCode() {
	 return this->$PKCS8Key::hashCode();
}

$Object* RSAPrivateKeyImpl::clone() {
	 return this->$PKCS8Key::clone();
}

void RSAPrivateKeyImpl::finalize() {
	this->$PKCS8Key::finalize();
}

void RSAPrivateKeyImpl::destroy() {
	this->$PKCS8Key::destroy();
}

bool RSAPrivateKeyImpl::isDestroyed() {
	 return this->$PKCS8Key::isDestroyed();
}

void RSAPrivateKeyImpl::init$($RSAUtil$KeyType* type, $AlgorithmParameterSpec* keyParams, $BigInteger* n, $BigInteger* d) {
	$useLocalObjectStack();
	$PKCS8Key::init$();
	$RSAKeyFactory::checkRSAProviderKeyLengths($nc(n)->bitLength(), nullptr);
	$set(this, n, n);
	$set(this, d, d);
	try {
		$set(this, algid, $RSAUtil::createAlgorithmId(type, keyParams));
	} catch ($ProviderException& pe) {
		$throwNew($InvalidKeyException, pe);
	}
	$set(this, type, type);
	$set(this, keyParams, keyParams);
	try {
		$var($bytes, nbytes, n->toByteArray());
		$var($bytes, dbytes, $nc(d)->toByteArray());
		$var($DerOutputStream, out, $new($DerOutputStream, nbytes->length + dbytes->length + 50));
		out->putInteger(0);
		out->putInteger(nbytes);
		$Arrays::fill(nbytes, (int8_t)0);
		out->putInteger(0);
		out->putInteger(dbytes);
		$Arrays::fill(dbytes, (int8_t)0);
		out->putInteger(0);
		out->putInteger(0);
		out->putInteger(0);
		out->putInteger(0);
		out->putInteger(0);
		$var($DerValue, val, $DerValue::wrap($DerValue::tag_Sequence, out));
		$set(this, key, $nc(val)->toByteArray());
		val->clear();
	} catch ($IOException& exc) {
		$throwNew($InvalidKeyException, exc);
	}
}

$String* RSAPrivateKeyImpl::getAlgorithm() {
	return this->type->keyAlgo;
}

$BigInteger* RSAPrivateKeyImpl::getModulus() {
	return this->n;
}

$BigInteger* RSAPrivateKeyImpl::getPrivateExponent() {
	return this->d;
}

$AlgorithmParameterSpec* RSAPrivateKeyImpl::getParams() {
	return this->keyParams;
}

$String* RSAPrivateKeyImpl::toString() {
	return $str({"Sun "_s, this->type->keyAlgo, " private key, "_s, $$str($nc(this->n)->bitLength()), " bits\n  params: "_s, this->keyParams, "\n  modulus: "_s, this->n, "\n  private exponent: "_s, this->d});
}

RSAPrivateKeyImpl::RSAPrivateKeyImpl() {
}

$Class* RSAPrivateKeyImpl::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(RSAPrivateKeyImpl, serialVersionUID)},
		{"n", "Ljava/math/BigInteger;", nullptr, $PRIVATE | $FINAL, $field(RSAPrivateKeyImpl, n)},
		{"d", "Ljava/math/BigInteger;", nullptr, $PRIVATE | $FINAL, $field(RSAPrivateKeyImpl, d)},
		{"type", "Lsun/security/rsa/RSAUtil$KeyType;", nullptr, $PRIVATE | $FINAL | $TRANSIENT, $field(RSAPrivateKeyImpl, type)},
		{"keyParams", "Ljava/security/spec/AlgorithmParameterSpec;", nullptr, $PRIVATE | $FINAL | $TRANSIENT, $field(RSAPrivateKeyImpl, keyParams)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
		{"*destroy", "()V", nullptr, $PUBLIC | $ABSTRACT},
		{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
		{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
		{"*getEncoded", "()[B", nullptr, $PUBLIC},
		{"*getFormat", "()Ljava/lang/String;", nullptr, $PUBLIC},
		{"*hashCode", "()I", nullptr, $PUBLIC},
		{"<init>", "(Lsun/security/rsa/RSAUtil$KeyType;Ljava/security/spec/AlgorithmParameterSpec;Ljava/math/BigInteger;Ljava/math/BigInteger;)V", nullptr, 0, $method(RSAPrivateKeyImpl, init$, void, $RSAUtil$KeyType*, $AlgorithmParameterSpec*, $BigInteger*, $BigInteger*), "java.security.InvalidKeyException"},
		{"getAlgorithm", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(RSAPrivateKeyImpl, getAlgorithm, $String*)},
		{"getModulus", "()Ljava/math/BigInteger;", nullptr, $PUBLIC, $virtualMethod(RSAPrivateKeyImpl, getModulus, $BigInteger*)},
		{"getParams", "()Ljava/security/spec/AlgorithmParameterSpec;", nullptr, $PUBLIC, $virtualMethod(RSAPrivateKeyImpl, getParams, $AlgorithmParameterSpec*)},
		{"getPrivateExponent", "()Ljava/math/BigInteger;", nullptr, $PUBLIC, $virtualMethod(RSAPrivateKeyImpl, getPrivateExponent, $BigInteger*)},
		{"*isDestroyed", "()Z", nullptr, $PUBLIC | $ABSTRACT},
		{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(RSAPrivateKeyImpl, toString, $String*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL | $ACC_SUPER,
		"sun.security.rsa.RSAPrivateKeyImpl",
		"sun.security.pkcs.PKCS8Key",
		"java.security.interfaces.RSAPrivateKey",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(RSAPrivateKeyImpl, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(RSAPrivateKeyImpl));
	});
	return class$;
}

$Class* RSAPrivateKeyImpl::class$ = nullptr;

		} // rsa
	} // security
} // sun