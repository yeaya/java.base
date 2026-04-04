#include <sun/security/ssl/PreSharedKeyExtension$SHPreSharedKeySpec.h>
#include <java/nio/ByteBuffer.h>
#include <java/text/MessageFormat.h>
#include <java/util/Locale.h>
#include <javax/net/ssl/SSLException.h>
#include <javax/net/ssl/SSLProtocolException.h>
#include <sun/security/ssl/Alert.h>
#include <sun/security/ssl/HandshakeContext.h>
#include <sun/security/ssl/PreSharedKeyExtension.h>
#include <sun/security/ssl/Record.h>
#include <sun/security/ssl/TransportContext.h>
#include <sun/security/ssl/Utilities.h>
#include <jcpp.h>

#undef DECODE_ERROR
#undef ENGLISH

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ByteBuffer = ::java::nio::ByteBuffer;
using $MessageFormat = ::java::text::MessageFormat;
using $Locale = ::java::util::Locale;
using $SSLProtocolException = ::javax::net::ssl::SSLProtocolException;
using $Alert = ::sun::security::ssl::Alert;
using $HandshakeContext = ::sun::security::ssl::HandshakeContext;
using $Record = ::sun::security::ssl::Record;
using $Utilities = ::sun::security::ssl::Utilities;

namespace sun {
	namespace security {
		namespace ssl {

void PreSharedKeyExtension$SHPreSharedKeySpec::init$(int32_t selectedIdentity) {
	this->selectedIdentity = selectedIdentity;
}

void PreSharedKeyExtension$SHPreSharedKeySpec::init$($HandshakeContext* hc, $ByteBuffer* m) {
	$useLocalObjectStack();
	if ($nc(m)->remaining() < 2) {
		$init($Alert);
		$throw($($nc($nc(hc)->conContext)->fatal($Alert::DECODE_ERROR, $$new($SSLProtocolException, $$str({"Invalid pre_shared_key extension: insufficient selected_identity (length="_s, $$str(m->remaining()), ")"_s})))));
	}
	this->selectedIdentity = $Record::getInt16(m);
}

$bytes* PreSharedKeyExtension$SHPreSharedKeySpec::getEncoded() {
	return $new($bytes, {
		(int8_t)((this->selectedIdentity >> 8) & 0xff),
		(int8_t)(this->selectedIdentity & 0xff)
	});
}

$String* PreSharedKeyExtension$SHPreSharedKeySpec::toString() {
	$useLocalObjectStack();
	$init($Locale);
	$var($MessageFormat, messageFormat, $new($MessageFormat, "\"PreSharedKey\": \'{\'\n  \"selected_identity\"      : \"{0}\",\n\'}\'"_s, $Locale::ENGLISH));
	$var($ObjectArray, messageFields, $new($ObjectArray, {$($Utilities::byte16HexString(this->selectedIdentity))}));
	return messageFormat->format(messageFields);
}

PreSharedKeyExtension$SHPreSharedKeySpec::PreSharedKeyExtension$SHPreSharedKeySpec() {
}

$Class* PreSharedKeyExtension$SHPreSharedKeySpec::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"selectedIdentity", "I", nullptr, $FINAL, $field(PreSharedKeyExtension$SHPreSharedKeySpec, selectedIdentity)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(I)V", nullptr, 0, $method(PreSharedKeyExtension$SHPreSharedKeySpec, init$, void, int32_t)},
		{"<init>", "(Lsun/security/ssl/HandshakeContext;Ljava/nio/ByteBuffer;)V", nullptr, 0, $method(PreSharedKeyExtension$SHPreSharedKeySpec, init$, void, $HandshakeContext*, $ByteBuffer*), "java.io.IOException"},
		{"getEncoded", "()[B", nullptr, 0, $method(PreSharedKeyExtension$SHPreSharedKeySpec, getEncoded, $bytes*)},
		{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(PreSharedKeyExtension$SHPreSharedKeySpec, toString, $String*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.security.ssl.PreSharedKeyExtension$SHPreSharedKeySpec", "sun.security.ssl.PreSharedKeyExtension", "SHPreSharedKeySpec", $PRIVATE | $STATIC | $FINAL},
		{"sun.security.ssl.SSLExtension$SSLExtensionSpec", "sun.security.ssl.SSLExtension", "SSLExtensionSpec", $STATIC | $INTERFACE | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"sun.security.ssl.PreSharedKeyExtension$SHPreSharedKeySpec",
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
		"sun.security.ssl.PreSharedKeyExtension"
	};
	$loadClass(PreSharedKeyExtension$SHPreSharedKeySpec, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(PreSharedKeyExtension$SHPreSharedKeySpec);
	});
	return class$;
}

$Class* PreSharedKeyExtension$SHPreSharedKeySpec::class$ = nullptr;

		} // ssl
	} // security
} // sun