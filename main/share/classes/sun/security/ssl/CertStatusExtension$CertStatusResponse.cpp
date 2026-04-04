#include <sun/security/ssl/CertStatusExtension$CertStatusResponse.h>
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
using $MessageFormat = ::java::text::MessageFormat;
using $Locale = ::java::util::Locale;
using $CertStatusExtension$CertStatusRequestType = ::sun::security::ssl::CertStatusExtension$CertStatusRequestType;
using $Record = ::sun::security::ssl::Record;
using $Utilities = ::sun::security::ssl::Utilities;
using $HexDumpEncoder = ::sun::security::util::HexDumpEncoder;

namespace sun {
	namespace security {
		namespace ssl {

void CertStatusExtension$CertStatusResponse::init$(int8_t statusType, $bytes* respDer) {
	this->statusType = statusType;
	$set(this, encodedResponse, respDer);
}

$bytes* CertStatusExtension$CertStatusResponse::toByteArray() {
	$useLocalObjectStack();
	$var($bytes, outData, $new($bytes, $nc(this->encodedResponse)->length + 4));
	$var($ByteBuffer, buf, $ByteBuffer::wrap(outData));
	$Record::putInt8(buf, this->statusType);
	$Record::putBytes24(buf, this->encodedResponse);
	return $cast($bytes, $nc(buf)->array());
}

$String* CertStatusExtension$CertStatusResponse::toString() {
	$useLocalObjectStack();
	$init($Locale);
	$var($MessageFormat, messageFormat, $new($MessageFormat, "\"certificate status response type\": {0}\n\"encoded certificate status\": \'{\'\n{1}\n\'}\'"_s, $Locale::ENGLISH));
	$var($HexDumpEncoder, hexEncoder, $new($HexDumpEncoder));
	$var($String, encoded, hexEncoder->encodeBuffer(this->encodedResponse));
	$var($ObjectArray, messageFields, $new($ObjectArray, {
		$($CertStatusExtension$CertStatusRequestType::nameOf(this->statusType)),
		$($Utilities::indent(encoded))
	}));
	return messageFormat->format(messageFields);
}

CertStatusExtension$CertStatusResponse::CertStatusExtension$CertStatusResponse() {
}

$Class* CertStatusExtension$CertStatusResponse::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"statusType", "B", nullptr, $FINAL, $field(CertStatusExtension$CertStatusResponse, statusType)},
		{"encodedResponse", "[B", nullptr, $FINAL, $field(CertStatusExtension$CertStatusResponse, encodedResponse)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(B[B)V", nullptr, $PROTECTED, $method(CertStatusExtension$CertStatusResponse, init$, void, int8_t, $bytes*)},
		{"toByteArray", "()[B", nullptr, 0, $virtualMethod(CertStatusExtension$CertStatusResponse, toByteArray, $bytes*), "java.io.IOException"},
		{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(CertStatusExtension$CertStatusResponse, toString, $String*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.security.ssl.CertStatusExtension$CertStatusResponse", "sun.security.ssl.CertStatusExtension", "CertStatusResponse", $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.security.ssl.CertStatusExtension$CertStatusResponse",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"sun.security.ssl.CertStatusExtension"
	};
	$loadClass(CertStatusExtension$CertStatusResponse, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(CertStatusExtension$CertStatusResponse);
	});
	return class$;
}

$Class* CertStatusExtension$CertStatusResponse::class$ = nullptr;

		} // ssl
	} // security
} // sun