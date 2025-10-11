#include <com/sun/crypto/provider/AESCrypt.h>

#include <com/sun/crypto/provider/AESConstants.h>
#include <com/sun/crypto/provider/SymmetricCipher.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/CompoundAttribute.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/RuntimeException.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/security/InvalidKeyException.h>
#include <java/security/MessageDigest.h>
#include <java/util/Arrays.h>
#include <jcpp.h>

#undef AA
#undef BC
#undef A
#undef ROUNDS_12
#undef B
#undef ROUNDS_14
#undef ROOT
#undef G
#undef K
#undef ROUNDS
#undef ROUND_KEY_COUNT
#undef AES_KEYSIZES
#undef AES_BLOCK_SIZE
#undef S
#undef KC

using $byteArray2 = $Array<int8_t, 2>;
using $intArray2 = $Array<int32_t, 2>;
using $AESConstants = ::com::sun::crypto::provider::AESConstants;
using $SymmetricCipher = ::com::sun::crypto::provider::SymmetricCipher;
using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $InvalidKeyException = ::java::security::InvalidKeyException;
using $MessageDigest = ::java::security::MessageDigest;
using $Arrays = ::java::util::Arrays;

namespace com {
	namespace sun {
		namespace crypto {
			namespace provider {

$CompoundAttribute _AESCrypt_MethodAnnotations_implDecryptBlock6[] = {
	{"Ljdk/internal/vm/annotation/IntrinsicCandidate;", nullptr},
	{}
};

$CompoundAttribute _AESCrypt_MethodAnnotations_implEncryptBlock7[] = {
	{"Ljdk/internal/vm/annotation/IntrinsicCandidate;", nullptr},
	{}
};

$FieldInfo _AESCrypt_FieldInfo_[] = {
	{"ROUNDS_12", "Z", nullptr, $PRIVATE, $field(AESCrypt, ROUNDS_12)},
	{"ROUNDS_14", "Z", nullptr, $PRIVATE, $field(AESCrypt, ROUNDS_14)},
	{"sessionK", "[[I", nullptr, $PRIVATE, $field(AESCrypt, sessionK)},
	{"K", "[I", nullptr, $PRIVATE, $field(AESCrypt, K)},
	{"lastKey", "[B", nullptr, $PRIVATE, $field(AESCrypt, lastKey)},
	{"limit", "I", nullptr, $PRIVATE, $field(AESCrypt, limit)},
	{"alog", "[I", nullptr, $PRIVATE | $STATIC, $staticField(AESCrypt, alog)},
	{"log", "[I", nullptr, $PRIVATE | $STATIC, $staticField(AESCrypt, log)},
	{"S", "[B", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(AESCrypt, S)},
	{"Si", "[B", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(AESCrypt, Si)},
	{"T1", "[I", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(AESCrypt, T1)},
	{"T2", "[I", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(AESCrypt, T2)},
	{"T3", "[I", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(AESCrypt, T3)},
	{"T4", "[I", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(AESCrypt, T4)},
	{"T5", "[I", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(AESCrypt, T5)},
	{"T6", "[I", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(AESCrypt, T6)},
	{"T7", "[I", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(AESCrypt, T7)},
	{"T8", "[I", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(AESCrypt, T8)},
	{"U1", "[I", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(AESCrypt, U1)},
	{"U2", "[I", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(AESCrypt, U2)},
	{"U3", "[I", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(AESCrypt, U3)},
	{"U4", "[I", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(AESCrypt, U4)},
	{"rcon", "[B", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(AESCrypt, rcon)},
	{}
};

$MethodInfo _AESCrypt_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(AESCrypt::*)()>(&AESCrypt::init$))},
	{"decryptBlock", "([BI[BI)V", nullptr, 0},
	{"encryptBlock", "([BI[BI)V", nullptr, 0},
	{"expandToSubKey", "([[IZ)[I", nullptr, $PRIVATE | $STATIC | $FINAL, $method(static_cast<$ints*(*)($intArray2*,bool)>(&AESCrypt::expandToSubKey))},
	{"getBlockSize", "()I", nullptr, 0},
	{"getRounds", "(I)I", nullptr, $PRIVATE | $STATIC, $method(static_cast<int32_t(*)(int32_t)>(&AESCrypt::getRounds))},
	{"implDecryptBlock", "([BI[BI)V", nullptr, $PRIVATE, $method(static_cast<void(AESCrypt::*)($bytes*,int32_t,$bytes*,int32_t)>(&AESCrypt::implDecryptBlock)), nullptr, nullptr, _AESCrypt_MethodAnnotations_implDecryptBlock6},
	{"implEncryptBlock", "([BI[BI)V", nullptr, $PRIVATE, $method(static_cast<void(AESCrypt::*)($bytes*,int32_t,$bytes*,int32_t)>(&AESCrypt::implEncryptBlock)), nullptr, nullptr, _AESCrypt_MethodAnnotations_implEncryptBlock7},
	{"init", "(ZLjava/lang/String;[B)V", nullptr, 0, nullptr, "java.security.InvalidKeyException"},
	{"isKeySizeValid", "(I)Z", nullptr, $STATIC | $FINAL, $method(static_cast<bool(*)(int32_t)>(&AESCrypt::isKeySizeValid))},
	{"makeSessionKey", "([B)V", nullptr, $PRIVATE, $method(static_cast<void(AESCrypt::*)($bytes*)>(&AESCrypt::makeSessionKey)), "java.security.InvalidKeyException"},
	{"mul", "(II)I", nullptr, $PRIVATE | $STATIC | $FINAL, $method(static_cast<int32_t(*)(int32_t,int32_t)>(&AESCrypt::mul))},
	{"mul4", "(I[B)I", nullptr, $PRIVATE | $STATIC | $FINAL, $method(static_cast<int32_t(*)(int32_t,$bytes*)>(&AESCrypt::mul4))},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _AESCrypt_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"com.sun.crypto.provider.AESCrypt",
	"com.sun.crypto.provider.SymmetricCipher",
	"com.sun.crypto.provider.AESConstants",
	_AESCrypt_FieldInfo_,
	_AESCrypt_MethodInfo_
};

$Object* allocate$AESCrypt($Class* clazz) {
	return $of($alloc(AESCrypt));
}

int32_t AESCrypt::hashCode() {
	 return this->$SymmetricCipher::hashCode();
}

bool AESCrypt::equals(Object$* obj) {
	 return this->$SymmetricCipher::equals(obj);
}

$Object* AESCrypt::clone() {
	 return this->$SymmetricCipher::clone();
}

$String* AESCrypt::toString() {
	 return this->$SymmetricCipher::toString();
}

void AESCrypt::finalize() {
	this->$SymmetricCipher::finalize();
}

$ints* AESCrypt::alog = nullptr;
$ints* AESCrypt::log = nullptr;
$bytes* AESCrypt::S = nullptr;
$bytes* AESCrypt::Si = nullptr;
$ints* AESCrypt::T1 = nullptr;
$ints* AESCrypt::T2 = nullptr;
$ints* AESCrypt::T3 = nullptr;
$ints* AESCrypt::T4 = nullptr;
$ints* AESCrypt::T5 = nullptr;
$ints* AESCrypt::T6 = nullptr;
$ints* AESCrypt::T7 = nullptr;
$ints* AESCrypt::T8 = nullptr;
$ints* AESCrypt::U1 = nullptr;
$ints* AESCrypt::U2 = nullptr;
$ints* AESCrypt::U3 = nullptr;
$ints* AESCrypt::U4 = nullptr;
$bytes* AESCrypt::rcon = nullptr;

void AESCrypt::init$() {
	$SymmetricCipher::init$();
	this->ROUNDS_12 = false;
	this->ROUNDS_14 = false;
	$set(this, sessionK, nullptr);
	$set(this, K, nullptr);
	$set(this, lastKey, nullptr);
	this->limit = 0;
}

int32_t AESCrypt::getBlockSize() {
	return $AESConstants::AES_BLOCK_SIZE;
}

void AESCrypt::init(bool decrypting, $String* algorithm, $bytes* key) {
	bool var$0 = !$nc(algorithm)->equalsIgnoreCase("AES"_s);
	if (var$0 && !algorithm->equalsIgnoreCase("Rijndael"_s)) {
		$throwNew($InvalidKeyException, "Wrong algorithm: AES or Rijndael required"_s);
	}
	if (!isKeySizeValid($nc(key)->length)) {
		$throwNew($InvalidKeyException, $$str({"Invalid AES key length: "_s, $$str($nc(key)->length), " bytes"_s}));
	}
	if (!$MessageDigest::isEqual(key, this->lastKey)) {
		makeSessionKey(key);
		if (this->lastKey != nullptr) {
			$Arrays::fill(this->lastKey, (int8_t)0);
		}
		$set(this, lastKey, $cast($bytes, $nc(key)->clone()));
	}
	$set(this, K, $nc(this->sessionK)->get(decrypting ? 1 : 0));
}

$ints* AESCrypt::expandToSubKey($intArray2* kr, bool decrypting) {
	$init(AESCrypt);
	int32_t total = $nc(kr)->length;
	$var($ints, expK, $new($ints, total * 4));
	if (decrypting) {
		for (int32_t j = 0; j < 4; ++j) {
			expK->set(j, $nc(kr->get(total - 1))->get(j));
		}
		for (int32_t i = 1; i < total; ++i) {
			for (int32_t j = 0; j < 4; ++j) {
				expK->set(i * 4 + j, $nc(kr->get(i - 1))->get(j));
			}
		}
	} else {
		for (int32_t i = 0; i < total; ++i) {
			for (int32_t j = 0; j < 4; ++j) {
				expK->set(i * 4 + j, $nc(kr->get(i))->get(j));
			}
		}
	}
	return expK;
}

int32_t AESCrypt::mul(int32_t a, int32_t b) {
	$init(AESCrypt);
	return (a != 0 && b != 0) ? $nc(AESCrypt::alog)->get(($nc(AESCrypt::log)->get((int32_t)(a & (uint32_t)255)) + $nc(AESCrypt::log)->get((int32_t)(b & (uint32_t)255))) % 255) : 0;
}

int32_t AESCrypt::mul4(int32_t a, $bytes* b) {
	$init(AESCrypt);
	if (a == 0) {
		return 0;
	}
	a = $nc(AESCrypt::log)->get((int32_t)(a & (uint32_t)255));
	int32_t a0 = ($nc(b)->get(0) != 0) ? (int32_t)($nc(AESCrypt::alog)->get((a + $nc(AESCrypt::log)->get((int32_t)($nc(b)->get(0) & (uint32_t)255))) % 255) & (uint32_t)255) : 0;
	int32_t a1 = (b->get(1) != 0) ? (int32_t)($nc(AESCrypt::alog)->get((a + $nc(AESCrypt::log)->get((int32_t)(b->get(1) & (uint32_t)255))) % 255) & (uint32_t)255) : 0;
	int32_t a2 = (b->get(2) != 0) ? (int32_t)($nc(AESCrypt::alog)->get((a + $nc(AESCrypt::log)->get((int32_t)(b->get(2) & (uint32_t)255))) % 255) & (uint32_t)255) : 0;
	int32_t a3 = (b->get(3) != 0) ? (int32_t)($nc(AESCrypt::alog)->get((a + $nc(AESCrypt::log)->get((int32_t)(b->get(3) & (uint32_t)255))) % 255) & (uint32_t)255) : 0;
	return (((a0 << 24) | (a1 << 16)) | (a2 << 8)) | a3;
}

bool AESCrypt::isKeySizeValid(int32_t len) {
	$init(AESCrypt);
	$init($AESConstants);
	for (int32_t i = 0; i < $nc($AESConstants::AES_KEYSIZES)->length; ++i) {
		if (len == $nc($AESConstants::AES_KEYSIZES)->get(i)) {
			return true;
		}
	}
	return false;
}

void AESCrypt::encryptBlock($bytes* in, int32_t inOffset, $bytes* out, int32_t outOffset) {
	implEncryptBlock(in, inOffset, out, outOffset);
}

void AESCrypt::implEncryptBlock($bytes* in, int32_t inOffset, $bytes* out, int32_t outOffset) {
	int32_t keyOffset = 0;
	int32_t var$2 = ($nc(in)->get(inOffset++)) << 24;
	int32_t var$1 = var$2 | (((int32_t)(in->get(inOffset++) & (uint32_t)255)) << 16);
	int32_t var$0 = var$1 | (((int32_t)(in->get(inOffset++) & (uint32_t)255)) << 8);
	int32_t t0 = (var$0 | ((int32_t)(in->get(inOffset++) & (uint32_t)255))) ^ $nc(this->K)->get(keyOffset++);
	int32_t var$5 = (in->get(inOffset++)) << 24;
	int32_t var$4 = var$5 | (((int32_t)(in->get(inOffset++) & (uint32_t)255)) << 16);
	int32_t var$3 = var$4 | (((int32_t)(in->get(inOffset++) & (uint32_t)255)) << 8);
	int32_t t1 = (var$3 | ((int32_t)(in->get(inOffset++) & (uint32_t)255))) ^ $nc(this->K)->get(keyOffset++);
	int32_t var$8 = (in->get(inOffset++)) << 24;
	int32_t var$7 = var$8 | (((int32_t)(in->get(inOffset++) & (uint32_t)255)) << 16);
	int32_t var$6 = var$7 | (((int32_t)(in->get(inOffset++) & (uint32_t)255)) << 8);
	int32_t t2 = (var$6 | ((int32_t)(in->get(inOffset++) & (uint32_t)255))) ^ $nc(this->K)->get(keyOffset++);
	int32_t var$11 = (in->get(inOffset++)) << 24;
	int32_t var$10 = var$11 | (((int32_t)(in->get(inOffset++) & (uint32_t)255)) << 16);
	int32_t var$9 = var$10 | (((int32_t)(in->get(inOffset++) & (uint32_t)255)) << 8);
	int32_t t3 = (var$9 | ((int32_t)(in->get(inOffset++) & (uint32_t)255))) ^ $nc(this->K)->get(keyOffset++);
	while (keyOffset < this->limit) {
		int32_t a0 = 0;
		int32_t a1 = 0;
		int32_t a2 = 0;
		a0 = ((($nc(AESCrypt::T1)->get((int32_t)((uint32_t)t0 >> 24)) ^ $nc(AESCrypt::T2)->get((int32_t)(((int32_t)((uint32_t)t1 >> 16)) & (uint32_t)255))) ^ $nc(AESCrypt::T3)->get((int32_t)(((int32_t)((uint32_t)t2 >> 8)) & (uint32_t)255))) ^ $nc(AESCrypt::T4)->get((int32_t)((t3) & (uint32_t)255))) ^ $nc(this->K)->get(keyOffset++);
		a1 = ((($nc(AESCrypt::T1)->get((int32_t)((uint32_t)t1 >> 24)) ^ $nc(AESCrypt::T2)->get((int32_t)(((int32_t)((uint32_t)t2 >> 16)) & (uint32_t)255))) ^ $nc(AESCrypt::T3)->get((int32_t)(((int32_t)((uint32_t)t3 >> 8)) & (uint32_t)255))) ^ $nc(AESCrypt::T4)->get((int32_t)((t0) & (uint32_t)255))) ^ $nc(this->K)->get(keyOffset++);
		a2 = ((($nc(AESCrypt::T1)->get((int32_t)((uint32_t)t2 >> 24)) ^ $nc(AESCrypt::T2)->get((int32_t)(((int32_t)((uint32_t)t3 >> 16)) & (uint32_t)255))) ^ $nc(AESCrypt::T3)->get((int32_t)(((int32_t)((uint32_t)t0 >> 8)) & (uint32_t)255))) ^ $nc(AESCrypt::T4)->get((int32_t)((t1) & (uint32_t)255))) ^ $nc(this->K)->get(keyOffset++);
		t3 = ((($nc(AESCrypt::T1)->get((int32_t)((uint32_t)t3 >> 24)) ^ $nc(AESCrypt::T2)->get((int32_t)(((int32_t)((uint32_t)t0 >> 16)) & (uint32_t)255))) ^ $nc(AESCrypt::T3)->get((int32_t)(((int32_t)((uint32_t)t1 >> 8)) & (uint32_t)255))) ^ $nc(AESCrypt::T4)->get((int32_t)((t2) & (uint32_t)255))) ^ $nc(this->K)->get(keyOffset++);
		t0 = a0;
		t1 = a1;
		t2 = a2;
	}
	int32_t tt = $nc(this->K)->get(keyOffset++);
	$nc(out)->set(outOffset++, (int8_t)($nc(AESCrypt::S)->get((int32_t)((uint32_t)t0 >> 24)) ^ ((int32_t)((uint32_t)tt >> 24))));
	out->set(outOffset++, (int8_t)($nc(AESCrypt::S)->get((int32_t)(((int32_t)((uint32_t)t1 >> 16)) & (uint32_t)255)) ^ ((int32_t)((uint32_t)tt >> 16))));
	out->set(outOffset++, (int8_t)($nc(AESCrypt::S)->get((int32_t)(((int32_t)((uint32_t)t2 >> 8)) & (uint32_t)255)) ^ ((int32_t)((uint32_t)tt >> 8))));
	out->set(outOffset++, (int8_t)($nc(AESCrypt::S)->get((int32_t)((t3) & (uint32_t)255)) ^ (tt)));
	tt = $nc(this->K)->get(keyOffset++);
	out->set(outOffset++, (int8_t)($nc(AESCrypt::S)->get((int32_t)((uint32_t)t1 >> 24)) ^ ((int32_t)((uint32_t)tt >> 24))));
	out->set(outOffset++, (int8_t)($nc(AESCrypt::S)->get((int32_t)(((int32_t)((uint32_t)t2 >> 16)) & (uint32_t)255)) ^ ((int32_t)((uint32_t)tt >> 16))));
	out->set(outOffset++, (int8_t)($nc(AESCrypt::S)->get((int32_t)(((int32_t)((uint32_t)t3 >> 8)) & (uint32_t)255)) ^ ((int32_t)((uint32_t)tt >> 8))));
	out->set(outOffset++, (int8_t)($nc(AESCrypt::S)->get((int32_t)((t0) & (uint32_t)255)) ^ (tt)));
	tt = $nc(this->K)->get(keyOffset++);
	out->set(outOffset++, (int8_t)($nc(AESCrypt::S)->get((int32_t)((uint32_t)t2 >> 24)) ^ ((int32_t)((uint32_t)tt >> 24))));
	out->set(outOffset++, (int8_t)($nc(AESCrypt::S)->get((int32_t)(((int32_t)((uint32_t)t3 >> 16)) & (uint32_t)255)) ^ ((int32_t)((uint32_t)tt >> 16))));
	out->set(outOffset++, (int8_t)($nc(AESCrypt::S)->get((int32_t)(((int32_t)((uint32_t)t0 >> 8)) & (uint32_t)255)) ^ ((int32_t)((uint32_t)tt >> 8))));
	out->set(outOffset++, (int8_t)($nc(AESCrypt::S)->get((int32_t)((t1) & (uint32_t)255)) ^ (tt)));
	tt = $nc(this->K)->get(keyOffset++);
	out->set(outOffset++, (int8_t)($nc(AESCrypt::S)->get((int32_t)((uint32_t)t3 >> 24)) ^ ((int32_t)((uint32_t)tt >> 24))));
	out->set(outOffset++, (int8_t)($nc(AESCrypt::S)->get((int32_t)(((int32_t)((uint32_t)t0 >> 16)) & (uint32_t)255)) ^ ((int32_t)((uint32_t)tt >> 16))));
	out->set(outOffset++, (int8_t)($nc(AESCrypt::S)->get((int32_t)(((int32_t)((uint32_t)t1 >> 8)) & (uint32_t)255)) ^ ((int32_t)((uint32_t)tt >> 8))));
	out->set(outOffset, (int8_t)($nc(AESCrypt::S)->get((int32_t)((t2) & (uint32_t)255)) ^ (tt)));
}

void AESCrypt::decryptBlock($bytes* in, int32_t inOffset, $bytes* out, int32_t outOffset) {
	implDecryptBlock(in, inOffset, out, outOffset);
}

void AESCrypt::implDecryptBlock($bytes* in, int32_t inOffset, $bytes* out, int32_t outOffset) {
	int32_t keyOffset = 4;
	int32_t var$2 = ($nc(in)->get(inOffset++)) << 24;
	int32_t var$1 = var$2 | (((int32_t)(in->get(inOffset++) & (uint32_t)255)) << 16);
	int32_t var$0 = var$1 | (((int32_t)(in->get(inOffset++) & (uint32_t)255)) << 8);
	int32_t t0 = (var$0 | ((int32_t)(in->get(inOffset++) & (uint32_t)255))) ^ $nc(this->K)->get(keyOffset++);
	int32_t var$5 = (in->get(inOffset++)) << 24;
	int32_t var$4 = var$5 | (((int32_t)(in->get(inOffset++) & (uint32_t)255)) << 16);
	int32_t var$3 = var$4 | (((int32_t)(in->get(inOffset++) & (uint32_t)255)) << 8);
	int32_t t1 = (var$3 | ((int32_t)(in->get(inOffset++) & (uint32_t)255))) ^ $nc(this->K)->get(keyOffset++);
	int32_t var$8 = (in->get(inOffset++)) << 24;
	int32_t var$7 = var$8 | (((int32_t)(in->get(inOffset++) & (uint32_t)255)) << 16);
	int32_t var$6 = var$7 | (((int32_t)(in->get(inOffset++) & (uint32_t)255)) << 8);
	int32_t t2 = (var$6 | ((int32_t)(in->get(inOffset++) & (uint32_t)255))) ^ $nc(this->K)->get(keyOffset++);
	int32_t var$11 = (in->get(inOffset++)) << 24;
	int32_t var$10 = var$11 | (((int32_t)(in->get(inOffset++) & (uint32_t)255)) << 16);
	int32_t var$9 = var$10 | (((int32_t)(in->get(inOffset++) & (uint32_t)255)) << 8);
	int32_t t3 = (var$9 | ((int32_t)(in->get(inOffset) & (uint32_t)255))) ^ $nc(this->K)->get(keyOffset++);
	int32_t a0 = 0;
	int32_t a1 = 0;
	int32_t a2 = 0;
	if (this->ROUNDS_12) {
		a0 = ((($nc(AESCrypt::T5)->get((int32_t)((uint32_t)t0 >> 24)) ^ $nc(AESCrypt::T6)->get((int32_t)(((int32_t)((uint32_t)t3 >> 16)) & (uint32_t)255))) ^ $nc(AESCrypt::T7)->get((int32_t)(((int32_t)((uint32_t)t2 >> 8)) & (uint32_t)255))) ^ $nc(AESCrypt::T8)->get((int32_t)((t1) & (uint32_t)255))) ^ $nc(this->K)->get(keyOffset++);
		a1 = ((($nc(AESCrypt::T5)->get((int32_t)((uint32_t)t1 >> 24)) ^ $nc(AESCrypt::T6)->get((int32_t)(((int32_t)((uint32_t)t0 >> 16)) & (uint32_t)255))) ^ $nc(AESCrypt::T7)->get((int32_t)(((int32_t)((uint32_t)t3 >> 8)) & (uint32_t)255))) ^ $nc(AESCrypt::T8)->get((int32_t)((t2) & (uint32_t)255))) ^ $nc(this->K)->get(keyOffset++);
		a2 = ((($nc(AESCrypt::T5)->get((int32_t)((uint32_t)t2 >> 24)) ^ $nc(AESCrypt::T6)->get((int32_t)(((int32_t)((uint32_t)t1 >> 16)) & (uint32_t)255))) ^ $nc(AESCrypt::T7)->get((int32_t)(((int32_t)((uint32_t)t0 >> 8)) & (uint32_t)255))) ^ $nc(AESCrypt::T8)->get((int32_t)((t3) & (uint32_t)255))) ^ $nc(this->K)->get(keyOffset++);
		t3 = ((($nc(AESCrypt::T5)->get((int32_t)((uint32_t)t3 >> 24)) ^ $nc(AESCrypt::T6)->get((int32_t)(((int32_t)((uint32_t)t2 >> 16)) & (uint32_t)255))) ^ $nc(AESCrypt::T7)->get((int32_t)(((int32_t)((uint32_t)t1 >> 8)) & (uint32_t)255))) ^ $nc(AESCrypt::T8)->get((int32_t)((t0) & (uint32_t)255))) ^ $nc(this->K)->get(keyOffset++);
		t0 = ((($nc(AESCrypt::T5)->get((int32_t)((uint32_t)a0 >> 24)) ^ $nc(AESCrypt::T6)->get((int32_t)(((int32_t)((uint32_t)t3 >> 16)) & (uint32_t)255))) ^ $nc(AESCrypt::T7)->get((int32_t)(((int32_t)((uint32_t)a2 >> 8)) & (uint32_t)255))) ^ $nc(AESCrypt::T8)->get((int32_t)((a1) & (uint32_t)255))) ^ $nc(this->K)->get(keyOffset++);
		t1 = ((($nc(AESCrypt::T5)->get((int32_t)((uint32_t)a1 >> 24)) ^ $nc(AESCrypt::T6)->get((int32_t)(((int32_t)((uint32_t)a0 >> 16)) & (uint32_t)255))) ^ $nc(AESCrypt::T7)->get((int32_t)(((int32_t)((uint32_t)t3 >> 8)) & (uint32_t)255))) ^ $nc(AESCrypt::T8)->get((int32_t)((a2) & (uint32_t)255))) ^ $nc(this->K)->get(keyOffset++);
		t2 = ((($nc(AESCrypt::T5)->get((int32_t)((uint32_t)a2 >> 24)) ^ $nc(AESCrypt::T6)->get((int32_t)(((int32_t)((uint32_t)a1 >> 16)) & (uint32_t)255))) ^ $nc(AESCrypt::T7)->get((int32_t)(((int32_t)((uint32_t)a0 >> 8)) & (uint32_t)255))) ^ $nc(AESCrypt::T8)->get((int32_t)((t3) & (uint32_t)255))) ^ $nc(this->K)->get(keyOffset++);
		t3 = ((($nc(AESCrypt::T5)->get((int32_t)((uint32_t)t3 >> 24)) ^ $nc(AESCrypt::T6)->get((int32_t)(((int32_t)((uint32_t)a2 >> 16)) & (uint32_t)255))) ^ $nc(AESCrypt::T7)->get((int32_t)(((int32_t)((uint32_t)a1 >> 8)) & (uint32_t)255))) ^ $nc(AESCrypt::T8)->get((int32_t)((a0) & (uint32_t)255))) ^ $nc(this->K)->get(keyOffset++);
		if (this->ROUNDS_14) {
			a0 = ((($nc(AESCrypt::T5)->get((int32_t)((uint32_t)t0 >> 24)) ^ $nc(AESCrypt::T6)->get((int32_t)(((int32_t)((uint32_t)t3 >> 16)) & (uint32_t)255))) ^ $nc(AESCrypt::T7)->get((int32_t)(((int32_t)((uint32_t)t2 >> 8)) & (uint32_t)255))) ^ $nc(AESCrypt::T8)->get((int32_t)((t1) & (uint32_t)255))) ^ $nc(this->K)->get(keyOffset++);
			a1 = ((($nc(AESCrypt::T5)->get((int32_t)((uint32_t)t1 >> 24)) ^ $nc(AESCrypt::T6)->get((int32_t)(((int32_t)((uint32_t)t0 >> 16)) & (uint32_t)255))) ^ $nc(AESCrypt::T7)->get((int32_t)(((int32_t)((uint32_t)t3 >> 8)) & (uint32_t)255))) ^ $nc(AESCrypt::T8)->get((int32_t)((t2) & (uint32_t)255))) ^ $nc(this->K)->get(keyOffset++);
			a2 = ((($nc(AESCrypt::T5)->get((int32_t)((uint32_t)t2 >> 24)) ^ $nc(AESCrypt::T6)->get((int32_t)(((int32_t)((uint32_t)t1 >> 16)) & (uint32_t)255))) ^ $nc(AESCrypt::T7)->get((int32_t)(((int32_t)((uint32_t)t0 >> 8)) & (uint32_t)255))) ^ $nc(AESCrypt::T8)->get((int32_t)((t3) & (uint32_t)255))) ^ $nc(this->K)->get(keyOffset++);
			t3 = ((($nc(AESCrypt::T5)->get((int32_t)((uint32_t)t3 >> 24)) ^ $nc(AESCrypt::T6)->get((int32_t)(((int32_t)((uint32_t)t2 >> 16)) & (uint32_t)255))) ^ $nc(AESCrypt::T7)->get((int32_t)(((int32_t)((uint32_t)t1 >> 8)) & (uint32_t)255))) ^ $nc(AESCrypt::T8)->get((int32_t)((t0) & (uint32_t)255))) ^ $nc(this->K)->get(keyOffset++);
			t0 = ((($nc(AESCrypt::T5)->get((int32_t)((uint32_t)a0 >> 24)) ^ $nc(AESCrypt::T6)->get((int32_t)(((int32_t)((uint32_t)t3 >> 16)) & (uint32_t)255))) ^ $nc(AESCrypt::T7)->get((int32_t)(((int32_t)((uint32_t)a2 >> 8)) & (uint32_t)255))) ^ $nc(AESCrypt::T8)->get((int32_t)((a1) & (uint32_t)255))) ^ $nc(this->K)->get(keyOffset++);
			t1 = ((($nc(AESCrypt::T5)->get((int32_t)((uint32_t)a1 >> 24)) ^ $nc(AESCrypt::T6)->get((int32_t)(((int32_t)((uint32_t)a0 >> 16)) & (uint32_t)255))) ^ $nc(AESCrypt::T7)->get((int32_t)(((int32_t)((uint32_t)t3 >> 8)) & (uint32_t)255))) ^ $nc(AESCrypt::T8)->get((int32_t)((a2) & (uint32_t)255))) ^ $nc(this->K)->get(keyOffset++);
			t2 = ((($nc(AESCrypt::T5)->get((int32_t)((uint32_t)a2 >> 24)) ^ $nc(AESCrypt::T6)->get((int32_t)(((int32_t)((uint32_t)a1 >> 16)) & (uint32_t)255))) ^ $nc(AESCrypt::T7)->get((int32_t)(((int32_t)((uint32_t)a0 >> 8)) & (uint32_t)255))) ^ $nc(AESCrypt::T8)->get((int32_t)((t3) & (uint32_t)255))) ^ $nc(this->K)->get(keyOffset++);
			t3 = ((($nc(AESCrypt::T5)->get((int32_t)((uint32_t)t3 >> 24)) ^ $nc(AESCrypt::T6)->get((int32_t)(((int32_t)((uint32_t)a2 >> 16)) & (uint32_t)255))) ^ $nc(AESCrypt::T7)->get((int32_t)(((int32_t)((uint32_t)a1 >> 8)) & (uint32_t)255))) ^ $nc(AESCrypt::T8)->get((int32_t)((a0) & (uint32_t)255))) ^ $nc(this->K)->get(keyOffset++);
		}
	}
	a0 = ((($nc(AESCrypt::T5)->get((int32_t)((uint32_t)t0 >> 24)) ^ $nc(AESCrypt::T6)->get((int32_t)(((int32_t)((uint32_t)t3 >> 16)) & (uint32_t)255))) ^ $nc(AESCrypt::T7)->get((int32_t)(((int32_t)((uint32_t)t2 >> 8)) & (uint32_t)255))) ^ $nc(AESCrypt::T8)->get((int32_t)((t1) & (uint32_t)255))) ^ $nc(this->K)->get(keyOffset++);
	a1 = ((($nc(AESCrypt::T5)->get((int32_t)((uint32_t)t1 >> 24)) ^ $nc(AESCrypt::T6)->get((int32_t)(((int32_t)((uint32_t)t0 >> 16)) & (uint32_t)255))) ^ $nc(AESCrypt::T7)->get((int32_t)(((int32_t)((uint32_t)t3 >> 8)) & (uint32_t)255))) ^ $nc(AESCrypt::T8)->get((int32_t)((t2) & (uint32_t)255))) ^ $nc(this->K)->get(keyOffset++);
	a2 = ((($nc(AESCrypt::T5)->get((int32_t)((uint32_t)t2 >> 24)) ^ $nc(AESCrypt::T6)->get((int32_t)(((int32_t)((uint32_t)t1 >> 16)) & (uint32_t)255))) ^ $nc(AESCrypt::T7)->get((int32_t)(((int32_t)((uint32_t)t0 >> 8)) & (uint32_t)255))) ^ $nc(AESCrypt::T8)->get((int32_t)((t3) & (uint32_t)255))) ^ $nc(this->K)->get(keyOffset++);
	t3 = ((($nc(AESCrypt::T5)->get((int32_t)((uint32_t)t3 >> 24)) ^ $nc(AESCrypt::T6)->get((int32_t)(((int32_t)((uint32_t)t2 >> 16)) & (uint32_t)255))) ^ $nc(AESCrypt::T7)->get((int32_t)(((int32_t)((uint32_t)t1 >> 8)) & (uint32_t)255))) ^ $nc(AESCrypt::T8)->get((int32_t)((t0) & (uint32_t)255))) ^ $nc(this->K)->get(keyOffset++);
	t0 = ((($nc(AESCrypt::T5)->get((int32_t)((uint32_t)a0 >> 24)) ^ $nc(AESCrypt::T6)->get((int32_t)(((int32_t)((uint32_t)t3 >> 16)) & (uint32_t)255))) ^ $nc(AESCrypt::T7)->get((int32_t)(((int32_t)((uint32_t)a2 >> 8)) & (uint32_t)255))) ^ $nc(AESCrypt::T8)->get((int32_t)((a1) & (uint32_t)255))) ^ $nc(this->K)->get(keyOffset++);
	t1 = ((($nc(AESCrypt::T5)->get((int32_t)((uint32_t)a1 >> 24)) ^ $nc(AESCrypt::T6)->get((int32_t)(((int32_t)((uint32_t)a0 >> 16)) & (uint32_t)255))) ^ $nc(AESCrypt::T7)->get((int32_t)(((int32_t)((uint32_t)t3 >> 8)) & (uint32_t)255))) ^ $nc(AESCrypt::T8)->get((int32_t)((a2) & (uint32_t)255))) ^ $nc(this->K)->get(keyOffset++);
	t2 = ((($nc(AESCrypt::T5)->get((int32_t)((uint32_t)a2 >> 24)) ^ $nc(AESCrypt::T6)->get((int32_t)(((int32_t)((uint32_t)a1 >> 16)) & (uint32_t)255))) ^ $nc(AESCrypt::T7)->get((int32_t)(((int32_t)((uint32_t)a0 >> 8)) & (uint32_t)255))) ^ $nc(AESCrypt::T8)->get((int32_t)((t3) & (uint32_t)255))) ^ $nc(this->K)->get(keyOffset++);
	t3 = ((($nc(AESCrypt::T5)->get((int32_t)((uint32_t)t3 >> 24)) ^ $nc(AESCrypt::T6)->get((int32_t)(((int32_t)((uint32_t)a2 >> 16)) & (uint32_t)255))) ^ $nc(AESCrypt::T7)->get((int32_t)(((int32_t)((uint32_t)a1 >> 8)) & (uint32_t)255))) ^ $nc(AESCrypt::T8)->get((int32_t)((a0) & (uint32_t)255))) ^ $nc(this->K)->get(keyOffset++);
	a0 = ((($nc(AESCrypt::T5)->get((int32_t)((uint32_t)t0 >> 24)) ^ $nc(AESCrypt::T6)->get((int32_t)(((int32_t)((uint32_t)t3 >> 16)) & (uint32_t)255))) ^ $nc(AESCrypt::T7)->get((int32_t)(((int32_t)((uint32_t)t2 >> 8)) & (uint32_t)255))) ^ $nc(AESCrypt::T8)->get((int32_t)((t1) & (uint32_t)255))) ^ $nc(this->K)->get(keyOffset++);
	a1 = ((($nc(AESCrypt::T5)->get((int32_t)((uint32_t)t1 >> 24)) ^ $nc(AESCrypt::T6)->get((int32_t)(((int32_t)((uint32_t)t0 >> 16)) & (uint32_t)255))) ^ $nc(AESCrypt::T7)->get((int32_t)(((int32_t)((uint32_t)t3 >> 8)) & (uint32_t)255))) ^ $nc(AESCrypt::T8)->get((int32_t)((t2) & (uint32_t)255))) ^ $nc(this->K)->get(keyOffset++);
	a2 = ((($nc(AESCrypt::T5)->get((int32_t)((uint32_t)t2 >> 24)) ^ $nc(AESCrypt::T6)->get((int32_t)(((int32_t)((uint32_t)t1 >> 16)) & (uint32_t)255))) ^ $nc(AESCrypt::T7)->get((int32_t)(((int32_t)((uint32_t)t0 >> 8)) & (uint32_t)255))) ^ $nc(AESCrypt::T8)->get((int32_t)((t3) & (uint32_t)255))) ^ $nc(this->K)->get(keyOffset++);
	t3 = ((($nc(AESCrypt::T5)->get((int32_t)((uint32_t)t3 >> 24)) ^ $nc(AESCrypt::T6)->get((int32_t)(((int32_t)((uint32_t)t2 >> 16)) & (uint32_t)255))) ^ $nc(AESCrypt::T7)->get((int32_t)(((int32_t)((uint32_t)t1 >> 8)) & (uint32_t)255))) ^ $nc(AESCrypt::T8)->get((int32_t)((t0) & (uint32_t)255))) ^ $nc(this->K)->get(keyOffset++);
	t0 = ((($nc(AESCrypt::T5)->get((int32_t)((uint32_t)a0 >> 24)) ^ $nc(AESCrypt::T6)->get((int32_t)(((int32_t)((uint32_t)t3 >> 16)) & (uint32_t)255))) ^ $nc(AESCrypt::T7)->get((int32_t)(((int32_t)((uint32_t)a2 >> 8)) & (uint32_t)255))) ^ $nc(AESCrypt::T8)->get((int32_t)((a1) & (uint32_t)255))) ^ $nc(this->K)->get(keyOffset++);
	t1 = ((($nc(AESCrypt::T5)->get((int32_t)((uint32_t)a1 >> 24)) ^ $nc(AESCrypt::T6)->get((int32_t)(((int32_t)((uint32_t)a0 >> 16)) & (uint32_t)255))) ^ $nc(AESCrypt::T7)->get((int32_t)(((int32_t)((uint32_t)t3 >> 8)) & (uint32_t)255))) ^ $nc(AESCrypt::T8)->get((int32_t)((a2) & (uint32_t)255))) ^ $nc(this->K)->get(keyOffset++);
	t2 = ((($nc(AESCrypt::T5)->get((int32_t)((uint32_t)a2 >> 24)) ^ $nc(AESCrypt::T6)->get((int32_t)(((int32_t)((uint32_t)a1 >> 16)) & (uint32_t)255))) ^ $nc(AESCrypt::T7)->get((int32_t)(((int32_t)((uint32_t)a0 >> 8)) & (uint32_t)255))) ^ $nc(AESCrypt::T8)->get((int32_t)((t3) & (uint32_t)255))) ^ $nc(this->K)->get(keyOffset++);
	t3 = ((($nc(AESCrypt::T5)->get((int32_t)((uint32_t)t3 >> 24)) ^ $nc(AESCrypt::T6)->get((int32_t)(((int32_t)((uint32_t)a2 >> 16)) & (uint32_t)255))) ^ $nc(AESCrypt::T7)->get((int32_t)(((int32_t)((uint32_t)a1 >> 8)) & (uint32_t)255))) ^ $nc(AESCrypt::T8)->get((int32_t)((a0) & (uint32_t)255))) ^ $nc(this->K)->get(keyOffset++);
	a0 = ((($nc(AESCrypt::T5)->get((int32_t)((uint32_t)t0 >> 24)) ^ $nc(AESCrypt::T6)->get((int32_t)(((int32_t)((uint32_t)t3 >> 16)) & (uint32_t)255))) ^ $nc(AESCrypt::T7)->get((int32_t)(((int32_t)((uint32_t)t2 >> 8)) & (uint32_t)255))) ^ $nc(AESCrypt::T8)->get((int32_t)((t1) & (uint32_t)255))) ^ $nc(this->K)->get(keyOffset++);
	a1 = ((($nc(AESCrypt::T5)->get((int32_t)((uint32_t)t1 >> 24)) ^ $nc(AESCrypt::T6)->get((int32_t)(((int32_t)((uint32_t)t0 >> 16)) & (uint32_t)255))) ^ $nc(AESCrypt::T7)->get((int32_t)(((int32_t)((uint32_t)t3 >> 8)) & (uint32_t)255))) ^ $nc(AESCrypt::T8)->get((int32_t)((t2) & (uint32_t)255))) ^ $nc(this->K)->get(keyOffset++);
	a2 = ((($nc(AESCrypt::T5)->get((int32_t)((uint32_t)t2 >> 24)) ^ $nc(AESCrypt::T6)->get((int32_t)(((int32_t)((uint32_t)t1 >> 16)) & (uint32_t)255))) ^ $nc(AESCrypt::T7)->get((int32_t)(((int32_t)((uint32_t)t0 >> 8)) & (uint32_t)255))) ^ $nc(AESCrypt::T8)->get((int32_t)((t3) & (uint32_t)255))) ^ $nc(this->K)->get(keyOffset++);
	t3 = ((($nc(AESCrypt::T5)->get((int32_t)((uint32_t)t3 >> 24)) ^ $nc(AESCrypt::T6)->get((int32_t)(((int32_t)((uint32_t)t2 >> 16)) & (uint32_t)255))) ^ $nc(AESCrypt::T7)->get((int32_t)(((int32_t)((uint32_t)t1 >> 8)) & (uint32_t)255))) ^ $nc(AESCrypt::T8)->get((int32_t)((t0) & (uint32_t)255))) ^ $nc(this->K)->get(keyOffset++);
	t0 = ((($nc(AESCrypt::T5)->get((int32_t)((uint32_t)a0 >> 24)) ^ $nc(AESCrypt::T6)->get((int32_t)(((int32_t)((uint32_t)t3 >> 16)) & (uint32_t)255))) ^ $nc(AESCrypt::T7)->get((int32_t)(((int32_t)((uint32_t)a2 >> 8)) & (uint32_t)255))) ^ $nc(AESCrypt::T8)->get((int32_t)((a1) & (uint32_t)255))) ^ $nc(this->K)->get(keyOffset++);
	t1 = ((($nc(AESCrypt::T5)->get((int32_t)((uint32_t)a1 >> 24)) ^ $nc(AESCrypt::T6)->get((int32_t)(((int32_t)((uint32_t)a0 >> 16)) & (uint32_t)255))) ^ $nc(AESCrypt::T7)->get((int32_t)(((int32_t)((uint32_t)t3 >> 8)) & (uint32_t)255))) ^ $nc(AESCrypt::T8)->get((int32_t)((a2) & (uint32_t)255))) ^ $nc(this->K)->get(keyOffset++);
	t2 = ((($nc(AESCrypt::T5)->get((int32_t)((uint32_t)a2 >> 24)) ^ $nc(AESCrypt::T6)->get((int32_t)(((int32_t)((uint32_t)a1 >> 16)) & (uint32_t)255))) ^ $nc(AESCrypt::T7)->get((int32_t)(((int32_t)((uint32_t)a0 >> 8)) & (uint32_t)255))) ^ $nc(AESCrypt::T8)->get((int32_t)((t3) & (uint32_t)255))) ^ $nc(this->K)->get(keyOffset++);
	t3 = ((($nc(AESCrypt::T5)->get((int32_t)((uint32_t)t3 >> 24)) ^ $nc(AESCrypt::T6)->get((int32_t)(((int32_t)((uint32_t)a2 >> 16)) & (uint32_t)255))) ^ $nc(AESCrypt::T7)->get((int32_t)(((int32_t)((uint32_t)a1 >> 8)) & (uint32_t)255))) ^ $nc(AESCrypt::T8)->get((int32_t)((a0) & (uint32_t)255))) ^ $nc(this->K)->get(keyOffset++);
	a0 = ((($nc(AESCrypt::T5)->get((int32_t)((uint32_t)t0 >> 24)) ^ $nc(AESCrypt::T6)->get((int32_t)(((int32_t)((uint32_t)t3 >> 16)) & (uint32_t)255))) ^ $nc(AESCrypt::T7)->get((int32_t)(((int32_t)((uint32_t)t2 >> 8)) & (uint32_t)255))) ^ $nc(AESCrypt::T8)->get((int32_t)((t1) & (uint32_t)255))) ^ $nc(this->K)->get(keyOffset++);
	a1 = ((($nc(AESCrypt::T5)->get((int32_t)((uint32_t)t1 >> 24)) ^ $nc(AESCrypt::T6)->get((int32_t)(((int32_t)((uint32_t)t0 >> 16)) & (uint32_t)255))) ^ $nc(AESCrypt::T7)->get((int32_t)(((int32_t)((uint32_t)t3 >> 8)) & (uint32_t)255))) ^ $nc(AESCrypt::T8)->get((int32_t)((t2) & (uint32_t)255))) ^ $nc(this->K)->get(keyOffset++);
	a2 = ((($nc(AESCrypt::T5)->get((int32_t)((uint32_t)t2 >> 24)) ^ $nc(AESCrypt::T6)->get((int32_t)(((int32_t)((uint32_t)t1 >> 16)) & (uint32_t)255))) ^ $nc(AESCrypt::T7)->get((int32_t)(((int32_t)((uint32_t)t0 >> 8)) & (uint32_t)255))) ^ $nc(AESCrypt::T8)->get((int32_t)((t3) & (uint32_t)255))) ^ $nc(this->K)->get(keyOffset++);
	t3 = ((($nc(AESCrypt::T5)->get((int32_t)((uint32_t)t3 >> 24)) ^ $nc(AESCrypt::T6)->get((int32_t)(((int32_t)((uint32_t)t2 >> 16)) & (uint32_t)255))) ^ $nc(AESCrypt::T7)->get((int32_t)(((int32_t)((uint32_t)t1 >> 8)) & (uint32_t)255))) ^ $nc(AESCrypt::T8)->get((int32_t)((t0) & (uint32_t)255))) ^ $nc(this->K)->get(keyOffset++);
	t0 = ((($nc(AESCrypt::T5)->get((int32_t)((uint32_t)a0 >> 24)) ^ $nc(AESCrypt::T6)->get((int32_t)(((int32_t)((uint32_t)t3 >> 16)) & (uint32_t)255))) ^ $nc(AESCrypt::T7)->get((int32_t)(((int32_t)((uint32_t)a2 >> 8)) & (uint32_t)255))) ^ $nc(AESCrypt::T8)->get((int32_t)((a1) & (uint32_t)255))) ^ $nc(this->K)->get(keyOffset++);
	t1 = ((($nc(AESCrypt::T5)->get((int32_t)((uint32_t)a1 >> 24)) ^ $nc(AESCrypt::T6)->get((int32_t)(((int32_t)((uint32_t)a0 >> 16)) & (uint32_t)255))) ^ $nc(AESCrypt::T7)->get((int32_t)(((int32_t)((uint32_t)t3 >> 8)) & (uint32_t)255))) ^ $nc(AESCrypt::T8)->get((int32_t)((a2) & (uint32_t)255))) ^ $nc(this->K)->get(keyOffset++);
	t2 = ((($nc(AESCrypt::T5)->get((int32_t)((uint32_t)a2 >> 24)) ^ $nc(AESCrypt::T6)->get((int32_t)(((int32_t)((uint32_t)a1 >> 16)) & (uint32_t)255))) ^ $nc(AESCrypt::T7)->get((int32_t)(((int32_t)((uint32_t)a0 >> 8)) & (uint32_t)255))) ^ $nc(AESCrypt::T8)->get((int32_t)((t3) & (uint32_t)255))) ^ $nc(this->K)->get(keyOffset++);
	t3 = ((($nc(AESCrypt::T5)->get((int32_t)((uint32_t)t3 >> 24)) ^ $nc(AESCrypt::T6)->get((int32_t)(((int32_t)((uint32_t)a2 >> 16)) & (uint32_t)255))) ^ $nc(AESCrypt::T7)->get((int32_t)(((int32_t)((uint32_t)a1 >> 8)) & (uint32_t)255))) ^ $nc(AESCrypt::T8)->get((int32_t)((a0) & (uint32_t)255))) ^ $nc(this->K)->get(keyOffset++);
	a0 = ((($nc(AESCrypt::T5)->get((int32_t)((uint32_t)t0 >> 24)) ^ $nc(AESCrypt::T6)->get((int32_t)(((int32_t)((uint32_t)t3 >> 16)) & (uint32_t)255))) ^ $nc(AESCrypt::T7)->get((int32_t)(((int32_t)((uint32_t)t2 >> 8)) & (uint32_t)255))) ^ $nc(AESCrypt::T8)->get((int32_t)((t1) & (uint32_t)255))) ^ $nc(this->K)->get(keyOffset++);
	a1 = ((($nc(AESCrypt::T5)->get((int32_t)((uint32_t)t1 >> 24)) ^ $nc(AESCrypt::T6)->get((int32_t)(((int32_t)((uint32_t)t0 >> 16)) & (uint32_t)255))) ^ $nc(AESCrypt::T7)->get((int32_t)(((int32_t)((uint32_t)t3 >> 8)) & (uint32_t)255))) ^ $nc(AESCrypt::T8)->get((int32_t)((t2) & (uint32_t)255))) ^ $nc(this->K)->get(keyOffset++);
	a2 = ((($nc(AESCrypt::T5)->get((int32_t)((uint32_t)t2 >> 24)) ^ $nc(AESCrypt::T6)->get((int32_t)(((int32_t)((uint32_t)t1 >> 16)) & (uint32_t)255))) ^ $nc(AESCrypt::T7)->get((int32_t)(((int32_t)((uint32_t)t0 >> 8)) & (uint32_t)255))) ^ $nc(AESCrypt::T8)->get((int32_t)((t3) & (uint32_t)255))) ^ $nc(this->K)->get(keyOffset++);
	t3 = ((($nc(AESCrypt::T5)->get((int32_t)((uint32_t)t3 >> 24)) ^ $nc(AESCrypt::T6)->get((int32_t)(((int32_t)((uint32_t)t2 >> 16)) & (uint32_t)255))) ^ $nc(AESCrypt::T7)->get((int32_t)(((int32_t)((uint32_t)t1 >> 8)) & (uint32_t)255))) ^ $nc(AESCrypt::T8)->get((int32_t)((t0) & (uint32_t)255))) ^ $nc(this->K)->get(keyOffset++);
	t1 = $nc(this->K)->get(0);
	$nc(out)->set(outOffset++, (int8_t)($nc(AESCrypt::Si)->get((int32_t)((uint32_t)a0 >> 24)) ^ ((int32_t)((uint32_t)t1 >> 24))));
	out->set(outOffset++, (int8_t)($nc(AESCrypt::Si)->get((int32_t)(((int32_t)((uint32_t)t3 >> 16)) & (uint32_t)255)) ^ ((int32_t)((uint32_t)t1 >> 16))));
	out->set(outOffset++, (int8_t)($nc(AESCrypt::Si)->get((int32_t)(((int32_t)((uint32_t)a2 >> 8)) & (uint32_t)255)) ^ ((int32_t)((uint32_t)t1 >> 8))));
	out->set(outOffset++, (int8_t)($nc(AESCrypt::Si)->get((int32_t)((a1) & (uint32_t)255)) ^ (t1)));
	t1 = $nc(this->K)->get(1);
	out->set(outOffset++, (int8_t)($nc(AESCrypt::Si)->get((int32_t)((uint32_t)a1 >> 24)) ^ ((int32_t)((uint32_t)t1 >> 24))));
	out->set(outOffset++, (int8_t)($nc(AESCrypt::Si)->get((int32_t)(((int32_t)((uint32_t)a0 >> 16)) & (uint32_t)255)) ^ ((int32_t)((uint32_t)t1 >> 16))));
	out->set(outOffset++, (int8_t)($nc(AESCrypt::Si)->get((int32_t)(((int32_t)((uint32_t)t3 >> 8)) & (uint32_t)255)) ^ ((int32_t)((uint32_t)t1 >> 8))));
	out->set(outOffset++, (int8_t)($nc(AESCrypt::Si)->get((int32_t)((a2) & (uint32_t)255)) ^ (t1)));
	t1 = $nc(this->K)->get(2);
	out->set(outOffset++, (int8_t)($nc(AESCrypt::Si)->get((int32_t)((uint32_t)a2 >> 24)) ^ ((int32_t)((uint32_t)t1 >> 24))));
	out->set(outOffset++, (int8_t)($nc(AESCrypt::Si)->get((int32_t)(((int32_t)((uint32_t)a1 >> 16)) & (uint32_t)255)) ^ ((int32_t)((uint32_t)t1 >> 16))));
	out->set(outOffset++, (int8_t)($nc(AESCrypt::Si)->get((int32_t)(((int32_t)((uint32_t)a0 >> 8)) & (uint32_t)255)) ^ ((int32_t)((uint32_t)t1 >> 8))));
	out->set(outOffset++, (int8_t)($nc(AESCrypt::Si)->get((int32_t)((t3) & (uint32_t)255)) ^ (t1)));
	t1 = $nc(this->K)->get(3);
	out->set(outOffset++, (int8_t)($nc(AESCrypt::Si)->get((int32_t)((uint32_t)t3 >> 24)) ^ ((int32_t)((uint32_t)t1 >> 24))));
	out->set(outOffset++, (int8_t)($nc(AESCrypt::Si)->get((int32_t)(((int32_t)((uint32_t)a2 >> 16)) & (uint32_t)255)) ^ ((int32_t)((uint32_t)t1 >> 16))));
	out->set(outOffset++, (int8_t)($nc(AESCrypt::Si)->get((int32_t)(((int32_t)((uint32_t)a1 >> 8)) & (uint32_t)255)) ^ ((int32_t)((uint32_t)t1 >> 8))));
	out->set(outOffset, (int8_t)($nc(AESCrypt::Si)->get((int32_t)((a0) & (uint32_t)255)) ^ (t1)));
}

void AESCrypt::makeSessionKey($bytes* k) {
	if (k == nullptr) {
		$throwNew($InvalidKeyException, "Empty key"_s);
	}
	if (!isKeySizeValid($nc(k)->length)) {
		$throwNew($InvalidKeyException, $$str({"Invalid AES key length: "_s, $$str($nc(k)->length), " bytes"_s}));
	}
	int32_t ROUNDS = getRounds($nc(k)->length);
	int32_t ROUND_KEY_COUNT = (ROUNDS + 1) * 4;
	int32_t BC = 4;
	$var($intArray2, Ke, $new($intArray2, ROUNDS + 1, 4));
	$var($intArray2, Kd, $new($intArray2, ROUNDS + 1, 4));
	int32_t KC = $nc(k)->length / 4;
	$var($ints, tk, $new($ints, KC));
	int32_t i = 0;
	int32_t j = 0;
	for (i = 0, j = 0; i < KC; ++i, j += 4) {
		tk->set(i, ((((k->get(j)) << 24) | (((int32_t)(k->get(j + 1) & (uint32_t)255)) << 16)) | (((int32_t)(k->get(j + 2) & (uint32_t)255)) << 8)) | ((int32_t)(k->get(j + 3) & (uint32_t)255)));
	}
	int32_t t = 0;
	for (j = 0; (j < KC) && (t < ROUND_KEY_COUNT); ++j, ++t) {
		$nc(Ke->get(t / 4))->set(t % 4, tk->get(j));
		$nc(Kd->get(ROUNDS - (t / 4)))->set(t % 4, tk->get(j));
	}
	int32_t tt = 0;
	int32_t rconpointer = 0;
	while (t < ROUND_KEY_COUNT) {
		tt = tk->get(KC - 1);
		(*tk)[0] ^= ((((($nc(AESCrypt::S)->get((int32_t)(((int32_t)((uint32_t)tt >> 16)) & (uint32_t)255))) << 24) ^ (((int32_t)($nc(AESCrypt::S)->get((int32_t)(((int32_t)((uint32_t)tt >> 8)) & (uint32_t)255)) & (uint32_t)255)) << 16)) ^ (((int32_t)($nc(AESCrypt::S)->get((int32_t)((tt) & (uint32_t)255)) & (uint32_t)255)) << 8)) ^ ((int32_t)($nc(AESCrypt::S)->get((int32_t)((uint32_t)tt >> 24)) & (uint32_t)255))) ^ (($nc(AESCrypt::rcon)->get(rconpointer++)) << 24);
		if (KC != 8) {
			for (i = 1, j = 0; i < KC; ++i, ++j) {
				(*tk)[i] ^= tk->get(j);
			}
		} else {
			for (i = 1, j = 0; i < KC / 2; ++i, ++j) {
				(*tk)[i] ^= tk->get(j);
			}
			tt = tk->get(KC / 2 - 1);
			(*tk)[KC / 2] ^= ((((int32_t)($nc(AESCrypt::S)->get((int32_t)((tt) & (uint32_t)255)) & (uint32_t)255)) ^ (((int32_t)($nc(AESCrypt::S)->get((int32_t)(((int32_t)((uint32_t)tt >> 8)) & (uint32_t)255)) & (uint32_t)255)) << 8)) ^ (((int32_t)($nc(AESCrypt::S)->get((int32_t)(((int32_t)((uint32_t)tt >> 16)) & (uint32_t)255)) & (uint32_t)255)) << 16)) ^ (($nc(AESCrypt::S)->get((int32_t)((uint32_t)tt >> 24))) << 24);
			for (j = KC / 2, i = j + 1; i < KC; ++i, ++j) {
				(*tk)[i] ^= tk->get(j);
			}
		}
		for (j = 0; (j < KC) && (t < ROUND_KEY_COUNT); ++j, ++t) {
			$nc(Ke->get(t / 4))->set(t % 4, tk->get(j));
			$nc(Kd->get(ROUNDS - (t / 4)))->set(t % 4, tk->get(j));
		}
	}
	for (int32_t r = 1; r < ROUNDS; ++r) {
		for (j = 0; j < BC; ++j) {
			tt = $nc(Kd->get(r))->get(j);
			$nc(Kd->get(r))->set(j, (($nc(AESCrypt::U1)->get((int32_t)(((int32_t)((uint32_t)tt >> 24)) & (uint32_t)255)) ^ $nc(AESCrypt::U2)->get((int32_t)(((int32_t)((uint32_t)tt >> 16)) & (uint32_t)255))) ^ $nc(AESCrypt::U3)->get((int32_t)(((int32_t)((uint32_t)tt >> 8)) & (uint32_t)255))) ^ $nc(AESCrypt::U4)->get((int32_t)(tt & (uint32_t)255)));
		}
	}
	$var($ints, expandedKe, expandToSubKey(Ke, false));
	$var($ints, expandedKd, expandToSubKey(Kd, true));
	$Arrays::fill(tk, 0);
	{
		$var($intArray2, arr$, Ke);
		int32_t len$ = arr$->length;
		int32_t i$ = 0;
		for (; i$ < len$; ++i$) {
			$var($ints, ia, arr$->get(i$));
			{
				$Arrays::fill(ia, 0);
			}
		}
	}
	{
		$var($intArray2, arr$, Kd);
		int32_t len$ = arr$->length;
		int32_t i$ = 0;
		for (; i$ < len$; ++i$) {
			$var($ints, ia, arr$->get(i$));
			{
				$Arrays::fill(ia, 0);
			}
		}
	}
	this->ROUNDS_12 = (ROUNDS >= 12);
	this->ROUNDS_14 = (ROUNDS == 14);
	this->limit = ROUNDS * 4;
	if (this->sessionK != nullptr) {
		$Arrays::fill($nc(this->sessionK)->get(0), 0);
		$Arrays::fill($nc(this->sessionK)->get(1), 0);
	}
	$set(this, sessionK, $new($intArray2, {
		expandedKe,
		expandedKd
	}));
}

int32_t AESCrypt::getRounds(int32_t keySize) {
	$init(AESCrypt);
	return (keySize >> 2) + 6;
}

void clinit$AESCrypt($Class* class$) {
	$assignStatic(AESCrypt::alog, $new($ints, 256));
	$assignStatic(AESCrypt::log, $new($ints, 256));
	$assignStatic(AESCrypt::S, $new($bytes, 256));
	$assignStatic(AESCrypt::Si, $new($bytes, 256));
	$assignStatic(AESCrypt::T1, $new($ints, 256));
	$assignStatic(AESCrypt::T2, $new($ints, 256));
	$assignStatic(AESCrypt::T3, $new($ints, 256));
	$assignStatic(AESCrypt::T4, $new($ints, 256));
	$assignStatic(AESCrypt::T5, $new($ints, 256));
	$assignStatic(AESCrypt::T6, $new($ints, 256));
	$assignStatic(AESCrypt::T7, $new($ints, 256));
	$assignStatic(AESCrypt::T8, $new($ints, 256));
	$assignStatic(AESCrypt::U1, $new($ints, 256));
	$assignStatic(AESCrypt::U2, $new($ints, 256));
	$assignStatic(AESCrypt::U3, $new($ints, 256));
	$assignStatic(AESCrypt::U4, $new($ints, 256));
	$assignStatic(AESCrypt::rcon, $new($bytes, 30));
	{
		int32_t ROOT = 283;
		int32_t i = 0;
		int32_t j = 0;
		$nc(AESCrypt::alog)->set(0, 1);
		for (i = 1; i < 256; ++i) {
			j = ($nc(AESCrypt::alog)->get(i - 1) << 1) ^ $nc(AESCrypt::alog)->get(i - 1);
			if (((int32_t)(j & (uint32_t)256)) != 0) {
				j ^= ROOT;
			}
			$nc(AESCrypt::alog)->set(i, j);
		}
		for (i = 1; i < 255; ++i) {
			$nc(AESCrypt::log)->set($nc(AESCrypt::alog)->get(i), i);
		}
		$var($byteArray2, A, $new($byteArray2, {
			$$new($bytes, {
				(int8_t)1,
				(int8_t)1,
				(int8_t)1,
				(int8_t)1,
				(int8_t)1,
				(int8_t)0,
				(int8_t)0,
				(int8_t)0
			}),
			$$new($bytes, {
				(int8_t)0,
				(int8_t)1,
				(int8_t)1,
				(int8_t)1,
				(int8_t)1,
				(int8_t)1,
				(int8_t)0,
				(int8_t)0
			}),
			$$new($bytes, {
				(int8_t)0,
				(int8_t)0,
				(int8_t)1,
				(int8_t)1,
				(int8_t)1,
				(int8_t)1,
				(int8_t)1,
				(int8_t)0
			}),
			$$new($bytes, {
				(int8_t)0,
				(int8_t)0,
				(int8_t)0,
				(int8_t)1,
				(int8_t)1,
				(int8_t)1,
				(int8_t)1,
				(int8_t)1
			}),
			$$new($bytes, {
				(int8_t)1,
				(int8_t)0,
				(int8_t)0,
				(int8_t)0,
				(int8_t)1,
				(int8_t)1,
				(int8_t)1,
				(int8_t)1
			}),
			$$new($bytes, {
				(int8_t)1,
				(int8_t)1,
				(int8_t)0,
				(int8_t)0,
				(int8_t)0,
				(int8_t)1,
				(int8_t)1,
				(int8_t)1
			}),
			$$new($bytes, {
				(int8_t)1,
				(int8_t)1,
				(int8_t)1,
				(int8_t)0,
				(int8_t)0,
				(int8_t)0,
				(int8_t)1,
				(int8_t)1
			}),
			$$new($bytes, {
				(int8_t)1,
				(int8_t)1,
				(int8_t)1,
				(int8_t)1,
				(int8_t)0,
				(int8_t)0,
				(int8_t)0,
				(int8_t)1
			})
		}));
		$var($bytes, B, $new($bytes, {
			(int8_t)0,
			(int8_t)1,
			(int8_t)1,
			(int8_t)0,
			(int8_t)0,
			(int8_t)0,
			(int8_t)1,
			(int8_t)1
		}));
		int32_t t = 0;
		$var($byteArray2, box, $new($byteArray2, 256, 8));
		$nc(box->get(1))->set(7, (int8_t)1);
		for (i = 2; i < 256; ++i) {
			j = $nc(AESCrypt::alog)->get(255 - $nc(AESCrypt::log)->get(i));
			for (t = 0; t < 8; ++t) {
				$nc(box->get(i))->set(t, (int8_t)((int32_t)(($usr(j, 7 - t)) & (uint32_t)1)));
			}
		}
		$var($byteArray2, cox, $new($byteArray2, 256, 8));
		for (i = 0; i < 256; ++i) {
			for (t = 0; t < 8; ++t) {
				$nc(cox->get(i))->set(t, B->get(t));
				for (j = 0; j < 8; ++j) {
					(*$nc(cox->get(i)))[t] ^= $nc(A->get(t))->get(j) * $nc(box->get(i))->get(j);
				}
			}
		}
		for (i = 0; i < 256; ++i) {
			$nc(AESCrypt::S)->set(i, (int8_t)($nc(cox->get(i))->get(0) << 7));
			for (t = 1; t < 8; ++t) {
				(*$nc(AESCrypt::S))[i] ^= $sl((int32_t)$nc(cox->get(i))->get(t), 7 - t);
			}
			$nc(AESCrypt::Si)->set((int32_t)($nc(AESCrypt::S)->get(i) & (uint32_t)255), (int8_t)i);
		}
		$var($byteArray2, G, $new($byteArray2, {
			$$new($bytes, {
				(int8_t)2,
				(int8_t)1,
				(int8_t)1,
				(int8_t)3
			}),
			$$new($bytes, {
				(int8_t)3,
				(int8_t)2,
				(int8_t)1,
				(int8_t)1
			}),
			$$new($bytes, {
				(int8_t)1,
				(int8_t)3,
				(int8_t)2,
				(int8_t)1
			}),
			$$new($bytes, {
				(int8_t)1,
				(int8_t)1,
				(int8_t)3,
				(int8_t)2
			})
		}));
		$var($byteArray2, AA, $new($byteArray2, 4, 8));
		for (i = 0; i < 4; ++i) {
			for (j = 0; j < 4; ++j) {
				$nc(AA->get(i))->set(j, $nc(G->get(i))->get(j));
			}
			$nc(AA->get(i))->set(i + 4, (int8_t)1);
		}
		int8_t pivot = 0;
		int8_t tmp = 0;
		$var($byteArray2, iG, $new($byteArray2, 4, 4));
		for (i = 0; i < 4; ++i) {
			pivot = $nc(AA->get(i))->get(i);
			if (pivot == 0) {
				t = i + 1;
				while (($nc(AA->get(t))->get(i) == 0) && (t < 4)) {
					++t;
				}
				if (t == 4) {
					$throwNew($RuntimeException, "G matrix is not invertible"_s);
				} else {
					for (j = 0; j < 8; ++j) {
						tmp = $nc(AA->get(i))->get(j);
						$nc(AA->get(i))->set(j, $nc(AA->get(t))->get(j));
						$nc(AA->get(t))->set(j, tmp);
					}
					pivot = $nc(AA->get(i))->get(i);
				}
			}
			for (j = 0; j < 8; ++j) {
				if ($nc(AA->get(i))->get(j) != 0) {
					$nc(AA->get(i))->set(j, (int8_t)$nc(AESCrypt::alog)->get((255 + $nc(AESCrypt::log)->get((int32_t)($nc(AA->get(i))->get(j) & (uint32_t)255)) - $nc(AESCrypt::log)->get((int32_t)(pivot & (uint32_t)255))) % 255));
				}
			}
			for (t = 0; t < 4; ++t) {
				if (i != t) {
					for (j = i + 1; j < 8; ++j) {
						(*$nc(AA->get(t)))[j] ^= AESCrypt::mul($nc(AA->get(i))->get(j), $nc(AA->get(t))->get(i));
					}
					$nc(AA->get(t))->set(i, (int8_t)0);
				}
			}
		}
		for (i = 0; i < 4; ++i) {
			for (j = 0; j < 4; ++j) {
				$nc(iG->get(i))->set(j, $nc(AA->get(i))->get(j + 4));
			}
		}
		int32_t s = 0;
		for (t = 0; t < 256; ++t) {
			s = $nc(AESCrypt::S)->get(t);
			$nc(AESCrypt::T1)->set(t, AESCrypt::mul4(s, G->get(0)));
			$nc(AESCrypt::T2)->set(t, AESCrypt::mul4(s, G->get(1)));
			$nc(AESCrypt::T3)->set(t, AESCrypt::mul4(s, G->get(2)));
			$nc(AESCrypt::T4)->set(t, AESCrypt::mul4(s, G->get(3)));
			s = $nc(AESCrypt::Si)->get(t);
			$nc(AESCrypt::T5)->set(t, AESCrypt::mul4(s, iG->get(0)));
			$nc(AESCrypt::T6)->set(t, AESCrypt::mul4(s, iG->get(1)));
			$nc(AESCrypt::T7)->set(t, AESCrypt::mul4(s, iG->get(2)));
			$nc(AESCrypt::T8)->set(t, AESCrypt::mul4(s, iG->get(3)));
			$nc(AESCrypt::U1)->set(t, AESCrypt::mul4(t, iG->get(0)));
			$nc(AESCrypt::U2)->set(t, AESCrypt::mul4(t, iG->get(1)));
			$nc(AESCrypt::U3)->set(t, AESCrypt::mul4(t, iG->get(2)));
			$nc(AESCrypt::U4)->set(t, AESCrypt::mul4(t, iG->get(3)));
		}
		$nc(AESCrypt::rcon)->set(0, (int8_t)1);
		int32_t r = 1;
		for (t = 1; t < 30; ++t) {
			r = AESCrypt::mul(2, r);
			$nc(AESCrypt::rcon)->set(t, (int8_t)r);
		}
		$assignStatic(AESCrypt::log, nullptr);
		$assignStatic(AESCrypt::alog, nullptr);
	}
}

AESCrypt::AESCrypt() {
}

$Class* AESCrypt::load$($String* name, bool initialize) {
	$loadClass(AESCrypt, name, initialize, &_AESCrypt_ClassInfo_, clinit$AESCrypt, allocate$AESCrypt);
	return class$;
}

$Class* AESCrypt::class$ = nullptr;

			} // provider
		} // crypto
	} // sun
} // com