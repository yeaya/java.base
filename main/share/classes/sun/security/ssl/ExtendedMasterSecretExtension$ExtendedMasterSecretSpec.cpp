#include <sun/security/ssl/ExtendedMasterSecretExtension$ExtendedMasterSecretSpec.h>
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

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ByteBuffer = ::java::nio::ByteBuffer;
using $SSLProtocolException = ::javax::net::ssl::SSLProtocolException;
using $Alert = ::sun::security::ssl::Alert;
using $HandshakeContext = ::sun::security::ssl::HandshakeContext;

namespace sun {
	namespace security {
		namespace ssl {

ExtendedMasterSecretExtension$ExtendedMasterSecretSpec* ExtendedMasterSecretExtension$ExtendedMasterSecretSpec::NOMINAL = nullptr;

void ExtendedMasterSecretExtension$ExtendedMasterSecretSpec::init$() {
}

void ExtendedMasterSecretExtension$ExtendedMasterSecretSpec::init$($HandshakeContext* hc, $ByteBuffer* m) {
	$useLocalObjectStack();
	if ($nc(m)->hasRemaining()) {
		$init($Alert);
		$throw($($nc($nc(hc)->conContext)->fatal($Alert::DECODE_ERROR, $$new($SSLProtocolException, "Invalid extended_master_secret extension data: not empty"_s))));
	}
}

$String* ExtendedMasterSecretExtension$ExtendedMasterSecretSpec::toString() {
	return "<empty>"_s;
}

void ExtendedMasterSecretExtension$ExtendedMasterSecretSpec::clinit$($Class* clazz) {
	$assignStatic(ExtendedMasterSecretExtension$ExtendedMasterSecretSpec::NOMINAL, $new(ExtendedMasterSecretExtension$ExtendedMasterSecretSpec));
}

ExtendedMasterSecretExtension$ExtendedMasterSecretSpec::ExtendedMasterSecretExtension$ExtendedMasterSecretSpec() {
}

$Class* ExtendedMasterSecretExtension$ExtendedMasterSecretSpec::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"NOMINAL", "Lsun/security/ssl/ExtendedMasterSecretExtension$ExtendedMasterSecretSpec;", nullptr, $STATIC | $FINAL, $staticField(ExtendedMasterSecretExtension$ExtendedMasterSecretSpec, NOMINAL)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PRIVATE, $method(ExtendedMasterSecretExtension$ExtendedMasterSecretSpec, init$, void)},
		{"<init>", "(Lsun/security/ssl/HandshakeContext;Ljava/nio/ByteBuffer;)V", nullptr, $PRIVATE, $method(ExtendedMasterSecretExtension$ExtendedMasterSecretSpec, init$, void, $HandshakeContext*, $ByteBuffer*), "java.io.IOException"},
		{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(ExtendedMasterSecretExtension$ExtendedMasterSecretSpec, toString, $String*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.security.ssl.ExtendedMasterSecretExtension$ExtendedMasterSecretSpec", "sun.security.ssl.ExtendedMasterSecretExtension", "ExtendedMasterSecretSpec", $STATIC | $FINAL},
		{"sun.security.ssl.SSLExtension$SSLExtensionSpec", "sun.security.ssl.SSLExtension", "SSLExtensionSpec", $STATIC | $INTERFACE | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"sun.security.ssl.ExtendedMasterSecretExtension$ExtendedMasterSecretSpec",
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
		"sun.security.ssl.ExtendedMasterSecretExtension"
	};
	$loadClass(ExtendedMasterSecretExtension$ExtendedMasterSecretSpec, name, initialize, &classInfo$$, ExtendedMasterSecretExtension$ExtendedMasterSecretSpec::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(ExtendedMasterSecretExtension$ExtendedMasterSecretSpec);
	});
	return class$;
}

$Class* ExtendedMasterSecretExtension$ExtendedMasterSecretSpec::class$ = nullptr;

		} // ssl
	} // security
} // sun