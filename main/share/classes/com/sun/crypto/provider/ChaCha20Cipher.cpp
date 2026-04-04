#include <com/sun/crypto/provider/ChaCha20Cipher.h>
#include <com/sun/crypto/provider/ChaCha20Cipher$ChaChaEngine.h>
#include <com/sun/crypto/provider/ChaCha20Cipher$EngineAEADDec.h>
#include <com/sun/crypto/provider/ChaCha20Cipher$EngineAEADEnc.h>
#include <com/sun/crypto/provider/ChaCha20Cipher$EngineStreamOnly.h>
#include <com/sun/crypto/provider/Poly1305.h>
#include <java/io/IOException.h>
#include <java/lang/IllegalStateException.h>
#include <java/lang/Math.h>
#include <java/lang/UnsupportedOperationException.h>
#include <java/lang/invoke/MethodHandles.h>
#include <java/lang/invoke/VarHandle.h>
#include <java/nio/ByteBuffer.h>
#include <java/nio/ByteOrder.h>
#include <java/security/AlgorithmParameters.h>
#include <java/security/GeneralSecurityException.h>
#include <java/security/InvalidAlgorithmParameterException.h>
#include <java/security/InvalidKeyException.h>
#include <java/security/Key.h>
#include <java/security/KeyException.h>
#include <java/security/MessageDigest.h>
#include <java/security/NoSuchAlgorithmException.h>
#include <java/security/SecureRandom.h>
#include <java/security/spec/AlgorithmParameterSpec.h>
#include <java/util/Arrays.h>
#include <java/util/Objects.h>
#include <javax/crypto/Cipher.h>
#include <javax/crypto/CipherSpi.h>
#include <javax/crypto/NoSuchPaddingException.h>
#include <javax/crypto/ShortBufferException.h>
#include <javax/crypto/spec/ChaCha20ParameterSpec.h>
#include <javax/crypto/spec/IvParameterSpec.h>
#include <javax/crypto/spec/SecretKeySpec.h>
#include <sun/security/util/DerValue.h>
#include <jcpp.h>

#undef BYTES
#undef CIPHERBUF_BASE
#undef DECRYPT_MODE
#undef ENCRYPT_MODE
#undef KEYSTREAM_SIZE
#undef KS_SIZE_INTS
#undef LITTLE_ENDIAN
#undef MAX_UINT32
#undef MODE_AEAD
#undef MODE_NONE
#undef STATE_CONST_0
#undef STATE_CONST_1
#undef STATE_CONST_2
#undef STATE_CONST_3
#undef TAG_LENGTH
#undef UNWRAP_MODE
#undef WRAP_MODE

using $ChaCha20Cipher$EngineAEADDec = ::com::sun::crypto::provider::ChaCha20Cipher$EngineAEADDec;
using $ChaCha20Cipher$EngineAEADEnc = ::com::sun::crypto::provider::ChaCha20Cipher$EngineAEADEnc;
using $ChaCha20Cipher$EngineStreamOnly = ::com::sun::crypto::provider::ChaCha20Cipher$EngineStreamOnly;
using $Poly1305 = ::com::sun::crypto::provider::Poly1305;
using $IOException = ::java::io::IOException;
using $ArithmeticException = ::java::lang::ArithmeticException;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalStateException = ::java::lang::IllegalStateException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $Long = ::java::lang::Long;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $UnsupportedOperationException = ::java::lang::UnsupportedOperationException;
using $MethodHandles = ::java::lang::invoke::MethodHandles;
using $VarHandle = ::java::lang::invoke::VarHandle;
using $ByteBuffer = ::java::nio::ByteBuffer;
using $ByteOrder = ::java::nio::ByteOrder;
using $AlgorithmParameters = ::java::security::AlgorithmParameters;
using $InvalidAlgorithmParameterException = ::java::security::InvalidAlgorithmParameterException;
using $InvalidKeyException = ::java::security::InvalidKeyException;
using $Key = ::java::security::Key;
using $KeyException = ::java::security::KeyException;
using $MessageDigest = ::java::security::MessageDigest;
using $NoSuchAlgorithmException = ::java::security::NoSuchAlgorithmException;
using $SecureRandom = ::java::security::SecureRandom;
using $AlgorithmParameterSpec = ::java::security::spec::AlgorithmParameterSpec;
using $Arrays = ::java::util::Arrays;
using $Objects = ::java::util::Objects;
using $Cipher = ::javax::crypto::Cipher;
using $CipherSpi = ::javax::crypto::CipherSpi;
using $NoSuchPaddingException = ::javax::crypto::NoSuchPaddingException;
using $ShortBufferException = ::javax::crypto::ShortBufferException;
using $ChaCha20ParameterSpec = ::javax::crypto::spec::ChaCha20ParameterSpec;
using $IvParameterSpec = ::javax::crypto::spec::IvParameterSpec;
using $SecretKeySpec = ::javax::crypto::spec::SecretKeySpec;
using $DerValue = ::sun::security::util::DerValue;

namespace com {
	namespace sun {
		namespace crypto {
			namespace provider {

$bytes* ChaCha20Cipher::padBuf = nullptr;
$VarHandle* ChaCha20Cipher::asIntLittleEndian = nullptr;
$VarHandle* ChaCha20Cipher::asLongLittleEndian = nullptr;
$VarHandle* ChaCha20Cipher::asLongView = nullptr;

void ChaCha20Cipher::init$() {
	$CipherSpi::init$();
	this->aadDone = false;
	$set(this, startState, $new($ints, ChaCha20Cipher::KS_SIZE_INTS));
	$set(this, keyStream, $new($bytes, ChaCha20Cipher::KEYSTREAM_SIZE));
	$set(this, lenBuf, $new($bytes, ChaCha20Cipher::TAG_LENGTH));
}

void ChaCha20Cipher::engineSetMode($String* mode) {
	if ($nc(mode)->equalsIgnoreCase("None"_s) == false) {
		$throwNew($NoSuchAlgorithmException, "Mode must be None"_s);
	}
}

void ChaCha20Cipher::engineSetPadding($String* padding) {
	if ($nc(padding)->equalsIgnoreCase("NoPadding"_s) == false) {
		$throwNew($NoSuchPaddingException, "Padding must be NoPadding"_s);
	}
}

int32_t ChaCha20Cipher::engineGetBlockSize() {
	return 0;
}

int32_t ChaCha20Cipher::engineGetOutputSize(int32_t inputLen) {
	return $nc(this->engine)->getOutputSize(inputLen, true);
}

$bytes* ChaCha20Cipher::engineGetIV() {
	return (this->nonce != nullptr) ? $cast($bytes, this->nonce->clone()) : ($bytes*)nullptr;
}

$AlgorithmParameters* ChaCha20Cipher::engineGetParameters() {
	$useLocalObjectStack();
	$var($AlgorithmParameters, params, nullptr);
	if (this->mode == ChaCha20Cipher::MODE_AEAD) {
		$var($bytes, nonceData, (this->initialized || this->nonce != nullptr) ? this->nonce : createRandomNonce(nullptr));
		try {
			$assign(params, $AlgorithmParameters::getInstance("ChaCha20-Poly1305"_s));
			$nc(params)->init(($($$new($DerValue, $DerValue::tag_OctetString, nonceData)->toByteArray())));
		} catch ($NoSuchAlgorithmException& exc) {
			$throwNew($RuntimeException, exc);
		} catch ($IOException& exc) {
			$throwNew($RuntimeException, exc);
		}
	}
	return params;
}

void ChaCha20Cipher::engineInit(int32_t opmode, $Key* key, $SecureRandom* random) {
	if (opmode != $Cipher::DECRYPT_MODE) {
		$var($bytes, newNonce, createRandomNonce(random));
		this->counter = 1;
		init(opmode, key, newNonce);
	} else {
		$throwNew($InvalidKeyException, "Default parameter generation disallowed in DECRYPT and UNWRAP modes"_s);
	}
}

void ChaCha20Cipher::engineInit(int32_t opmode, $Key* key, $AlgorithmParameterSpec* params, $SecureRandom* random) {
	$useLocalObjectStack();
	if (params == nullptr) {
		engineInit(opmode, key, random);
		return;
	}
	$var($bytes, newNonce, nullptr);
	{
		$var($ChaCha20ParameterSpec, chaParams, nullptr);
		$var($IvParameterSpec, ivParams, nullptr);
		switch (this->mode) {
		case ChaCha20Cipher::MODE_NONE:
			if (!($instanceOf($ChaCha20ParameterSpec, params))) {
				$throwNew($InvalidAlgorithmParameterException, "ChaCha20 algorithm requires ChaCha20ParameterSpec"_s);
			}
			$assign(chaParams, $cast($ChaCha20ParameterSpec, params));
			$assign(newNonce, $nc(chaParams)->getNonce());
			this->counter = ((int64_t)chaParams->getCounter()) & (int64_t)0xffffffff;
			break;
		case ChaCha20Cipher::MODE_AEAD:
			if (!($instanceOf($IvParameterSpec, params))) {
				$throwNew($InvalidAlgorithmParameterException, "ChaCha20-Poly1305 requires IvParameterSpec"_s);
			}
			$assign(ivParams, $cast($IvParameterSpec, params));
			$assign(newNonce, $nc(ivParams)->getIV());
			if ($nc(newNonce)->length != 12) {
				$throwNew($InvalidAlgorithmParameterException, "ChaCha20-Poly1305 nonce must be 12 bytes in length"_s);
			}
			break;
		default:
			$throwNew($RuntimeException, "ChaCha20 in unsupported mode"_s);
		}
	}
	init(opmode, key, newNonce);
}

void ChaCha20Cipher::engineInit(int32_t opmode, $Key* key, $AlgorithmParameters* params, $SecureRandom* random) {
	$useLocalObjectStack();
	if (params == nullptr) {
		engineInit(opmode, key, random);
		return;
	}
	$var($bytes, newNonce, nullptr);
	{
		$var($String, paramAlg, nullptr);
		switch (this->mode) {
		case ChaCha20Cipher::MODE_NONE:
			$throwNew($InvalidAlgorithmParameterException, "AlgorithmParameters not supported"_s);
		case ChaCha20Cipher::MODE_AEAD:
			$assign(paramAlg, $nc(params)->getAlgorithm());
			if (!$nc(paramAlg)->equalsIgnoreCase("ChaCha20-Poly1305"_s)) {
				$throwNew($InvalidAlgorithmParameterException, $$str({"Invalid parameter type: "_s, paramAlg}));
			}
			try {
				$var($DerValue, dv, $new($DerValue, $(params->getEncoded())));
				$assign(newNonce, dv->getOctetString());
				if ($nc(newNonce)->length != 12) {
					$throwNew($InvalidAlgorithmParameterException, "ChaCha20-Poly1305 nonce must be 12 bytes in length"_s);
				}
			} catch ($IOException& ioe) {
				$throwNew($InvalidAlgorithmParameterException, ioe);
			}
			break;
		default:
			$throwNew($RuntimeException, $$str({"Invalid mode: "_s, $$str(this->mode)}));
		}
	}
	if (newNonce == nullptr) {
		$assign(newNonce, createRandomNonce(random));
	}
	init(opmode, key, newNonce);
}

void ChaCha20Cipher::engineUpdateAAD($bytes* src, int32_t offset, int32_t len) {
	if (!this->initialized) {
		$throwNew($IllegalStateException, "Attempted to update AAD on uninitialized Cipher"_s);
	} else if (this->aadDone) {
		$throwNew($IllegalStateException, "Attempted to update AAD on Cipher after plaintext/ciphertext update"_s);
	} else if (this->mode != ChaCha20Cipher::MODE_AEAD) {
		$throwNew($IllegalStateException, "Cipher is running in non-AEAD mode"_s);
	} else {
		try {
			this->aadLen = $Math::addExact(this->aadLen, (int64_t)len);
			authUpdate(src, offset, len);
		} catch ($ArithmeticException& ae) {
			$throwNew($IllegalStateException, "AAD overflow"_s, ae);
		}
	}
}

void ChaCha20Cipher::engineUpdateAAD($ByteBuffer* src) {
	if (!this->initialized) {
		$throwNew($IllegalStateException, "Attempted to update AAD on uninitialized Cipher"_s);
	} else if (this->aadDone) {
		$throwNew($IllegalStateException, "Attempted to update AAD on Cipher after plaintext/ciphertext update"_s);
	} else if (this->mode != ChaCha20Cipher::MODE_AEAD) {
		$throwNew($IllegalStateException, "Cipher is running in non-AEAD mode"_s);
	} else {
		try {
			int32_t var$0 = $nc(src)->limit();
			this->aadLen = $Math::addExact(this->aadLen, ((int64_t)(var$0 - src->position())));
			$nc(this->authenticator)->engineUpdate(src);
		} catch ($ArithmeticException& ae) {
			$throwNew($IllegalStateException, "AAD overflow"_s, ae);
		}
	}
}

$bytes* ChaCha20Cipher::createRandomNonce($SecureRandom* random) {
	$init(ChaCha20Cipher);
	$useLocalObjectStack();
	$var($bytes, newNonce, $new($bytes, 12));
	$var($SecureRandom, rand, (random != nullptr) ? random : $new($SecureRandom));
	$nc(rand)->nextBytes(newNonce);
	return newNonce;
}

void ChaCha20Cipher::init(int32_t opmode, $Key* key, $bytes* newNonce) {
	if ((opmode == $Cipher::WRAP_MODE) || (opmode == $Cipher::UNWRAP_MODE)) {
		$throwNew($UnsupportedOperationException, "WRAP_MODE and UNWRAP_MODE are not currently supported"_s);
	}
	$var($bytes, newKeyBytes, getEncodedKey(key));
	checkKeyAndNonce(newKeyBytes, newNonce);
	if (this->keyBytes != nullptr) {
		$Arrays::fill(this->keyBytes, (int8_t)0);
	}
	$set(this, keyBytes, newKeyBytes);
	$set(this, nonce, newNonce);
	setInitialState();
	if (this->mode == ChaCha20Cipher::MODE_NONE) {
		$set(this, engine, $new($ChaCha20Cipher$EngineStreamOnly, this));
	} else if (this->mode == ChaCha20Cipher::MODE_AEAD) {
		if (opmode == $Cipher::ENCRYPT_MODE) {
			$set(this, engine, $new($ChaCha20Cipher$EngineAEADEnc, this));
		} else if (opmode == $Cipher::DECRYPT_MODE) {
			$set(this, engine, $new($ChaCha20Cipher$EngineAEADDec, this));
		} else {
			$throwNew($InvalidKeyException, "Not encrypt or decrypt mode"_s);
		}
	}
	this->finalCounterValue = this->counter + ChaCha20Cipher::MAX_UINT32;
	generateKeystream();
	this->direction = opmode;
	this->aadDone = false;
	this->keyStrOffset = 0;
	this->initialized = true;
}

void ChaCha20Cipher::checkKeyAndNonce($bytes* newKeyBytes, $bytes* newNonce) {
	bool var$0 = $MessageDigest::isEqual(newKeyBytes, this->keyBytes);
	if (var$0 && $MessageDigest::isEqual(newNonce, this->nonce)) {
		$throwNew($InvalidKeyException, "Matching key and nonce from previous initialization"_s);
	}
}

$bytes* ChaCha20Cipher::getEncodedKey($Key* key) {
	$init(ChaCha20Cipher);
	$useLocalObjectStack();
	if ("RAW"_s->equals($($nc(key)->getFormat())) == false) {
		$throwNew($InvalidKeyException, "Key encoding format must be RAW"_s);
	}
	$var($bytes, encodedKey, key->getEncoded());
	if (encodedKey == nullptr || encodedKey->length != 32) {
		if (encodedKey != nullptr) {
			$Arrays::fill(encodedKey, (int8_t)0);
		}
		$throwNew($InvalidKeyException, "Key length must be 256 bits"_s);
	}
	return encodedKey;
}

$bytes* ChaCha20Cipher::engineUpdate($bytes* in, int32_t inOfs, int32_t inLen) {
	$var($bytes, out, $new($bytes, $nc(this->engine)->getOutputSize(inLen, false)));
	try {
		this->engine->doUpdate(in, inOfs, inLen, out, 0);
	} catch ($ShortBufferException& exc) {
		$throwNew($RuntimeException, exc);
	} catch ($KeyException& exc) {
		$throwNew($RuntimeException, exc);
	}
	return out;
}

int32_t ChaCha20Cipher::engineUpdate($bytes* in, int32_t inOfs, int32_t inLen, $bytes* out, int32_t outOfs) {
	int32_t bytesUpdated = 0;
	try {
		bytesUpdated = $nc(this->engine)->doUpdate(in, inOfs, inLen, out, outOfs);
	} catch ($KeyException& ke) {
		$throwNew($RuntimeException, ke);
	}
	return bytesUpdated;
}

$bytes* ChaCha20Cipher::engineDoFinal($bytes* in, int32_t inOfs, int32_t inLen) {
	$useLocalObjectStack();
	$var($bytes, output, $new($bytes, $nc(this->engine)->getOutputSize(inLen, true)));
	$var($Throwable, var$0, nullptr);
	try {
		try {
			this->engine->doFinal(in, inOfs, inLen, output, 0);
		} catch ($ShortBufferException& exc) {
			$throwNew($RuntimeException, exc);
		} catch ($KeyException& exc) {
			$throwNew($RuntimeException, exc);
		}
	} catch ($Throwable& var$1) {
		$assign(var$0, var$1);
	} /*finally*/ {
		this->initialized = false;
	}
	if (var$0 != nullptr) {
		$throw(var$0);
	}
	return output;
}

int32_t ChaCha20Cipher::engineDoFinal($bytes* in, int32_t inOfs, int32_t inLen, $bytes* out, int32_t outOfs) {
	int32_t bytesUpdated = 0;
	$var($Throwable, var$0, nullptr);
	try {
		try {
			bytesUpdated = $nc(this->engine)->doFinal(in, inOfs, inLen, out, outOfs);
		} catch ($KeyException& ke) {
			$throwNew($RuntimeException, ke);
		}
	} catch ($Throwable& var$1) {
		$assign(var$0, var$1);
	} /*finally*/ {
		this->initialized = false;
	}
	if (var$0 != nullptr) {
		$throw(var$0);
	}
	return bytesUpdated;
}

$bytes* ChaCha20Cipher::engineWrap($Key* key) {
	$throwNew($UnsupportedOperationException, "Wrap operations are not supported"_s);
	$shouldNotReachHere();
}

$Key* ChaCha20Cipher::engineUnwrap($bytes* wrappedKey, $String* algorithm, int32_t type) {
	$throwNew($UnsupportedOperationException, "Unwrap operations are not supported"_s);
	$shouldNotReachHere();
}

int32_t ChaCha20Cipher::engineGetKeySize($Key* key) {
	$var($bytes, encodedKey, getEncodedKey(key));
	$Arrays::fill(encodedKey, (int8_t)0);
	return $nc(encodedKey)->length << 3;
}

void ChaCha20Cipher::setInitialState() {
	this->startState->set(0, ChaCha20Cipher::STATE_CONST_0);
	this->startState->set(1, ChaCha20Cipher::STATE_CONST_1);
	this->startState->set(2, ChaCha20Cipher::STATE_CONST_2);
	this->startState->set(3, ChaCha20Cipher::STATE_CONST_3);
	for (int32_t i = 0; i < 32; i += 4) {
		this->startState->set((i / 4) + 4, ((($nc(this->keyBytes)->get(i) & 0xff) | (($nc(this->keyBytes)->get(i + 1) << 8) & 0xff00)) | (($nc(this->keyBytes)->get(i + 2) << 16) & 0x00ff0000)) | (($nc(this->keyBytes)->get(i + 3) << 24) & (int32_t)0xff000000));
	}
	this->startState->set(12, 0);
	for (int32_t i = 0; i < 12; i += 4) {
		this->startState->set((i / 4) + 13, ((($nc(this->nonce)->get(i) & 0xff) | (($nc(this->nonce)->get(i + 1) << 8) & 0xff00)) | (($nc(this->nonce)->get(i + 2) << 16) & 0x00ff0000)) | (($nc(this->nonce)->get(i + 3) << 24) & (int32_t)0xff000000));
	}
}

void ChaCha20Cipher::generateKeystream() {
	chaCha20Block(this->startState, this->counter, this->keyStream);
	++this->counter;
}

void ChaCha20Cipher::chaCha20Block($ints* initState, int64_t counter, $bytes* result) {
	$init(ChaCha20Cipher);
	$useLocalObjectStack();
	int32_t ws00 = ChaCha20Cipher::STATE_CONST_0;
	int32_t ws01 = ChaCha20Cipher::STATE_CONST_1;
	int32_t ws02 = ChaCha20Cipher::STATE_CONST_2;
	int32_t ws03 = ChaCha20Cipher::STATE_CONST_3;
	int32_t ws04 = $nc(initState)->get(4);
	int32_t ws05 = initState->get(5);
	int32_t ws06 = initState->get(6);
	int32_t ws07 = initState->get(7);
	int32_t ws08 = initState->get(8);
	int32_t ws09 = initState->get(9);
	int32_t ws10 = initState->get(10);
	int32_t ws11 = initState->get(11);
	int32_t ws12 = (int32_t)counter;
	int32_t ws13 = initState->get(13);
	int32_t ws14 = initState->get(14);
	int32_t ws15 = initState->get(15);
	for (int32_t round = 0; round < 10; ++round) {
		ws00 += ws04;
		ws12 = $Integer::rotateLeft(ws12 ^ ws00, 16);
		ws08 += ws12;
		ws04 = $Integer::rotateLeft(ws04 ^ ws08, 12);
		ws00 += ws04;
		ws12 = $Integer::rotateLeft(ws12 ^ ws00, 8);
		ws08 += ws12;
		ws04 = $Integer::rotateLeft(ws04 ^ ws08, 7);
		ws01 += ws05;
		ws13 = $Integer::rotateLeft(ws13 ^ ws01, 16);
		ws09 += ws13;
		ws05 = $Integer::rotateLeft(ws05 ^ ws09, 12);
		ws01 += ws05;
		ws13 = $Integer::rotateLeft(ws13 ^ ws01, 8);
		ws09 += ws13;
		ws05 = $Integer::rotateLeft(ws05 ^ ws09, 7);
		ws02 += ws06;
		ws14 = $Integer::rotateLeft(ws14 ^ ws02, 16);
		ws10 += ws14;
		ws06 = $Integer::rotateLeft(ws06 ^ ws10, 12);
		ws02 += ws06;
		ws14 = $Integer::rotateLeft(ws14 ^ ws02, 8);
		ws10 += ws14;
		ws06 = $Integer::rotateLeft(ws06 ^ ws10, 7);
		ws03 += ws07;
		ws15 = $Integer::rotateLeft(ws15 ^ ws03, 16);
		ws11 += ws15;
		ws07 = $Integer::rotateLeft(ws07 ^ ws11, 12);
		ws03 += ws07;
		ws15 = $Integer::rotateLeft(ws15 ^ ws03, 8);
		ws11 += ws15;
		ws07 = $Integer::rotateLeft(ws07 ^ ws11, 7);
		ws00 += ws05;
		ws15 = $Integer::rotateLeft(ws15 ^ ws00, 16);
		ws10 += ws15;
		ws05 = $Integer::rotateLeft(ws05 ^ ws10, 12);
		ws00 += ws05;
		ws15 = $Integer::rotateLeft(ws15 ^ ws00, 8);
		ws10 += ws15;
		ws05 = $Integer::rotateLeft(ws05 ^ ws10, 7);
		ws01 += ws06;
		ws12 = $Integer::rotateLeft(ws12 ^ ws01, 16);
		ws11 += ws12;
		ws06 = $Integer::rotateLeft(ws06 ^ ws11, 12);
		ws01 += ws06;
		ws12 = $Integer::rotateLeft(ws12 ^ ws01, 8);
		ws11 += ws12;
		ws06 = $Integer::rotateLeft(ws06 ^ ws11, 7);
		ws02 += ws07;
		ws13 = $Integer::rotateLeft(ws13 ^ ws02, 16);
		ws08 += ws13;
		ws07 = $Integer::rotateLeft(ws07 ^ ws08, 12);
		ws02 += ws07;
		ws13 = $Integer::rotateLeft(ws13 ^ ws02, 8);
		ws08 += ws13;
		ws07 = $Integer::rotateLeft(ws07 ^ ws08, 7);
		ws03 += ws04;
		ws14 = $Integer::rotateLeft(ws14 ^ ws03, 16);
		ws09 += ws14;
		ws04 = $Integer::rotateLeft(ws04 ^ ws09, 12);
		ws03 += ws04;
		ws14 = $Integer::rotateLeft(ws14 ^ ws03, 8);
		ws09 += ws14;
		ws04 = $Integer::rotateLeft(ws04 ^ ws09, 7);
	}
	$nc(ChaCha20Cipher::asIntLittleEndian)->set($$new($ObjectArray, {result, $$of(0), $$of(ws00 + ChaCha20Cipher::STATE_CONST_0)}));
	ChaCha20Cipher::asIntLittleEndian->set($$new($ObjectArray, {result, $$of(4), $$of(ws01 + ChaCha20Cipher::STATE_CONST_1)}));
	ChaCha20Cipher::asIntLittleEndian->set($$new($ObjectArray, {result, $$of(8), $$of(ws02 + ChaCha20Cipher::STATE_CONST_2)}));
	ChaCha20Cipher::asIntLittleEndian->set($$new($ObjectArray, {result, $$of(12), $$of(ws03 + ChaCha20Cipher::STATE_CONST_3)}));
	ChaCha20Cipher::asIntLittleEndian->set($$new($ObjectArray, {result, $$of(16), $$of(ws04 + initState->get(4))}));
	ChaCha20Cipher::asIntLittleEndian->set($$new($ObjectArray, {result, $$of(20), $$of(ws05 + initState->get(5))}));
	ChaCha20Cipher::asIntLittleEndian->set($$new($ObjectArray, {result, $$of(24), $$of(ws06 + initState->get(6))}));
	ChaCha20Cipher::asIntLittleEndian->set($$new($ObjectArray, {result, $$of(28), $$of(ws07 + initState->get(7))}));
	ChaCha20Cipher::asIntLittleEndian->set($$new($ObjectArray, {result, $$of(32), $$of(ws08 + initState->get(8))}));
	ChaCha20Cipher::asIntLittleEndian->set($$new($ObjectArray, {result, $$of(36), $$of(ws09 + initState->get(9))}));
	ChaCha20Cipher::asIntLittleEndian->set($$new($ObjectArray, {result, $$of(40), $$of(ws10 + initState->get(10))}));
	ChaCha20Cipher::asIntLittleEndian->set($$new($ObjectArray, {result, $$of(44), $$of(ws11 + initState->get(11))}));
	ChaCha20Cipher::asIntLittleEndian->set($$new($ObjectArray, {result, $$of(48), $$of(ws12 + (int32_t)counter)}));
	ChaCha20Cipher::asIntLittleEndian->set($$new($ObjectArray, {result, $$of(52), $$of(ws13 + initState->get(13))}));
	ChaCha20Cipher::asIntLittleEndian->set($$new($ObjectArray, {result, $$of(56), $$of(ws14 + initState->get(14))}));
	ChaCha20Cipher::asIntLittleEndian->set($$new($ObjectArray, {result, $$of(60), $$of(ws15 + initState->get(15))}));
}

void ChaCha20Cipher::chaCha20Transform($bytes* in, int32_t inOff, int32_t inLen, $bytes* out, int32_t outOff) {
	int32_t remainingData = inLen;
	while (remainingData > 0) {
		int32_t ksRemain = this->keyStream->length - this->keyStrOffset;
		if (ksRemain <= 0) {
			if (this->counter <= this->finalCounterValue) {
				generateKeystream();
				this->keyStrOffset = 0;
				ksRemain = this->keyStream->length;
			} else {
				$throwNew($KeyException, "Counter exhausted.  Reinitialize with new key and/or nonce"_s);
			}
		}
		int32_t xformLen = $Math::min(remainingData, ksRemain);
		xor$(this->keyStream, this->keyStrOffset, in, inOff, out, outOff, xformLen);
		outOff += xformLen;
		inOff += xformLen;
		this->keyStrOffset += xformLen;
		remainingData -= xformLen;
	}
}

void ChaCha20Cipher::xor$($bytes* in1, int32_t off1, $bytes* in2, int32_t off2, $bytes* out, int32_t outOff, int32_t len) {
	$init(ChaCha20Cipher);
	$useLocalObjectStack();
	while (len >= 8) {
		int64_t v1 = $longValue($nc(ChaCha20Cipher::asLongView)->get($$new($ObjectArray, {in1, $$of(off1)})));
		int64_t v2 = $longValue(ChaCha20Cipher::asLongView->get($$new($ObjectArray, {in2, $$of(off2)})));
		ChaCha20Cipher::asLongView->set($$new($ObjectArray, {out, $$of(outOff), $$of(v1 ^ v2)}));
		off1 += 8;
		off2 += 8;
		outOff += 8;
		len -= 8;
	}
	while (len > 0) {
		$nc(out)->set(outOff, (int8_t)($nc(in1)->get(off1) ^ $nc(in2)->get(off2)));
		++off1;
		++off2;
		++outOff;
		--len;
	}
}

void ChaCha20Cipher::initAuthenticator() {
	$useLocalObjectStack();
	$set(this, authenticator, $new($Poly1305));
	$var($bytes, serializedKey, $new($bytes, ChaCha20Cipher::KEYSTREAM_SIZE));
	chaCha20Block(this->startState, 0, serializedKey);
	this->authenticator->engineInit($$new($SecretKeySpec, serializedKey, 0, 32, this->authAlgName), nullptr);
	this->aadLen = 0;
	this->dataLen = 0;
}

int32_t ChaCha20Cipher::authUpdate($bytes* data, int32_t offset, int32_t length) {
	$Objects::checkFromIndexSize(offset, length, $nc(data)->length);
	$nc(this->authenticator)->engineUpdate(data, offset, length);
	return length;
}

void ChaCha20Cipher::authFinalizeData($bytes* data, int32_t dataOff, int32_t length, $bytes* out, int32_t outOff) {
	if (data != nullptr) {
		this->dataLen += authUpdate(data, dataOff, length);
	}
	authPad16(this->dataLen);
	authWriteLengths(this->aadLen, this->dataLen, this->lenBuf);
	$nc(this->authenticator)->engineUpdate(this->lenBuf, 0, this->lenBuf->length);
	$var($bytes, tag, this->authenticator->engineDoFinal());
	$Objects::checkFromIndexSize(outOff, $nc(tag)->length, $nc(out)->length);
	$System::arraycopy(tag, 0, out, outOff, tag->length);
	this->aadLen = 0;
	this->dataLen = 0;
}

void ChaCha20Cipher::authPad16(int64_t dataLen) {
	$nc(this->authenticator)->engineUpdate(ChaCha20Cipher::padBuf, 0, (ChaCha20Cipher::TAG_LENGTH - ((int32_t)dataLen & 0x0f)) & 0x0f);
}

void ChaCha20Cipher::authWriteLengths(int64_t aLen, int64_t dLen, $bytes* buf) {
	$useLocalObjectStack();
	$nc(ChaCha20Cipher::asLongLittleEndian)->set($$new($ObjectArray, {buf, $$of(0), $$of(aLen)}));
	ChaCha20Cipher::asLongLittleEndian->set($$new($ObjectArray, {buf, $$of($Long::BYTES), $$of(dLen)}));
}

void ChaCha20Cipher::clinit$($Class* clazz) {
	$assignStatic(ChaCha20Cipher::padBuf, $new($bytes, ChaCha20Cipher::TAG_LENGTH));
	$init($ByteOrder);
	$assignStatic(ChaCha20Cipher::asIntLittleEndian, $MethodHandles::byteArrayViewVarHandle($getClass($ints), $ByteOrder::LITTLE_ENDIAN));
	$assignStatic(ChaCha20Cipher::asLongLittleEndian, $MethodHandles::byteArrayViewVarHandle($getClass($longs), $ByteOrder::LITTLE_ENDIAN));
	$assignStatic(ChaCha20Cipher::asLongView, $MethodHandles::byteArrayViewVarHandle($getClass($longs), $($ByteOrder::nativeOrder())));
}

ChaCha20Cipher::ChaCha20Cipher() {
}

$Class* ChaCha20Cipher::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"MODE_NONE", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(ChaCha20Cipher, MODE_NONE)},
		{"MODE_AEAD", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(ChaCha20Cipher, MODE_AEAD)},
		{"STATE_CONST_0", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(ChaCha20Cipher, STATE_CONST_0)},
		{"STATE_CONST_1", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(ChaCha20Cipher, STATE_CONST_1)},
		{"STATE_CONST_2", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(ChaCha20Cipher, STATE_CONST_2)},
		{"STATE_CONST_3", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(ChaCha20Cipher, STATE_CONST_3)},
		{"KEYSTREAM_SIZE", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(ChaCha20Cipher, KEYSTREAM_SIZE)},
		{"KS_SIZE_INTS", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(ChaCha20Cipher, KS_SIZE_INTS)},
		{"CIPHERBUF_BASE", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(ChaCha20Cipher, CIPHERBUF_BASE)},
		{"initialized", "Z", nullptr, $PRIVATE, $field(ChaCha20Cipher, initialized)},
		{"mode", "I", nullptr, $PROTECTED, $field(ChaCha20Cipher, mode)},
		{"direction", "I", nullptr, $PRIVATE, $field(ChaCha20Cipher, direction)},
		{"aadDone", "Z", nullptr, $PRIVATE, $field(ChaCha20Cipher, aadDone)},
		{"keyBytes", "[B", nullptr, $PRIVATE, $field(ChaCha20Cipher, keyBytes)},
		{"nonce", "[B", nullptr, $PRIVATE, $field(ChaCha20Cipher, nonce)},
		{"MAX_UINT32", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(ChaCha20Cipher, MAX_UINT32)},
		{"finalCounterValue", "J", nullptr, $PRIVATE, $field(ChaCha20Cipher, finalCounterValue)},
		{"counter", "J", nullptr, $PRIVATE, $field(ChaCha20Cipher, counter)},
		{"startState", "[I", nullptr, $PRIVATE | $FINAL, $field(ChaCha20Cipher, startState)},
		{"keyStream", "[B", nullptr, $PRIVATE | $FINAL, $field(ChaCha20Cipher, keyStream)},
		{"keyStrOffset", "I", nullptr, $PRIVATE, $field(ChaCha20Cipher, keyStrOffset)},
		{"TAG_LENGTH", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(ChaCha20Cipher, TAG_LENGTH)},
		{"aadLen", "J", nullptr, $PRIVATE, $field(ChaCha20Cipher, aadLen)},
		{"dataLen", "J", nullptr, $PRIVATE, $field(ChaCha20Cipher, dataLen)},
		{"padBuf", "[B", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(ChaCha20Cipher, padBuf)},
		{"lenBuf", "[B", nullptr, $PRIVATE | $FINAL, $field(ChaCha20Cipher, lenBuf)},
		{"authAlgName", "Ljava/lang/String;", nullptr, $PROTECTED, $field(ChaCha20Cipher, authAlgName)},
		{"authenticator", "Lcom/sun/crypto/provider/Poly1305;", nullptr, $PRIVATE, $field(ChaCha20Cipher, authenticator)},
		{"engine", "Lcom/sun/crypto/provider/ChaCha20Cipher$ChaChaEngine;", nullptr, $PRIVATE, $field(ChaCha20Cipher, engine)},
		{"asIntLittleEndian", "Ljava/lang/invoke/VarHandle;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(ChaCha20Cipher, asIntLittleEndian)},
		{"asLongLittleEndian", "Ljava/lang/invoke/VarHandle;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(ChaCha20Cipher, asLongLittleEndian)},
		{"asLongView", "Ljava/lang/invoke/VarHandle;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(ChaCha20Cipher, asLongView)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PROTECTED, $method(ChaCha20Cipher, init$, void)},
		{"authFinalizeData", "([BII[BI)V", nullptr, $PRIVATE, $method(ChaCha20Cipher, authFinalizeData, void, $bytes*, int32_t, int32_t, $bytes*, int32_t), "javax.crypto.ShortBufferException"},
		{"authPad16", "(J)V", nullptr, $PRIVATE, $method(ChaCha20Cipher, authPad16, void, int64_t)},
		{"authUpdate", "([BII)I", nullptr, $PRIVATE, $method(ChaCha20Cipher, authUpdate, int32_t, $bytes*, int32_t, int32_t)},
		{"authWriteLengths", "(JJ[B)V", nullptr, $PRIVATE, $method(ChaCha20Cipher, authWriteLengths, void, int64_t, int64_t, $bytes*)},
		{"chaCha20Block", "([IJ[B)V", nullptr, $PRIVATE | $STATIC, $staticMethod(ChaCha20Cipher, chaCha20Block, void, $ints*, int64_t, $bytes*)},
		{"chaCha20Transform", "([BII[BI)V", nullptr, $PRIVATE, $method(ChaCha20Cipher, chaCha20Transform, void, $bytes*, int32_t, int32_t, $bytes*, int32_t), "java.security.KeyException"},
		{"checkKeyAndNonce", "([B[B)V", nullptr, $PRIVATE, $method(ChaCha20Cipher, checkKeyAndNonce, void, $bytes*, $bytes*), "java.security.InvalidKeyException"},
		{"createRandomNonce", "(Ljava/security/SecureRandom;)[B", nullptr, $PRIVATE | $STATIC, $staticMethod(ChaCha20Cipher, createRandomNonce, $bytes*, $SecureRandom*)},
		{"engineDoFinal", "([BII)[B", nullptr, $PROTECTED, $virtualMethod(ChaCha20Cipher, engineDoFinal, $bytes*, $bytes*, int32_t, int32_t), "javax.crypto.AEADBadTagException"},
		{"engineDoFinal", "([BII[BI)I", nullptr, $PROTECTED, $virtualMethod(ChaCha20Cipher, engineDoFinal, int32_t, $bytes*, int32_t, int32_t, $bytes*, int32_t), "javax.crypto.ShortBufferException,javax.crypto.AEADBadTagException"},
		{"engineGetBlockSize", "()I", nullptr, $PROTECTED, $virtualMethod(ChaCha20Cipher, engineGetBlockSize, int32_t)},
		{"engineGetIV", "()[B", nullptr, $PROTECTED, $virtualMethod(ChaCha20Cipher, engineGetIV, $bytes*)},
		{"engineGetKeySize", "(Ljava/security/Key;)I", nullptr, $PROTECTED, $virtualMethod(ChaCha20Cipher, engineGetKeySize, int32_t, $Key*), "java.security.InvalidKeyException"},
		{"engineGetOutputSize", "(I)I", nullptr, $PROTECTED, $virtualMethod(ChaCha20Cipher, engineGetOutputSize, int32_t, int32_t)},
		{"engineGetParameters", "()Ljava/security/AlgorithmParameters;", nullptr, $PROTECTED, $virtualMethod(ChaCha20Cipher, engineGetParameters, $AlgorithmParameters*)},
		{"engineInit", "(ILjava/security/Key;Ljava/security/SecureRandom;)V", nullptr, $PROTECTED, $virtualMethod(ChaCha20Cipher, engineInit, void, int32_t, $Key*, $SecureRandom*), "java.security.InvalidKeyException"},
		{"engineInit", "(ILjava/security/Key;Ljava/security/spec/AlgorithmParameterSpec;Ljava/security/SecureRandom;)V", nullptr, $PROTECTED, $virtualMethod(ChaCha20Cipher, engineInit, void, int32_t, $Key*, $AlgorithmParameterSpec*, $SecureRandom*), "java.security.InvalidKeyException,java.security.InvalidAlgorithmParameterException"},
		{"engineInit", "(ILjava/security/Key;Ljava/security/AlgorithmParameters;Ljava/security/SecureRandom;)V", nullptr, $PROTECTED, $virtualMethod(ChaCha20Cipher, engineInit, void, int32_t, $Key*, $AlgorithmParameters*, $SecureRandom*), "java.security.InvalidKeyException,java.security.InvalidAlgorithmParameterException"},
		{"engineSetMode", "(Ljava/lang/String;)V", nullptr, $PROTECTED, $virtualMethod(ChaCha20Cipher, engineSetMode, void, $String*), "java.security.NoSuchAlgorithmException"},
		{"engineSetPadding", "(Ljava/lang/String;)V", nullptr, $PROTECTED, $virtualMethod(ChaCha20Cipher, engineSetPadding, void, $String*), "javax.crypto.NoSuchPaddingException"},
		{"engineUnwrap", "([BLjava/lang/String;I)Ljava/security/Key;", nullptr, $PROTECTED, $virtualMethod(ChaCha20Cipher, engineUnwrap, $Key*, $bytes*, $String*, int32_t), "java.security.InvalidKeyException,java.security.NoSuchAlgorithmException"},
		{"engineUpdate", "([BII)[B", nullptr, $PROTECTED, $virtualMethod(ChaCha20Cipher, engineUpdate, $bytes*, $bytes*, int32_t, int32_t)},
		{"engineUpdate", "([BII[BI)I", nullptr, $PROTECTED, $virtualMethod(ChaCha20Cipher, engineUpdate, int32_t, $bytes*, int32_t, int32_t, $bytes*, int32_t), "javax.crypto.ShortBufferException"},
		{"engineUpdateAAD", "([BII)V", nullptr, $PROTECTED, $virtualMethod(ChaCha20Cipher, engineUpdateAAD, void, $bytes*, int32_t, int32_t)},
		{"engineUpdateAAD", "(Ljava/nio/ByteBuffer;)V", nullptr, $PROTECTED, $virtualMethod(ChaCha20Cipher, engineUpdateAAD, void, $ByteBuffer*)},
		{"engineWrap", "(Ljava/security/Key;)[B", nullptr, $PROTECTED, $virtualMethod(ChaCha20Cipher, engineWrap, $bytes*, $Key*), "javax.crypto.IllegalBlockSizeException,java.security.InvalidKeyException"},
		{"generateKeystream", "()V", nullptr, $PRIVATE, $method(ChaCha20Cipher, generateKeystream, void)},
		{"getEncodedKey", "(Ljava/security/Key;)[B", nullptr, $PRIVATE | $STATIC, $staticMethod(ChaCha20Cipher, getEncodedKey, $bytes*, $Key*), "java.security.InvalidKeyException"},
		{"init", "(ILjava/security/Key;[B)V", nullptr, $PRIVATE, $method(ChaCha20Cipher, init, void, int32_t, $Key*, $bytes*), "java.security.InvalidKeyException"},
		{"initAuthenticator", "()V", nullptr, $PRIVATE, $method(ChaCha20Cipher, initAuthenticator, void), "java.security.InvalidKeyException"},
		{"setInitialState", "()V", nullptr, $PRIVATE, $method(ChaCha20Cipher, setInitialState, void), "java.security.InvalidKeyException"},
		{"xor", "([BI[BI[BII)V", nullptr, $PRIVATE | $STATIC, $staticMethod(ChaCha20Cipher, xor$, void, $bytes*, int32_t, $bytes*, int32_t, $bytes*, int32_t, int32_t)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.crypto.provider.ChaCha20Cipher$ChaCha20Poly1305", "com.sun.crypto.provider.ChaCha20Cipher", "ChaCha20Poly1305", $PUBLIC | $STATIC | $FINAL},
		{"com.sun.crypto.provider.ChaCha20Cipher$ChaCha20Only", "com.sun.crypto.provider.ChaCha20Cipher", "ChaCha20Only", $PUBLIC | $STATIC | $FINAL},
		{"com.sun.crypto.provider.ChaCha20Cipher$EngineAEADDec", "com.sun.crypto.provider.ChaCha20Cipher", "EngineAEADDec", $PRIVATE | $FINAL},
		{"com.sun.crypto.provider.ChaCha20Cipher$EngineAEADEnc", "com.sun.crypto.provider.ChaCha20Cipher", "EngineAEADEnc", $PRIVATE | $FINAL},
		{"com.sun.crypto.provider.ChaCha20Cipher$EngineStreamOnly", "com.sun.crypto.provider.ChaCha20Cipher", "EngineStreamOnly", $PRIVATE | $FINAL},
		{"com.sun.crypto.provider.ChaCha20Cipher$ChaChaEngine", "com.sun.crypto.provider.ChaCha20Cipher", "ChaChaEngine", $STATIC | $INTERFACE | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER | $ABSTRACT,
		"com.sun.crypto.provider.ChaCha20Cipher",
		"javax.crypto.CipherSpi",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"com.sun.crypto.provider.ChaCha20Cipher$ChaCha20Poly1305,com.sun.crypto.provider.ChaCha20Cipher$ChaCha20Only,com.sun.crypto.provider.ChaCha20Cipher$EngineAEADDec,com.sun.crypto.provider.ChaCha20Cipher$EngineAEADEnc,com.sun.crypto.provider.ChaCha20Cipher$EngineStreamOnly,com.sun.crypto.provider.ChaCha20Cipher$ChaChaEngine"
	};
	$loadClass(ChaCha20Cipher, name, initialize, &classInfo$$, ChaCha20Cipher::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(ChaCha20Cipher);
	});
	return class$;
}

$Class* ChaCha20Cipher::class$ = nullptr;

			} // provider
		} // crypto
	} // sun
} // com