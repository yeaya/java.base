#include <sun/security/provider/DSAPublicKey.h>

#include <java/io/IOException.h>
#include <java/math/BigInteger.h>
#include <java/security/AlgorithmParameters.h>
#include <java/security/InvalidKeyException.h>
#include <java/security/interfaces/DSAParams.h>
#include <java/security/spec/AlgorithmParameterSpec.h>
#include <java/security/spec/DSAParameterSpec.h>
#include <java/security/spec/InvalidParameterSpecException.h>
#include <sun/security/util/BitArray.h>
#include <sun/security/util/Debug.h>
#include <sun/security/util/DerInputStream.h>
#include <sun/security/util/DerValue.h>
#include <sun/security/x509/AlgIdDSA.h>
#include <sun/security/x509/AlgorithmId.h>
#include <sun/security/x509/X509Key.h>
#include <jcpp.h>

using $IOException = ::java::io::IOException;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $BigInteger = ::java::math::BigInteger;
using $AlgorithmParameters = ::java::security::AlgorithmParameters;
using $InvalidKeyException = ::java::security::InvalidKeyException;
using $DSAParams = ::java::security::interfaces::DSAParams;
using $DSAParameterSpec = ::java::security::spec::DSAParameterSpec;
using $InvalidParameterSpecException = ::java::security::spec::InvalidParameterSpecException;
using $BitArray = ::sun::security::util::BitArray;
using $Debug = ::sun::security::util::Debug;
using $DerInputStream = ::sun::security::util::DerInputStream;
using $DerValue = ::sun::security::util::DerValue;
using $AlgIdDSA = ::sun::security::x509::AlgIdDSA;
using $AlgorithmId = ::sun::security::x509::AlgorithmId;
using $X509Key = ::sun::security::x509::X509Key;

namespace sun {
	namespace security {
		namespace provider {

$FieldInfo _DSAPublicKey_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(DSAPublicKey, serialVersionUID)},
	{"y", "Ljava/math/BigInteger;", nullptr, $PRIVATE, $field(DSAPublicKey, y)},
	{}
};

$MethodInfo _DSAPublicKey_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*getAlgorithm", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"*getEncoded", "()[B", nullptr, $PUBLIC},
	{"*getFormat", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"*hashCode", "()I", nullptr, $PUBLIC},
	{"<init>", "()V", nullptr, $PUBLIC, $method(DSAPublicKey, init$, void)},
	{"<init>", "(Ljava/math/BigInteger;Ljava/math/BigInteger;Ljava/math/BigInteger;Ljava/math/BigInteger;)V", nullptr, $PUBLIC, $method(DSAPublicKey, init$, void, $BigInteger*, $BigInteger*, $BigInteger*, $BigInteger*), "java.security.InvalidKeyException"},
	{"<init>", "([B)V", nullptr, $PUBLIC, $method(DSAPublicKey, init$, void, $bytes*), "java.security.InvalidKeyException"},
	{"getParams", "()Ljava/security/interfaces/DSAParams;", nullptr, $PUBLIC, $virtualMethod(DSAPublicKey, getParams, $DSAParams*)},
	{"getY", "()Ljava/math/BigInteger;", nullptr, $PUBLIC, $virtualMethod(DSAPublicKey, getY, $BigInteger*)},
	{"parseKeyBits", "()V", nullptr, $PROTECTED, $virtualMethod(DSAPublicKey, parseKeyBits, void), "java.security.InvalidKeyException"},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(DSAPublicKey, toString, $String*)},
	{}
};

$ClassInfo _DSAPublicKey_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.security.provider.DSAPublicKey",
	"sun.security.x509.X509Key",
	"java.security.interfaces.DSAPublicKey",
	_DSAPublicKey_FieldInfo_,
	_DSAPublicKey_MethodInfo_
};

$Object* allocate$DSAPublicKey($Class* clazz) {
	return $of($alloc(DSAPublicKey));
}

$String* DSAPublicKey::getAlgorithm() {
	 return this->$X509Key::getAlgorithm();
}

$bytes* DSAPublicKey::getEncoded() {
	 return this->$X509Key::getEncoded();
}

$String* DSAPublicKey::getFormat() {
	 return this->$X509Key::getFormat();
}

bool DSAPublicKey::equals(Object$* obj) {
	 return this->$X509Key::equals(obj);
}

int32_t DSAPublicKey::hashCode() {
	 return this->$X509Key::hashCode();
}

$Object* DSAPublicKey::clone() {
	 return this->$X509Key::clone();
}

void DSAPublicKey::finalize() {
	this->$X509Key::finalize();
}

void DSAPublicKey::init$() {
	$X509Key::init$();
}

void DSAPublicKey::init$($BigInteger* y, $BigInteger* p, $BigInteger* q, $BigInteger* g) {
	$useLocalCurrentObjectStackCache();
	$X509Key::init$();
	$set(this, y, y);
	$set(this, algid, $new($AlgIdDSA, p, q, g));
	try {
		$var($bytes, keyArray, $$new($DerValue, $DerValue::tag_Integer, $($nc(y)->toByteArray()))->toByteArray());
		setKey($$new($BitArray, $nc(keyArray)->length * 8, keyArray));
		encode();
	} catch ($IOException& e) {
		$throwNew($InvalidKeyException, $$str({"could not DER encode y: "_s, $(e->getMessage())}));
	}
}

void DSAPublicKey::init$($bytes* encoded) {
	$X509Key::init$();
	decode(encoded);
}

$DSAParams* DSAPublicKey::getParams() {
	$useLocalCurrentObjectStackCache();
	try {
		if ($instanceOf($DSAParams, this->algid)) {
			return $cast($DSAParams, this->algid);
		} else {
			$var($DSAParameterSpec, paramSpec, nullptr);
			$var($AlgorithmParameters, algParams, $nc(this->algid)->getParameters());
			if (algParams == nullptr) {
				return nullptr;
			}
			$load($DSAParameterSpec);
			$assign(paramSpec, $cast($DSAParameterSpec, $nc(algParams)->getParameterSpec($DSAParameterSpec::class$)));
			return static_cast<$DSAParams*>(paramSpec);
		}
	} catch ($InvalidParameterSpecException& e) {
		return nullptr;
	}
	$shouldNotReachHere();
}

$BigInteger* DSAPublicKey::getY() {
	return this->y;
}

$String* DSAPublicKey::toString() {
	$useLocalCurrentObjectStackCache();
	$var($String, var$1, $$str({"Sun DSA Public Key\n    Parameters:"_s, this->algid, "\n  y:\n"_s}));
	$var($String, var$0, $$concat(var$1, $($Debug::toHexString(this->y))));
	return $concat(var$0, "\n"_s);
}

void DSAPublicKey::parseKeyBits() {
	$useLocalCurrentObjectStackCache();
	try {
		$var($DerInputStream, in, $new($DerInputStream, $($nc($(getKey()))->toByteArray())));
		$set(this, y, in->getBigInteger());
	} catch ($IOException& e) {
		$throwNew($InvalidKeyException, $$str({"Invalid key: y value\n"_s, $(e->getMessage())}));
	}
}

DSAPublicKey::DSAPublicKey() {
}

$Class* DSAPublicKey::load$($String* name, bool initialize) {
	$loadClass(DSAPublicKey, name, initialize, &_DSAPublicKey_ClassInfo_, allocate$DSAPublicKey);
	return class$;
}

$Class* DSAPublicKey::class$ = nullptr;

		} // provider
	} // security
} // sun