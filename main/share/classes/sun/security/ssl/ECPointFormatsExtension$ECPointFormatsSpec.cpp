#include <sun/security/ssl/ECPointFormatsExtension$ECPointFormatsSpec.h>
#include <java/nio/ByteBuffer.h>
#include <java/text/MessageFormat.h>
#include <java/util/Locale.h>
#include <javax/net/ssl/SSLException.h>
#include <javax/net/ssl/SSLProtocolException.h>
#include <sun/security/ssl/Alert.h>
#include <sun/security/ssl/ECPointFormatsExtension$ECPointFormat.h>
#include <sun/security/ssl/ECPointFormatsExtension.h>
#include <sun/security/ssl/HandshakeContext.h>
#include <sun/security/ssl/Record.h>
#include <sun/security/ssl/TransportContext.h>
#include <jcpp.h>

#undef DECODE_ERROR
#undef DEFAULT
#undef ENGLISH
#undef UNCOMPRESSED

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ByteBuffer = ::java::nio::ByteBuffer;
using $MessageFormat = ::java::text::MessageFormat;
using $Locale = ::java::util::Locale;
using $SSLProtocolException = ::javax::net::ssl::SSLProtocolException;
using $Alert = ::sun::security::ssl::Alert;
using $ECPointFormatsExtension$ECPointFormat = ::sun::security::ssl::ECPointFormatsExtension$ECPointFormat;
using $HandshakeContext = ::sun::security::ssl::HandshakeContext;
using $Record = ::sun::security::ssl::Record;

namespace sun {
	namespace security {
		namespace ssl {

ECPointFormatsExtension$ECPointFormatsSpec* ECPointFormatsExtension$ECPointFormatsSpec::DEFAULT = nullptr;

void ECPointFormatsExtension$ECPointFormatsSpec::init$($bytes* formats) {
	$set(this, formats, formats);
}

void ECPointFormatsExtension$ECPointFormatsSpec::init$($HandshakeContext* hc, $ByteBuffer* m) {
	$useLocalObjectStack();
	if (!$nc(m)->hasRemaining()) {
		$init($Alert);
		$throw($($nc($nc(hc)->conContext)->fatal($Alert::DECODE_ERROR, $$new($SSLProtocolException, "Invalid ec_point_formats extension: insufficient data"_s))));
	}
	$set(this, formats, $Record::getBytes8(m));
}

bool ECPointFormatsExtension$ECPointFormatsSpec::hasUncompressedFormat() {
	$var($bytes, arr$, this->formats);
	for (int32_t len$ = $nc(arr$)->length, i$ = 0; i$ < len$; ++i$) {
		int8_t format = arr$->get(i$);
		$init($ECPointFormatsExtension$ECPointFormat);
		if (format == $ECPointFormatsExtension$ECPointFormat::UNCOMPRESSED->id) {
			return true;
		}
	}
	return false;
}

$String* ECPointFormatsExtension$ECPointFormatsSpec::toString() {
	$useLocalObjectStack();
	$init($Locale);
	$var($MessageFormat, messageFormat, $new($MessageFormat, "\"formats\": \'[\'{0}\']\'"_s, $Locale::ENGLISH));
	if (this->formats == nullptr || this->formats->length == 0) {
		$var($ObjectArray, messageFields, $new($ObjectArray, {"<no EC point format specified>"_s}));
		return messageFormat->format(messageFields);
	} else {
		$var($StringBuilder, builder, $new($StringBuilder, 512));
		bool isFirst = true;
		{
			$var($bytes, arr$, this->formats);
			for (int32_t len$ = $nc(arr$)->length, i$ = 0; i$ < len$; ++i$) {
				int8_t pf = arr$->get(i$);
				{
					if (isFirst) {
						isFirst = false;
					} else {
						builder->append(", "_s);
					}
					builder->append($($ECPointFormatsExtension$ECPointFormat::nameOf(pf)));
				}
			}
		}
		$var($ObjectArray, messageFields, $new($ObjectArray, {$(builder->toString())}));
		return messageFormat->format(messageFields);
	}
}

void ECPointFormatsExtension$ECPointFormatsSpec::clinit$($Class* clazz) {
	$init($ECPointFormatsExtension$ECPointFormat);
	$assignStatic(ECPointFormatsExtension$ECPointFormatsSpec::DEFAULT, $new(ECPointFormatsExtension$ECPointFormatsSpec, $$new($bytes, {$ECPointFormatsExtension$ECPointFormat::UNCOMPRESSED->id})));
}

ECPointFormatsExtension$ECPointFormatsSpec::ECPointFormatsExtension$ECPointFormatsSpec() {
}

$Class* ECPointFormatsExtension$ECPointFormatsSpec::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"DEFAULT", "Lsun/security/ssl/ECPointFormatsExtension$ECPointFormatsSpec;", nullptr, $STATIC | $FINAL, $staticField(ECPointFormatsExtension$ECPointFormatsSpec, DEFAULT)},
		{"formats", "[B", nullptr, $FINAL, $field(ECPointFormatsExtension$ECPointFormatsSpec, formats)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "([B)V", nullptr, 0, $method(ECPointFormatsExtension$ECPointFormatsSpec, init$, void, $bytes*)},
		{"<init>", "(Lsun/security/ssl/HandshakeContext;Ljava/nio/ByteBuffer;)V", nullptr, $PRIVATE, $method(ECPointFormatsExtension$ECPointFormatsSpec, init$, void, $HandshakeContext*, $ByteBuffer*), "java.io.IOException"},
		{"hasUncompressedFormat", "()Z", nullptr, $PRIVATE, $method(ECPointFormatsExtension$ECPointFormatsSpec, hasUncompressedFormat, bool)},
		{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(ECPointFormatsExtension$ECPointFormatsSpec, toString, $String*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.security.ssl.ECPointFormatsExtension$ECPointFormatsSpec", "sun.security.ssl.ECPointFormatsExtension", "ECPointFormatsSpec", $STATIC},
		{"sun.security.ssl.SSLExtension$SSLExtensionSpec", "sun.security.ssl.SSLExtension", "SSLExtensionSpec", $STATIC | $INTERFACE | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.security.ssl.ECPointFormatsExtension$ECPointFormatsSpec",
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
		"sun.security.ssl.ECPointFormatsExtension"
	};
	$loadClass(ECPointFormatsExtension$ECPointFormatsSpec, name, initialize, &classInfo$$, ECPointFormatsExtension$ECPointFormatsSpec::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(ECPointFormatsExtension$ECPointFormatsSpec);
	});
	return class$;
}

$Class* ECPointFormatsExtension$ECPointFormatsSpec::class$ = nullptr;

		} // ssl
	} // security
} // sun