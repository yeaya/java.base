#include <com/sun/crypto/provider/ARCFOURCipher.h>

#include <com/sun/crypto/provider/ConstructKeys.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/Math.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/Throwable.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/security/AlgorithmParameters.h>
#include <java/security/InvalidAlgorithmParameterException.h>
#include <java/security/InvalidKeyException.h>
#include <java/security/Key.h>
#include <java/security/NoSuchAlgorithmException.h>
#include <java/security/SecureRandom.h>
#include <java/security/spec/AlgorithmParameterSpec.h>
#include <java/util/Arrays.h>
#include <javax/crypto/CipherSpi.h>
#include <javax/crypto/NoSuchPaddingException.h>
#include <javax/crypto/ShortBufferException.h>
#include <jcpp.h>

#undef S

using $ConstructKeys = ::com::sun::crypto::provider::ConstructKeys;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;
using $AlgorithmParameters = ::java::security::AlgorithmParameters;
using $InvalidAlgorithmParameterException = ::java::security::InvalidAlgorithmParameterException;
using $InvalidKeyException = ::java::security::InvalidKeyException;
using $Key = ::java::security::Key;
using $NoSuchAlgorithmException = ::java::security::NoSuchAlgorithmException;
using $SecureRandom = ::java::security::SecureRandom;
using $AlgorithmParameterSpec = ::java::security::spec::AlgorithmParameterSpec;
using $Arrays = ::java::util::Arrays;
using $CipherSpi = ::javax::crypto::CipherSpi;
using $NoSuchPaddingException = ::javax::crypto::NoSuchPaddingException;
using $ShortBufferException = ::javax::crypto::ShortBufferException;

namespace com {
	namespace sun {
		namespace crypto {
			namespace provider {

$FieldInfo _ARCFOURCipher_FieldInfo_[] = {
	{"S", "[I", nullptr, $PRIVATE | $FINAL, $field(ARCFOURCipher, S)},
	{"is", "I", nullptr, $PRIVATE, $field(ARCFOURCipher, is)},
	{"js", "I", nullptr, $PRIVATE, $field(ARCFOURCipher, js)},
	{"lastKey", "[B", nullptr, $PRIVATE, $field(ARCFOURCipher, lastKey)},
	{}
};

$MethodInfo _ARCFOURCipher_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(ARCFOURCipher::*)()>(&ARCFOURCipher::init$))},
	{"crypt", "([BII[BI)V", nullptr, $PRIVATE, $method(static_cast<void(ARCFOURCipher::*)($bytes*,int32_t,int32_t,$bytes*,int32_t)>(&ARCFOURCipher::crypt))},
	{"engineDoFinal", "([BII)[B", nullptr, $PROTECTED},
	{"engineDoFinal", "([BII[BI)I", nullptr, $PROTECTED, nullptr, "javax.crypto.ShortBufferException"},
	{"engineGetBlockSize", "()I", nullptr, $PROTECTED},
	{"engineGetIV", "()[B", nullptr, $PROTECTED},
	{"engineGetKeySize", "(Ljava/security/Key;)I", nullptr, $PROTECTED, nullptr, "java.security.InvalidKeyException"},
	{"engineGetOutputSize", "(I)I", nullptr, $PROTECTED},
	{"engineGetParameters", "()Ljava/security/AlgorithmParameters;", nullptr, $PROTECTED},
	{"engineInit", "(ILjava/security/Key;Ljava/security/SecureRandom;)V", nullptr, $PROTECTED, nullptr, "java.security.InvalidKeyException"},
	{"engineInit", "(ILjava/security/Key;Ljava/security/spec/AlgorithmParameterSpec;Ljava/security/SecureRandom;)V", nullptr, $PROTECTED, nullptr, "java.security.InvalidKeyException,java.security.InvalidAlgorithmParameterException"},
	{"engineInit", "(ILjava/security/Key;Ljava/security/AlgorithmParameters;Ljava/security/SecureRandom;)V", nullptr, $PROTECTED, nullptr, "java.security.InvalidKeyException,java.security.InvalidAlgorithmParameterException"},
	{"engineSetMode", "(Ljava/lang/String;)V", nullptr, $PROTECTED, nullptr, "java.security.NoSuchAlgorithmException"},
	{"engineSetPadding", "(Ljava/lang/String;)V", nullptr, $PROTECTED, nullptr, "javax.crypto.NoSuchPaddingException"},
	{"engineUnwrap", "([BLjava/lang/String;I)Ljava/security/Key;", nullptr, $PROTECTED, nullptr, "java.security.InvalidKeyException,java.security.NoSuchAlgorithmException"},
	{"engineUpdate", "([BII)[B", nullptr, $PROTECTED},
	{"engineUpdate", "([BII[BI)I", nullptr, $PROTECTED, nullptr, "javax.crypto.ShortBufferException"},
	{"engineWrap", "(Ljava/security/Key;)[B", nullptr, $PROTECTED, nullptr, "javax.crypto.IllegalBlockSizeException,java.security.InvalidKeyException"},
	{"getEncodedKey", "(Ljava/security/Key;)[B", nullptr, $PRIVATE | $STATIC, $method(static_cast<$bytes*(*)($Key*)>(&ARCFOURCipher::getEncodedKey)), "java.security.InvalidKeyException"},
	{"init", "([B)V", nullptr, $PRIVATE, $method(static_cast<void(ARCFOURCipher::*)($bytes*)>(&ARCFOURCipher::init))},
	{"init", "(ILjava/security/Key;)V", nullptr, $PRIVATE, $method(static_cast<void(ARCFOURCipher::*)(int32_t,$Key*)>(&ARCFOURCipher::init)), "java.security.InvalidKeyException"},
	{}
};

$ClassInfo _ARCFOURCipher_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"com.sun.crypto.provider.ARCFOURCipher",
	"javax.crypto.CipherSpi",
	nullptr,
	_ARCFOURCipher_FieldInfo_,
	_ARCFOURCipher_MethodInfo_
};

$Object* allocate$ARCFOURCipher($Class* clazz) {
	return $of($alloc(ARCFOURCipher));
}

void ARCFOURCipher::init$() {
	$CipherSpi::init$();
	$set(this, S, $new($ints, 256));
}

void ARCFOURCipher::init($bytes* key) {
	for (int32_t i = 0; i < 256; ++i) {
		$nc(this->S)->set(i, i);
	}
	{
		int32_t i = 0;
		int32_t j = 0;
		int32_t ki = 0;
		for (; i < 256; ++i) {
			int32_t Si = $nc(this->S)->get(i);
			j = (int32_t)((j + Si + $nc(key)->get(ki)) & (uint32_t)255);
			$nc(this->S)->set(i, $nc(this->S)->get(j));
			$nc(this->S)->set(j, Si);
			++ki;
			if (ki == key->length) {
				ki = 0;
			}
		}
	}
	this->is = 0;
	this->js = 0;
}

void ARCFOURCipher::crypt($bytes* in, int32_t inOfs, int32_t inLen, $bytes* out, int32_t outOfs) {
	if (this->is < 0) {
		init(this->lastKey);
	}
	while (inLen-- > 0) {
		this->is = (int32_t)((this->is + 1) & (uint32_t)255);
		int32_t Si = $nc(this->S)->get(this->is);
		this->js = (int32_t)((this->js + Si) & (uint32_t)255);
		int32_t Sj = $nc(this->S)->get(this->js);
		$nc(this->S)->set(this->is, Sj);
		$nc(this->S)->set(this->js, Si);
		$nc(out)->set(outOfs++, (int8_t)($nc(in)->get(inOfs++) ^ $nc(this->S)->get((int32_t)((Si + Sj) & (uint32_t)255))));
	}
}

void ARCFOURCipher::engineSetMode($String* mode) {
	if ($nc(mode)->equalsIgnoreCase("ECB"_s) == false) {
		$throwNew($NoSuchAlgorithmException, $$str({"Unsupported mode "_s, mode}));
	}
}

void ARCFOURCipher::engineSetPadding($String* padding) {
	if ($nc(padding)->equalsIgnoreCase("NoPadding"_s) == false) {
		$throwNew($NoSuchPaddingException, "Padding must be NoPadding"_s);
	}
}

int32_t ARCFOURCipher::engineGetBlockSize() {
	return 0;
}

int32_t ARCFOURCipher::engineGetOutputSize(int32_t inputLen) {
	return inputLen;
}

$bytes* ARCFOURCipher::engineGetIV() {
	return nullptr;
}

$AlgorithmParameters* ARCFOURCipher::engineGetParameters() {
	return nullptr;
}

void ARCFOURCipher::engineInit(int32_t opmode, $Key* key, $SecureRandom* random) {
	init(opmode, key);
}

void ARCFOURCipher::engineInit(int32_t opmode, $Key* key, $AlgorithmParameterSpec* params, $SecureRandom* random) {
	if (params != nullptr) {
		$throwNew($InvalidAlgorithmParameterException, "Parameters not supported"_s);
	}
	init(opmode, key);
}

void ARCFOURCipher::engineInit(int32_t opmode, $Key* key, $AlgorithmParameters* params, $SecureRandom* random) {
	if (params != nullptr) {
		$throwNew($InvalidAlgorithmParameterException, "Parameters not supported"_s);
	}
	init(opmode, key);
}

void ARCFOURCipher::init(int32_t opmode, $Key* key) {
	if (this->lastKey != nullptr) {
		$Arrays::fill(this->lastKey, (int8_t)0);
	}
	$set(this, lastKey, getEncodedKey(key));
	init(this->lastKey);
}

$bytes* ARCFOURCipher::getEncodedKey($Key* key) {
	$init(ARCFOURCipher);
	$var($String, keyAlg, $nc(key)->getAlgorithm());
	bool var$0 = !$nc(keyAlg)->equals("RC4"_s);
	if (var$0 && !keyAlg->equals("ARCFOUR"_s)) {
		$throwNew($InvalidKeyException, $$str({"Not an ARCFOUR key: "_s, keyAlg}));
	}
	if ("RAW"_s->equals($(key->getFormat())) == false) {
		$throwNew($InvalidKeyException, "Key encoding format must be RAW"_s);
	}
	$var($bytes, encodedKey, key->getEncoded());
	if (($nc(encodedKey)->length < 5) || ($nc(encodedKey)->length > 128)) {
		$Arrays::fill(encodedKey, (int8_t)0);
		$throwNew($InvalidKeyException, "Key length must be between 40 and 1024 bit"_s);
	}
	return encodedKey;
}

$bytes* ARCFOURCipher::engineUpdate($bytes* in, int32_t inOfs, int32_t inLen) {
	$var($bytes, out, $new($bytes, inLen));
	crypt(in, inOfs, inLen, out, 0);
	return out;
}

int32_t ARCFOURCipher::engineUpdate($bytes* in, int32_t inOfs, int32_t inLen, $bytes* out, int32_t outOfs) {
	if ($nc(out)->length - outOfs < inLen) {
		$throwNew($ShortBufferException, "Output buffer too small"_s);
	}
	crypt(in, inOfs, inLen, out, outOfs);
	return inLen;
}

$bytes* ARCFOURCipher::engineDoFinal($bytes* in, int32_t inOfs, int32_t inLen) {
	$var($bytes, out, engineUpdate(in, inOfs, inLen));
	this->is = -1;
	return out;
}

int32_t ARCFOURCipher::engineDoFinal($bytes* in, int32_t inOfs, int32_t inLen, $bytes* out, int32_t outOfs) {
	int32_t outLen = engineUpdate(in, inOfs, inLen, out, outOfs);
	this->is = -1;
	return outLen;
}

$bytes* ARCFOURCipher::engineWrap($Key* key) {
	$var($bytes, encoded, $nc(key)->getEncoded());
	if ((encoded == nullptr) || ($nc(encoded)->length == 0)) {
		$throwNew($InvalidKeyException, "Could not obtain encoded key"_s);
	}
	{
		$var($Throwable, var$0, nullptr);
		$var($bytes, var$2, nullptr);
		bool return$1 = false;
		try {
			$assign(var$2, engineDoFinal(encoded, 0, $nc(encoded)->length));
			return$1 = true;
			goto $finally;
		} catch ($Throwable&) {
			$assign(var$0, $catch());
		} $finally: {
			$Arrays::fill(encoded, (int8_t)0);
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
		if (return$1) {
			return var$2;
		}
	}
	$shouldNotReachHere();
}

$Key* ARCFOURCipher::engineUnwrap($bytes* wrappedKey, $String* algorithm, int32_t type) {
	$var($bytes, encoded, nullptr);
	{
		$var($Throwable, var$0, nullptr);
		$var($Key, var$2, nullptr);
		bool return$1 = false;
		try {
			$assign(encoded, engineDoFinal(wrappedKey, 0, $nc(wrappedKey)->length));
			$assign(var$2, $ConstructKeys::constructKey(encoded, algorithm, type));
			return$1 = true;
			goto $finally;
		} catch ($Throwable&) {
			$assign(var$0, $catch());
		} $finally: {
			if (encoded != nullptr) {
				$Arrays::fill(encoded, (int8_t)0);
			}
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
		if (return$1) {
			return var$2;
		}
	}
	$shouldNotReachHere();
}

int32_t ARCFOURCipher::engineGetKeySize($Key* key) {
	$var($bytes, encodedKey, getEncodedKey(key));
	$Arrays::fill(encodedKey, (int8_t)0);
	return $Math::multiplyExact($nc(encodedKey)->length, 8);
}

ARCFOURCipher::ARCFOURCipher() {
}

$Class* ARCFOURCipher::load$($String* name, bool initialize) {
	$loadClass(ARCFOURCipher, name, initialize, &_ARCFOURCipher_ClassInfo_, allocate$ARCFOURCipher);
	return class$;
}

$Class* ARCFOURCipher::class$ = nullptr;

			} // provider
		} // crypto
	} // sun
} // com