#include <sun/security/x509/KeyIdentifier.h>
#include <java/io/IOException.h>
#include <java/security/MessageDigest.h>
#include <java/security/NoSuchAlgorithmException.h>
#include <java/security/PublicKey.h>
#include <java/util/Arrays.h>
#include <sun/security/util/BitArray.h>
#include <sun/security/util/DerInputStream.h>
#include <sun/security/util/DerOutputStream.h>
#include <sun/security/util/DerValue.h>
#include <sun/security/util/HexDumpEncoder.h>
#include <sun/security/x509/AlgorithmId.h>
#include <jcpp.h>

using $IOException = ::java::io::IOException;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $MessageDigest = ::java::security::MessageDigest;
using $NoSuchAlgorithmException = ::java::security::NoSuchAlgorithmException;
using $PublicKey = ::java::security::PublicKey;
using $Arrays = ::java::util::Arrays;
using $DerOutputStream = ::sun::security::util::DerOutputStream;
using $DerValue = ::sun::security::util::DerValue;
using $HexDumpEncoder = ::sun::security::util::HexDumpEncoder;
using $AlgorithmId = ::sun::security::x509::AlgorithmId;

namespace sun {
	namespace security {
		namespace x509 {

void KeyIdentifier::init$($bytes* octetString) {
	$set(this, octetString, $cast($bytes, $nc(octetString)->clone()));
}

void KeyIdentifier::init$($DerValue* val) {
	$set(this, octetString, $nc(val)->getOctetString());
}

void KeyIdentifier::init$($PublicKey* pubKey) {
	$useLocalObjectStack();
	$var($DerValue, algAndKey, $new($DerValue, $($nc(pubKey)->getEncoded())));
	if (algAndKey->tag != $DerValue::tag_Sequence) {
		$throwNew($IOException, "PublicKey value is not a valid X.509 public key"_s);
	}
	$var($AlgorithmId, algid, $AlgorithmId::parse($($nc(algAndKey->data$)->getDerValue())));
	$var($bytes, key, $$nc(algAndKey->data$->getUnalignedBitString())->toByteArray());
	$var($MessageDigest, md, nullptr);
	try {
		$assign(md, $MessageDigest::getInstance("SHA1"_s));
	} catch ($NoSuchAlgorithmException& e3) {
		$throwNew($IOException, "SHA1 not supported"_s);
	}
	$nc(md)->update(key);
	$set(this, octetString, md->digest());
}

$bytes* KeyIdentifier::getIdentifier() {
	return $cast($bytes, $nc(this->octetString)->clone());
}

$String* KeyIdentifier::toString() {
	$useLocalObjectStack();
	$var($String, s, "KeyIdentifier [\n"_s);
	$var($HexDumpEncoder, encoder, $new($HexDumpEncoder));
	$plusAssign(s, $(encoder->encodeBuffer(this->octetString)));
	$plusAssign(s, "]\n"_s);
	return (s);
}

void KeyIdentifier::encode($DerOutputStream* out) {
	$nc(out)->putOctetString(this->octetString);
}

int32_t KeyIdentifier::hashCode() {
	int32_t retval = 0;
	for (int32_t i = 0; i < $nc(this->octetString)->length; ++i) {
		retval += this->octetString->get(i) * i;
	}
	return retval;
}

bool KeyIdentifier::equals(Object$* other) {
	if ($equals(this, other)) {
		return true;
	}
	if (!($instanceOf(KeyIdentifier, other))) {
		return false;
	}
	$var($bytes, otherString, $nc($cast(KeyIdentifier, other))->octetString);
	return $Arrays::equals(this->octetString, otherString);
}

KeyIdentifier::KeyIdentifier() {
}

$Class* KeyIdentifier::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"octetString", "[B", nullptr, $PRIVATE, $field(KeyIdentifier, octetString)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "([B)V", nullptr, $PUBLIC, $method(KeyIdentifier, init$, void, $bytes*)},
		{"<init>", "(Lsun/security/util/DerValue;)V", nullptr, $PUBLIC, $method(KeyIdentifier, init$, void, $DerValue*), "java.io.IOException"},
		{"<init>", "(Ljava/security/PublicKey;)V", nullptr, $PUBLIC, $method(KeyIdentifier, init$, void, $PublicKey*), "java.io.IOException"},
		{"encode", "(Lsun/security/util/DerOutputStream;)V", nullptr, 0, $virtualMethod(KeyIdentifier, encode, void, $DerOutputStream*), "java.io.IOException"},
		{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC, $virtualMethod(KeyIdentifier, equals, bool, Object$*)},
		{"getIdentifier", "()[B", nullptr, $PUBLIC, $virtualMethod(KeyIdentifier, getIdentifier, $bytes*)},
		{"hashCode", "()I", nullptr, $PUBLIC, $virtualMethod(KeyIdentifier, hashCode, int32_t)},
		{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(KeyIdentifier, toString, $String*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"sun.security.x509.KeyIdentifier",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(KeyIdentifier, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(KeyIdentifier);
	});
	return class$;
}

$Class* KeyIdentifier::class$ = nullptr;

		} // x509
	} // security
} // sun