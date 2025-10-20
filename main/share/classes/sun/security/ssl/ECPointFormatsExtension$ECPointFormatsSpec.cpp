#include <sun/security/ssl/ECPointFormatsExtension$ECPointFormatsSpec.h>

#include <java/io/IOException.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/Exception.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/NullPointerException.h>
#include <java/lang/String.h>
#include <java/lang/StringBuilder.h>
#include <java/lang/Throwable.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
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

using $IOException = ::java::io::IOException;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $Buffer = ::java::nio::Buffer;
using $ByteBuffer = ::java::nio::ByteBuffer;
using $Format = ::java::text::Format;
using $MessageFormat = ::java::text::MessageFormat;
using $Locale = ::java::util::Locale;
using $SSLException = ::javax::net::ssl::SSLException;
using $SSLProtocolException = ::javax::net::ssl::SSLProtocolException;
using $Alert = ::sun::security::ssl::Alert;
using $ECPointFormatsExtension = ::sun::security::ssl::ECPointFormatsExtension;
using $ECPointFormatsExtension$ECPointFormat = ::sun::security::ssl::ECPointFormatsExtension$ECPointFormat;
using $HandshakeContext = ::sun::security::ssl::HandshakeContext;
using $Record = ::sun::security::ssl::Record;
using $SSLExtension$SSLExtensionSpec = ::sun::security::ssl::SSLExtension$SSLExtensionSpec;
using $TransportContext = ::sun::security::ssl::TransportContext;

namespace sun {
	namespace security {
		namespace ssl {

$FieldInfo _ECPointFormatsExtension$ECPointFormatsSpec_FieldInfo_[] = {
	{"DEFAULT", "Lsun/security/ssl/ECPointFormatsExtension$ECPointFormatsSpec;", nullptr, $STATIC | $FINAL, $staticField(ECPointFormatsExtension$ECPointFormatsSpec, DEFAULT)},
	{"formats", "[B", nullptr, $FINAL, $field(ECPointFormatsExtension$ECPointFormatsSpec, formats)},
	{}
};

$MethodInfo _ECPointFormatsExtension$ECPointFormatsSpec_MethodInfo_[] = {
	{"<init>", "([B)V", nullptr, 0, $method(static_cast<void(ECPointFormatsExtension$ECPointFormatsSpec::*)($bytes*)>(&ECPointFormatsExtension$ECPointFormatsSpec::init$))},
	{"<init>", "(Lsun/security/ssl/HandshakeContext;Ljava/nio/ByteBuffer;)V", nullptr, $PRIVATE, $method(static_cast<void(ECPointFormatsExtension$ECPointFormatsSpec::*)($HandshakeContext*,$ByteBuffer*)>(&ECPointFormatsExtension$ECPointFormatsSpec::init$)), "java.io.IOException"},
	{"hasUncompressedFormat", "()Z", nullptr, $PRIVATE, $method(static_cast<bool(ECPointFormatsExtension$ECPointFormatsSpec::*)()>(&ECPointFormatsExtension$ECPointFormatsSpec::hasUncompressedFormat))},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _ECPointFormatsExtension$ECPointFormatsSpec_InnerClassesInfo_[] = {
	{"sun.security.ssl.ECPointFormatsExtension$ECPointFormatsSpec", "sun.security.ssl.ECPointFormatsExtension", "ECPointFormatsSpec", $STATIC},
	{"sun.security.ssl.SSLExtension$SSLExtensionSpec", "sun.security.ssl.SSLExtension", "SSLExtensionSpec", $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _ECPointFormatsExtension$ECPointFormatsSpec_ClassInfo_ = {
	$ACC_SUPER,
	"sun.security.ssl.ECPointFormatsExtension$ECPointFormatsSpec",
	"java.lang.Object",
	"sun.security.ssl.SSLExtension$SSLExtensionSpec",
	_ECPointFormatsExtension$ECPointFormatsSpec_FieldInfo_,
	_ECPointFormatsExtension$ECPointFormatsSpec_MethodInfo_,
	nullptr,
	nullptr,
	_ECPointFormatsExtension$ECPointFormatsSpec_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.security.ssl.ECPointFormatsExtension"
};

$Object* allocate$ECPointFormatsExtension$ECPointFormatsSpec($Class* clazz) {
	return $of($alloc(ECPointFormatsExtension$ECPointFormatsSpec));
}

ECPointFormatsExtension$ECPointFormatsSpec* ECPointFormatsExtension$ECPointFormatsSpec::DEFAULT = nullptr;

void ECPointFormatsExtension$ECPointFormatsSpec::init$($bytes* formats) {
	$set(this, formats, formats);
}

void ECPointFormatsExtension$ECPointFormatsSpec::init$($HandshakeContext* hc, $ByteBuffer* m) {
	$useLocalCurrentObjectStackCache();
	if (!$nc(m)->hasRemaining()) {
		$init($Alert);
		$throw($($nc($nc(hc)->conContext)->fatal($Alert::DECODE_ERROR, static_cast<$Throwable*>($$new($SSLProtocolException, "Invalid ec_point_formats extension: insufficient data"_s)))));
	}
	$set(this, formats, $Record::getBytes8(m));
}

bool ECPointFormatsExtension$ECPointFormatsSpec::hasUncompressedFormat() {
	{
		$var($bytes, arr$, this->formats);
		int32_t len$ = $nc(arr$)->length;
		int32_t i$ = 0;
		for (; i$ < len$; ++i$) {
			int8_t format = arr$->get(i$);
			{
				$init($ECPointFormatsExtension$ECPointFormat);
				if (format == $ECPointFormatsExtension$ECPointFormat::UNCOMPRESSED->id) {
					return true;
				}
			}
		}
	}
	return false;
}

$String* ECPointFormatsExtension$ECPointFormatsSpec::toString() {
	$useLocalCurrentObjectStackCache();
	$init($Locale);
	$var($MessageFormat, messageFormat, $new($MessageFormat, "\"formats\": \'[\'{0}\']\'"_s, $Locale::ENGLISH));
	if (this->formats == nullptr || $nc(this->formats)->length == 0) {
		$var($ObjectArray, messageFields, $new($ObjectArray, {$of("<no EC point format specified>"_s)}));
		return messageFormat->format(messageFields);
	} else {
		$var($StringBuilder, builder, $new($StringBuilder, 512));
		bool isFirst = true;
		{
			$var($bytes, arr$, this->formats);
			int32_t len$ = $nc(arr$)->length;
			int32_t i$ = 0;
			for (; i$ < len$; ++i$) {
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
		$var($ObjectArray, messageFields, $new($ObjectArray, {$($of(builder->toString()))}));
		return messageFormat->format(messageFields);
	}
}

void clinit$ECPointFormatsExtension$ECPointFormatsSpec($Class* class$) {
	$init($ECPointFormatsExtension$ECPointFormat);
	$assignStatic(ECPointFormatsExtension$ECPointFormatsSpec::DEFAULT, $new(ECPointFormatsExtension$ECPointFormatsSpec, $$new($bytes, {$ECPointFormatsExtension$ECPointFormat::UNCOMPRESSED->id})));
}

ECPointFormatsExtension$ECPointFormatsSpec::ECPointFormatsExtension$ECPointFormatsSpec() {
}

$Class* ECPointFormatsExtension$ECPointFormatsSpec::load$($String* name, bool initialize) {
	$loadClass(ECPointFormatsExtension$ECPointFormatsSpec, name, initialize, &_ECPointFormatsExtension$ECPointFormatsSpec_ClassInfo_, clinit$ECPointFormatsExtension$ECPointFormatsSpec, allocate$ECPointFormatsExtension$ECPointFormatsSpec);
	return class$;
}

$Class* ECPointFormatsExtension$ECPointFormatsSpec::class$ = nullptr;

		} // ssl
	} // security
} // sun