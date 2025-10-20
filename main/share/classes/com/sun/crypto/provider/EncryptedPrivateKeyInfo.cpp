#include <com/sun/crypto/provider/EncryptedPrivateKeyInfo.h>

#include <java/io/IOException.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <sun/security/util/DerInputStream.h>
#include <sun/security/util/DerOutputStream.h>
#include <sun/security/util/DerValue.h>
#include <sun/security/x509/AlgorithmId.h>
#include <jcpp.h>

using $DerValueArray = $Array<::sun::security::util::DerValue>;
using $ByteArrayOutputStream = ::java::io::ByteArrayOutputStream;
using $IOException = ::java::io::IOException;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $DerInputStream = ::sun::security::util::DerInputStream;
using $DerOutputStream = ::sun::security::util::DerOutputStream;
using $DerValue = ::sun::security::util::DerValue;
using $AlgorithmId = ::sun::security::x509::AlgorithmId;

namespace com {
	namespace sun {
		namespace crypto {
			namespace provider {

$FieldInfo _EncryptedPrivateKeyInfo_FieldInfo_[] = {
	{"algid", "Lsun/security/x509/AlgorithmId;", nullptr, $PRIVATE, $field(EncryptedPrivateKeyInfo, algid)},
	{"encryptedData", "[B", nullptr, $PRIVATE, $field(EncryptedPrivateKeyInfo, encryptedData)},
	{"encoded", "[B", nullptr, $PRIVATE, $field(EncryptedPrivateKeyInfo, encoded)},
	{}
};

$MethodInfo _EncryptedPrivateKeyInfo_MethodInfo_[] = {
	{"<init>", "([B)V", nullptr, 0, $method(static_cast<void(EncryptedPrivateKeyInfo::*)($bytes*)>(&EncryptedPrivateKeyInfo::init$)), "java.io.IOException"},
	{"<init>", "(Lsun/security/x509/AlgorithmId;[B)V", nullptr, 0, $method(static_cast<void(EncryptedPrivateKeyInfo::*)($AlgorithmId*,$bytes*)>(&EncryptedPrivateKeyInfo::init$))},
	{"getAlgorithm", "()Lsun/security/x509/AlgorithmId;", nullptr, 0, $method(static_cast<$AlgorithmId*(EncryptedPrivateKeyInfo::*)()>(&EncryptedPrivateKeyInfo::getAlgorithm))},
	{"getEncoded", "()[B", nullptr, 0, $method(static_cast<$bytes*(EncryptedPrivateKeyInfo::*)()>(&EncryptedPrivateKeyInfo::getEncoded)), "java.io.IOException"},
	{"getEncryptedData", "()[B", nullptr, 0, $method(static_cast<$bytes*(EncryptedPrivateKeyInfo::*)()>(&EncryptedPrivateKeyInfo::getEncryptedData))},
	{}
};

$ClassInfo _EncryptedPrivateKeyInfo_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"com.sun.crypto.provider.EncryptedPrivateKeyInfo",
	"java.lang.Object",
	nullptr,
	_EncryptedPrivateKeyInfo_FieldInfo_,
	_EncryptedPrivateKeyInfo_MethodInfo_
};

$Object* allocate$EncryptedPrivateKeyInfo($Class* clazz) {
	return $of($alloc(EncryptedPrivateKeyInfo));
}

void EncryptedPrivateKeyInfo::init$($bytes* encoded) {
	$useLocalCurrentObjectStackCache();
	$var($DerValue, val, $new($DerValue, encoded));
	$var($DerValueArray, seq, $new($DerValueArray, 2));
	seq->set(0, $($nc(val->data$)->getDerValue()));
	seq->set(1, $($nc(val->data$)->getDerValue()));
	if ($nc(val->data$)->available() != 0) {
		$throwNew($IOException, $$str({"overrun, bytes = "_s, $$str($nc(val->data$)->available())}));
	}
	$set(this, algid, $AlgorithmId::parse(seq->get(0)));
	if ($nc($nc(seq->get(0))->data$)->available() != 0) {
		$throwNew($IOException, "encryptionAlgorithm field overrun"_s);
	}
	$set(this, encryptedData, $nc(seq->get(1))->getOctetString());
	if ($nc($nc(seq->get(1))->data$)->available() != 0) {
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
	$useLocalCurrentObjectStackCache();
	if (this->encoded != nullptr) {
		return $cast($bytes, $nc(this->encoded)->clone());
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
	$loadClass(EncryptedPrivateKeyInfo, name, initialize, &_EncryptedPrivateKeyInfo_ClassInfo_, allocate$EncryptedPrivateKeyInfo);
	return class$;
}

$Class* EncryptedPrivateKeyInfo::class$ = nullptr;

			} // provider
		} // crypto
	} // sun
} // com