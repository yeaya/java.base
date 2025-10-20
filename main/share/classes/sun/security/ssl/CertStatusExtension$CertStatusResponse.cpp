#include <sun/security/ssl/CertStatusExtension$CertStatusResponse.h>

#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/nio/ByteBuffer.h>
#include <java/text/MessageFormat.h>
#include <java/util/Locale.h>
#include <sun/security/ssl/CertStatusExtension$CertStatusRequestType.h>
#include <sun/security/ssl/CertStatusExtension.h>
#include <sun/security/ssl/Record.h>
#include <sun/security/ssl/Utilities.h>
#include <sun/security/util/HexDumpEncoder.h>
#include <jcpp.h>

#undef ENGLISH

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ByteBuffer = ::java::nio::ByteBuffer;
using $Format = ::java::text::Format;
using $MessageFormat = ::java::text::MessageFormat;
using $Locale = ::java::util::Locale;
using $CertStatusExtension = ::sun::security::ssl::CertStatusExtension;
using $CertStatusExtension$CertStatusRequestType = ::sun::security::ssl::CertStatusExtension$CertStatusRequestType;
using $Record = ::sun::security::ssl::Record;
using $Utilities = ::sun::security::ssl::Utilities;
using $HexDumpEncoder = ::sun::security::util::HexDumpEncoder;

namespace sun {
	namespace security {
		namespace ssl {

$FieldInfo _CertStatusExtension$CertStatusResponse_FieldInfo_[] = {
	{"statusType", "B", nullptr, $FINAL, $field(CertStatusExtension$CertStatusResponse, statusType)},
	{"encodedResponse", "[B", nullptr, $FINAL, $field(CertStatusExtension$CertStatusResponse, encodedResponse)},
	{}
};

$MethodInfo _CertStatusExtension$CertStatusResponse_MethodInfo_[] = {
	{"<init>", "(B[B)V", nullptr, $PROTECTED, $method(static_cast<void(CertStatusExtension$CertStatusResponse::*)(int8_t,$bytes*)>(&CertStatusExtension$CertStatusResponse::init$))},
	{"toByteArray", "()[B", nullptr, 0, nullptr, "java.io.IOException"},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _CertStatusExtension$CertStatusResponse_InnerClassesInfo_[] = {
	{"sun.security.ssl.CertStatusExtension$CertStatusResponse", "sun.security.ssl.CertStatusExtension", "CertStatusResponse", $STATIC},
	{}
};

$ClassInfo _CertStatusExtension$CertStatusResponse_ClassInfo_ = {
	$ACC_SUPER,
	"sun.security.ssl.CertStatusExtension$CertStatusResponse",
	"java.lang.Object",
	nullptr,
	_CertStatusExtension$CertStatusResponse_FieldInfo_,
	_CertStatusExtension$CertStatusResponse_MethodInfo_,
	nullptr,
	nullptr,
	_CertStatusExtension$CertStatusResponse_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.security.ssl.CertStatusExtension"
};

$Object* allocate$CertStatusExtension$CertStatusResponse($Class* clazz) {
	return $of($alloc(CertStatusExtension$CertStatusResponse));
}

void CertStatusExtension$CertStatusResponse::init$(int8_t statusType, $bytes* respDer) {
	this->statusType = statusType;
	$set(this, encodedResponse, respDer);
}

$bytes* CertStatusExtension$CertStatusResponse::toByteArray() {
	$useLocalCurrentObjectStackCache();
	$var($bytes, outData, $new($bytes, $nc(this->encodedResponse)->length + 4));
	$var($ByteBuffer, buf, $ByteBuffer::wrap(outData));
	$Record::putInt8(buf, this->statusType);
	$Record::putBytes24(buf, this->encodedResponse);
	return $cast($bytes, $nc(buf)->array());
}

$String* CertStatusExtension$CertStatusResponse::toString() {
	$useLocalCurrentObjectStackCache();
	$init($Locale);
	$var($MessageFormat, messageFormat, $new($MessageFormat, "\"certificate status response type\": {0}\n\"encoded certificate status\": \'{\'\n{1}\n\'}\'"_s, $Locale::ENGLISH));
	$var($HexDumpEncoder, hexEncoder, $new($HexDumpEncoder));
	$var($String, encoded, hexEncoder->encodeBuffer(this->encodedResponse));
	$var($ObjectArray, messageFields, $new($ObjectArray, {
		$($of($CertStatusExtension$CertStatusRequestType::nameOf(this->statusType))),
		$($of($Utilities::indent(encoded)))
	}));
	return messageFormat->format(messageFields);
}

CertStatusExtension$CertStatusResponse::CertStatusExtension$CertStatusResponse() {
}

$Class* CertStatusExtension$CertStatusResponse::load$($String* name, bool initialize) {
	$loadClass(CertStatusExtension$CertStatusResponse, name, initialize, &_CertStatusExtension$CertStatusResponse_ClassInfo_, allocate$CertStatusExtension$CertStatusResponse);
	return class$;
}

$Class* CertStatusExtension$CertStatusResponse::class$ = nullptr;

		} // ssl
	} // security
} // sun