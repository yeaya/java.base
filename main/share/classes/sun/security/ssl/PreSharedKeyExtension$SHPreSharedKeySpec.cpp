#include <sun/security/ssl/PreSharedKeyExtension$SHPreSharedKeySpec.h>

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
#include <sun/security/ssl/PreSharedKeyExtension.h>
#include <sun/security/ssl/Record.h>
#include <sun/security/ssl/TransportContext.h>
#include <sun/security/ssl/Utilities.h>
#include <jcpp.h>

#undef ENGLISH
#undef DECODE_ERROR

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
using $PreSharedKeyExtension = ::sun::security::ssl::PreSharedKeyExtension;
using $Record = ::sun::security::ssl::Record;
using $SSLExtension$SSLExtensionSpec = ::sun::security::ssl::SSLExtension$SSLExtensionSpec;
using $TransportContext = ::sun::security::ssl::TransportContext;
using $Utilities = ::sun::security::ssl::Utilities;

namespace sun {
	namespace security {
		namespace ssl {

$FieldInfo _PreSharedKeyExtension$SHPreSharedKeySpec_FieldInfo_[] = {
	{"selectedIdentity", "I", nullptr, $FINAL, $field(PreSharedKeyExtension$SHPreSharedKeySpec, selectedIdentity)},
	{}
};

$MethodInfo _PreSharedKeyExtension$SHPreSharedKeySpec_MethodInfo_[] = {
	{"<init>", "(I)V", nullptr, 0, $method(static_cast<void(PreSharedKeyExtension$SHPreSharedKeySpec::*)(int32_t)>(&PreSharedKeyExtension$SHPreSharedKeySpec::init$))},
	{"<init>", "(Lsun/security/ssl/HandshakeContext;Ljava/nio/ByteBuffer;)V", nullptr, 0, $method(static_cast<void(PreSharedKeyExtension$SHPreSharedKeySpec::*)($HandshakeContext*,$ByteBuffer*)>(&PreSharedKeyExtension$SHPreSharedKeySpec::init$)), "java.io.IOException"},
	{"getEncoded", "()[B", nullptr, 0, $method(static_cast<$bytes*(PreSharedKeyExtension$SHPreSharedKeySpec::*)()>(&PreSharedKeyExtension$SHPreSharedKeySpec::getEncoded))},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _PreSharedKeyExtension$SHPreSharedKeySpec_InnerClassesInfo_[] = {
	{"sun.security.ssl.PreSharedKeyExtension$SHPreSharedKeySpec", "sun.security.ssl.PreSharedKeyExtension", "SHPreSharedKeySpec", $PRIVATE | $STATIC | $FINAL},
	{"sun.security.ssl.SSLExtension$SSLExtensionSpec", "sun.security.ssl.SSLExtension", "SSLExtensionSpec", $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _PreSharedKeyExtension$SHPreSharedKeySpec_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"sun.security.ssl.PreSharedKeyExtension$SHPreSharedKeySpec",
	"java.lang.Object",
	"sun.security.ssl.SSLExtension$SSLExtensionSpec",
	_PreSharedKeyExtension$SHPreSharedKeySpec_FieldInfo_,
	_PreSharedKeyExtension$SHPreSharedKeySpec_MethodInfo_,
	nullptr,
	nullptr,
	_PreSharedKeyExtension$SHPreSharedKeySpec_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.security.ssl.PreSharedKeyExtension"
};

$Object* allocate$PreSharedKeyExtension$SHPreSharedKeySpec($Class* clazz) {
	return $of($alloc(PreSharedKeyExtension$SHPreSharedKeySpec));
}

void PreSharedKeyExtension$SHPreSharedKeySpec::init$(int32_t selectedIdentity) {
	this->selectedIdentity = selectedIdentity;
}

void PreSharedKeyExtension$SHPreSharedKeySpec::init$($HandshakeContext* hc, $ByteBuffer* m) {
	if ($nc(m)->remaining() < 2) {
		$init($Alert);
		$throw($($nc($nc(hc)->conContext)->fatal($Alert::DECODE_ERROR, static_cast<$Throwable*>($$new($SSLProtocolException, $$str({"Invalid pre_shared_key extension: insufficient selected_identity (length="_s, $$str(m->remaining()), ")"_s}))))));
	}
	this->selectedIdentity = $Record::getInt16(m);
}

$bytes* PreSharedKeyExtension$SHPreSharedKeySpec::getEncoded() {
	return $new($bytes, {
		(int8_t)((int32_t)((this->selectedIdentity >> 8) & (uint32_t)255)),
		(int8_t)((int32_t)(this->selectedIdentity & (uint32_t)255))
	});
}

$String* PreSharedKeyExtension$SHPreSharedKeySpec::toString() {
	$init($Locale);
	$var($MessageFormat, messageFormat, $new($MessageFormat, "\"PreSharedKey\": \'{\'\n  \"selected_identity\"      : \"{0}\",\n\'}\'"_s, $Locale::ENGLISH));
	$var($ObjectArray, messageFields, $new($ObjectArray, {$($of($Utilities::byte16HexString(this->selectedIdentity)))}));
	return messageFormat->format(messageFields);
}

PreSharedKeyExtension$SHPreSharedKeySpec::PreSharedKeyExtension$SHPreSharedKeySpec() {
}

$Class* PreSharedKeyExtension$SHPreSharedKeySpec::load$($String* name, bool initialize) {
	$loadClass(PreSharedKeyExtension$SHPreSharedKeySpec, name, initialize, &_PreSharedKeyExtension$SHPreSharedKeySpec_ClassInfo_, allocate$PreSharedKeyExtension$SHPreSharedKeySpec);
	return class$;
}

$Class* PreSharedKeyExtension$SHPreSharedKeySpec::class$ = nullptr;

		} // ssl
	} // security
} // sun