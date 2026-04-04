#include <sun/security/ssl/SupportedVersionsExtension$CHSupportedVersionsSpec.h>
#include <java/nio/ByteBuffer.h>
#include <java/text/MessageFormat.h>
#include <java/util/Locale.h>
#include <javax/net/ssl/SSLException.h>
#include <javax/net/ssl/SSLProtocolException.h>
#include <sun/security/ssl/Alert.h>
#include <sun/security/ssl/HandshakeContext.h>
#include <sun/security/ssl/ProtocolVersion.h>
#include <sun/security/ssl/Record.h>
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
using $Record = ::sun::security::ssl::Record;

namespace sun {
	namespace security {
		namespace ssl {

void SupportedVersionsExtension$CHSupportedVersionsSpec::init$($ints* requestedProtocols) {
	$set(this, requestedProtocols, requestedProtocols);
}

void SupportedVersionsExtension$CHSupportedVersionsSpec::init$($HandshakeContext* hc, $ByteBuffer* m) {
	$useLocalObjectStack();
	if ($nc(m)->remaining() < 3) {
		$init($Alert);
		$throw($($nc($nc(hc)->conContext)->fatal($Alert::DECODE_ERROR, $$new($SSLProtocolException, "Invalid supported_versions extension: insufficient data"_s))));
	}
	$var($bytes, vbs, $Record::getBytes8(m));
	if (m->hasRemaining()) {
		$init($Alert);
		$throw($($nc($nc(hc)->conContext)->fatal($Alert::DECODE_ERROR, $$new($SSLProtocolException, "Invalid supported_versions extension: unknown extra data"_s))));
	}
	if (vbs == nullptr || vbs->length == 0 || (vbs->length & 1) != 0) {
		$init($Alert);
		$throw($($nc($nc(hc)->conContext)->fatal($Alert::DECODE_ERROR, $$new($SSLProtocolException, "Invalid supported_versions extension: incomplete data"_s))));
	}
	$var($ints, protocols, $new($ints, $nc(vbs)->length >> 1));
	for (int32_t i = 0, j = 0; i < vbs->length;) {
		int8_t major = vbs->get(i++);
		int8_t minor = vbs->get(i++);
		protocols->set(j++, ((major & 0xff) << 8) | (minor & 0xff));
	}
	$set(this, requestedProtocols, protocols);
}

$String* SupportedVersionsExtension$CHSupportedVersionsSpec::toString() {
	$useLocalObjectStack();
	$init($Locale);
	$var($MessageFormat, messageFormat, $new($MessageFormat, "\"versions\": \'[\'{0}\']\'"_s, $Locale::ENGLISH));
	if (this->requestedProtocols == nullptr || this->requestedProtocols->length == 0) {
		$var($ObjectArray, messageFields, $new($ObjectArray, {"<no supported version specified>"_s}));
		return messageFormat->format(messageFields);
	} else {
		$var($StringBuilder, builder, $new($StringBuilder, 512));
		bool isFirst = true;
		{
			$var($ints, arr$, this->requestedProtocols);
			for (int32_t len$ = $nc(arr$)->length, i$ = 0; i$ < len$; ++i$) {
				int32_t pv = arr$->get(i$);
				{
					if (isFirst) {
						isFirst = false;
					} else {
						builder->append(", "_s);
					}
					builder->append($($ProtocolVersion::nameOf(pv)));
				}
			}
		}
		$var($ObjectArray, messageFields, $new($ObjectArray, {$(builder->toString())}));
		return messageFormat->format(messageFields);
	}
}

SupportedVersionsExtension$CHSupportedVersionsSpec::SupportedVersionsExtension$CHSupportedVersionsSpec() {
}

$Class* SupportedVersionsExtension$CHSupportedVersionsSpec::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"requestedProtocols", "[I", nullptr, $FINAL, $field(SupportedVersionsExtension$CHSupportedVersionsSpec, requestedProtocols)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "([I)V", nullptr, $PRIVATE, $method(SupportedVersionsExtension$CHSupportedVersionsSpec, init$, void, $ints*)},
		{"<init>", "(Lsun/security/ssl/HandshakeContext;Ljava/nio/ByteBuffer;)V", nullptr, $PRIVATE, $method(SupportedVersionsExtension$CHSupportedVersionsSpec, init$, void, $HandshakeContext*, $ByteBuffer*), "java.io.IOException"},
		{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(SupportedVersionsExtension$CHSupportedVersionsSpec, toString, $String*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.security.ssl.SupportedVersionsExtension$CHSupportedVersionsSpec", "sun.security.ssl.SupportedVersionsExtension", "CHSupportedVersionsSpec", $STATIC | $FINAL},
		{"sun.security.ssl.SSLExtension$SSLExtensionSpec", "sun.security.ssl.SSLExtension", "SSLExtensionSpec", $STATIC | $INTERFACE | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"sun.security.ssl.SupportedVersionsExtension$CHSupportedVersionsSpec",
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
	$loadClass(SupportedVersionsExtension$CHSupportedVersionsSpec, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(SupportedVersionsExtension$CHSupportedVersionsSpec);
	});
	return class$;
}

$Class* SupportedVersionsExtension$CHSupportedVersionsSpec::class$ = nullptr;

		} // ssl
	} // security
} // sun