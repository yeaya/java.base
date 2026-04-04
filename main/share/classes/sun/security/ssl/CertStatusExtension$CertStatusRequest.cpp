#include <sun/security/ssl/CertStatusExtension$CertStatusRequest.h>
#include <java/text/MessageFormat.h>
#include <java/util/Locale.h>
#include <sun/security/ssl/CertStatusExtension$CertStatusRequestType.h>
#include <sun/security/ssl/CertStatusExtension.h>
#include <sun/security/ssl/Utilities.h>
#include <sun/security/util/HexDumpEncoder.h>
#include <jcpp.h>

#undef ENGLISH

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $MessageFormat = ::java::text::MessageFormat;
using $Locale = ::java::util::Locale;
using $CertStatusExtension$CertStatusRequestType = ::sun::security::ssl::CertStatusExtension$CertStatusRequestType;
using $Utilities = ::sun::security::ssl::Utilities;
using $HexDumpEncoder = ::sun::security::util::HexDumpEncoder;

namespace sun {
	namespace security {
		namespace ssl {

void CertStatusExtension$CertStatusRequest::init$(int8_t statusType, $bytes* encodedRequest) {
	this->statusType = statusType;
	$set(this, encodedRequest, encodedRequest);
}

$String* CertStatusExtension$CertStatusRequest::toString() {
	$useLocalObjectStack();
	$init($Locale);
	$var($MessageFormat, messageFormat, $new($MessageFormat, "\"certificate status type\": {0}\n\"encoded certificate status\": \'{\'\n{1}\n\'}\'"_s, $Locale::ENGLISH));
	$var($HexDumpEncoder, hexEncoder, $new($HexDumpEncoder));
	$var($String, encoded, hexEncoder->encodeBuffer(this->encodedRequest));
	$var($ObjectArray, messageFields, $new($ObjectArray, {
		$($CertStatusExtension$CertStatusRequestType::nameOf(this->statusType)),
		$($Utilities::indent(encoded))
	}));
	return messageFormat->format(messageFields);
}

CertStatusExtension$CertStatusRequest::CertStatusExtension$CertStatusRequest() {
}

$Class* CertStatusExtension$CertStatusRequest::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"statusType", "B", nullptr, $FINAL, $field(CertStatusExtension$CertStatusRequest, statusType)},
		{"encodedRequest", "[B", nullptr, $FINAL, $field(CertStatusExtension$CertStatusRequest, encodedRequest)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(B[B)V", nullptr, $PROTECTED, $method(CertStatusExtension$CertStatusRequest, init$, void, int8_t, $bytes*)},
		{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(CertStatusExtension$CertStatusRequest, toString, $String*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.security.ssl.CertStatusExtension$CertStatusRequest", "sun.security.ssl.CertStatusExtension", "CertStatusRequest", $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.security.ssl.CertStatusExtension$CertStatusRequest",
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
	$loadClass(CertStatusExtension$CertStatusRequest, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(CertStatusExtension$CertStatusRequest);
	});
	return class$;
}

$Class* CertStatusExtension$CertStatusRequest::class$ = nullptr;

		} // ssl
	} // security
} // sun