#include <sun/security/timestamp/TSRequest.h>

#include <java/math/BigInteger.h>
#include <java/security/MessageDigest.h>
#include <java/security/cert/X509Extension.h>
#include <sun/security/util/DerOutputStream.h>
#include <sun/security/util/DerValue.h>
#include <sun/security/util/ObjectIdentifier.h>
#include <sun/security/x509/AlgorithmId.h>
#include <jcpp.h>

using $X509ExtensionArray = $Array<::java::security::cert::X509Extension>;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $BigInteger = ::java::math::BigInteger;
using $MessageDigest = ::java::security::MessageDigest;
using $DerOutputStream = ::sun::security::util::DerOutputStream;
using $DerValue = ::sun::security::util::DerValue;
using $ObjectIdentifier = ::sun::security::util::ObjectIdentifier;
using $AlgorithmId = ::sun::security::x509::AlgorithmId;

namespace sun {
	namespace security {
		namespace timestamp {

$FieldInfo _TSRequest_FieldInfo_[] = {
	{"version", "I", nullptr, $PRIVATE, $field(TSRequest, version)},
	{"hashAlgorithmId", "Lsun/security/x509/AlgorithmId;", nullptr, $PRIVATE, $field(TSRequest, hashAlgorithmId)},
	{"hashValue", "[B", nullptr, $PRIVATE, $field(TSRequest, hashValue)},
	{"policyId", "Ljava/lang/String;", nullptr, $PRIVATE, $field(TSRequest, policyId)},
	{"nonce", "Ljava/math/BigInteger;", nullptr, $PRIVATE, $field(TSRequest, nonce)},
	{"returnCertificate", "Z", nullptr, $PRIVATE, $field(TSRequest, returnCertificate)},
	{"extensions", "[Ljava/security/cert/X509Extension;", nullptr, $PRIVATE, $field(TSRequest, extensions)},
	{}
};

$MethodInfo _TSRequest_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;[BLjava/security/MessageDigest;)V", nullptr, $PUBLIC, $method(TSRequest, init$, void, $String*, $bytes*, $MessageDigest*), "java.security.NoSuchAlgorithmException"},
	{"encode", "()[B", nullptr, $PUBLIC, $virtualMethod(TSRequest, encode, $bytes*), "java.io.IOException"},
	{"getHashedMessage", "()[B", nullptr, $PUBLIC, $virtualMethod(TSRequest, getHashedMessage, $bytes*)},
	{"requestCertificate", "(Z)V", nullptr, $PUBLIC, $virtualMethod(TSRequest, requestCertificate, void, bool)},
	{"setExtensions", "([Ljava/security/cert/X509Extension;)V", nullptr, $PUBLIC, $virtualMethod(TSRequest, setExtensions, void, $X509ExtensionArray*)},
	{"setNonce", "(Ljava/math/BigInteger;)V", nullptr, $PUBLIC, $virtualMethod(TSRequest, setNonce, void, $BigInteger*)},
	{"setPolicyId", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $virtualMethod(TSRequest, setPolicyId, void, $String*)},
	{"setVersion", "(I)V", nullptr, $PUBLIC, $virtualMethod(TSRequest, setVersion, void, int32_t)},
	{}
};

$ClassInfo _TSRequest_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.security.timestamp.TSRequest",
	"java.lang.Object",
	nullptr,
	_TSRequest_FieldInfo_,
	_TSRequest_MethodInfo_
};

$Object* allocate$TSRequest($Class* clazz) {
	return $of($alloc(TSRequest));
}

void TSRequest::init$($String* tSAPolicyID, $bytes* toBeTimeStamped, $MessageDigest* messageDigest) {
	this->version = 1;
	$set(this, hashAlgorithmId, nullptr);
	$set(this, policyId, nullptr);
	$set(this, nonce, nullptr);
	this->returnCertificate = false;
	$set(this, extensions, nullptr);
	$set(this, policyId, tSAPolicyID);
	$set(this, hashAlgorithmId, $AlgorithmId::get($($nc(messageDigest)->getAlgorithm())));
	$set(this, hashValue, $nc(messageDigest)->digest(toBeTimeStamped));
}

$bytes* TSRequest::getHashedMessage() {
	return $cast($bytes, $nc(this->hashValue)->clone());
}

void TSRequest::setVersion(int32_t version) {
	this->version = version;
}

void TSRequest::setPolicyId($String* policyId) {
	$set(this, policyId, policyId);
}

void TSRequest::setNonce($BigInteger* nonce) {
	$set(this, nonce, nonce);
}

void TSRequest::requestCertificate(bool returnCertificate) {
	this->returnCertificate = returnCertificate;
}

void TSRequest::setExtensions($X509ExtensionArray* extensions) {
	$set(this, extensions, extensions);
}

$bytes* TSRequest::encode() {
	$useLocalCurrentObjectStackCache();
	$var($DerOutputStream, request, $new($DerOutputStream));
	request->putInteger(this->version);
	$var($DerOutputStream, messageImprint, $new($DerOutputStream));
	$nc(this->hashAlgorithmId)->encode(messageImprint);
	messageImprint->putOctetString(this->hashValue);
	request->write($DerValue::tag_Sequence, messageImprint);
	if (this->policyId != nullptr) {
		request->putOID($($ObjectIdentifier::of(this->policyId)));
	}
	if (this->nonce != nullptr) {
		request->putInteger(this->nonce);
	}
	if (this->returnCertificate) {
		request->putBoolean(true);
	}
	$var($DerOutputStream, out, $new($DerOutputStream));
	out->write($DerValue::tag_Sequence, request);
	return out->toByteArray();
}

TSRequest::TSRequest() {
}

$Class* TSRequest::load$($String* name, bool initialize) {
	$loadClass(TSRequest, name, initialize, &_TSRequest_ClassInfo_, allocate$TSRequest);
	return class$;
}

$Class* TSRequest::class$ = nullptr;

		} // timestamp
	} // security
} // sun