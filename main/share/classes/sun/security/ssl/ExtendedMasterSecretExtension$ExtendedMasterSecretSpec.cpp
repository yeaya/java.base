#include <sun/security/ssl/ExtendedMasterSecretExtension$ExtendedMasterSecretSpec.h>

#include <java/io/IOException.h>
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
#include <javax/net/ssl/SSLException.h>
#include <javax/net/ssl/SSLProtocolException.h>
#include <sun/security/ssl/Alert.h>
#include <sun/security/ssl/ExtendedMasterSecretExtension.h>
#include <sun/security/ssl/HandshakeContext.h>
#include <sun/security/ssl/TransportContext.h>
#include <jcpp.h>

#undef DECODE_ERROR
#undef NOMINAL

using $IOException = ::java::io::IOException;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $Buffer = ::java::nio::Buffer;
using $ByteBuffer = ::java::nio::ByteBuffer;
using $SSLException = ::javax::net::ssl::SSLException;
using $SSLProtocolException = ::javax::net::ssl::SSLProtocolException;
using $Alert = ::sun::security::ssl::Alert;
using $ExtendedMasterSecretExtension = ::sun::security::ssl::ExtendedMasterSecretExtension;
using $HandshakeContext = ::sun::security::ssl::HandshakeContext;
using $SSLExtension$SSLExtensionSpec = ::sun::security::ssl::SSLExtension$SSLExtensionSpec;
using $TransportContext = ::sun::security::ssl::TransportContext;

namespace sun {
	namespace security {
		namespace ssl {

$FieldInfo _ExtendedMasterSecretExtension$ExtendedMasterSecretSpec_FieldInfo_[] = {
	{"NOMINAL", "Lsun/security/ssl/ExtendedMasterSecretExtension$ExtendedMasterSecretSpec;", nullptr, $STATIC | $FINAL, $staticField(ExtendedMasterSecretExtension$ExtendedMasterSecretSpec, NOMINAL)},
	{}
};

$MethodInfo _ExtendedMasterSecretExtension$ExtendedMasterSecretSpec_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(ExtendedMasterSecretExtension$ExtendedMasterSecretSpec::*)()>(&ExtendedMasterSecretExtension$ExtendedMasterSecretSpec::init$))},
	{"<init>", "(Lsun/security/ssl/HandshakeContext;Ljava/nio/ByteBuffer;)V", nullptr, $PRIVATE, $method(static_cast<void(ExtendedMasterSecretExtension$ExtendedMasterSecretSpec::*)($HandshakeContext*,$ByteBuffer*)>(&ExtendedMasterSecretExtension$ExtendedMasterSecretSpec::init$)), "java.io.IOException"},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _ExtendedMasterSecretExtension$ExtendedMasterSecretSpec_InnerClassesInfo_[] = {
	{"sun.security.ssl.ExtendedMasterSecretExtension$ExtendedMasterSecretSpec", "sun.security.ssl.ExtendedMasterSecretExtension", "ExtendedMasterSecretSpec", $STATIC | $FINAL},
	{"sun.security.ssl.SSLExtension$SSLExtensionSpec", "sun.security.ssl.SSLExtension", "SSLExtensionSpec", $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _ExtendedMasterSecretExtension$ExtendedMasterSecretSpec_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"sun.security.ssl.ExtendedMasterSecretExtension$ExtendedMasterSecretSpec",
	"java.lang.Object",
	"sun.security.ssl.SSLExtension$SSLExtensionSpec",
	_ExtendedMasterSecretExtension$ExtendedMasterSecretSpec_FieldInfo_,
	_ExtendedMasterSecretExtension$ExtendedMasterSecretSpec_MethodInfo_,
	nullptr,
	nullptr,
	_ExtendedMasterSecretExtension$ExtendedMasterSecretSpec_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.security.ssl.ExtendedMasterSecretExtension"
};

$Object* allocate$ExtendedMasterSecretExtension$ExtendedMasterSecretSpec($Class* clazz) {
	return $of($alloc(ExtendedMasterSecretExtension$ExtendedMasterSecretSpec));
}

ExtendedMasterSecretExtension$ExtendedMasterSecretSpec* ExtendedMasterSecretExtension$ExtendedMasterSecretSpec::NOMINAL = nullptr;

void ExtendedMasterSecretExtension$ExtendedMasterSecretSpec::init$() {
}

void ExtendedMasterSecretExtension$ExtendedMasterSecretSpec::init$($HandshakeContext* hc, $ByteBuffer* m) {
	if ($nc(m)->hasRemaining()) {
		$init($Alert);
		$throw($($nc($nc(hc)->conContext)->fatal($Alert::DECODE_ERROR, static_cast<$Throwable*>($$new($SSLProtocolException, "Invalid extended_master_secret extension data: not empty"_s)))));
	}
}

$String* ExtendedMasterSecretExtension$ExtendedMasterSecretSpec::toString() {
	return "<empty>"_s;
}

void clinit$ExtendedMasterSecretExtension$ExtendedMasterSecretSpec($Class* class$) {
	$assignStatic(ExtendedMasterSecretExtension$ExtendedMasterSecretSpec::NOMINAL, $new(ExtendedMasterSecretExtension$ExtendedMasterSecretSpec));
}

ExtendedMasterSecretExtension$ExtendedMasterSecretSpec::ExtendedMasterSecretExtension$ExtendedMasterSecretSpec() {
}

$Class* ExtendedMasterSecretExtension$ExtendedMasterSecretSpec::load$($String* name, bool initialize) {
	$loadClass(ExtendedMasterSecretExtension$ExtendedMasterSecretSpec, name, initialize, &_ExtendedMasterSecretExtension$ExtendedMasterSecretSpec_ClassInfo_, clinit$ExtendedMasterSecretExtension$ExtendedMasterSecretSpec, allocate$ExtendedMasterSecretExtension$ExtendedMasterSecretSpec);
	return class$;
}

$Class* ExtendedMasterSecretExtension$ExtendedMasterSecretSpec::class$ = nullptr;

		} // ssl
	} // security
} // sun