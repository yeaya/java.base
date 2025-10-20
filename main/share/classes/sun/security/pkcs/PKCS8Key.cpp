#include <sun/security/pkcs/PKCS8Key.h>

#include <java/io/ByteArrayInputStream.h>
#include <java/io/IOException.h>
#include <java/io/InputStream.h>
#include <java/io/ObjectInputStream.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/Exception.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/Throwable.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/security/GeneralSecurityException.h>
#include <java/security/InvalidKeyException.h>
#include <java/security/Key.h>
#include <java/security/KeyException.h>
#include <java/security/KeyFactory.h>
#include <java/security/KeyRep$Type.h>
#include <java/security/KeyRep.h>
#include <java/security/MessageDigest.h>
#include <java/security/NoSuchAlgorithmException.h>
#include <java/security/PrivateKey.h>
#include <java/security/spec/EncodedKeySpec.h>
#include <java/security/spec/InvalidKeySpecException.h>
#include <java/security/spec/KeySpec.h>
#include <java/security/spec/PKCS8EncodedKeySpec.h>
#include <java/util/Arrays.h>
#include <jdk/internal/access/JavaSecuritySpecAccess.h>
#include <jdk/internal/access/SharedSecrets.h>
#include <sun/security/util/DerInputStream.h>
#include <sun/security/util/DerOutputStream.h>
#include <sun/security/util/DerValue.h>
#include <sun/security/x509/AlgorithmId.h>
#include <jcpp.h>

#undef PRIVATE

using $ByteArrayInputStream = ::java::io::ByteArrayInputStream;
using $IOException = ::java::io::IOException;
using $InputStream = ::java::io::InputStream;
using $ObjectInputStream = ::java::io::ObjectInputStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $GeneralSecurityException = ::java::security::GeneralSecurityException;
using $InvalidKeyException = ::java::security::InvalidKeyException;
using $Key = ::java::security::Key;
using $KeyException = ::java::security::KeyException;
using $KeyFactory = ::java::security::KeyFactory;
using $KeyRep = ::java::security::KeyRep;
using $KeyRep$Type = ::java::security::KeyRep$Type;
using $MessageDigest = ::java::security::MessageDigest;
using $NoSuchAlgorithmException = ::java::security::NoSuchAlgorithmException;
using $PrivateKey = ::java::security::PrivateKey;
using $EncodedKeySpec = ::java::security::spec::EncodedKeySpec;
using $InvalidKeySpecException = ::java::security::spec::InvalidKeySpecException;
using $KeySpec = ::java::security::spec::KeySpec;
using $PKCS8EncodedKeySpec = ::java::security::spec::PKCS8EncodedKeySpec;
using $Arrays = ::java::util::Arrays;
using $JavaSecuritySpecAccess = ::jdk::internal::access::JavaSecuritySpecAccess;
using $SharedSecrets = ::jdk::internal::access::SharedSecrets;
using $DerInputStream = ::sun::security::util::DerInputStream;
using $DerOutputStream = ::sun::security::util::DerOutputStream;
using $DerValue = ::sun::security::util::DerValue;
using $AlgorithmId = ::sun::security::x509::AlgorithmId;

namespace sun {
	namespace security {
		namespace pkcs {

$FieldInfo _PKCS8Key_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(PKCS8Key, serialVersionUID)},
	{"algid", "Lsun/security/x509/AlgorithmId;", nullptr, $PROTECTED, $field(PKCS8Key, algid)},
	{"key", "[B", nullptr, $PROTECTED, $field(PKCS8Key, key)},
	{"encodedKey", "[B", nullptr, $PROTECTED, $field(PKCS8Key, encodedKey)},
	{"V1", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(PKCS8Key, V1)},
	{"V2", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(PKCS8Key, V2)},
	{}
};

$MethodInfo _PKCS8Key_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PROTECTED, $method(static_cast<void(PKCS8Key::*)()>(&PKCS8Key::init$))},
	{"<init>", "([B)V", nullptr, $PROTECTED, $method(static_cast<void(PKCS8Key::*)($bytes*)>(&PKCS8Key::init$)), "java.security.InvalidKeyException"},
	{"clear", "()V", nullptr, $PUBLIC},
	{"decode", "(Ljava/io/InputStream;)V", nullptr, $PRIVATE, $method(static_cast<void(PKCS8Key::*)($InputStream*)>(&PKCS8Key::decode)), "java.security.InvalidKeyException"},
	{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"getAlgorithm", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"getAlgorithmId", "()Lsun/security/x509/AlgorithmId;", nullptr, $PUBLIC},
	{"getEncoded", "()[B", nullptr, $PUBLIC},
	{"getEncodedInternal", "()[B", nullptr, $PRIVATE | $SYNCHRONIZED, $method(static_cast<$bytes*(PKCS8Key::*)()>(&PKCS8Key::getEncodedInternal))},
	{"getFormat", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"hashCode", "()I", nullptr, $PUBLIC},
	{"parseKey", "([B)Ljava/security/PrivateKey;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$PrivateKey*(*)($bytes*)>(&PKCS8Key::parseKey)), "java.io.IOException"},
	{"readObject", "(Ljava/io/ObjectInputStream;)V", nullptr, $PRIVATE, $method(static_cast<void(PKCS8Key::*)($ObjectInputStream*)>(&PKCS8Key::readObject)), "java.io.IOException"},
	{"writeReplace", "()Ljava/lang/Object;", nullptr, $PROTECTED, nullptr, "java.io.ObjectStreamException"},
	{}
};

$ClassInfo _PKCS8Key_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.security.pkcs.PKCS8Key",
	"java.lang.Object",
	"java.security.PrivateKey",
	_PKCS8Key_FieldInfo_,
	_PKCS8Key_MethodInfo_
};

$Object* allocate$PKCS8Key($Class* clazz) {
	return $of($alloc(PKCS8Key));
}

void PKCS8Key::init$() {
}

void PKCS8Key::init$($bytes* input) {
	decode($$new($ByteArrayInputStream, input));
}

void PKCS8Key::decode($InputStream* is) {
	$useLocalCurrentObjectStackCache();
	$var($DerValue, val, nullptr);
	{
		$var($Throwable, var$0, nullptr);
		bool return$1 = false;
		try {
			try {
				$assign(val, $new($DerValue, is));
				if (val->tag != $DerValue::tag_Sequence) {
					$throwNew($InvalidKeyException, "invalid key format"_s);
				}
				int32_t version = $nc(val->data$)->getInteger();
				if (version != PKCS8Key::V1 && version != PKCS8Key::V2) {
					$throwNew($InvalidKeyException, $$str({"unknown version: "_s, $$str(version)}));
				}
				$set(this, algid, $AlgorithmId::parse($($nc(val->data$)->getDerValue())));
				$set(this, key, $nc(val->data$)->getOctetString());
				$var($DerValue, next, nullptr);
				if ($nc(val->data$)->available() == 0) {
					return$1 = true;
					goto $finally;
				}
				$assign(next, $nc(val->data$)->getDerValue());
				if ($nc(next)->isContextSpecific((int8_t)0)) {
					if ($nc(val->data$)->available() == 0) {
						return$1 = true;
						goto $finally;
					}
					$assign(next, $nc(val->data$)->getDerValue());
				}
				if ($nc(next)->isContextSpecific((int8_t)1)) {
					if (version == PKCS8Key::V1) {
						$throwNew($InvalidKeyException, "publicKey seen in v1"_s);
					}
					if ($nc(val->data$)->available() == 0) {
						return$1 = true;
						goto $finally;
					}
				}
				$throwNew($InvalidKeyException, "Extra bytes"_s);
			} catch ($IOException&) {
				$var($IOException, e, $catch());
				$throwNew($InvalidKeyException, $$str({"IOException : "_s, $(e->getMessage())}));
			}
		} catch ($Throwable&) {
			$assign(var$0, $catch());
		} $finally: {
			if (val != nullptr) {
				val->clear();
			}
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
		if (return$1) {
			return;
		}
	}
}

$PrivateKey* PKCS8Key::parseKey($bytes* encoded) {
	$init(PKCS8Key);
	$useLocalCurrentObjectStackCache();
	try {
		$var(PKCS8Key, rawKey, $new(PKCS8Key, encoded));
		$var($bytes, internal, rawKey->getEncodedInternal());
		$var($PKCS8EncodedKeySpec, pkcs8KeySpec, $new($PKCS8EncodedKeySpec, internal));
		$var($PrivateKey, result, nullptr);
		{
			$var($Throwable, var$0, nullptr);
			try {
				try {
					$assign(result, $nc($($KeyFactory::getInstance($($nc(rawKey->algid)->getName()))))->generatePrivate(pkcs8KeySpec));
				} catch ($NoSuchAlgorithmException&) {
					$var($GeneralSecurityException, e, $catch());
					$assign(result, rawKey);
				} catch ($InvalidKeySpecException&) {
					$var($GeneralSecurityException, e, $catch());
					$assign(result, rawKey);
				}
			} catch ($Throwable&) {
				$assign(var$0, $catch());
			} /*finally*/ {
				if (!$equals(result, rawKey)) {
					rawKey->clear();
				}
				$nc($($SharedSecrets::getJavaSecuritySpecAccess()))->clearEncodedKeySpec(pkcs8KeySpec);
			}
			if (var$0 != nullptr) {
				$throw(var$0);
			}
		}
		return result;
	} catch ($InvalidKeyException&) {
		$var($InvalidKeyException, e, $catch());
		$throwNew($IOException, "corrupt private key"_s, e);
	}
	$shouldNotReachHere();
}

$String* PKCS8Key::getAlgorithm() {
	return $nc(this->algid)->getName();
}

$AlgorithmId* PKCS8Key::getAlgorithmId() {
	return this->algid;
}

$bytes* PKCS8Key::getEncoded() {
	$var($bytes, b, getEncodedInternal());
	return (b == nullptr) ? ($bytes*)nullptr : $cast($bytes, $nc(b)->clone());
}

$String* PKCS8Key::getFormat() {
	return "PKCS#8"_s;
}

$bytes* PKCS8Key::getEncodedInternal() {
	$synchronized(this) {
		$useLocalCurrentObjectStackCache();
		if (this->encodedKey == nullptr) {
			try {
				$var($DerOutputStream, tmp, $new($DerOutputStream));
				tmp->putInteger(PKCS8Key::V1);
				$nc(this->algid)->encode(tmp);
				tmp->putOctetString(this->key);
				$var($DerValue, out, $DerValue::wrap($DerValue::tag_Sequence, tmp));
				$set(this, encodedKey, $nc(out)->toByteArray());
				out->clear();
			} catch ($IOException&) {
				$catch();
			}
		}
		return this->encodedKey;
	}
}

$Object* PKCS8Key::writeReplace() {
	$useLocalCurrentObjectStackCache();
	$init($KeyRep$Type);
	$var($KeyRep$Type, var$0, $KeyRep$Type::PRIVATE);
	$var($String, var$1, getAlgorithm());
	$var($String, var$2, getFormat());
	return $of($new($KeyRep, var$0, var$1, var$2, $(getEncodedInternal())));
}

void PKCS8Key::readObject($ObjectInputStream* stream) {
	$useLocalCurrentObjectStackCache();
	try {
		decode(stream);
	} catch ($InvalidKeyException&) {
		$var($InvalidKeyException, e, $catch());
		$throwNew($IOException, $$str({"deserialized key is invalid: "_s, $(e->getMessage())}));
	}
}

bool PKCS8Key::equals(Object$* object) {
	$useLocalCurrentObjectStackCache();
	if ($equals(this, object)) {
		return true;
	}
	if ($instanceOf(PKCS8Key, object)) {
		$var($bytes, var$0, getEncodedInternal());
		return $MessageDigest::isEqual(var$0, $($nc(($cast(PKCS8Key, object)))->getEncodedInternal()));
	} else if ($instanceOf($Key, object)) {
		$var($bytes, otherEncoded, $nc(($cast($Key, object)))->getEncoded());
		{
			$var($Throwable, var$1, nullptr);
			bool var$3 = false;
			bool return$2 = false;
			try {
				var$3 = $MessageDigest::isEqual($(getEncodedInternal()), otherEncoded);
				return$2 = true;
				goto $finally;
			} catch ($Throwable&) {
				$assign(var$1, $catch());
			} $finally: {
				if (otherEncoded != nullptr) {
					$Arrays::fill(otherEncoded, (int8_t)0);
				}
			}
			if (var$1 != nullptr) {
				$throw(var$1);
			}
			if (return$2) {
				return var$3;
			}
		}
	}
	return false;
}

int32_t PKCS8Key::hashCode() {
	return $Arrays::hashCode($(getEncodedInternal()));
}

void PKCS8Key::clear() {
	if (this->encodedKey != nullptr) {
		$Arrays::fill(this->encodedKey, (int8_t)0);
	}
	$Arrays::fill(this->key, (int8_t)0);
}

PKCS8Key::PKCS8Key() {
}

$Class* PKCS8Key::load$($String* name, bool initialize) {
	$loadClass(PKCS8Key, name, initialize, &_PKCS8Key_ClassInfo_, allocate$PKCS8Key);
	return class$;
}

$Class* PKCS8Key::class$ = nullptr;

		} // pkcs
	} // security
} // sun