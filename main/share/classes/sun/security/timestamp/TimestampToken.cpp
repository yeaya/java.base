#include <sun/security/timestamp/TimestampToken.h>
#include <java/io/IOException.h>
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
using $DerValue = ::sun::security::util::DerValue;
using $AlgorithmId = ::sun::security::x509::AlgorithmId;

namespace sun {
	namespace security {
		namespace timestamp {

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
	$useLocalObjectStack();
	$var($DerValue, tstInfo, $new($DerValue, timestampTokenInfo));
	if (tstInfo->tag != $DerValue::tag_Sequence) {
		$throwNew($IOException, "Bad encoding for timestamp token info"_s);
	}
	this->version = $nc(tstInfo->data$)->getInteger();
	$set(this, policy, tstInfo->data$->getOID());
	$var($DerValue, messageImprint, tstInfo->data$->getDerValue());
	$set(this, hashAlgorithm, $AlgorithmId::parse($($nc($nc(messageImprint)->data$)->getDerValue())));
	$set(this, hashedMessage, messageImprint->data$->getOctetString());
	$set(this, serialNumber, tstInfo->data$->getBigInteger());
	$set(this, genTime, tstInfo->data$->getGeneralizedTime());
	while (tstInfo->data$->available() > 0) {
		$var($DerValue, d, tstInfo->data$->getDerValue());
		if ($nc(d)->tag == $DerValue::tag_Integer) {
			$set(this, nonce, d->getBigInteger());
			break;
		}
	}
}

TimestampToken::TimestampToken() {
}

$Class* TimestampToken::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"version", "I", nullptr, $PRIVATE, $field(TimestampToken, version)},
		{"policy", "Lsun/security/util/ObjectIdentifier;", nullptr, $PRIVATE, $field(TimestampToken, policy)},
		{"serialNumber", "Ljava/math/BigInteger;", nullptr, $PRIVATE, $field(TimestampToken, serialNumber)},
		{"hashAlgorithm", "Lsun/security/x509/AlgorithmId;", nullptr, $PRIVATE, $field(TimestampToken, hashAlgorithm)},
		{"hashedMessage", "[B", nullptr, $PRIVATE, $field(TimestampToken, hashedMessage)},
		{"genTime", "Ljava/util/Date;", nullptr, $PRIVATE, $field(TimestampToken, genTime)},
		{"nonce", "Ljava/math/BigInteger;", nullptr, $PRIVATE, $field(TimestampToken, nonce)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "([B)V", nullptr, $PUBLIC, $method(TimestampToken, init$, void, $bytes*), "java.io.IOException"},
		{"getDate", "()Ljava/util/Date;", nullptr, $PUBLIC, $virtualMethod(TimestampToken, getDate, $Date*)},
		{"getHashAlgorithm", "()Lsun/security/x509/AlgorithmId;", nullptr, $PUBLIC, $virtualMethod(TimestampToken, getHashAlgorithm, $AlgorithmId*)},
		{"getHashedMessage", "()[B", nullptr, $PUBLIC, $virtualMethod(TimestampToken, getHashedMessage, $bytes*)},
		{"getNonce", "()Ljava/math/BigInteger;", nullptr, $PUBLIC, $virtualMethod(TimestampToken, getNonce, $BigInteger*)},
		{"getPolicyID", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(TimestampToken, getPolicyID, $String*)},
		{"getSerialNumber", "()Ljava/math/BigInteger;", nullptr, $PUBLIC, $virtualMethod(TimestampToken, getSerialNumber, $BigInteger*)},
		{"parse", "([B)V", nullptr, $PRIVATE, $method(TimestampToken, parse, void, $bytes*), "java.io.IOException"},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"sun.security.timestamp.TimestampToken",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(TimestampToken, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(TimestampToken);
	});
	return class$;
}

$Class* TimestampToken::class$ = nullptr;

		} // timestamp
	} // security
} // sun