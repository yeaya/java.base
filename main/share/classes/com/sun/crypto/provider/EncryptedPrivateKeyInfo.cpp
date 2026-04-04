#include <com/sun/crypto/provider/EncryptedPrivateKeyInfo.h>
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
using $MethodInfo = ::java::lang::MethodInfo;
using $DerOutputStream = ::sun::security::util::DerOutputStream;
using $DerValue = ::sun::security::util::DerValue;
using $AlgorithmId = ::sun::security::x509::AlgorithmId;

namespace com {
	namespace sun {
		namespace crypto {
			namespace provider {

void EncryptedPrivateKeyInfo::init$($bytes* encoded) {
	$useLocalObjectStack();
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
	$set(this, encoded, nullptr);
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
		{"<init>", "([B)V", nullptr, 0, $method(EncryptedPrivateKeyInfo, init$, void, $bytes*), "java.io.IOException"},
		{"<init>", "(Lsun/security/x509/AlgorithmId;[B)V", nullptr, 0, $method(EncryptedPrivateKeyInfo, init$, void, $AlgorithmId*, $bytes*)},
		{"getAlgorithm", "()Lsun/security/x509/AlgorithmId;", nullptr, 0, $method(EncryptedPrivateKeyInfo, getAlgorithm, $AlgorithmId*)},
		{"getEncoded", "()[B", nullptr, 0, $method(EncryptedPrivateKeyInfo, getEncoded, $bytes*), "java.io.IOException"},
		{"getEncryptedData", "()[B", nullptr, 0, $method(EncryptedPrivateKeyInfo, getEncryptedData, $bytes*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"com.sun.crypto.provider.EncryptedPrivateKeyInfo",
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

			} // provider
		} // crypto
	} // sun
} // com