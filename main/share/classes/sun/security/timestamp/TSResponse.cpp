#include <sun/security/timestamp/TSResponse.h>

#include <java/io/IOException.h>
#include <java/lang/ArrayIndexOutOfBoundsException.h>
#include <sun/security/pkcs/ContentInfo.h>
#include <sun/security/pkcs/PKCS7.h>
#include <sun/security/timestamp/TSResponse$TimestampException.h>
#include <sun/security/timestamp/TimestampToken.h>
#include <sun/security/util/BitArray.h>
#include <sun/security/util/Debug.h>
#include <sun/security/util/DerInputStream.h>
#include <sun/security/util/DerValue.h>
#include <jcpp.h>

#undef ADD_INFO_NOT_AVAILABLE
#undef BAD_ALG
#undef BAD_DATA_FORMAT
#undef BAD_REQUEST
#undef GRANTED
#undef GRANTED_WITH_MODS
#undef REJECTION
#undef REVOCATION_NOTIFICATION
#undef REVOCATION_WARNING
#undef SYSTEM_FAILURE
#undef TIME_NOT_AVAILABLE
#undef UNACCEPTED_EXTENSION
#undef UNACCEPTED_POLICY
#undef WAITING

using $DerValueArray = $Array<::sun::security::util::DerValue>;
using $IOException = ::java::io::IOException;
using $ArrayIndexOutOfBoundsException = ::java::lang::ArrayIndexOutOfBoundsException;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ContentInfo = ::sun::security::pkcs::ContentInfo;
using $PKCS7 = ::sun::security::pkcs::PKCS7;
using $TSResponse$TimestampException = ::sun::security::timestamp::TSResponse$TimestampException;
using $TimestampToken = ::sun::security::timestamp::TimestampToken;
using $BitArray = ::sun::security::util::BitArray;
using $Debug = ::sun::security::util::Debug;
using $DerInputStream = ::sun::security::util::DerInputStream;
using $DerValue = ::sun::security::util::DerValue;

namespace sun {
	namespace security {
		namespace timestamp {

$FieldInfo _TSResponse_FieldInfo_[] = {
	{"GRANTED", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(TSResponse, GRANTED)},
	{"GRANTED_WITH_MODS", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(TSResponse, GRANTED_WITH_MODS)},
	{"REJECTION", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(TSResponse, REJECTION)},
	{"WAITING", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(TSResponse, WAITING)},
	{"REVOCATION_WARNING", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(TSResponse, REVOCATION_WARNING)},
	{"REVOCATION_NOTIFICATION", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(TSResponse, REVOCATION_NOTIFICATION)},
	{"BAD_ALG", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(TSResponse, BAD_ALG)},
	{"BAD_REQUEST", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(TSResponse, BAD_REQUEST)},
	{"BAD_DATA_FORMAT", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(TSResponse, BAD_DATA_FORMAT)},
	{"TIME_NOT_AVAILABLE", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(TSResponse, TIME_NOT_AVAILABLE)},
	{"UNACCEPTED_POLICY", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(TSResponse, UNACCEPTED_POLICY)},
	{"UNACCEPTED_EXTENSION", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(TSResponse, UNACCEPTED_EXTENSION)},
	{"ADD_INFO_NOT_AVAILABLE", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(TSResponse, ADD_INFO_NOT_AVAILABLE)},
	{"SYSTEM_FAILURE", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(TSResponse, SYSTEM_FAILURE)},
	{"debug", "Lsun/security/util/Debug;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(TSResponse, debug)},
	{"status", "I", nullptr, $PRIVATE, $field(TSResponse, status)},
	{"statusString", "[Ljava/lang/String;", nullptr, $PRIVATE, $field(TSResponse, statusString)},
	{"failureInfo", "[Z", nullptr, $PRIVATE, $field(TSResponse, failureInfo)},
	{"encodedTsToken", "[B", nullptr, $PRIVATE, $field(TSResponse, encodedTsToken)},
	{"tsToken", "Lsun/security/pkcs/PKCS7;", nullptr, $PRIVATE, $field(TSResponse, tsToken)},
	{"tstInfo", "Lsun/security/timestamp/TimestampToken;", nullptr, $PRIVATE, $field(TSResponse, tstInfo)},
	{}
};

$MethodInfo _TSResponse_MethodInfo_[] = {
	{"<init>", "([B)V", nullptr, 0, $method(static_cast<void(TSResponse::*)($bytes*)>(&TSResponse::init$)), "java.io.IOException"},
	{"getEncodedToken", "()[B", nullptr, $PUBLIC},
	{"getFailureCodeAsText", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"getFailureInfo", "()[Z", nullptr, $PUBLIC},
	{"getStatusCode", "()I", nullptr, $PUBLIC},
	{"getStatusCodeAsText", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"getStatusMessages", "()[Ljava/lang/String;", nullptr, $PUBLIC},
	{"getTimestampToken", "()Lsun/security/timestamp/TimestampToken;", nullptr, $PUBLIC},
	{"getToken", "()Lsun/security/pkcs/PKCS7;", nullptr, $PUBLIC},
	{"isSet", "(I)Z", nullptr, $PRIVATE, $method(static_cast<bool(TSResponse::*)(int32_t)>(&TSResponse::isSet))},
	{"parse", "([B)V", nullptr, $PRIVATE, $method(static_cast<void(TSResponse::*)($bytes*)>(&TSResponse::parse)), "java.io.IOException"},
	{}
};

$InnerClassInfo _TSResponse_InnerClassesInfo_[] = {
	{"sun.security.timestamp.TSResponse$TimestampException", "sun.security.timestamp.TSResponse", "TimestampException", $STATIC | $FINAL},
	{}
};

$ClassInfo _TSResponse_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.security.timestamp.TSResponse",
	"java.lang.Object",
	nullptr,
	_TSResponse_FieldInfo_,
	_TSResponse_MethodInfo_,
	nullptr,
	nullptr,
	_TSResponse_InnerClassesInfo_,
	nullptr,
	nullptr,
	"sun.security.timestamp.TSResponse$TimestampException"
};

$Object* allocate$TSResponse($Class* clazz) {
	return $of($alloc(TSResponse));
}

$Debug* TSResponse::debug = nullptr;

void TSResponse::init$($bytes* tsReply) {
	$set(this, statusString, nullptr);
	$set(this, failureInfo, nullptr);
	$set(this, encodedTsToken, nullptr);
	$set(this, tsToken, nullptr);
	parse(tsReply);
}

int32_t TSResponse::getStatusCode() {
	return this->status;
}

$StringArray* TSResponse::getStatusMessages() {
	return this->statusString;
}

$booleans* TSResponse::getFailureInfo() {
	return this->failureInfo;
}

$String* TSResponse::getStatusCodeAsText() {
	switch (this->status) {
	case TSResponse::GRANTED:
		{
			return "the timestamp request was granted."_s;
		}
	case TSResponse::GRANTED_WITH_MODS:
		{
			return "the timestamp request was granted with some modifications."_s;
		}
	case TSResponse::REJECTION:
		{
			return "the timestamp request was rejected."_s;
		}
	case TSResponse::WAITING:
		{
			return "the timestamp request has not yet been processed."_s;
		}
	case TSResponse::REVOCATION_WARNING:
		{
			return "warning: a certificate revocation is imminent."_s;
		}
	case TSResponse::REVOCATION_NOTIFICATION:
		{
			return "notification: a certificate revocation has occurred."_s;
		}
	default:
		{
			return ($str({"unknown status code "_s, $$str(this->status), "."_s}));
		}
	}
}

bool TSResponse::isSet(int32_t position) {
	return $nc(this->failureInfo)->get(position);
}

$String* TSResponse::getFailureCodeAsText() {
	if (this->failureInfo == nullptr) {
		return ""_s;
	}
	try {
		if (isSet(TSResponse::BAD_ALG)) {
			return "Unrecognized or unsupported algorithm identifier."_s;
		}
		if (isSet(TSResponse::BAD_REQUEST)) {
			return "The requested transaction is not permitted or supported."_s;
		}
		if (isSet(TSResponse::BAD_DATA_FORMAT)) {
			return "The data submitted has the wrong format."_s;
		}
		if (isSet(TSResponse::TIME_NOT_AVAILABLE)) {
			return "The TSA\'s time source is not available."_s;
		}
		if (isSet(TSResponse::UNACCEPTED_POLICY)) {
			return "The requested TSA policy is not supported by the TSA."_s;
		}
		if (isSet(TSResponse::UNACCEPTED_EXTENSION)) {
			return "The requested extension is not supported by the TSA."_s;
		}
		if (isSet(TSResponse::ADD_INFO_NOT_AVAILABLE)) {
			return "The additional information requested could not be understood or is not available."_s;
		}
		if (isSet(TSResponse::SYSTEM_FAILURE)) {
			return "The request cannot be handled due to system failure."_s;
		}
	} catch ($ArrayIndexOutOfBoundsException& ex) {
	}
	return ("unknown failure code"_s);
}

$PKCS7* TSResponse::getToken() {
	return this->tsToken;
}

$TimestampToken* TSResponse::getTimestampToken() {
	return this->tstInfo;
}

$bytes* TSResponse::getEncodedToken() {
	return this->encodedTsToken;
}

void TSResponse::parse($bytes* tsReply) {
	$useLocalCurrentObjectStackCache();
	$var($DerValue, derValue, $new($DerValue, tsReply));
	if (derValue->tag != $DerValue::tag_Sequence) {
		$throwNew($IOException, "Bad encoding for timestamp response"_s);
	}
	$var($DerValue, statusInfo, $nc(derValue->data$)->getDerValue());
	this->status = $nc($nc(statusInfo)->data$)->getInteger();
	if (TSResponse::debug != nullptr) {
		$nc(TSResponse::debug)->println($$str({"timestamp response: status="_s, $$str(this->status)}));
	}
	if ($nc(statusInfo->data$)->available() > 0) {
		int8_t tag = (int8_t)$nc(statusInfo->data$)->peekByte();
		if (tag == $DerValue::tag_SequenceOf) {
			$var($DerValueArray, strings, $nc(statusInfo->data$)->getSequence(1));
			$set(this, statusString, $new($StringArray, $nc(strings)->length));
			for (int32_t i = 0; i < strings->length; ++i) {
				$nc(this->statusString)->set(i, $($nc(strings->get(i))->getUTF8String()));
				if (TSResponse::debug != nullptr) {
					$nc(TSResponse::debug)->println($$str({"timestamp response: statusString="_s, $nc(this->statusString)->get(i)}));
				}
			}
		}
	}
	if ($nc(statusInfo->data$)->available() > 0) {
		$set(this, failureInfo, $nc($($nc(statusInfo->data$)->getUnalignedBitString()))->toBooleanArray());
	}
	if ($nc(derValue->data$)->available() > 0) {
		$var($DerValue, timestampToken, $nc(derValue->data$)->getDerValue());
		$set(this, encodedTsToken, $nc(timestampToken)->toByteArray());
		$set(this, tsToken, $new($PKCS7, this->encodedTsToken));
		$set(this, tstInfo, $new($TimestampToken, $($nc($($nc(this->tsToken)->getContentInfo()))->getData())));
	}
	if (this->status == 0 || this->status == 1) {
		if (this->tsToken == nullptr) {
			$throwNew($TSResponse$TimestampException, "Bad encoding for timestamp response: expected a timeStampToken element to be present"_s);
		}
	} else if (this->tsToken != nullptr) {
		$throwNew($TSResponse$TimestampException, "Bad encoding for timestamp response: expected no timeStampToken element to be present"_s);
	}
}

void clinit$TSResponse($Class* class$) {
	$assignStatic(TSResponse::debug, $Debug::getInstance("ts"_s));
}

TSResponse::TSResponse() {
}

$Class* TSResponse::load$($String* name, bool initialize) {
	$loadClass(TSResponse, name, initialize, &_TSResponse_ClassInfo_, clinit$TSResponse, allocate$TSResponse);
	return class$;
}

$Class* TSResponse::class$ = nullptr;

		} // timestamp
	} // security
} // sun