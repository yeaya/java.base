#include <sun/security/ssl/SupportedVersionsExtension$SHSupportedVersionsSpec.h>
#include <java/nio/ByteBuffer.h>
#include <java/text/MessageFormat.h>
#include <java/util/Locale.h>
#include <javax/net/ssl/SSLException.h>
#include <javax/net/ssl/SSLProtocolException.h>
#include <sun/security/ssl/Alert.h>
#include <sun/security/ssl/HandshakeContext.h>
#include <sun/security/ssl/ProtocolVersion.h>
#include <sun/security/ssl/SupportedVersionsExtension.h>
#include <sun/security/ssl/TransportContext.h>
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
using $ProtocolVersion = ::sun::security::ssl::ProtocolVersion;

namespace sun {
	namespace security {
		namespace ssl {

void SupportedVersionsExtension$SHSupportedVersionsSpec::init$($ProtocolVersion* selectedVersion) {
	this->selectedVersion = $nc(selectedVersion)->id;
}

void SupportedVersionsExtension$SHSupportedVersionsSpec::init$($HandshakeContext* hc, $ByteBuffer* m) {
	$useLocalObjectStack();
	if ($nc(m)->remaining() != 2) {
		$init($Alert);
		$throw($($nc($nc(hc)->conContext)->fatal($Alert::DECODE_ERROR, $$new($SSLProtocolException, "Invalid supported_versions: insufficient data"_s))));
	}
	int8_t major = m->get();
	int8_t minor = m->get();
	this->selectedVersion = ((major & 0xff) << 8) | (minor & 0xff);
}

$String* SupportedVersionsExtension$SHSupportedVersionsSpec::toString() {
	$useLocalObjectStack();
	$init($Locale);
	$var($MessageFormat, messageFormat, $new($MessageFormat, "\"selected version\": \'[\'{0}\']\'"_s, $Locale::ENGLISH));
	$var($ObjectArray, messageFields, $new($ObjectArray, {$($ProtocolVersion::nameOf(this->selectedVersion))}));
	return messageFormat->format(messageFields);
}

SupportedVersionsExtension$SHSupportedVersionsSpec::SupportedVersionsExtension$SHSupportedVersionsSpec() {
}

$Class* SupportedVersionsExtension$SHSupportedVersionsSpec::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"selectedVersion", "I", nullptr, $FINAL, $field(SupportedVersionsExtension$SHSupportedVersionsSpec, selectedVersion)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lsun/security/ssl/ProtocolVersion;)V", nullptr, $PRIVATE, $method(SupportedVersionsExtension$SHSupportedVersionsSpec, init$, void, $ProtocolVersion*)},
		{"<init>", "(Lsun/security/ssl/HandshakeContext;Ljava/nio/ByteBuffer;)V", nullptr, $PRIVATE, $method(SupportedVersionsExtension$SHSupportedVersionsSpec, init$, void, $HandshakeContext*, $ByteBuffer*), "java.io.IOException"},
		{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(SupportedVersionsExtension$SHSupportedVersionsSpec, toString, $String*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.security.ssl.SupportedVersionsExtension$SHSupportedVersionsSpec", "sun.security.ssl.SupportedVersionsExtension", "SHSupportedVersionsSpec", $STATIC | $FINAL},
		{"sun.security.ssl.SSLExtension$SSLExtensionSpec", "sun.security.ssl.SSLExtension", "SSLExtensionSpec", $STATIC | $INTERFACE | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"sun.security.ssl.SupportedVersionsExtension$SHSupportedVersionsSpec",
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
		"sun.security.ssl.SupportedVersionsExtension"
	};
	$loadClass(SupportedVersionsExtension$SHSupportedVersionsSpec, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(SupportedVersionsExtension$SHSupportedVersionsSpec);
	});
	return class$;
}

$Class* SupportedVersionsExtension$SHSupportedVersionsSpec::class$ = nullptr;

		} // ssl
	} // security
} // sun