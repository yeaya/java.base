#include <sun/security/provider/KeyProtector.h>

#include <java/io/IOException.h>
#include <java/security/Key.h>
#include <java/security/KeyStoreException.h>
#include <java/security/MessageDigest.h>
#include <java/security/PrivateKey.h>
#include <java/security/SecureRandom.h>
#include <java/security/UnrecoverableKeyException.h>
#include <java/util/Arrays.h>
#include <sun/security/pkcs/EncryptedPrivateKeyInfo.h>
#include <sun/security/pkcs/PKCS8Key.h>
#include <sun/security/util/KnownOIDs.h>
#include <sun/security/util/ObjectIdentifier.h>
#include <sun/security/x509/AlgorithmId.h>
#include <jcpp.h>

#undef DIGEST_ALG
#undef DIGEST_LEN
#undef SALT_LEN

using $IOException = ::java::io::IOException;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $MethodInfo = ::java::lang::MethodInfo;
using $Key = ::java::security::Key;
using $KeyStoreException = ::java::security::KeyStoreException;
using $MessageDigest = ::java::security::MessageDigest;
using $PrivateKey = ::java::security::PrivateKey;
using $SecureRandom = ::java::security::SecureRandom;
using $UnrecoverableKeyException = ::java::security::UnrecoverableKeyException;
using $Arrays = ::java::util::Arrays;
using $EncryptedPrivateKeyInfo = ::sun::security::pkcs::EncryptedPrivateKeyInfo;
using $PKCS8Key = ::sun::security::pkcs::PKCS8Key;
using $KnownOIDs = ::sun::security::util::KnownOIDs;
using $ObjectIdentifier = ::sun::security::util::ObjectIdentifier;
using $AlgorithmId = ::sun::security::x509::AlgorithmId;

namespace sun {
	namespace security {
		namespace provider {

$FieldInfo _KeyProtector_FieldInfo_[] = {
	{"SALT_LEN", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(KeyProtector, SALT_LEN)},
	{"DIGEST_ALG", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(KeyProtector, DIGEST_ALG)},
	{"DIGEST_LEN", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(KeyProtector, DIGEST_LEN)},
	{"passwdBytes", "[B", nullptr, $PRIVATE, $field(KeyProtector, passwdBytes)},
	{"md", "Ljava/security/MessageDigest;", nullptr, $PRIVATE, $field(KeyProtector, md)},
	{}
};

$MethodInfo _KeyProtector_MethodInfo_[] = {
	{"<init>", "([B)V", nullptr, $PUBLIC, $method(static_cast<void(KeyProtector::*)($bytes*)>(&KeyProtector::init$)), "java.security.NoSuchAlgorithmException"},
	{"protect", "(Ljava/security/Key;)[B", nullptr, $PUBLIC, $method(static_cast<$bytes*(KeyProtector::*)($Key*)>(&KeyProtector::protect)), "java.security.KeyStoreException"},
	{"recover", "(Lsun/security/pkcs/EncryptedPrivateKeyInfo;)Ljava/security/Key;", nullptr, $PUBLIC, $method(static_cast<$Key*(KeyProtector::*)($EncryptedPrivateKeyInfo*)>(&KeyProtector::recover)), "java.security.UnrecoverableKeyException"},
	{}
};

$ClassInfo _KeyProtector_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"sun.security.provider.KeyProtector",
	"java.lang.Object",
	nullptr,
	_KeyProtector_FieldInfo_,
	_KeyProtector_MethodInfo_
};

$Object* allocate$KeyProtector($Class* clazz) {
	return $of($alloc(KeyProtector));
}

$String* KeyProtector::DIGEST_ALG = nullptr;

void KeyProtector::init$($bytes* passwordBytes) {
	if (passwordBytes == nullptr) {
		$throwNew($IllegalArgumentException, "password can\'t be null"_s);
	}
	$set(this, md, $MessageDigest::getInstance(KeyProtector::DIGEST_ALG));
	$set(this, passwdBytes, passwordBytes);
}

$bytes* KeyProtector::protect($Key* key) {
	$useLocalCurrentObjectStackCache();
	int32_t i = 0;
	int32_t numRounds = 0;
	$var($bytes, digest, nullptr);
	int32_t xorOffset = 0;
	int32_t encrKeyOffset = 0;
	if (key == nullptr) {
		$throwNew($IllegalArgumentException, "plaintext key can\'t be null"_s);
	}
	if (!"PKCS#8"_s->equalsIgnoreCase($($nc(key)->getFormat()))) {
		$throwNew($KeyStoreException, "Cannot get key bytes, not PKCS#8 encoded"_s);
	}
	$var($bytes, plainKey, $nc(key)->getEncoded());
	if (plainKey == nullptr) {
		$throwNew($KeyStoreException, "Cannot get key bytes, encoding not supported"_s);
	}
	numRounds = $div($nc(plainKey)->length, KeyProtector::DIGEST_LEN);
	if (($mod(plainKey->length, KeyProtector::DIGEST_LEN)) != 0) {
		++numRounds;
	}
	$var($bytes, salt, $new($bytes, KeyProtector::SALT_LEN));
	$var($SecureRandom, random, $new($SecureRandom));
	random->nextBytes(salt);
	$var($bytes, xorKey, $new($bytes, plainKey->length));
	for (i = 0, xorOffset = 0, $assign(digest, salt); i < numRounds; ++i, xorOffset += KeyProtector::DIGEST_LEN) {
		$nc(this->md)->update(this->passwdBytes);
		$nc(this->md)->update(digest);
		$assign(digest, $nc(this->md)->digest());
		$nc(this->md)->reset();
		if (i < numRounds - 1) {
			$System::arraycopy(digest, 0, xorKey, xorOffset, $nc(digest)->length);
		} else {
			$System::arraycopy(digest, 0, xorKey, xorOffset, xorKey->length - xorOffset);
		}
	}
	$var($bytes, tmpKey, $new($bytes, plainKey->length));
	for (i = 0; i < tmpKey->length; ++i) {
		tmpKey->set(i, (int8_t)(plainKey->get(i) ^ xorKey->get(i)));
	}
	$var($bytes, encrKey, $new($bytes, salt->length + tmpKey->length + KeyProtector::DIGEST_LEN));
	$System::arraycopy(salt, 0, encrKey, encrKeyOffset, salt->length);
	encrKeyOffset += salt->length;
	$System::arraycopy(tmpKey, 0, encrKey, encrKeyOffset, tmpKey->length);
	encrKeyOffset += tmpKey->length;
	$nc(this->md)->update(this->passwdBytes);
	$Arrays::fill(this->passwdBytes, (int8_t)0);
	$set(this, passwdBytes, nullptr);
	$nc(this->md)->update(plainKey);
	$assign(digest, $nc(this->md)->digest());
	$nc(this->md)->reset();
	$System::arraycopy(digest, 0, encrKey, encrKeyOffset, $nc(digest)->length);
	$Arrays::fill(plainKey, (int8_t)0);
	$var($AlgorithmId, encrAlg, nullptr);
	try {
		$init($KnownOIDs);
		$assign(encrAlg, $new($AlgorithmId, $($ObjectIdentifier::of($KnownOIDs::JAVASOFT_JDKKeyProtector))));
		return $$new($EncryptedPrivateKeyInfo, encrAlg, encrKey)->getEncoded();
	} catch ($IOException& ioe) {
		$throwNew($KeyStoreException, $(ioe->getMessage()));
	}
	$shouldNotReachHere();
}

$Key* KeyProtector::recover($EncryptedPrivateKeyInfo* encrInfo) {
	$useLocalCurrentObjectStackCache();
	int32_t i = 0;
	$var($bytes, digest, nullptr);
	int32_t numRounds = 0;
	int32_t xorOffset = 0;
	int32_t encrKeyLen = 0;
	$var($AlgorithmId, encrAlg, $nc(encrInfo)->getAlgorithm());
	$init($KnownOIDs);
	if (!($nc($($nc($($nc(encrAlg)->getOID()))->toString()))->equals($($KnownOIDs::JAVASOFT_JDKKeyProtector->value())))) {
		$throwNew($UnrecoverableKeyException, "Unsupported key protection algorithm"_s);
	}
	$var($bytes, protectedKey, encrInfo->getEncryptedData());
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
	for (i = 0, xorOffset = 0, $assign(digest, salt); i < numRounds; ++i, xorOffset += KeyProtector::DIGEST_LEN) {
		$nc(this->md)->update(this->passwdBytes);
		$nc(this->md)->update(digest);
		$assign(digest, $nc(this->md)->digest());
		$nc(this->md)->reset();
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
	$nc(this->md)->update(this->passwdBytes);
	$Arrays::fill(this->passwdBytes, (int8_t)0);
	$set(this, passwdBytes, nullptr);
	$nc(this->md)->update(plainKey);
	$assign(digest, $nc(this->md)->digest());
	$nc(this->md)->reset();
	for (i = 0; i < $nc(digest)->length; ++i) {
		if (digest->get(i) != protectedKey->get(KeyProtector::SALT_LEN + encrKeyLen + i)) {
			$throwNew($UnrecoverableKeyException, "Cannot recover key"_s);
		}
	}
	{
		$var($Throwable, var$0, nullptr);
		$var($Key, var$2, nullptr);
		bool return$1 = false;
		try {
			try {
				$assign(var$2, $PKCS8Key::parseKey(plainKey));
				return$1 = true;
				goto $finally;
			} catch ($IOException& ioe) {
				$throwNew($UnrecoverableKeyException, $(ioe->getMessage()));
			}
		} catch ($Throwable& var$3) {
			$assign(var$0, var$3);
		} $finally: {
			$Arrays::fill(plainKey, (int8_t)0);
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

KeyProtector::KeyProtector() {
}

void clinit$KeyProtector($Class* class$) {
	$assignStatic(KeyProtector::DIGEST_ALG, "SHA"_s);
}

$Class* KeyProtector::load$($String* name, bool initialize) {
	$loadClass(KeyProtector, name, initialize, &_KeyProtector_ClassInfo_, clinit$KeyProtector, allocate$KeyProtector);
	return class$;
}

$Class* KeyProtector::class$ = nullptr;

		} // provider
	} // security
} // sun