#include <com/sun/crypto/provider/KeyProtector.h>

#include <com/sun/crypto/provider/CipherForKeyProtector.h>
#include <com/sun/crypto/provider/EncryptedPrivateKeyInfo.h>
#include <com/sun/crypto/provider/PBEKey.h>
#include <com/sun/crypto/provider/PBEWithMD5AndTripleDESCipher.h>
#include <com/sun/crypto/provider/PrivateKeyInfo.h>
#include <com/sun/crypto/provider/SealedObjectForKeyProtector.h>
#include <com/sun/crypto/provider/SunJCE.h>
#include <java/io/IOException.h>
#include <java/io/Serializable.h>
#include <java/lang/ClassNotFoundException.h>
#include <java/lang/NumberFormatException.h>
#include <java/security/AlgorithmParameters.h>
#include <java/security/GeneralSecurityException.h>
#include <java/security/Key.h>
#include <java/security/KeyFactory.h>
#include <java/security/MessageDigest.h>
#include <java/security/NoSuchAlgorithmException.h>
#include <java/security/PrivateKey.h>
#include <java/security/Provider.h>
#include <java/security/SecureRandom.h>
#include <java/security/UnrecoverableKeyException.h>
#include <java/security/spec/AlgorithmParameterSpec.h>
#include <java/security/spec/EncodedKeySpec.h>
#include <java/security/spec/InvalidParameterSpecException.h>
#include <java/security/spec/KeySpec.h>
#include <java/security/spec/PKCS8EncodedKeySpec.h>
#include <java/util/Arrays.h>
#include <javax/crypto/Cipher.h>
#include <javax/crypto/CipherSpi.h>
#include <javax/crypto/SealedObject.h>
#include <javax/crypto/SecretKey.h>
#include <javax/crypto/spec/PBEKeySpec.h>
#include <javax/crypto/spec/PBEParameterSpec.h>
#include <javax/security/auth/DestroyFailedException.h>
#include <jdk/internal/access/JavaSecuritySpecAccess.h>
#include <jdk/internal/access/SharedSecrets.h>
#include <sun/security/util/KnownOIDs.h>
#include <sun/security/util/ObjectIdentifier.h>
#include <sun/security/util/SecurityProperties.h>
#include <sun/security/x509/AlgorithmId.h>
#include <jcpp.h>

#undef DECRYPT_MODE
#undef DEFAULT_ITERATION_COUNT
#undef DIGEST_LEN
#undef ENCRYPT_MODE
#undef ITERATION_COUNT
#undef MAX_ITERATION_COUNT
#undef MIN_ITERATION_COUNT
#undef SALT_LEN

using $CipherForKeyProtector = ::com::sun::crypto::provider::CipherForKeyProtector;
using $EncryptedPrivateKeyInfo = ::com::sun::crypto::provider::EncryptedPrivateKeyInfo;
using $PBEKey = ::com::sun::crypto::provider::PBEKey;
using $PBEWithMD5AndTripleDESCipher = ::com::sun::crypto::provider::PBEWithMD5AndTripleDESCipher;
using $PrivateKeyInfo = ::com::sun::crypto::provider::PrivateKeyInfo;
using $SealedObjectForKeyProtector = ::com::sun::crypto::provider::SealedObjectForKeyProtector;
using $SunJCE = ::com::sun::crypto::provider::SunJCE;
using $IOException = ::java::io::IOException;
using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $ClassNotFoundException = ::java::lang::ClassNotFoundException;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $NumberFormatException = ::java::lang::NumberFormatException;
using $AlgorithmParameters = ::java::security::AlgorithmParameters;
using $GeneralSecurityException = ::java::security::GeneralSecurityException;
using $Key = ::java::security::Key;
using $KeyFactory = ::java::security::KeyFactory;
using $MessageDigest = ::java::security::MessageDigest;
using $NoSuchAlgorithmException = ::java::security::NoSuchAlgorithmException;
using $PrivateKey = ::java::security::PrivateKey;
using $Provider = ::java::security::Provider;
using $SecureRandom = ::java::security::SecureRandom;
using $UnrecoverableKeyException = ::java::security::UnrecoverableKeyException;
using $AlgorithmParameterSpec = ::java::security::spec::AlgorithmParameterSpec;
using $EncodedKeySpec = ::java::security::spec::EncodedKeySpec;
using $InvalidParameterSpecException = ::java::security::spec::InvalidParameterSpecException;
using $KeySpec = ::java::security::spec::KeySpec;
using $PKCS8EncodedKeySpec = ::java::security::spec::PKCS8EncodedKeySpec;
using $Arrays = ::java::util::Arrays;
using $Cipher = ::javax::crypto::Cipher;
using $CipherSpi = ::javax::crypto::CipherSpi;
using $SealedObject = ::javax::crypto::SealedObject;
using $SecretKey = ::javax::crypto::SecretKey;
using $PBEKeySpec = ::javax::crypto::spec::PBEKeySpec;
using $PBEParameterSpec = ::javax::crypto::spec::PBEParameterSpec;
using $DestroyFailedException = ::javax::security::auth::DestroyFailedException;
using $JavaSecuritySpecAccess = ::jdk::internal::access::JavaSecuritySpecAccess;
using $SharedSecrets = ::jdk::internal::access::SharedSecrets;
using $KnownOIDs = ::sun::security::util::KnownOIDs;
using $ObjectIdentifier = ::sun::security::util::ObjectIdentifier;
using $SecurityProperties = ::sun::security::util::SecurityProperties;
using $AlgorithmId = ::sun::security::x509::AlgorithmId;

namespace com {
	namespace sun {
		namespace crypto {
			namespace provider {

$FieldInfo _KeyProtector_FieldInfo_[] = {
	{"MAX_ITERATION_COUNT", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(KeyProtector, MAX_ITERATION_COUNT)},
	{"MIN_ITERATION_COUNT", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(KeyProtector, MIN_ITERATION_COUNT)},
	{"DEFAULT_ITERATION_COUNT", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(KeyProtector, DEFAULT_ITERATION_COUNT)},
	{"SALT_LEN", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(KeyProtector, SALT_LEN)},
	{"DIGEST_LEN", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(KeyProtector, DIGEST_LEN)},
	{"ITERATION_COUNT", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(KeyProtector, ITERATION_COUNT)},
	{"password", "[C", nullptr, $PRIVATE, $field(KeyProtector, password)},
	{}
};

$MethodInfo _KeyProtector_MethodInfo_[] = {
	{"<init>", "([C)V", nullptr, 0, $method(KeyProtector, init$, void, $chars*)},
	{"protect", "(Ljava/security/PrivateKey;)[B", nullptr, 0, $method(KeyProtector, protect, $bytes*, $PrivateKey*), "java.lang.Exception"},
	{"recover", "(Lcom/sun/crypto/provider/EncryptedPrivateKeyInfo;)Ljava/security/Key;", nullptr, 0, $method(KeyProtector, recover, $Key*, $EncryptedPrivateKeyInfo*), "java.security.UnrecoverableKeyException,java.security.NoSuchAlgorithmException"},
	{"recover", "([B)[B", nullptr, $PRIVATE, $method(KeyProtector, recover, $bytes*, $bytes*), "java.security.UnrecoverableKeyException,java.security.NoSuchAlgorithmException"},
	{"seal", "(Ljava/security/Key;)Ljavax/crypto/SealedObject;", nullptr, 0, $method(KeyProtector, seal, $SealedObject*, $Key*), "java.lang.Exception"},
	{"unseal", "(Ljavax/crypto/SealedObject;I)Ljava/security/Key;", nullptr, 0, $method(KeyProtector, unseal, $Key*, $SealedObject*, int32_t), "java.security.NoSuchAlgorithmException,java.security.UnrecoverableKeyException"},
	{}
};

$ClassInfo _KeyProtector_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"com.sun.crypto.provider.KeyProtector",
	"java.lang.Object",
	nullptr,
	_KeyProtector_FieldInfo_,
	_KeyProtector_MethodInfo_
};

$Object* allocate$KeyProtector($Class* clazz) {
	return $of($alloc(KeyProtector));
}

int32_t KeyProtector::ITERATION_COUNT = 0;

void KeyProtector::init$($chars* password) {
	if (password == nullptr) {
		$throwNew($IllegalArgumentException, "password can\'t be null"_s);
	}
	$set(this, password, password);
}

$bytes* KeyProtector::protect($PrivateKey* key) {
	$useLocalCurrentObjectStackCache();
	$var($bytes, salt, $new($bytes, 8));
	$nc($($SunJCE::getRandom()))->nextBytes(salt);
	$var($PBEParameterSpec, pbeSpec, $new($PBEParameterSpec, salt, KeyProtector::ITERATION_COUNT));
	$var($PBEKeySpec, pbeKeySpec, $new($PBEKeySpec, this->password));
	$var($SecretKey, sKey, nullptr);
	$var($PBEWithMD5AndTripleDESCipher, cipher, nullptr);
	{
		$var($Throwable, var$0, nullptr);
		try {
			$assign(sKey, $new($PBEKey, pbeKeySpec, "PBEWithMD5AndTripleDES"_s, false));
			$assign(cipher, $new($PBEWithMD5AndTripleDESCipher));
			cipher->engineInit($Cipher::ENCRYPT_MODE, static_cast<$Key*>(sKey), static_cast<$AlgorithmParameterSpec*>(pbeSpec), ($SecureRandom*)nullptr);
		} catch ($Throwable& var$1) {
			$assign(var$0, var$1);
		} /*finally*/ {
			pbeKeySpec->clearPassword();
			if (sKey != nullptr) {
				sKey->destroy();
			}
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
	$var($bytes, plain, $nc(key)->getEncoded());
	$var($bytes, encrKey, $nc(cipher)->engineDoFinal(plain, 0, $nc(plain)->length));
	$Arrays::fill(plain, (int8_t)0);
	$var($AlgorithmParameters, pbeParams, $AlgorithmParameters::getInstance("PBE"_s, $(static_cast<$Provider*>($SunJCE::getInstance()))));
	$nc(pbeParams)->init(static_cast<$AlgorithmParameterSpec*>(pbeSpec));
	$init($KnownOIDs);
	$var($AlgorithmId, encrAlg, $new($AlgorithmId, $($ObjectIdentifier::of($KnownOIDs::JAVASOFT_JCEKeyProtector)), pbeParams));
	return $$new($EncryptedPrivateKeyInfo, encrAlg, encrKey)->getEncoded();
}

$Key* KeyProtector::recover($EncryptedPrivateKeyInfo* encrInfo) {
	$useLocalCurrentObjectStackCache();
	$var($bytes, plain, nullptr);
	$var($SecretKey, sKey, nullptr);
	{
		$var($Throwable, var$0, nullptr);
		$var($Key, var$2, nullptr);
		bool return$1 = false;
		try {
			try {
				$var($String, encrAlg, $nc($($nc($($nc(encrInfo)->getAlgorithm()))->getOID()))->toString());
				$init($KnownOIDs);
				bool var$3 = !$nc(encrAlg)->equals($($KnownOIDs::JAVASOFT_JCEKeyProtector->value()));
				if (var$3 && !encrAlg->equals($($KnownOIDs::JAVASOFT_JDKKeyProtector->value()))) {
					$throwNew($UnrecoverableKeyException, "Unsupported encryption algorithm"_s);
				}
				if ($nc(encrAlg)->equals($($KnownOIDs::JAVASOFT_JDKKeyProtector->value()))) {
					$assign(plain, recover($(encrInfo->getEncryptedData())));
				} else {
					$var($bytes, encodedParams, $nc($(encrInfo->getAlgorithm()))->getEncodedParams());
					$var($AlgorithmParameters, pbeParams, $AlgorithmParameters::getInstance("PBE"_s));
					$nc(pbeParams)->init(encodedParams);
					$load($PBEParameterSpec);
					$var($PBEParameterSpec, pbeSpec, $cast($PBEParameterSpec, pbeParams->getParameterSpec($PBEParameterSpec::class$)));
					if ($nc(pbeSpec)->getIterationCount() > KeyProtector::MAX_ITERATION_COUNT) {
						$throwNew($IOException, "PBE iteration count too large"_s);
					}
					$var($PBEKeySpec, pbeKeySpec, $new($PBEKeySpec, this->password));
					$assign(sKey, $new($PBEKey, pbeKeySpec, "PBEWithMD5AndTripleDES"_s, false));
					pbeKeySpec->clearPassword();
					$var($PBEWithMD5AndTripleDESCipher, cipher, nullptr);
					$assign(cipher, $new($PBEWithMD5AndTripleDESCipher));
					cipher->engineInit($Cipher::DECRYPT_MODE, static_cast<$Key*>(sKey), static_cast<$AlgorithmParameterSpec*>(pbeSpec), ($SecureRandom*)nullptr);
					$var($bytes, var$4, encrInfo->getEncryptedData());
					$assign(plain, cipher->engineDoFinal(var$4, 0, $nc($(encrInfo->getEncryptedData()))->length));
				}
				$var($PrivateKeyInfo, privateKeyInfo, $new($PrivateKeyInfo, plain));
				$var($PKCS8EncodedKeySpec, spec, $new($PKCS8EncodedKeySpec, plain));
				$var($String, oidName, $$new($AlgorithmId, $($nc($(privateKeyInfo->getAlgorithm()))->getOID()))->getName());
				{
					$var($Throwable, var$5, nullptr);
					$var($Key, var$7, nullptr);
					bool return$6 = false;
					try {
						$var($KeyFactory, kFac, $KeyFactory::getInstance(oidName));
						$assign(var$7, $nc(kFac)->generatePrivate(spec));
						return$6 = true;
						goto $finally1;
					} catch ($Throwable& var$8) {
						$assign(var$5, var$8);
					} $finally1: {
						privateKeyInfo->clear();
						$nc($($SharedSecrets::getJavaSecuritySpecAccess()))->clearEncodedKeySpec(spec);
					}
					if (var$5 != nullptr) {
						$throw(var$5);
					}
					if (return$6) {
						$assign(var$2, var$7);
						return$1 = true;
						goto $finally;
					}
				}
			} catch ($NoSuchAlgorithmException& ex) {
				$throw(ex);
			} catch ($IOException& ioe) {
				$throwNew($UnrecoverableKeyException, $(ioe->getMessage()));
			} catch ($GeneralSecurityException& gse) {
				$throwNew($UnrecoverableKeyException, $(gse->getMessage()));
			}
		} catch ($Throwable& var$9) {
			$assign(var$0, var$9);
		} $finally: {
			if (plain != nullptr) {
				$Arrays::fill(plain, (int8_t)0);
			}
			if (sKey != nullptr) {
				try {
					sKey->destroy();
				} catch ($DestroyFailedException& e) {
				}
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

$bytes* KeyProtector::recover($bytes* protectedKey) {
	$useLocalCurrentObjectStackCache();
	int32_t i = 0;
	int32_t j = 0;
	$var($bytes, digest, nullptr);
	int32_t numRounds = 0;
	int32_t xorOffset = 0;
	int32_t encrKeyLen = 0;
	$var($MessageDigest, md, $MessageDigest::getInstance("SHA"_s));
	$var($bytes, salt, $new($bytes, KeyProtector::SALT_LEN));
	$System::arraycopy(protectedKey, 0, salt, 0, KeyProtector::SALT_LEN);
	encrKeyLen = $nc(protectedKey)->length - KeyProtector::SALT_LEN - KeyProtector::DIGEST_LEN;
	numRounds = $div(encrKeyLen, KeyProtector::DIGEST_LEN);
	if (($mod(encrKeyLen, KeyProtector::DIGEST_LEN)) != 0) {
		++numRounds;
	}
	$var($bytes, encrKey, $new($bytes, encrKeyLen));
	$System::arraycopy(protectedKey, KeyProtector::SALT_LEN, encrKey, 0, encrKeyLen);
	$var($bytes, xorKey, $new($bytes, encrKey->length));
	$var($bytes, passwdBytes, $new($bytes, $nc(this->password)->length * 2));
	for (i = 0, j = 0; i < $nc(this->password)->length; ++i) {
		passwdBytes->set(j++, (int8_t)($nc(this->password)->get(i) >> 8));
		passwdBytes->set(j++, (int8_t)$nc(this->password)->get(i));
	}
	for (i = 0, xorOffset = 0, $assign(digest, salt); i < numRounds; ++i, xorOffset += KeyProtector::DIGEST_LEN) {
		$nc(md)->update(passwdBytes);
		md->update(digest);
		$assign(digest, md->digest());
		md->reset();
		if (i < numRounds - 1) {
			$System::arraycopy(digest, 0, xorKey, xorOffset, $nc(digest)->length);
		} else {
			$System::arraycopy(digest, 0, xorKey, xorOffset, xorKey->length - xorOffset);
		}
	}
	$var($bytes, plainKey, $new($bytes, encrKey->length));
	for (i = 0; i < plainKey->length; ++i) {
		plainKey->set(i, (int8_t)(encrKey->get(i) ^ xorKey->get(i)));
	}
	$nc(md)->update(passwdBytes);
	$Arrays::fill(passwdBytes, (int8_t)0);
	$assign(passwdBytes, nullptr);
	md->update(plainKey);
	$assign(digest, md->digest());
	md->reset();
	for (i = 0; i < $nc(digest)->length; ++i) {
		if (digest->get(i) != protectedKey->get(KeyProtector::SALT_LEN + encrKeyLen + i)) {
			$throwNew($UnrecoverableKeyException, "Cannot recover key"_s);
		}
	}
	return plainKey;
}

$SealedObject* KeyProtector::seal($Key* key) {
	$useLocalCurrentObjectStackCache();
	$var($bytes, salt, $new($bytes, 8));
	$nc($($SunJCE::getRandom()))->nextBytes(salt);
	$var($PBEParameterSpec, pbeSpec, $new($PBEParameterSpec, salt, KeyProtector::ITERATION_COUNT));
	$var($PBEKeySpec, pbeKeySpec, $new($PBEKeySpec, this->password));
	$var($SecretKey, sKey, nullptr);
	$var($Cipher, cipher, nullptr);
	{
		$var($Throwable, var$0, nullptr);
		try {
			$assign(sKey, $new($PBEKey, pbeKeySpec, "PBEWithMD5AndTripleDES"_s, false));
			pbeKeySpec->clearPassword();
			$var($PBEWithMD5AndTripleDESCipher, cipherSpi, nullptr);
			$assign(cipherSpi, $new($PBEWithMD5AndTripleDESCipher));
			$assign(cipher, $new($CipherForKeyProtector, cipherSpi, $($SunJCE::getInstance()), "PBEWithMD5AndTripleDES"_s));
			cipher->init($Cipher::ENCRYPT_MODE, static_cast<$Key*>(sKey), static_cast<$AlgorithmParameterSpec*>(pbeSpec));
		} catch ($Throwable& var$1) {
			$assign(var$0, var$1);
		} /*finally*/ {
			if (sKey != nullptr) {
				sKey->destroy();
			}
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
	return $new($SealedObjectForKeyProtector, key, cipher);
}

$Key* KeyProtector::unseal($SealedObject* so, int32_t maxLength) {
	$useLocalCurrentObjectStackCache();
	$var($SecretKey, sKey, nullptr);
	{
		$var($Throwable, var$0, nullptr);
		$var($Key, var$2, nullptr);
		bool return$1 = false;
		try {
			try {
				$var($PBEKeySpec, pbeKeySpec, $new($PBEKeySpec, this->password));
				$assign(sKey, $new($PBEKey, pbeKeySpec, "PBEWithMD5AndTripleDES"_s, false));
				pbeKeySpec->clearPassword();
				$var($SealedObjectForKeyProtector, soForKeyProtector, nullptr);
				if (!($instanceOf($SealedObjectForKeyProtector, so))) {
					$assign(soForKeyProtector, $new($SealedObjectForKeyProtector, so));
				} else {
					$assign(soForKeyProtector, $cast($SealedObjectForKeyProtector, so));
				}
				$var($AlgorithmParameters, params, $nc(soForKeyProtector)->getParameters());
				if (params == nullptr) {
					$throwNew($UnrecoverableKeyException, "Cannot get algorithm parameters"_s);
				}
				$var($PBEParameterSpec, pbeSpec, nullptr);
				try {
					$load($PBEParameterSpec);
					$assign(pbeSpec, $cast($PBEParameterSpec, $nc(params)->getParameterSpec($PBEParameterSpec::class$)));
				} catch ($InvalidParameterSpecException& ipse) {
					$throwNew($IOException, "Invalid PBE algorithm parameters"_s);
				}
				if ($nc(pbeSpec)->getIterationCount() > KeyProtector::MAX_ITERATION_COUNT) {
					$throwNew($IOException, "PBE iteration count too large"_s);
				}
				$var($PBEWithMD5AndTripleDESCipher, cipherSpi, nullptr);
				$assign(cipherSpi, $new($PBEWithMD5AndTripleDESCipher));
				$var($Cipher, cipher, $new($CipherForKeyProtector, cipherSpi, $($SunJCE::getInstance()), "PBEWithMD5AndTripleDES"_s));
				cipher->init($Cipher::DECRYPT_MODE, static_cast<$Key*>(sKey), params);
				$assign(var$2, soForKeyProtector->getKey(cipher, maxLength));
				return$1 = true;
				goto $finally;
			} catch ($NoSuchAlgorithmException& ex) {
				$throw(ex);
			} catch ($IOException& ioe) {
				$throwNew($UnrecoverableKeyException, $(ioe->getMessage()));
			} catch ($ClassNotFoundException& cnfe) {
				$throwNew($UnrecoverableKeyException, $(cnfe->getMessage()));
			} catch ($GeneralSecurityException& gse) {
				$throwNew($UnrecoverableKeyException, $(gse->getMessage()));
			}
		} catch ($Throwable& var$3) {
			$assign(var$0, var$3);
		} $finally: {
			if (sKey != nullptr) {
				try {
					sKey->destroy();
				} catch ($DestroyFailedException& e) {
				}
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

void clinit$KeyProtector($Class* class$) {
	{
		int32_t iterationCount = KeyProtector::DEFAULT_ITERATION_COUNT;
		$var($String, ic, $SecurityProperties::privilegedGetOverridable("jdk.jceks.iterationCount"_s));
		if (ic != nullptr && !ic->isEmpty()) {
			try {
				iterationCount = $Integer::parseInt(ic);
				if (iterationCount < KeyProtector::MIN_ITERATION_COUNT || iterationCount > KeyProtector::MAX_ITERATION_COUNT) {
					iterationCount = KeyProtector::DEFAULT_ITERATION_COUNT;
				}
			} catch ($NumberFormatException& e) {
			}
		}
		KeyProtector::ITERATION_COUNT = iterationCount;
	}
}

KeyProtector::KeyProtector() {
}

$Class* KeyProtector::load$($String* name, bool initialize) {
	$loadClass(KeyProtector, name, initialize, &_KeyProtector_ClassInfo_, clinit$KeyProtector, allocate$KeyProtector);
	return class$;
}

$Class* KeyProtector::class$ = nullptr;

			} // provider
		} // crypto
	} // sun
} // com