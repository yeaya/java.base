#include <com/sun/crypto/provider/AESCrypt.h>
#include <com/sun/crypto/provider/AESConstants.h>
#include <com/sun/crypto/provider/SymmetricCipher.h>
#include <java/security/InvalidKeyException.h>
#include <java/security/MessageDigest.h>
#include <java/util/Arrays.h>
#include <jcpp.h>

#undef A
#undef AA
#undef AES_BLOCK_SIZE
#undef AES_KEYSIZES
#undef B
#undef BC
#undef G
#undef K
#undef KC
#undef ROOT
#undef ROUNDS
#undef ROUNDS_12
#undef ROUNDS_14
#undef ROUND_KEY_COUNT
#undef S

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
	$useLocalObjectStack();
	bool var$0 = !$nc(algorithm)->equalsIgnoreCase("AES"_s);
	if (var$0 && !algorithm->equalsIgnoreCase("Rijndael"_s)) {
		$throwNew($InvalidKeyException, "Wrong algorithm: AES or Rijndael required"_s);
	}
	if (!isKeySizeValid($nc(key)->length)) {
		$throwNew($InvalidKeyException, $$str({"Invalid AES key length: "_s, $$str(key->length), " bytes"_s}));
	}
	if (!$MessageDigest::isEqual(key, this->lastKey)) {
		makeSessionKey(key);
		if (this->lastKey != nullptr) {
			$Arrays::fill(this->lastKey, (int8_t)0);
		}
		$set(this, lastKey, $cast($bytes, key->clone()));
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
	return (a != 0 && b != 0) ? $nc(AESCrypt::alog)->get(($nc(AESCrypt::log)->get(a & 0xff) + $nc(AESCrypt::log)->get(b & 0xff)) % 255) : 0;
}

int32_t AESCrypt::mul4(int32_t a, $bytes* b) {
	$init(AESCrypt);
	if (a == 0) {
		return 0;
	}
	a = $nc(AESCrypt::log)->get(a & 0xff);
	int32_t a0 = ($nc(b)->get(0) != 0) ? $nc(AESCrypt::alog)->get((a + AESCrypt::log->get(b->get(0) & 0xff)) % 255) & 0xff : 0;
	int32_t a1 = (b->get(1) != 0) ? $nc(AESCrypt::alog)->get((a + AESCrypt::log->get(b->get(1) & 0xff)) % 255) & 0xff : 0;
	int32_t a2 = (b->get(2) != 0) ? $nc(AESCrypt::alog)->get((a + AESCrypt::log->get(b->get(2) & 0xff)) % 255) & 0xff : 0;
	int32_t a3 = (b->get(3) != 0) ? $nc(AESCrypt::alog)->get((a + AESCrypt::log->get(b->get(3) & 0xff)) % 255) & 0xff : 0;
	return (((a0 << 24) | (a1 << 16)) | (a2 << 8)) | a3;
}

bool AESCrypt::isKeySizeValid(int32_t len) {
	$init(AESCrypt);
	$init($AESConstants);
	for (int32_t i = 0; i < $nc($AESConstants::AES_KEYSIZES)->length; ++i) {
		if (len == $AESConstants::AES_KEYSIZES->get(i)) {
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
	int32_t var$1 = var$2 | ((in->get(inOffset++) & 0xff) << 16);
	int32_t var$0 = var$1 | ((in->get(inOffset++) & 0xff) << 8);
	int32_t t0 = (var$0 | (in->get(inOffset++) & 0xff)) ^ $nc(this->K)->get(keyOffset++);
	int32_t var$5 = (in->get(inOffset++)) << 24;
	int32_t var$4 = var$5 | ((in->get(inOffset++) & 0xff) << 16);
	int32_t var$3 = var$4 | ((in->get(inOffset++) & 0xff) << 8);
	int32_t t1 = (var$3 | (in->get(inOffset++) & 0xff)) ^ this->K->get(keyOffset++);
	int32_t var$8 = (in->get(inOffset++)) << 24;
	int32_t var$7 = var$8 | ((in->get(inOffset++) & 0xff) << 16);
	int32_t var$6 = var$7 | ((in->get(inOffset++) & 0xff) << 8);
	int32_t t2 = (var$6 | (in->get(inOffset++) & 0xff)) ^ this->K->get(keyOffset++);
	int32_t var$11 = (in->get(inOffset++)) << 24;
	int32_t var$10 = var$11 | ((in->get(inOffset++) & 0xff) << 16);
	int32_t var$9 = var$10 | ((in->get(inOffset++) & 0xff) << 8);
	int32_t t3 = (var$9 | (in->get(inOffset++) & 0xff)) ^ this->K->get(keyOffset++);
	while (keyOffset < this->limit) {
		int32_t a0 = 0;
		int32_t a1 = 0;
		int32_t a2 = 0;
		a0 = (((AESCrypt::T1->get((int32_t)((uint32_t)t0 >> 24)) ^ AESCrypt::T2->get(((int32_t)((uint32_t)t1 >> 16)) & 0xff)) ^ AESCrypt::T3->get(((int32_t)((uint32_t)t2 >> 8)) & 0xff)) ^ AESCrypt::T4->get((t3) & 0xff)) ^ this->K->get(keyOffset++);
		a1 = (((AESCrypt::T1->get((int32_t)((uint32_t)t1 >> 24)) ^ AESCrypt::T2->get(((int32_t)((uint32_t)t2 >> 16)) & 0xff)) ^ AESCrypt::T3->get(((int32_t)((uint32_t)t3 >> 8)) & 0xff)) ^ AESCrypt::T4->get((t0) & 0xff)) ^ this->K->get(keyOffset++);
		a2 = (((AESCrypt::T1->get((int32_t)((uint32_t)t2 >> 24)) ^ AESCrypt::T2->get(((int32_t)((uint32_t)t3 >> 16)) & 0xff)) ^ AESCrypt::T3->get(((int32_t)((uint32_t)t0 >> 8)) & 0xff)) ^ AESCrypt::T4->get((t1) & 0xff)) ^ this->K->get(keyOffset++);
		t3 = (((AESCrypt::T1->get((int32_t)((uint32_t)t3 >> 24)) ^ AESCrypt::T2->get(((int32_t)((uint32_t)t0 >> 16)) & 0xff)) ^ AESCrypt::T3->get(((int32_t)((uint32_t)t1 >> 8)) & 0xff)) ^ AESCrypt::T4->get((t2) & 0xff)) ^ this->K->get(keyOffset++);
		t0 = a0;
		t1 = a1;
		t2 = a2;
	}
	int32_t tt = this->K->get(keyOffset++);
	$nc(out)->set(outOffset++, (int8_t)(AESCrypt::S->get((int32_t)((uint32_t)t0 >> 24)) ^ ((int32_t)((uint32_t)tt >> 24))));
	out->set(outOffset++, (int8_t)(AESCrypt::S->get(((int32_t)((uint32_t)t1 >> 16)) & 0xff) ^ ((int32_t)((uint32_t)tt >> 16))));
	out->set(outOffset++, (int8_t)(AESCrypt::S->get(((int32_t)((uint32_t)t2 >> 8)) & 0xff) ^ ((int32_t)((uint32_t)tt >> 8))));
	out->set(outOffset++, (int8_t)(AESCrypt::S->get((t3) & 0xff) ^ (tt)));
	tt = this->K->get(keyOffset++);
	out->set(outOffset++, (int8_t)(AESCrypt::S->get((int32_t)((uint32_t)t1 >> 24)) ^ ((int32_t)((uint32_t)tt >> 24))));
	out->set(outOffset++, (int8_t)(AESCrypt::S->get(((int32_t)((uint32_t)t2 >> 16)) & 0xff) ^ ((int32_t)((uint32_t)tt >> 16))));
	out->set(outOffset++, (int8_t)(AESCrypt::S->get(((int32_t)((uint32_t)t3 >> 8)) & 0xff) ^ ((int32_t)((uint32_t)tt >> 8))));
	out->set(outOffset++, (int8_t)(AESCrypt::S->get((t0) & 0xff) ^ (tt)));
	tt = this->K->get(keyOffset++);
	out->set(outOffset++, (int8_t)(AESCrypt::S->get((int32_t)((uint32_t)t2 >> 24)) ^ ((int32_t)((uint32_t)tt >> 24))));
	out->set(outOffset++, (int8_t)(AESCrypt::S->get(((int32_t)((uint32_t)t3 >> 16)) & 0xff) ^ ((int32_t)((uint32_t)tt >> 16))));
	out->set(outOffset++, (int8_t)(AESCrypt::S->get(((int32_t)((uint32_t)t0 >> 8)) & 0xff) ^ ((int32_t)((uint32_t)tt >> 8))));
	out->set(outOffset++, (int8_t)(AESCrypt::S->get((t1) & 0xff) ^ (tt)));
	tt = this->K->get(keyOffset++);
	out->set(outOffset++, (int8_t)(AESCrypt::S->get((int32_t)((uint32_t)t3 >> 24)) ^ ((int32_t)((uint32_t)tt >> 24))));
	out->set(outOffset++, (int8_t)(AESCrypt::S->get(((int32_t)((uint32_t)t0 >> 16)) & 0xff) ^ ((int32_t)((uint32_t)tt >> 16))));
	out->set(outOffset++, (int8_t)(AESCrypt::S->get(((int32_t)((uint32_t)t1 >> 8)) & 0xff) ^ ((int32_t)((uint32_t)tt >> 8))));
	out->set(outOffset, (int8_t)(AESCrypt::S->get((t2) & 0xff) ^ (tt)));
}

void AESCrypt::decryptBlock($bytes* in, int32_t inOffset, $bytes* out, int32_t outOffset) {
	implDecryptBlock(in, inOffset, out, outOffset);
}

void AESCrypt::implDecryptBlock($bytes* in, int32_t inOffset, $bytes* out, int32_t outOffset) {
	int32_t keyOffset = 4;
	int32_t var$2 = ($nc(in)->get(inOffset++)) << 24;
	int32_t var$1 = var$2 | ((in->get(inOffset++) & 0xff) << 16);
	int32_t var$0 = var$1 | ((in->get(inOffset++) & 0xff) << 8);
	int32_t t0 = (var$0 | (in->get(inOffset++) & 0xff)) ^ $nc(this->K)->get(keyOffset++);
	int32_t var$5 = (in->get(inOffset++)) << 24;
	int32_t var$4 = var$5 | ((in->get(inOffset++) & 0xff) << 16);
	int32_t var$3 = var$4 | ((in->get(inOffset++) & 0xff) << 8);
	int32_t t1 = (var$3 | (in->get(inOffset++) & 0xff)) ^ this->K->get(keyOffset++);
	int32_t var$8 = (in->get(inOffset++)) << 24;
	int32_t var$7 = var$8 | ((in->get(inOffset++) & 0xff) << 16);
	int32_t var$6 = var$7 | ((in->get(inOffset++) & 0xff) << 8);
	int32_t t2 = (var$6 | (in->get(inOffset++) & 0xff)) ^ this->K->get(keyOffset++);
	int32_t var$11 = (in->get(inOffset++)) << 24;
	int32_t var$10 = var$11 | ((in->get(inOffset++) & 0xff) << 16);
	int32_t var$9 = var$10 | ((in->get(inOffset++) & 0xff) << 8);
	int32_t t3 = (var$9 | (in->get(inOffset) & 0xff)) ^ this->K->get(keyOffset++);
	int32_t a0 = 0;
	int32_t a1 = 0;
	int32_t a2 = 0;
	if (this->ROUNDS_12) {
		a0 = (((AESCrypt::T5->get((int32_t)((uint32_t)t0 >> 24)) ^ AESCrypt::T6->get(((int32_t)((uint32_t)t3 >> 16)) & 0xff)) ^ AESCrypt::T7->get(((int32_t)((uint32_t)t2 >> 8)) & 0xff)) ^ AESCrypt::T8->get((t1) & 0xff)) ^ this->K->get(keyOffset++);
		a1 = (((AESCrypt::T5->get((int32_t)((uint32_t)t1 >> 24)) ^ AESCrypt::T6->get(((int32_t)((uint32_t)t0 >> 16)) & 0xff)) ^ AESCrypt::T7->get(((int32_t)((uint32_t)t3 >> 8)) & 0xff)) ^ AESCrypt::T8->get((t2) & 0xff)) ^ this->K->get(keyOffset++);
		a2 = (((AESCrypt::T5->get((int32_t)((uint32_t)t2 >> 24)) ^ AESCrypt::T6->get(((int32_t)((uint32_t)t1 >> 16)) & 0xff)) ^ AESCrypt::T7->get(((int32_t)((uint32_t)t0 >> 8)) & 0xff)) ^ AESCrypt::T8->get((t3) & 0xff)) ^ this->K->get(keyOffset++);
		t3 = (((AESCrypt::T5->get((int32_t)((uint32_t)t3 >> 24)) ^ AESCrypt::T6->get(((int32_t)((uint32_t)t2 >> 16)) & 0xff)) ^ AESCrypt::T7->get(((int32_t)((uint32_t)t1 >> 8)) & 0xff)) ^ AESCrypt::T8->get((t0) & 0xff)) ^ this->K->get(keyOffset++);
		t0 = (((AESCrypt::T5->get((int32_t)((uint32_t)a0 >> 24)) ^ AESCrypt::T6->get(((int32_t)((uint32_t)t3 >> 16)) & 0xff)) ^ AESCrypt::T7->get(((int32_t)((uint32_t)a2 >> 8)) & 0xff)) ^ AESCrypt::T8->get((a1) & 0xff)) ^ this->K->get(keyOffset++);
		t1 = (((AESCrypt::T5->get((int32_t)((uint32_t)a1 >> 24)) ^ AESCrypt::T6->get(((int32_t)((uint32_t)a0 >> 16)) & 0xff)) ^ AESCrypt::T7->get(((int32_t)((uint32_t)t3 >> 8)) & 0xff)) ^ AESCrypt::T8->get((a2) & 0xff)) ^ this->K->get(keyOffset++);
		t2 = (((AESCrypt::T5->get((int32_t)((uint32_t)a2 >> 24)) ^ AESCrypt::T6->get(((int32_t)((uint32_t)a1 >> 16)) & 0xff)) ^ AESCrypt::T7->get(((int32_t)((uint32_t)a0 >> 8)) & 0xff)) ^ AESCrypt::T8->get((t3) & 0xff)) ^ this->K->get(keyOffset++);
		t3 = (((AESCrypt::T5->get((int32_t)((uint32_t)t3 >> 24)) ^ AESCrypt::T6->get(((int32_t)((uint32_t)a2 >> 16)) & 0xff)) ^ AESCrypt::T7->get(((int32_t)((uint32_t)a1 >> 8)) & 0xff)) ^ AESCrypt::T8->get((a0) & 0xff)) ^ this->K->get(keyOffset++);
		if (this->ROUNDS_14) {
			a0 = (((AESCrypt::T5->get((int32_t)((uint32_t)t0 >> 24)) ^ AESCrypt::T6->get(((int32_t)((uint32_t)t3 >> 16)) & 0xff)) ^ AESCrypt::T7->get(((int32_t)((uint32_t)t2 >> 8)) & 0xff)) ^ AESCrypt::T8->get((t1) & 0xff)) ^ this->K->get(keyOffset++);
			a1 = (((AESCrypt::T5->get((int32_t)((uint32_t)t1 >> 24)) ^ AESCrypt::T6->get(((int32_t)((uint32_t)t0 >> 16)) & 0xff)) ^ AESCrypt::T7->get(((int32_t)((uint32_t)t3 >> 8)) & 0xff)) ^ AESCrypt::T8->get((t2) & 0xff)) ^ this->K->get(keyOffset++);
			a2 = (((AESCrypt::T5->get((int32_t)((uint32_t)t2 >> 24)) ^ AESCrypt::T6->get(((int32_t)((uint32_t)t1 >> 16)) & 0xff)) ^ AESCrypt::T7->get(((int32_t)((uint32_t)t0 >> 8)) & 0xff)) ^ AESCrypt::T8->get((t3) & 0xff)) ^ this->K->get(keyOffset++);
			t3 = (((AESCrypt::T5->get((int32_t)((uint32_t)t3 >> 24)) ^ AESCrypt::T6->get(((int32_t)((uint32_t)t2 >> 16)) & 0xff)) ^ AESCrypt::T7->get(((int32_t)((uint32_t)t1 >> 8)) & 0xff)) ^ AESCrypt::T8->get((t0) & 0xff)) ^ this->K->get(keyOffset++);
			t0 = (((AESCrypt::T5->get((int32_t)((uint32_t)a0 >> 24)) ^ AESCrypt::T6->get(((int32_t)((uint32_t)t3 >> 16)) & 0xff)) ^ AESCrypt::T7->get(((int32_t)((uint32_t)a2 >> 8)) & 0xff)) ^ AESCrypt::T8->get((a1) & 0xff)) ^ this->K->get(keyOffset++);
			t1 = (((AESCrypt::T5->get((int32_t)((uint32_t)a1 >> 24)) ^ AESCrypt::T6->get(((int32_t)((uint32_t)a0 >> 16)) & 0xff)) ^ AESCrypt::T7->get(((int32_t)((uint32_t)t3 >> 8)) & 0xff)) ^ AESCrypt::T8->get((a2) & 0xff)) ^ this->K->get(keyOffset++);
			t2 = (((AESCrypt::T5->get((int32_t)((uint32_t)a2 >> 24)) ^ AESCrypt::T6->get(((int32_t)((uint32_t)a1 >> 16)) & 0xff)) ^ AESCrypt::T7->get(((int32_t)((uint32_t)a0 >> 8)) & 0xff)) ^ AESCrypt::T8->get((t3) & 0xff)) ^ this->K->get(keyOffset++);
			t3 = (((AESCrypt::T5->get((int32_t)((uint32_t)t3 >> 24)) ^ AESCrypt::T6->get(((int32_t)((uint32_t)a2 >> 16)) & 0xff)) ^ AESCrypt::T7->get(((int32_t)((uint32_t)a1 >> 8)) & 0xff)) ^ AESCrypt::T8->get((a0) & 0xff)) ^ this->K->get(keyOffset++);
		}
	}
	a0 = (((AESCrypt::T5->get((int32_t)((uint32_t)t0 >> 24)) ^ AESCrypt::T6->get(((int32_t)((uint32_t)t3 >> 16)) & 0xff)) ^ AESCrypt::T7->get(((int32_t)((uint32_t)t2 >> 8)) & 0xff)) ^ AESCrypt::T8->get((t1) & 0xff)) ^ this->K->get(keyOffset++);
	a1 = (((AESCrypt::T5->get((int32_t)((uint32_t)t1 >> 24)) ^ AESCrypt::T6->get(((int32_t)((uint32_t)t0 >> 16)) & 0xff)) ^ AESCrypt::T7->get(((int32_t)((uint32_t)t3 >> 8)) & 0xff)) ^ AESCrypt::T8->get((t2) & 0xff)) ^ this->K->get(keyOffset++);
	a2 = (((AESCrypt::T5->get((int32_t)((uint32_t)t2 >> 24)) ^ AESCrypt::T6->get(((int32_t)((uint32_t)t1 >> 16)) & 0xff)) ^ AESCrypt::T7->get(((int32_t)((uint32_t)t0 >> 8)) & 0xff)) ^ AESCrypt::T8->get((t3) & 0xff)) ^ this->K->get(keyOffset++);
	t3 = (((AESCrypt::T5->get((int32_t)((uint32_t)t3 >> 24)) ^ AESCrypt::T6->get(((int32_t)((uint32_t)t2 >> 16)) & 0xff)) ^ AESCrypt::T7->get(((int32_t)((uint32_t)t1 >> 8)) & 0xff)) ^ AESCrypt::T8->get((t0) & 0xff)) ^ this->K->get(keyOffset++);
	t0 = (((AESCrypt::T5->get((int32_t)((uint32_t)a0 >> 24)) ^ AESCrypt::T6->get(((int32_t)((uint32_t)t3 >> 16)) & 0xff)) ^ AESCrypt::T7->get(((int32_t)((uint32_t)a2 >> 8)) & 0xff)) ^ AESCrypt::T8->get((a1) & 0xff)) ^ this->K->get(keyOffset++);
	t1 = (((AESCrypt::T5->get((int32_t)((uint32_t)a1 >> 24)) ^ AESCrypt::T6->get(((int32_t)((uint32_t)a0 >> 16)) & 0xff)) ^ AESCrypt::T7->get(((int32_t)((uint32_t)t3 >> 8)) & 0xff)) ^ AESCrypt::T8->get((a2) & 0xff)) ^ this->K->get(keyOffset++);
	t2 = (((AESCrypt::T5->get((int32_t)((uint32_t)a2 >> 24)) ^ AESCrypt::T6->get(((int32_t)((uint32_t)a1 >> 16)) & 0xff)) ^ AESCrypt::T7->get(((int32_t)((uint32_t)a0 >> 8)) & 0xff)) ^ AESCrypt::T8->get((t3) & 0xff)) ^ this->K->get(keyOffset++);
	t3 = (((AESCrypt::T5->get((int32_t)((uint32_t)t3 >> 24)) ^ AESCrypt::T6->get(((int32_t)((uint32_t)a2 >> 16)) & 0xff)) ^ AESCrypt::T7->get(((int32_t)((uint32_t)a1 >> 8)) & 0xff)) ^ AESCrypt::T8->get((a0) & 0xff)) ^ this->K->get(keyOffset++);
	a0 = (((AESCrypt::T5->get((int32_t)((uint32_t)t0 >> 24)) ^ AESCrypt::T6->get(((int32_t)((uint32_t)t3 >> 16)) & 0xff)) ^ AESCrypt::T7->get(((int32_t)((uint32_t)t2 >> 8)) & 0xff)) ^ AESCrypt::T8->get((t1) & 0xff)) ^ this->K->get(keyOffset++);
	a1 = (((AESCrypt::T5->get((int32_t)((uint32_t)t1 >> 24)) ^ AESCrypt::T6->get(((int32_t)((uint32_t)t0 >> 16)) & 0xff)) ^ AESCrypt::T7->get(((int32_t)((uint32_t)t3 >> 8)) & 0xff)) ^ AESCrypt::T8->get((t2) & 0xff)) ^ this->K->get(keyOffset++);
	a2 = (((AESCrypt::T5->get((int32_t)((uint32_t)t2 >> 24)) ^ AESCrypt::T6->get(((int32_t)((uint32_t)t1 >> 16)) & 0xff)) ^ AESCrypt::T7->get(((int32_t)((uint32_t)t0 >> 8)) & 0xff)) ^ AESCrypt::T8->get((t3) & 0xff)) ^ this->K->get(keyOffset++);
	t3 = (((AESCrypt::T5->get((int32_t)((uint32_t)t3 >> 24)) ^ AESCrypt::T6->get(((int32_t)((uint32_t)t2 >> 16)) & 0xff)) ^ AESCrypt::T7->get(((int32_t)((uint32_t)t1 >> 8)) & 0xff)) ^ AESCrypt::T8->get((t0) & 0xff)) ^ this->K->get(keyOffset++);
	t0 = (((AESCrypt::T5->get((int32_t)((uint32_t)a0 >> 24)) ^ AESCrypt::T6->get(((int32_t)((uint32_t)t3 >> 16)) & 0xff)) ^ AESCrypt::T7->get(((int32_t)((uint32_t)a2 >> 8)) & 0xff)) ^ AESCrypt::T8->get((a1) & 0xff)) ^ this->K->get(keyOffset++);
	t1 = (((AESCrypt::T5->get((int32_t)((uint32_t)a1 >> 24)) ^ AESCrypt::T6->get(((int32_t)((uint32_t)a0 >> 16)) & 0xff)) ^ AESCrypt::T7->get(((int32_t)((uint32_t)t3 >> 8)) & 0xff)) ^ AESCrypt::T8->get((a2) & 0xff)) ^ this->K->get(keyOffset++);
	t2 = (((AESCrypt::T5->get((int32_t)((uint32_t)a2 >> 24)) ^ AESCrypt::T6->get(((int32_t)((uint32_t)a1 >> 16)) & 0xff)) ^ AESCrypt::T7->get(((int32_t)((uint32_t)a0 >> 8)) & 0xff)) ^ AESCrypt::T8->get((t3) & 0xff)) ^ this->K->get(keyOffset++);
	t3 = (((AESCrypt::T5->get((int32_t)((uint32_t)t3 >> 24)) ^ AESCrypt::T6->get(((int32_t)((uint32_t)a2 >> 16)) & 0xff)) ^ AESCrypt::T7->get(((int32_t)((uint32_t)a1 >> 8)) & 0xff)) ^ AESCrypt::T8->get((a0) & 0xff)) ^ this->K->get(keyOffset++);
	a0 = (((AESCrypt::T5->get((int32_t)((uint32_t)t0 >> 24)) ^ AESCrypt::T6->get(((int32_t)((uint32_t)t3 >> 16)) & 0xff)) ^ AESCrypt::T7->get(((int32_t)((uint32_t)t2 >> 8)) & 0xff)) ^ AESCrypt::T8->get((t1) & 0xff)) ^ this->K->get(keyOffset++);
	a1 = (((AESCrypt::T5->get((int32_t)((uint32_t)t1 >> 24)) ^ AESCrypt::T6->get(((int32_t)((uint32_t)t0 >> 16)) & 0xff)) ^ AESCrypt::T7->get(((int32_t)((uint32_t)t3 >> 8)) & 0xff)) ^ AESCrypt::T8->get((t2) & 0xff)) ^ this->K->get(keyOffset++);
	a2 = (((AESCrypt::T5->get((int32_t)((uint32_t)t2 >> 24)) ^ AESCrypt::T6->get(((int32_t)((uint32_t)t1 >> 16)) & 0xff)) ^ AESCrypt::T7->get(((int32_t)((uint32_t)t0 >> 8)) & 0xff)) ^ AESCrypt::T8->get((t3) & 0xff)) ^ this->K->get(keyOffset++);
	t3 = (((AESCrypt::T5->get((int32_t)((uint32_t)t3 >> 24)) ^ AESCrypt::T6->get(((int32_t)((uint32_t)t2 >> 16)) & 0xff)) ^ AESCrypt::T7->get(((int32_t)((uint32_t)t1 >> 8)) & 0xff)) ^ AESCrypt::T8->get((t0) & 0xff)) ^ this->K->get(keyOffset++);
	t0 = (((AESCrypt::T5->get((int32_t)((uint32_t)a0 >> 24)) ^ AESCrypt::T6->get(((int32_t)((uint32_t)t3 >> 16)) & 0xff)) ^ AESCrypt::T7->get(((int32_t)((uint32_t)a2 >> 8)) & 0xff)) ^ AESCrypt::T8->get((a1) & 0xff)) ^ this->K->get(keyOffset++);
	t1 = (((AESCrypt::T5->get((int32_t)((uint32_t)a1 >> 24)) ^ AESCrypt::T6->get(((int32_t)((uint32_t)a0 >> 16)) & 0xff)) ^ AESCrypt::T7->get(((int32_t)((uint32_t)t3 >> 8)) & 0xff)) ^ AESCrypt::T8->get((a2) & 0xff)) ^ this->K->get(keyOffset++);
	t2 = (((AESCrypt::T5->get((int32_t)((uint32_t)a2 >> 24)) ^ AESCrypt::T6->get(((int32_t)((uint32_t)a1 >> 16)) & 0xff)) ^ AESCrypt::T7->get(((int32_t)((uint32_t)a0 >> 8)) & 0xff)) ^ AESCrypt::T8->get((t3) & 0xff)) ^ this->K->get(keyOffset++);
	t3 = (((AESCrypt::T5->get((int32_t)((uint32_t)t3 >> 24)) ^ AESCrypt::T6->get(((int32_t)((uint32_t)a2 >> 16)) & 0xff)) ^ AESCrypt::T7->get(((int32_t)((uint32_t)a1 >> 8)) & 0xff)) ^ AESCrypt::T8->get((a0) & 0xff)) ^ this->K->get(keyOffset++);
	a0 = (((AESCrypt::T5->get((int32_t)((uint32_t)t0 >> 24)) ^ AESCrypt::T6->get(((int32_t)((uint32_t)t3 >> 16)) & 0xff)) ^ AESCrypt::T7->get(((int32_t)((uint32_t)t2 >> 8)) & 0xff)) ^ AESCrypt::T8->get((t1) & 0xff)) ^ this->K->get(keyOffset++);
	a1 = (((AESCrypt::T5->get((int32_t)((uint32_t)t1 >> 24)) ^ AESCrypt::T6->get(((int32_t)((uint32_t)t0 >> 16)) & 0xff)) ^ AESCrypt::T7->get(((int32_t)((uint32_t)t3 >> 8)) & 0xff)) ^ AESCrypt::T8->get((t2) & 0xff)) ^ this->K->get(keyOffset++);
	a2 = (((AESCrypt::T5->get((int32_t)((uint32_t)t2 >> 24)) ^ AESCrypt::T6->get(((int32_t)((uint32_t)t1 >> 16)) & 0xff)) ^ AESCrypt::T7->get(((int32_t)((uint32_t)t0 >> 8)) & 0xff)) ^ AESCrypt::T8->get((t3) & 0xff)) ^ this->K->get(keyOffset++);
	t3 = (((AESCrypt::T5->get((int32_t)((uint32_t)t3 >> 24)) ^ AESCrypt::T6->get(((int32_t)((uint32_t)t2 >> 16)) & 0xff)) ^ AESCrypt::T7->get(((int32_t)((uint32_t)t1 >> 8)) & 0xff)) ^ AESCrypt::T8->get((t0) & 0xff)) ^ this->K->get(keyOffset++);
	t0 = (((AESCrypt::T5->get((int32_t)((uint32_t)a0 >> 24)) ^ AESCrypt::T6->get(((int32_t)((uint32_t)t3 >> 16)) & 0xff)) ^ AESCrypt::T7->get(((int32_t)((uint32_t)a2 >> 8)) & 0xff)) ^ AESCrypt::T8->get((a1) & 0xff)) ^ this->K->get(keyOffset++);
	t1 = (((AESCrypt::T5->get((int32_t)((uint32_t)a1 >> 24)) ^ AESCrypt::T6->get(((int32_t)((uint32_t)a0 >> 16)) & 0xff)) ^ AESCrypt::T7->get(((int32_t)((uint32_t)t3 >> 8)) & 0xff)) ^ AESCrypt::T8->get((a2) & 0xff)) ^ this->K->get(keyOffset++);
	t2 = (((AESCrypt::T5->get((int32_t)((uint32_t)a2 >> 24)) ^ AESCrypt::T6->get(((int32_t)((uint32_t)a1 >> 16)) & 0xff)) ^ AESCrypt::T7->get(((int32_t)((uint32_t)a0 >> 8)) & 0xff)) ^ AESCrypt::T8->get((t3) & 0xff)) ^ this->K->get(keyOffset++);
	t3 = (((AESCrypt::T5->get((int32_t)((uint32_t)t3 >> 24)) ^ AESCrypt::T6->get(((int32_t)((uint32_t)a2 >> 16)) & 0xff)) ^ AESCrypt::T7->get(((int32_t)((uint32_t)a1 >> 8)) & 0xff)) ^ AESCrypt::T8->get((a0) & 0xff)) ^ this->K->get(keyOffset++);
	a0 = (((AESCrypt::T5->get((int32_t)((uint32_t)t0 >> 24)) ^ AESCrypt::T6->get(((int32_t)((uint32_t)t3 >> 16)) & 0xff)) ^ AESCrypt::T7->get(((int32_t)((uint32_t)t2 >> 8)) & 0xff)) ^ AESCrypt::T8->get((t1) & 0xff)) ^ this->K->get(keyOffset++);
	a1 = (((AESCrypt::T5->get((int32_t)((uint32_t)t1 >> 24)) ^ AESCrypt::T6->get(((int32_t)((uint32_t)t0 >> 16)) & 0xff)) ^ AESCrypt::T7->get(((int32_t)((uint32_t)t3 >> 8)) & 0xff)) ^ AESCrypt::T8->get((t2) & 0xff)) ^ this->K->get(keyOffset++);
	a2 = (((AESCrypt::T5->get((int32_t)((uint32_t)t2 >> 24)) ^ AESCrypt::T6->get(((int32_t)((uint32_t)t1 >> 16)) & 0xff)) ^ AESCrypt::T7->get(((int32_t)((uint32_t)t0 >> 8)) & 0xff)) ^ AESCrypt::T8->get((t3) & 0xff)) ^ this->K->get(keyOffset++);
	t3 = (((AESCrypt::T5->get((int32_t)((uint32_t)t3 >> 24)) ^ AESCrypt::T6->get(((int32_t)((uint32_t)t2 >> 16)) & 0xff)) ^ AESCrypt::T7->get(((int32_t)((uint32_t)t1 >> 8)) & 0xff)) ^ AESCrypt::T8->get((t0) & 0xff)) ^ this->K->get(keyOffset++);
	t1 = this->K->get(0);
	$nc(out)->set(outOffset++, (int8_t)(AESCrypt::Si->get((int32_t)((uint32_t)a0 >> 24)) ^ ((int32_t)((uint32_t)t1 >> 24))));
	out->set(outOffset++, (int8_t)(AESCrypt::Si->get(((int32_t)((uint32_t)t3 >> 16)) & 0xff) ^ ((int32_t)((uint32_t)t1 >> 16))));
	out->set(outOffset++, (int8_t)(AESCrypt::Si->get(((int32_t)((uint32_t)a2 >> 8)) & 0xff) ^ ((int32_t)((uint32_t)t1 >> 8))));
	out->set(outOffset++, (int8_t)(AESCrypt::Si->get((a1) & 0xff) ^ (t1)));
	t1 = this->K->get(1);
	out->set(outOffset++, (int8_t)(AESCrypt::Si->get((int32_t)((uint32_t)a1 >> 24)) ^ ((int32_t)((uint32_t)t1 >> 24))));
	out->set(outOffset++, (int8_t)(AESCrypt::Si->get(((int32_t)((uint32_t)a0 >> 16)) & 0xff) ^ ((int32_t)((uint32_t)t1 >> 16))));
	out->set(outOffset++, (int8_t)(AESCrypt::Si->get(((int32_t)((uint32_t)t3 >> 8)) & 0xff) ^ ((int32_t)((uint32_t)t1 >> 8))));
	out->set(outOffset++, (int8_t)(AESCrypt::Si->get((a2) & 0xff) ^ (t1)));
	t1 = this->K->get(2);
	out->set(outOffset++, (int8_t)(AESCrypt::Si->get((int32_t)((uint32_t)a2 >> 24)) ^ ((int32_t)((uint32_t)t1 >> 24))));
	out->set(outOffset++, (int8_t)(AESCrypt::Si->get(((int32_t)((uint32_t)a1 >> 16)) & 0xff) ^ ((int32_t)((uint32_t)t1 >> 16))));
	out->set(outOffset++, (int8_t)(AESCrypt::Si->get(((int32_t)((uint32_t)a0 >> 8)) & 0xff) ^ ((int32_t)((uint32_t)t1 >> 8))));
	out->set(outOffset++, (int8_t)(AESCrypt::Si->get((t3) & 0xff) ^ (t1)));
	t1 = this->K->get(3);
	out->set(outOffset++, (int8_t)(AESCrypt::Si->get((int32_t)((uint32_t)t3 >> 24)) ^ ((int32_t)((uint32_t)t1 >> 24))));
	out->set(outOffset++, (int8_t)(AESCrypt::Si->get(((int32_t)((uint32_t)a2 >> 16)) & 0xff) ^ ((int32_t)((uint32_t)t1 >> 16))));
	out->set(outOffset++, (int8_t)(AESCrypt::Si->get(((int32_t)((uint32_t)a1 >> 8)) & 0xff) ^ ((int32_t)((uint32_t)t1 >> 8))));
	out->set(outOffset, (int8_t)(AESCrypt::Si->get((a0) & 0xff) ^ (t1)));
}

void AESCrypt::makeSessionKey($bytes* k) {
	$useLocalObjectStack();
	if (k == nullptr) {
		$throwNew($InvalidKeyException, "Empty key"_s);
	}
	if (!isKeySizeValid($nc(k)->length)) {
		$throwNew($InvalidKeyException, $$str({"Invalid AES key length: "_s, $$str(k->length), " bytes"_s}));
	}
	int32_t ROUNDS = getRounds(k->length);
	int32_t ROUND_KEY_COUNT = (ROUNDS + 1) * 4;
	int32_t BC = 4;
	$var($intArray2, Ke, $new($intArray2, ROUNDS + 1, 4));
	$var($intArray2, Kd, $new($intArray2, ROUNDS + 1, 4));
	int32_t KC = k->length / 4;
	$var($ints, tk, $new($ints, KC));
	int32_t i = 0;
	int32_t j = 0;
	for (i = 0, j = 0; i < KC; ++i, j += 4) {
		tk->set(i, ((((k->get(j)) << 24) | ((k->get(j + 1) & 0xff) << 16)) | ((k->get(j + 2) & 0xff) << 8)) | (k->get(j + 3) & 0xff));
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
		(*tk)[0] ^= (((((AESCrypt::S->get(((int32_t)((uint32_t)tt >> 16)) & 0xff)) << 24) ^ ((AESCrypt::S->get(((int32_t)((uint32_t)tt >> 8)) & 0xff) & 0xff) << 16)) ^ ((AESCrypt::S->get((tt) & 0xff) & 0xff) << 8)) ^ (AESCrypt::S->get((int32_t)((uint32_t)tt >> 24)) & 0xff)) ^ ((AESCrypt::rcon->get(rconpointer++)) << 24);
		if (KC != 8) {
			for (i = 1, j = 0; i < KC; ++i, ++j) {
				(*tk)[i] ^= tk->get(j);
			}
		} else {
			for (i = 1, j = 0; i < KC / 2; ++i, ++j) {
				(*tk)[i] ^= tk->get(j);
			}
			tt = tk->get(KC / 2 - 1);
			(*tk)[KC / 2] ^= (((AESCrypt::S->get((tt) & 0xff) & 0xff) ^ ((AESCrypt::S->get(((int32_t)((uint32_t)tt >> 8)) & 0xff) & 0xff) << 8)) ^ ((AESCrypt::S->get(((int32_t)((uint32_t)tt >> 16)) & 0xff) & 0xff) << 16)) ^ ((AESCrypt::S->get((int32_t)((uint32_t)tt >> 24))) << 24);
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
			$nc(Kd->get(r))->set(j, ((AESCrypt::U1->get(((int32_t)((uint32_t)tt >> 24)) & 0xff) ^ AESCrypt::U2->get(((int32_t)((uint32_t)tt >> 16)) & 0xff)) ^ AESCrypt::U3->get(((int32_t)((uint32_t)tt >> 8)) & 0xff)) ^ AESCrypt::U4->get(tt & 0xff));
		}
	}
	$var($ints, expandedKe, expandToSubKey(Ke, false));
	$var($ints, expandedKd, expandToSubKey(Kd, true));
	$Arrays::fill(tk, 0);
	{
		$var($intArray2, arr$, Ke);
		for (int32_t len$ = arr$->length, i$ = 0; i$ < len$; ++i$) {
			$var($ints, ia, arr$->get(i$));
			{
				$Arrays::fill(ia, 0);
			}
		}
	}
	{
		$var($intArray2, arr$, Kd);
		for (int32_t len$ = arr$->length, i$ = 0; i$ < len$; ++i$) {
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
		$Arrays::fill(this->sessionK->get(0), 0);
		$Arrays::fill(this->sessionK->get(1), 0);
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

void AESCrypt::clinit$($Class* clazz) {
	$useLocalObjectStack();
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
		AESCrypt::alog->set(0, 1);
		for (i = 1; i < 256; ++i) {
			j = (AESCrypt::alog->get(i - 1) << 1) ^ AESCrypt::alog->get(i - 1);
			if ((j & 0x0100) != 0) {
				j ^= ROOT;
			}
			AESCrypt::alog->set(i, j);
		}
		for (i = 1; i < 255; ++i) {
			AESCrypt::log->set(AESCrypt::alog->get(i), i);
		}
		$var($byteArray2, A, $new($byteArray2, {
			$$new($bytes, {
				1,
				1,
				1,
				1,
				1,
				0,
				0,
				0
			}),
			$$new($bytes, {
				0,
				1,
				1,
				1,
				1,
				1,
				0,
				0
			}),
			$$new($bytes, {
				0,
				0,
				1,
				1,
				1,
				1,
				1,
				0
			}),
			$$new($bytes, {
				0,
				0,
				0,
				1,
				1,
				1,
				1,
				1
			}),
			$$new($bytes, {
				1,
				0,
				0,
				0,
				1,
				1,
				1,
				1
			}),
			$$new($bytes, {
				1,
				1,
				0,
				0,
				0,
				1,
				1,
				1
			}),
			$$new($bytes, {
				1,
				1,
				1,
				0,
				0,
				0,
				1,
				1
			}),
			$$new($bytes, {
				1,
				1,
				1,
				1,
				0,
				0,
				0,
				1
			})
		}));
		$var($bytes, B, $new($bytes, {
			0,
			1,
			1,
			0,
			0,
			0,
			1,
			1
		}));
		int32_t t = 0;
		$var($byteArray2, box, $new($byteArray2, 256, 8));
		$nc(box->get(1))->set(7, 1);
		for (i = 2; i < 256; ++i) {
			j = AESCrypt::alog->get(255 - AESCrypt::log->get(i));
			for (t = 0; t < 8; ++t) {
				$nc(box->get(i))->set(t, (int8_t)(($usr(j, 7 - t)) & 1));
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
			AESCrypt::S->set(i, (int8_t)($nc(cox->get(i))->get(0) << 7));
			for (t = 1; t < 8; ++t) {
				(*AESCrypt::S)[i] ^= $sl($nc(cox->get(i))->get(t), 7 - t);
			}
			AESCrypt::Si->set(AESCrypt::S->get(i) & 0xff, (int8_t)i);
		}
		$var($byteArray2, G, $new($byteArray2, {
			$$new($bytes, {
				2,
				1,
				1,
				3
			}),
			$$new($bytes, {
				3,
				2,
				1,
				1
			}),
			$$new($bytes, {
				1,
				3,
				2,
				1
			}),
			$$new($bytes, {
				1,
				1,
				3,
				2
			})
		}));
		$var($byteArray2, AA, $new($byteArray2, 4, 8));
		for (i = 0; i < 4; ++i) {
			for (j = 0; j < 4; ++j) {
				$nc(AA->get(i))->set(j, $nc(G->get(i))->get(j));
			}
			$nc(AA->get(i))->set(i + 4, 1);
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
					$nc(AA->get(i))->set(j, (int8_t)AESCrypt::alog->get((255 + AESCrypt::log->get($nc(AA->get(i))->get(j) & 0xff) - AESCrypt::log->get(pivot & 0xff)) % 255));
				}
			}
			for (t = 0; t < 4; ++t) {
				if (i != t) {
					for (j = i + 1; j < 8; ++j) {
						(*$nc(AA->get(t)))[j] ^= AESCrypt::mul($nc(AA->get(i))->get(j), $nc(AA->get(t))->get(i));
					}
					$nc(AA->get(t))->set(i, 0);
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
			s = AESCrypt::S->get(t);
			AESCrypt::T1->set(t, AESCrypt::mul4(s, G->get(0)));
			AESCrypt::T2->set(t, AESCrypt::mul4(s, G->get(1)));
			AESCrypt::T3->set(t, AESCrypt::mul4(s, G->get(2)));
			AESCrypt::T4->set(t, AESCrypt::mul4(s, G->get(3)));
			s = AESCrypt::Si->get(t);
			AESCrypt::T5->set(t, AESCrypt::mul4(s, iG->get(0)));
			AESCrypt::T6->set(t, AESCrypt::mul4(s, iG->get(1)));
			AESCrypt::T7->set(t, AESCrypt::mul4(s, iG->get(2)));
			AESCrypt::T8->set(t, AESCrypt::mul4(s, iG->get(3)));
			AESCrypt::U1->set(t, AESCrypt::mul4(t, iG->get(0)));
			AESCrypt::U2->set(t, AESCrypt::mul4(t, iG->get(1)));
			AESCrypt::U3->set(t, AESCrypt::mul4(t, iG->get(2)));
			AESCrypt::U4->set(t, AESCrypt::mul4(t, iG->get(3)));
		}
		AESCrypt::rcon->set(0, 1);
		int32_t r = 1;
		for (t = 1; t < 30; ++t) {
			r = AESCrypt::mul(2, r);
			AESCrypt::rcon->set(t, (int8_t)r);
		}
		$assignStatic(AESCrypt::log, nullptr);
		$assignStatic(AESCrypt::alog, nullptr);
	}
}

AESCrypt::AESCrypt() {
}

$Class* AESCrypt::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
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
	$CompoundAttribute implDecryptBlockmethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/IntrinsicCandidate;", nullptr},
		{}
	};
	$CompoundAttribute implEncryptBlockmethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/IntrinsicCandidate;", nullptr},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
		{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
		{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
		{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
		{"<init>", "()V", nullptr, 0, $method(AESCrypt, init$, void)},
		{"decryptBlock", "([BI[BI)V", nullptr, 0, $virtualMethod(AESCrypt, decryptBlock, void, $bytes*, int32_t, $bytes*, int32_t)},
		{"encryptBlock", "([BI[BI)V", nullptr, 0, $virtualMethod(AESCrypt, encryptBlock, void, $bytes*, int32_t, $bytes*, int32_t)},
		{"expandToSubKey", "([[IZ)[I", nullptr, $PRIVATE | $STATIC | $FINAL, $staticMethod(AESCrypt, expandToSubKey, $ints*, $intArray2*, bool)},
		{"getBlockSize", "()I", nullptr, 0, $virtualMethod(AESCrypt, getBlockSize, int32_t)},
		{"getRounds", "(I)I", nullptr, $PRIVATE | $STATIC, $staticMethod(AESCrypt, getRounds, int32_t, int32_t)},
		{"implDecryptBlock", "([BI[BI)V", nullptr, $PRIVATE, $method(AESCrypt, implDecryptBlock, void, $bytes*, int32_t, $bytes*, int32_t), nullptr, nullptr, implDecryptBlockmethodAnnotations$$},
		{"implEncryptBlock", "([BI[BI)V", nullptr, $PRIVATE, $method(AESCrypt, implEncryptBlock, void, $bytes*, int32_t, $bytes*, int32_t), nullptr, nullptr, implEncryptBlockmethodAnnotations$$},
		{"init", "(ZLjava/lang/String;[B)V", nullptr, 0, $virtualMethod(AESCrypt, init, void, bool, $String*, $bytes*), "java.security.InvalidKeyException"},
		{"isKeySizeValid", "(I)Z", nullptr, $STATIC | $FINAL, $staticMethod(AESCrypt, isKeySizeValid, bool, int32_t)},
		{"makeSessionKey", "([B)V", nullptr, $PRIVATE, $method(AESCrypt, makeSessionKey, void, $bytes*), "java.security.InvalidKeyException"},
		{"mul", "(II)I", nullptr, $PRIVATE | $STATIC | $FINAL, $staticMethod(AESCrypt, mul, int32_t, int32_t, int32_t)},
		{"mul4", "(I[B)I", nullptr, $PRIVATE | $STATIC | $FINAL, $staticMethod(AESCrypt, mul4, int32_t, int32_t, $bytes*)},
		{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"com.sun.crypto.provider.AESCrypt",
		"com.sun.crypto.provider.SymmetricCipher",
		"com.sun.crypto.provider.AESConstants",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(AESCrypt, name, initialize, &classInfo$$, AESCrypt::clinit$, []($Class* clazz) -> $Object* {
		return $of($alloc(AESCrypt));
	});
	return class$;
}

$Class* AESCrypt::class$ = nullptr;

			} // provider
		} // crypto
	} // sun
} // com