#include <sun/security/pkcs/EncryptedPrivateKeyInfo.h>
#include <java/io/IOException.h>
#include <sun/security/util/DerInputStream.h>
#include <sun/security/util/DerOutputStream.h>
#include <sun/security/util/DerValue.h>
#include <sun/security/x509/AlgorithmId.h>
#include <jcpp.h>

using $DerValueArray = $Array<::sun::security::util::DerValue>;
using $IOException = ::java::io::IOException;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $MethodInfo = ::java::lang::MethodInfo;
using $DerOutputStream = ::sun::security::util::DerOutputStream;
using $DerValue = ::sun::security::util::DerValue;
using $AlgorithmId = ::sun::security::x509::AlgorithmId;

namespace sun {
	namespace security {
		namespace pkcs {

void EncryptedPrivateKeyInfo::init$($bytes* encoded) {
	$useLocalObjectStack();
	if (encoded == nullptr) {
		$throwNew($IllegalArgumentException, "encoding must not be null"_s);
	}
	$var($DerValue, val, $new($DerValue, encoded));
	$var($DerValueArray, seq, $new($DerValueArray, 2));
	seq->set(0, $($nc(val->data$)->getDerValue()));
	seq->set(1, $(val->data$->getDerValue()));
	if (val->data$->available() != 0) {
		$throwNew($IOException, $$str({"overrun, bytes = "_s, $$str(val->data$->available())}));
	}
	$set(this, algid, $AlgorithmId::parse(seq->get(0)));
	if ($nc($nc(seq->get(0))->data$)->available() != 0) {
		$throwNew($IOException, "encryptionAlgorithm field overrun"_s);
	}
	$set(this, encryptedData, $nc(seq->get(1))->getOctetString());
	if ($nc(seq->get(1))->data$->available() != 0) {
		$throwNew($IOException, "encryptedData field overrun"_s);
	}
	$set(this, encoded, $cast($bytes, $nc(encoded)->clone()));
}

void EncryptedPrivateKeyInfo::init$($AlgorithmId* algid, $bytes* encryptedData) {
	$set(this, algid, algid);
	$set(this, encryptedData, $cast($bytes, $nc(encryptedData)->clone()));
}

$AlgorithmId* EncryptedPrivateKeyInfo::getAlgorithm() {
	return this->algid;
}

$bytes* EncryptedPrivateKeyInfo::getEncryptedData() {
	return $cast($bytes, $nc(this->encryptedData)->clone());
}

$bytes* EncryptedPrivateKeyInfo::getEncoded() {
	$useLocalObjectStack();
	if (this->encoded != nullptr) {
		return $cast($bytes, this->encoded->clone());
	}
	$var($DerOutputStream, out, $new($DerOutputStream));
	$var($DerOutputStream, tmp, $new($DerOutputStream));
	$nc(this->algid)->encode(tmp);
	tmp->putOctetString(this->encryptedData);
	out->write($DerValue::tag_Sequence, tmp);
	$set(this, encoded, out->toByteArray());
	return $cast($bytes, $nc(this->encoded)->clone());
}

bool EncryptedPrivateKeyInfo::equals(Object$* other) {
	$useLocalObjectStack();
	if ($equals(this, other)) {
		return true;
	}
	if (!($instanceOf(EncryptedPrivateKeyInfo, other))) {
		return false;
	}
	try {
		$var($bytes, thisEncrInfo, this->getEncoded());
		$var($bytes, otherEncrInfo, $nc($cast(EncryptedPrivateKeyInfo, other))->getEncoded());
		if ($nc(thisEncrInfo)->length != $nc(otherEncrInfo)->length) {
			return false;
		}
		for (int32_t i = 0; i < thisEncrInfo->length; ++i) {
			if (thisEncrInfo->get(i) != otherEncrInfo->get(i)) {
				return false;
			}
		}
		return true;
	} catch ($IOException& e) {
		return false;
	}
	$shouldNotReachHere();
}

int32_t EncryptedPrivateKeyInfo::hashCode() {
	int32_t retval = 0;
	for (int32_t i = 0; i < $nc(this->encryptedData)->length; ++i) {
		retval += this->encryptedData->get(i) * i;
	}
	return retval;
}

EncryptedPrivateKeyInfo::EncryptedPrivateKeyInfo() {
}

$Class* EncryptedPrivateKeyInfo::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"algid", "Lsun/security/x509/AlgorithmId;", nullptr, $PRIVATE, $field(EncryptedPrivateKeyInfo, algid)},
		{"encryptedData", "[B", nullptr, $PRIVATE, $field(EncryptedPrivateKeyInfo, encryptedData)},
		{"encoded", "[B", nullptr, $PRIVATE, $field(EncryptedPrivateKeyInfo, encoded)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "([B)V", nullptr, $PUBLIC, $method(EncryptedPrivateKeyInfo, init$, void, $bytes*), "java.io.IOException"},
		{"<init>", "(Lsun/security/x509/AlgorithmId;[B)V", nullptr, $PUBLIC, $method(EncryptedPrivateKeyInfo, init$, void, $AlgorithmId*, $bytes*)},
		{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC, $virtualMethod(EncryptedPrivateKeyInfo, equals, bool, Object$*)},
		{"getAlgorithm", "()Lsun/security/x509/AlgorithmId;", nullptr, $PUBLIC, $virtualMethod(EncryptedPrivateKeyInfo, getAlgorithm, $AlgorithmId*)},
		{"getEncoded", "()[B", nullptr, $PUBLIC, $virtualMethod(EncryptedPrivateKeyInfo, getEncoded, $bytes*), "java.io.IOException"},
		{"getEncryptedData", "()[B", nullptr, $PUBLIC, $virtualMethod(EncryptedPrivateKeyInfo, getEncryptedData, $bytes*)},
		{"hashCode", "()I", nullptr, $PUBLIC, $virtualMethod(EncryptedPrivateKeyInfo, hashCode, int32_t)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"sun.security.pkcs.EncryptedPrivateKeyInfo",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(EncryptedPrivateKeyInfo, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(EncryptedPrivateKeyInfo);
	});
	return class$;
}

$Class* EncryptedPrivateKeyInfo::class$ = nullptr;

		} // pkcs
	} // security
} // sun