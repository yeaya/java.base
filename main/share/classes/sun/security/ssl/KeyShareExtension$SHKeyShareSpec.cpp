#include <sun/security/ssl/KeyShareExtension$SHKeyShareSpec.h>

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
#include <java/lang/Throwable.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/nio/ByteBuffer.h>
#include <java/text/MessageFormat.h>
#include <java/util/Locale.h>
#include <javax/net/ssl/SSLException.h>
#include <javax/net/ssl/SSLProtocolException.h>
#include <sun/security/ssl/Alert.h>
#include <sun/security/ssl/HandshakeContext.h>
#include <sun/security/ssl/KeyShareExtension$KeyShareEntry.h>
#include <sun/security/ssl/KeyShareExtension.h>
#include <sun/security/ssl/NamedGroup.h>
#include <sun/security/ssl/Record.h>
#include <sun/security/ssl/TransportContext.h>
#include <sun/security/ssl/Utilities.h>
#include <sun/security/util/HexDumpEncoder.h>
#include <jcpp.h>

#undef DECODE_ERROR
#undef ENGLISH

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
using $HandshakeContext = ::sun::security::ssl::HandshakeContext;
using $KeyShareExtension = ::sun::security::ssl::KeyShareExtension;
using $KeyShareExtension$KeyShareEntry = ::sun::security::ssl::KeyShareExtension$KeyShareEntry;
using $NamedGroup = ::sun::security::ssl::NamedGroup;
using $Record = ::sun::security::ssl::Record;
using $SSLExtension$SSLExtensionSpec = ::sun::security::ssl::SSLExtension$SSLExtensionSpec;
using $TransportContext = ::sun::security::ssl::TransportContext;
using $Utilities = ::sun::security::ssl::Utilities;
using $HexDumpEncoder = ::sun::security::util::HexDumpEncoder;

namespace sun {
	namespace security {
		namespace ssl {

$FieldInfo _KeyShareExtension$SHKeyShareSpec_FieldInfo_[] = {
	{"serverShare", "Lsun/security/ssl/KeyShareExtension$KeyShareEntry;", nullptr, $FINAL, $field(KeyShareExtension$SHKeyShareSpec, serverShare)},
	{}
};

$MethodInfo _KeyShareExtension$SHKeyShareSpec_MethodInfo_[] = {
	{"<init>", "(Lsun/security/ssl/KeyShareExtension$KeyShareEntry;)V", nullptr, 0, $method(static_cast<void(KeyShareExtension$SHKeyShareSpec::*)($KeyShareExtension$KeyShareEntry*)>(&KeyShareExtension$SHKeyShareSpec::init$))},
	{"<init>", "(Lsun/security/ssl/HandshakeContext;Ljava/nio/ByteBuffer;)V", nullptr, $PRIVATE, $method(static_cast<void(KeyShareExtension$SHKeyShareSpec::*)($HandshakeContext*,$ByteBuffer*)>(&KeyShareExtension$SHKeyShareSpec::init$)), "java.io.IOException"},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _KeyShareExtension$SHKeyShareSpec_InnerClassesInfo_[] = {
	{"sun.security.ssl.KeyShareExtension$SHKeyShareSpec", "sun.security.ssl.KeyShareExtension", "SHKeyShareSpec", $STATIC | $FINAL},
	{"sun.security.ssl.SSLExtension$SSLExtensionSpec", "sun.security.ssl.SSLExtension", "SSLExtensionSpec", $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _KeyShareExtension$SHKeyShareSpec_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"sun.security.ssl.KeyShareExtension$SHKeyShareSpec",
	"java.lang.Object",
	"sun.security.ssl.SSLExtension$SSLExtensionSpec",
	_KeyShareExtension$SHKeyShareSpec_FieldInfo_,
	_KeyShareExtension$SHKeyShareSpec_MethodInfo_,
	nullptr,
	nullptr,
	_KeyShareExtension$SHKeyShareSpec_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.security.ssl.KeyShareExtension"
};

$Object* allocate$KeyShareExtension$SHKeyShareSpec($Class* clazz) {
	return $of($alloc(KeyShareExtension$SHKeyShareSpec));
}

void KeyShareExtension$SHKeyShareSpec::init$($KeyShareExtension$KeyShareEntry* serverShare) {
	$set(this, serverShare, serverShare);
}

void KeyShareExtension$SHKeyShareSpec::init$($HandshakeContext* handshakeContext, $ByteBuffer* buffer) {
	if ($nc(buffer)->remaining() < 5) {
		$init($Alert);
		$throw($($nc($nc(handshakeContext)->conContext)->fatal($Alert::DECODE_ERROR, static_cast<$Throwable*>($$new($SSLProtocolException, $$str({"Invalid key_share extension: insufficient data (length="_s, $$str(buffer->remaining()), ")"_s}))))));
	}
	int32_t namedGroupId = $Record::getInt16(buffer);
	$var($bytes, keyExchange, $Record::getBytes16(buffer));
	if ($nc(buffer)->hasRemaining()) {
		$init($Alert);
		$throw($($nc($nc(handshakeContext)->conContext)->fatal($Alert::DECODE_ERROR, static_cast<$Throwable*>($$new($SSLProtocolException, "Invalid key_share extension: unknown extra data"_s)))));
	}
	$set(this, serverShare, $new($KeyShareExtension$KeyShareEntry, namedGroupId, keyExchange));
}

$String* KeyShareExtension$SHKeyShareSpec::toString() {
	$init($Locale);
	$var($MessageFormat, messageFormat, $new($MessageFormat, "\"server_share\": \'{\'\n  \"named group\": {0}\n  \"key_exchange\": \'{\'\n{1}\n  \'}\'\n\'}\',"_s, $Locale::ENGLISH));
	$var($HexDumpEncoder, hexEncoder, $new($HexDumpEncoder));
	$var($ObjectArray, messageFields, $new($ObjectArray, {
		$($of($NamedGroup::nameOf($nc(this->serverShare)->namedGroupId))),
		$($of($Utilities::indent($(hexEncoder->encode($nc(this->serverShare)->keyExchange)), "    "_s)))
	}));
	return messageFormat->format(messageFields);
}

KeyShareExtension$SHKeyShareSpec::KeyShareExtension$SHKeyShareSpec() {
}

$Class* KeyShareExtension$SHKeyShareSpec::load$($String* name, bool initialize) {
	$loadClass(KeyShareExtension$SHKeyShareSpec, name, initialize, &_KeyShareExtension$SHKeyShareSpec_ClassInfo_, allocate$KeyShareExtension$SHKeyShareSpec);
	return class$;
}

$Class* KeyShareExtension$SHKeyShareSpec::class$ = nullptr;

		} // ssl
	} // security
} // sun