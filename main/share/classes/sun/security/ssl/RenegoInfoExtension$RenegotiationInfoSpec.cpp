#include <sun/security/ssl/RenegoInfoExtension$RenegotiationInfoSpec.h>
#include <java/nio/ByteBuffer.h>
#include <java/text/MessageFormat.h>
#include <java/util/Arrays.h>
#include <java/util/Locale.h>
#include <javax/net/ssl/SSLException.h>
#include <javax/net/ssl/SSLProtocolException.h>
#include <sun/security/ssl/Alert.h>
#include <sun/security/ssl/HandshakeContext.h>
#include <sun/security/ssl/Record.h>
#include <sun/security/ssl/RenegoInfoExtension.h>
#include <sun/security/ssl/TransportContext.h>
#include <sun/security/ssl/Utilities.h>
#include <jcpp.h>

#undef DECODE_ERROR
#undef ENGLISH
#undef NOMINAL

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ByteBuffer = ::java::nio::ByteBuffer;
using $MessageFormat = ::java::text::MessageFormat;
using $Arrays = ::java::util::Arrays;
using $Locale = ::java::util::Locale;
using $SSLProtocolException = ::javax::net::ssl::SSLProtocolException;
using $Alert = ::sun::security::ssl::Alert;
using $HandshakeContext = ::sun::security::ssl::HandshakeContext;
using $Record = ::sun::security::ssl::Record;
using $Utilities = ::sun::security::ssl::Utilities;

namespace sun {
	namespace security {
		namespace ssl {

RenegoInfoExtension$RenegotiationInfoSpec* RenegoInfoExtension$RenegotiationInfoSpec::NOMINAL = nullptr;

void RenegoInfoExtension$RenegotiationInfoSpec::init$($bytes* renegotiatedConnection) {
	$set(this, renegotiatedConnection, $Arrays::copyOf(renegotiatedConnection, $nc(renegotiatedConnection)->length));
}

void RenegoInfoExtension$RenegotiationInfoSpec::init$($HandshakeContext* hc, $ByteBuffer* m) {
	$useLocalObjectStack();
	bool var$0 = !$nc(m)->hasRemaining();
	if (var$0 || m->remaining() < 1) {
		$init($Alert);
		$throw($($nc($nc(hc)->conContext)->fatal($Alert::DECODE_ERROR, $$new($SSLProtocolException, "Invalid renegotiation_info extension data: insufficient data"_s))));
	}
	$set(this, renegotiatedConnection, $Record::getBytes8(m));
}

$String* RenegoInfoExtension$RenegotiationInfoSpec::toString() {
	$useLocalObjectStack();
	$init($Locale);
	$var($MessageFormat, messageFormat, $new($MessageFormat, "\"renegotiated connection\": \'[\'{0}\']\'"_s, $Locale::ENGLISH));
	if ($nc(this->renegotiatedConnection)->length == 0) {
		$var($ObjectArray, messageFields, $new($ObjectArray, {"<no renegotiated connection>"_s}));
		return messageFormat->format(messageFields);
	} else {
		$var($ObjectArray, messageFields, $new($ObjectArray, {$($Utilities::toHexString(this->renegotiatedConnection))}));
		return messageFormat->format(messageFields);
	}
}

void RenegoInfoExtension$RenegotiationInfoSpec::clinit$($Class* clazz) {
	$assignStatic(RenegoInfoExtension$RenegotiationInfoSpec::NOMINAL, $new(RenegoInfoExtension$RenegotiationInfoSpec, $$new($bytes, 0)));
}

RenegoInfoExtension$RenegotiationInfoSpec::RenegoInfoExtension$RenegotiationInfoSpec() {
}

$Class* RenegoInfoExtension$RenegotiationInfoSpec::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"NOMINAL", "Lsun/security/ssl/RenegoInfoExtension$RenegotiationInfoSpec;", nullptr, $STATIC | $FINAL, $staticField(RenegoInfoExtension$RenegotiationInfoSpec, NOMINAL)},
		{"renegotiatedConnection", "[B", nullptr, $PRIVATE | $FINAL, $field(RenegoInfoExtension$RenegotiationInfoSpec, renegotiatedConnection)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "([B)V", nullptr, $PRIVATE, $method(RenegoInfoExtension$RenegotiationInfoSpec, init$, void, $bytes*)},
		{"<init>", "(Lsun/security/ssl/HandshakeContext;Ljava/nio/ByteBuffer;)V", nullptr, $PRIVATE, $method(RenegoInfoExtension$RenegotiationInfoSpec, init$, void, $HandshakeContext*, $ByteBuffer*), "java.io.IOException"},
		{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(RenegoInfoExtension$RenegotiationInfoSpec, toString, $String*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.security.ssl.RenegoInfoExtension$RenegotiationInfoSpec", "sun.security.ssl.RenegoInfoExtension", "RenegotiationInfoSpec", $STATIC | $FINAL},
		{"sun.security.ssl.SSLExtension$SSLExtensionSpec", "sun.security.ssl.SSLExtension", "SSLExtensionSpec", $STATIC | $INTERFACE | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"sun.security.ssl.RenegoInfoExtension$RenegotiationInfoSpec",
		"java.lang.Object",
		"sun.security.ssl.SSLExtension$SSLExtensionSpec",
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"sun.security.ssl.RenegoInfoExtension"
	};
	$loadClass(RenegoInfoExtension$RenegotiationInfoSpec, name, initialize, &classInfo$$, RenegoInfoExtension$RenegotiationInfoSpec::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(RenegoInfoExtension$RenegotiationInfoSpec);
	});
	return class$;
}

$Class* RenegoInfoExtension$RenegotiationInfoSpec::class$ = nullptr;

		} // ssl
	} // security
} // sun