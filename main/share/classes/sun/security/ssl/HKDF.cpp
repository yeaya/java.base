#include <sun/security/ssl/HKDF.h>
#include <java/lang/CharSequence.h>
#include <java/lang/Math.h>
#include <java/util/Objects.h>
#include <javax/crypto/Mac.h>
#include <javax/crypto/SecretKey.h>
#include <javax/crypto/ShortBufferException.h>
#include <javax/crypto/spec/SecretKeySpec.h>
#include <jcpp.h>

#undef HKDF

using $CharSequence = ::java::lang::CharSequence;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $Objects = ::java::util::Objects;
using $Mac = ::javax::crypto::Mac;
using $SecretKey = ::javax::crypto::SecretKey;
using $ShortBufferException = ::javax::crypto::ShortBufferException;
using $SecretKeySpec = ::javax::crypto::spec::SecretKeySpec;

namespace sun {
	namespace security {
		namespace ssl {

void HKDF::init$($String* hashAlg) {
	$useLocalObjectStack();
	$Objects::requireNonNull(hashAlg, "Must provide underlying HKDF Digest algorithm."_s);
	$var($String, hmacAlg, $str({"Hmac"_s, $($nc(hashAlg)->replace("-"_s, ""_s))}));
	$set(this, hmacObj, $Mac::getInstance(hmacAlg));
	this->hmacLen = $nc(this->hmacObj)->getMacLength();
}

$SecretKey* HKDF::extract($SecretKey* salt$renamed, $SecretKey* inputKey, $String* keyAlg) {
	$useLocalObjectStack();
	$var($SecretKey, salt, salt$renamed);
	if (salt == nullptr) {
		$assign(salt, $new($SecretKeySpec, $$new($bytes, this->hmacLen), "HKDF-Salt"_s));
	}
	$nc(this->hmacObj)->init(salt);
	return $new($SecretKeySpec, $(this->hmacObj->doFinal($($nc(inputKey)->getEncoded()))), keyAlg);
}

$SecretKey* HKDF::extract($bytes* salt$renamed, $SecretKey* inputKey, $String* keyAlg) {
	$useLocalObjectStack();
	$var($bytes, salt, salt$renamed);
	if (salt == nullptr) {
		$assign(salt, $new($bytes, this->hmacLen));
	}
	return extract($$new($SecretKeySpec, salt, "HKDF-Salt"_s), inputKey, keyAlg);
}

$SecretKey* HKDF::expand($SecretKey* pseudoRandKey, $bytes* info$renamed, int32_t outLen, $String* keyAlg) {
	$useLocalObjectStack();
	$var($bytes, info, info$renamed);
	$var($bytes, kdfOutput, nullptr);
	$Objects::requireNonNull(pseudoRandKey, "A null PRK is not allowed."_s);
	if (outLen > 255 * this->hmacLen) {
		$throwNew($IllegalArgumentException, "Requested output length exceeds maximum length allowed for HKDF expansion"_s);
	}
	$nc(this->hmacObj)->init(pseudoRandKey);
	if (info == nullptr) {
		$assign(info, $new($bytes, 0));
	}
	int32_t rounds = $div((outLen + this->hmacLen - 1), this->hmacLen);
	$assign(kdfOutput, $new($bytes, rounds * this->hmacLen));
	int32_t offset = 0;
	int32_t tLength = 0;
	for (int32_t i = 0; i < rounds; ++i) {
		try {
			this->hmacObj->update(kdfOutput, $Math::max(0, offset - this->hmacLen), tLength);
			this->hmacObj->update(info);
			this->hmacObj->update((int8_t)(i + 1));
			this->hmacObj->doFinal(kdfOutput, offset);
			tLength = this->hmacLen;
			offset += this->hmacLen;
		} catch ($ShortBufferException& sbe) {
			$throwNew($RuntimeException, sbe);
		}
	}
	return $new($SecretKeySpec, kdfOutput, 0, outLen, keyAlg);
}

HKDF::HKDF() {
}

$Class* HKDF::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"hmacObj", "Ljavax/crypto/Mac;", nullptr, $PRIVATE | $FINAL, $field(HKDF, hmacObj)},
		{"hmacLen", "I", nullptr, $PRIVATE | $FINAL, $field(HKDF, hmacLen)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/String;)V", nullptr, 0, $method(HKDF, init$, void, $String*), "java.security.NoSuchAlgorithmException"},
		{"expand", "(Ljavax/crypto/SecretKey;[BILjava/lang/String;)Ljavax/crypto/SecretKey;", nullptr, 0, $method(HKDF, expand, $SecretKey*, $SecretKey*, $bytes*, int32_t, $String*), "java.security.InvalidKeyException"},
		{"extract", "(Ljavax/crypto/SecretKey;Ljavax/crypto/SecretKey;Ljava/lang/String;)Ljavax/crypto/SecretKey;", nullptr, 0, $method(HKDF, extract, $SecretKey*, $SecretKey*, $SecretKey*, $String*), "java.security.InvalidKeyException"},
		{"extract", "([BLjavax/crypto/SecretKey;Ljava/lang/String;)Ljavax/crypto/SecretKey;", nullptr, 0, $method(HKDF, extract, $SecretKey*, $bytes*, $SecretKey*, $String*), "java.security.InvalidKeyException"},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"sun.security.ssl.HKDF",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(HKDF, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(HKDF);
	});
	return class$;
}

$Class* HKDF::class$ = nullptr;

		} // ssl
	} // security
} // sun