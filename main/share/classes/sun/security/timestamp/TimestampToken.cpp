#include <sun/security/timestamp/TimestampToken.h>

#include <java/io/IOException.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/math/BigInteger.h>
#include <java/util/Date.h>
#include <sun/security/util/DerInputStream.h>
#include <sun/security/util/DerValue.h>
#include <sun/security/util/ObjectIdentifier.h>
#include <sun/security/x509/AlgorithmId.h>
#include <jcpp.h>

using $IOException = ::java::io::IOException;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $BigInteger = ::java::math::BigInteger;
using $Date = ::java::util::Date;
using $DerInputStream = ::sun::security::util::DerInputStream;
using $DerValue = ::sun::security::util::DerValue;
using $ObjectIdentifier = ::sun::security::util::ObjectIdentifier;
using $AlgorithmId = ::sun::security::x509::AlgorithmId;

namespace sun {
	namespace security {
		namespace timestamp {

$FieldInfo _TimestampToken_FieldInfo_[] = {
	{"version", "I", nullptr, $PRIVATE, $field(TimestampToken, version)},
	{"policy", "Lsun/security/util/ObjectIdentifier;", nullptr, $PRIVATE, $field(TimestampToken, policy)},
	{"serialNumber", "Ljava/math/BigInteger;", nullptr, $PRIVATE, $field(TimestampToken, serialNumber)},
	{"hashAlgorithm", "Lsun/security/x509/AlgorithmId;", nullptr, $PRIVATE, $field(TimestampToken, hashAlgorithm)},
	{"hashedMessage", "[B", nullptr, $PRIVATE, $field(TimestampToken, hashedMessage)},
	{"genTime", "Ljava/util/Date;", nullptr, $PRIVATE, $field(TimestampToken, genTime)},
	{"nonce", "Ljava/math/BigInteger;", nullptr, $PRIVATE, $field(TimestampToken, nonce)},
	{}
};

$MethodInfo _TimestampToken_MethodInfo_[] = {
	{"<init>", "([B)V", nullptr, $PUBLIC, $method(static_cast<void(TimestampToken::*)($bytes*)>(&TimestampToken::init$)), "java.io.IOException"},
	{"getDate", "()Ljava/util/Date;", nullptr, $PUBLIC},
	{"getHashAlgorithm", "()Lsun/security/x509/AlgorithmId;", nullptr, $PUBLIC},
	{"getHashedMessage", "()[B", nullptr, $PUBLIC},
	{"getNonce", "()Ljava/math/BigInteger;", nullptr, $PUBLIC},
	{"getPolicyID", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"getSerialNumber", "()Ljava/math/BigInteger;", nullptr, $PUBLIC},
	{"parse", "([B)V", nullptr, $PRIVATE, $method(static_cast<void(TimestampToken::*)($bytes*)>(&TimestampToken::parse)), "java.io.IOException"},
	{}
};

$ClassInfo _TimestampToken_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.security.timestamp.TimestampToken",
	"java.lang.Object",
	nullptr,
	_TimestampToken_FieldInfo_,
	_TimestampToken_MethodInfo_
};

$Object* allocate$TimestampToken($Class* clazz) {
	return $of($alloc(TimestampToken));
}

void TimestampToken::init$($bytes* timestampTokenInfo) {
	if (timestampTokenInfo == nullptr) {
		$throwNew($IOException, "No timestamp token info"_s);
	}
	parse(timestampTokenInfo);
}

$Date* TimestampToken::getDate() {
	return this->genTime;
}

$AlgorithmId* TimestampToken::getHashAlgorithm() {
	return this->hashAlgorithm;
}

$bytes* TimestampToken::getHashedMessage() {
	return this->hashedMessage;
}

$BigInteger* TimestampToken::getNonce() {
	return this->nonce;
}

$String* TimestampToken::getPolicyID() {
	return $nc(this->policy)->toString();
}

$BigInteger* TimestampToken::getSerialNumber() {
	return this->serialNumber;
}

void TimestampToken::parse($bytes* timestampTokenInfo) {
	$useLocalCurrentObjectStackCache();
	$var($DerValue, tstInfo, $new($DerValue, timestampTokenInfo));
	if (tstInfo->tag != $DerValue::tag_Sequence) {
		$throwNew($IOException, "Bad encoding for timestamp token info"_s);
	}
	this->version = $nc(tstInfo->data$)->getInteger();
	$set(this, policy, $nc(tstInfo->data$)->getOID());
	$var($DerValue, messageImprint, $nc(tstInfo->data$)->getDerValue());
	$set(this, hashAlgorithm, $AlgorithmId::parse($($nc($nc(messageImprint)->data$)->getDerValue())));
	$set(this, hashedMessage, $nc($nc(messageImprint)->data$)->getOctetString());
	$set(this, serialNumber, $nc(tstInfo->data$)->getBigInteger());
	$set(this, genTime, $nc(tstInfo->data$)->getGeneralizedTime());
	while ($nc(tstInfo->data$)->available() > 0) {
		$var($DerValue, d, $nc(tstInfo->data$)->getDerValue());
		if ($nc(d)->tag == $DerValue::tag_Integer) {
			$set(this, nonce, d->getBigInteger());
			break;
		}
	}
}

TimestampToken::TimestampToken() {
}

$Class* TimestampToken::load$($String* name, bool initialize) {
	$loadClass(TimestampToken, name, initialize, &_TimestampToken_ClassInfo_, allocate$TimestampToken);
	return class$;
}

$Class* TimestampToken::class$ = nullptr;

		} // timestamp
	} // security
} // sun