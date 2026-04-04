#include <com/sun/crypto/provider/DHPublicKey.h>
#include <java/io/ByteArrayInputStream.h>
#include <java/io/IOException.h>
#include <java/io/InputStream.h>
#include <java/lang/NumberFormatException.h>
#include <java/math/BigInteger.h>
#include <java/security/InvalidKeyException.h>
#include <java/security/KeyRep$Type.h>
#include <java/security/KeyRep.h>
#include <java/security/ProviderException.h>
#include <java/util/Objects.h>
#include <javax/crypto/interfaces/DHKey.h>
#include <javax/crypto/interfaces/DHPublicKey.h>
#include <javax/crypto/spec/DHParameterSpec.h>
#include <sun/security/util/Debug.h>
#include <sun/security/util/DerInputStream.h>
#include <sun/security/util/DerOutputStream.h>
#include <sun/security/util/DerValue.h>
#include <sun/security/util/KnownOIDs.h>
#include <sun/security/util/ObjectIdentifier.h>
#include <jcpp.h>

#undef DH_OID
#undef LINE_SEP
#undef PUBLIC

using $ByteArrayInputStream = ::java::io::ByteArrayInputStream;
using $IOException = ::java::io::IOException;
using $InputStream = ::java::io::InputStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NumberFormatException = ::java::lang::NumberFormatException;
using $BigInteger = ::java::math::BigInteger;
using $InvalidKeyException = ::java::security::InvalidKeyException;
using $KeyRep = ::java::security::KeyRep;
using $KeyRep$Type = ::java::security::KeyRep$Type;
using $ProviderException = ::java::security::ProviderException;
using $Objects = ::java::util::Objects;
using $DHPublicKey = ::javax::crypto::interfaces::DHPublicKey;
using $DHParameterSpec = ::javax::crypto::spec::DHParameterSpec;
using $Debug = ::sun::security::util::Debug;
using $DerInputStream = ::sun::security::util::DerInputStream;
using $DerOutputStream = ::sun::security::util::DerOutputStream;
using $DerValue = ::sun::security::util::DerValue;
using $KnownOIDs = ::sun::security::util::KnownOIDs;
using $ObjectIdentifier = ::sun::security::util::ObjectIdentifier;

namespace com {
	namespace sun {
		namespace crypto {
			namespace provider {

$ObjectIdentifier* DHPublicKey::DH_OID = nullptr;

void DHPublicKey::init$($BigInteger* y, $BigInteger* p, $BigInteger* g) {
	DHPublicKey::init$(y, p, g, 0);
}

void DHPublicKey::init$($BigInteger* y, $BigInteger* p, $BigInteger* g, int32_t l) {
	$useLocalObjectStack();
	$set(this, y, y);
	$set(this, p, p);
	$set(this, g, g);
	this->l = l;
	try {
		$set(this, key, $$new($DerValue, $DerValue::tag_Integer, $($nc(this->y)->toByteArray()))->toByteArray());
		$set(this, encodedKey, getEncoded());
	} catch ($IOException& e) {
		$throwNew($ProviderException, "Cannot produce ASN.1 encoding"_s, e);
	}
}

void DHPublicKey::init$($bytes* encodedKey) {
	$useLocalObjectStack();
	$var($InputStream, inStream, $new($ByteArrayInputStream, encodedKey));
	try {
		$var($DerValue, derKeyVal, $new($DerValue, inStream));
		if (derKeyVal->tag != $DerValue::tag_Sequence) {
			$throwNew($InvalidKeyException, "Invalid key format"_s);
		}
		$var($DerValue, algid, $nc(derKeyVal->data$)->getDerValue());
		if ($nc(algid)->tag != $DerValue::tag_Sequence) {
			$throwNew($InvalidKeyException, "AlgId is not a SEQUENCE"_s);
		}
		$var($DerInputStream, derInStream, algid->toDerInputStream());
		$var($ObjectIdentifier, oid, $nc(derInStream)->getOID());
		if (oid == nullptr) {
			$throwNew($InvalidKeyException, "Null OID"_s);
		}
		if (derInStream->available() == 0) {
			$throwNew($InvalidKeyException, "Parameters missing"_s);
		}
		$var($DerValue, params, derInStream->getDerValue());
		if ($nc(params)->tag == $DerValue::tag_Null) {
			$throwNew($InvalidKeyException, "Null parameters"_s);
		}
		if (params->tag != $DerValue::tag_Sequence) {
			$throwNew($InvalidKeyException, "Parameters not a SEQUENCE"_s);
		}
		$nc(params->data$)->reset();
		$set(this, p, params->data$->getBigInteger());
		$set(this, g, params->data$->getBigInteger());
		if (params->data$->available() != 0) {
			this->l = params->data$->getInteger();
		}
		if (params->data$->available() != 0) {
			$throwNew($InvalidKeyException, "Extra parameter data"_s);
		}
		$set(this, key, derKeyVal->data$->getBitString());
		parseKeyBits();
		if (derKeyVal->data$->available() != 0) {
			$throwNew($InvalidKeyException, "Excess key data"_s);
		}
		$set(this, encodedKey, $cast($bytes, $nc(encodedKey)->clone()));
	} catch ($IOException& e) {
		$throwNew($InvalidKeyException, "Error parsing key encoding"_s, e);
	} catch ($NumberFormatException& e) {
		$throwNew($InvalidKeyException, "Error parsing key encoding"_s, e);
	}
}

$String* DHPublicKey::getFormat() {
	return "X.509"_s;
}

$String* DHPublicKey::getAlgorithm() {
	return "DH"_s;
}

$bytes* DHPublicKey::getEncoded() {
	$synchronized(this) {
		$useLocalObjectStack();
		if (this->encodedKey == nullptr) {
			try {
				$var($DerOutputStream, algid, $new($DerOutputStream));
				algid->putOID(DHPublicKey::DH_OID);
				$var($DerOutputStream, params, $new($DerOutputStream));
				params->putInteger(this->p);
				params->putInteger(this->g);
				if (this->l != 0) {
					params->putInteger(this->l);
				}
				$var($DerValue, paramSequence, $new($DerValue, $DerValue::tag_Sequence, $(params->toByteArray())));
				algid->putDerValue(paramSequence);
				$var($DerOutputStream, tmpDerKey, $new($DerOutputStream));
				tmpDerKey->write($DerValue::tag_Sequence, algid);
				tmpDerKey->putBitString(this->key);
				$var($DerOutputStream, derKey, $new($DerOutputStream));
				derKey->write($DerValue::tag_Sequence, tmpDerKey);
				$set(this, encodedKey, derKey->toByteArray());
			} catch ($IOException& e) {
				return nullptr;
			}
		}
		return $cast($bytes, $nc(this->encodedKey)->clone());
	}
}

$BigInteger* DHPublicKey::getY() {
	return this->y;
}

$DHParameterSpec* DHPublicKey::getParams() {
	if (this->l != 0) {
		return $new($DHParameterSpec, this->p, this->g, this->l);
	} else {
		return $new($DHParameterSpec, this->p, this->g);
	}
}

$String* DHPublicKey::toString() {
	$useLocalObjectStack();
	$var($String, LINE_SEP, $System::lineSeparator());
	$var($StringBuilder, var$0, $new($StringBuilder));
	var$0->append("SunJCE Diffie-Hellman Public Key:"_s);
	var$0->append(LINE_SEP);
	var$0->append("y:"_s);
	var$0->append(LINE_SEP);
	var$0->append($($Debug::toHexString(this->y)));
	var$0->append(LINE_SEP);
	var$0->append("p:"_s);
	var$0->append(LINE_SEP);
	var$0->append($($Debug::toHexString(this->p)));
	var$0->append(LINE_SEP);
	var$0->append("g:"_s);
	var$0->append(LINE_SEP);
	var$0->append($($Debug::toHexString(this->g)));
	$var($StringBuilder, sb, $new($StringBuilder, $$str(var$0)));
	if (this->l != 0) {
		sb->append($$str({LINE_SEP, "l:"_s, LINE_SEP, "    "_s, $$str(this->l)}));
	}
	return sb->toString();
}

void DHPublicKey::parseKeyBits() {
	$useLocalObjectStack();
	try {
		$var($DerInputStream, in, $new($DerInputStream, this->key));
		$set(this, y, in->getBigInteger());
	} catch ($IOException& e) {
		$throwNew($InvalidKeyException, $$str({"Error parsing key encoding: "_s, $(e->toString())}));
	}
}

int32_t DHPublicKey::hashCode() {
	return $Objects::hash($$new($ObjectArray, {
		this->y,
		this->p,
		this->g
	}));
}

bool DHPublicKey::equals(Object$* obj) {
	$useLocalObjectStack();
	if ($equals(this, obj)) {
		return true;
	}
	if (!($instanceOf($DHPublicKey, obj))) {
		return false;
	}
	$var($DHPublicKey, other, $cast($DHPublicKey, obj));
	$var($DHParameterSpec, otherParams, $nc(other)->getParams());
	bool var$1 = $nc(this->y)->compareTo($(other->getY())) == 0;
	bool var$0 = var$1 && ($nc(this->p)->compareTo($($nc(otherParams)->getP())) == 0);
	return (var$0 && ($nc(this->g)->compareTo($(otherParams->getG())) == 0));
}

$Object* DHPublicKey::writeReplace() {
	$useLocalObjectStack();
	$init($KeyRep$Type);
	$var($KeyRep$Type, var$0, $KeyRep$Type::PUBLIC);
	$var($String, var$1, getAlgorithm());
	$var($String, var$2, getFormat());
	return $new($KeyRep, var$0, var$1, var$2, $(getEncoded()));
}

void DHPublicKey::clinit$($Class* clazz) {
	$init($KnownOIDs);
	$assignStatic(DHPublicKey::DH_OID, $ObjectIdentifier::of($KnownOIDs::DiffieHellman));
}

DHPublicKey::DHPublicKey() {
}

$Class* DHPublicKey::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"serialVersionUID", "J", nullptr, $STATIC | $FINAL, $constField(DHPublicKey, serialVersionUID)},
		{"y", "Ljava/math/BigInteger;", nullptr, $PRIVATE, $field(DHPublicKey, y)},
		{"key", "[B", nullptr, $PRIVATE, $field(DHPublicKey, key)},
		{"encodedKey", "[B", nullptr, $PRIVATE, $field(DHPublicKey, encodedKey)},
		{"p", "Ljava/math/BigInteger;", nullptr, $PRIVATE, $field(DHPublicKey, p)},
		{"g", "Ljava/math/BigInteger;", nullptr, $PRIVATE, $field(DHPublicKey, g)},
		{"l", "I", nullptr, $PRIVATE, $field(DHPublicKey, l)},
		{"DH_OID", "Lsun/security/util/ObjectIdentifier;", nullptr, $STATIC, $staticField(DHPublicKey, DH_OID)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/math/BigInteger;Ljava/math/BigInteger;Ljava/math/BigInteger;)V", nullptr, 0, $method(DHPublicKey, init$, void, $BigInteger*, $BigInteger*, $BigInteger*), "java.security.InvalidKeyException"},
		{"<init>", "(Ljava/math/BigInteger;Ljava/math/BigInteger;Ljava/math/BigInteger;I)V", nullptr, 0, $method(DHPublicKey, init$, void, $BigInteger*, $BigInteger*, $BigInteger*, int32_t)},
		{"<init>", "([B)V", nullptr, 0, $method(DHPublicKey, init$, void, $bytes*), "java.security.InvalidKeyException"},
		{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC, $virtualMethod(DHPublicKey, equals, bool, Object$*)},
		{"getAlgorithm", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(DHPublicKey, getAlgorithm, $String*)},
		{"getEncoded", "()[B", nullptr, $PUBLIC | $SYNCHRONIZED, $virtualMethod(DHPublicKey, getEncoded, $bytes*)},
		{"getFormat", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(DHPublicKey, getFormat, $String*)},
		{"getParams", "()Ljavax/crypto/spec/DHParameterSpec;", nullptr, $PUBLIC, $virtualMethod(DHPublicKey, getParams, $DHParameterSpec*)},
		{"getY", "()Ljava/math/BigInteger;", nullptr, $PUBLIC, $virtualMethod(DHPublicKey, getY, $BigInteger*)},
		{"hashCode", "()I", nullptr, $PUBLIC, $virtualMethod(DHPublicKey, hashCode, int32_t)},
		{"parseKeyBits", "()V", nullptr, $PRIVATE, $method(DHPublicKey, parseKeyBits, void), "java.security.InvalidKeyException"},
		{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(DHPublicKey, toString, $String*)},
		{"writeReplace", "()Ljava/lang/Object;", nullptr, $PRIVATE, $method(DHPublicKey, writeReplace, $Object*), "java.io.ObjectStreamException"},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"com.sun.crypto.provider.DHPublicKey",
		"java.lang.Object",
		"javax.crypto.interfaces.DHPublicKey",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(DHPublicKey, name, initialize, &classInfo$$, DHPublicKey::clinit$, []($Class* clazz) -> $Object* {
		return $of($alloc(DHPublicKey));
	});
	return class$;
}

$Class* DHPublicKey::class$ = nullptr;

			} // provider
		} // crypto
	} // sun
} // com