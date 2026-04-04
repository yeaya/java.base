#include <sun/security/ssl/SupportedVersionsExtension$SHSupportedVersionsStringizer.h>
#include <java/io/IOException.h>
#include <java/nio/ByteBuffer.h>
#include <sun/security/ssl/HandshakeContext.h>
#include <sun/security/ssl/SupportedVersionsExtension$SHSupportedVersionsSpec.h>
#include <sun/security/ssl/SupportedVersionsExtension.h>
#include <jcpp.h>

using $IOException = ::java::io::IOException;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ByteBuffer = ::java::nio::ByteBuffer;
using $HandshakeContext = ::sun::security::ssl::HandshakeContext;
using $SupportedVersionsExtension$SHSupportedVersionsSpec = ::sun::security::ssl::SupportedVersionsExtension$SHSupportedVersionsSpec;

namespace sun {
	namespace security {
		namespace ssl {

void SupportedVersionsExtension$SHSupportedVersionsStringizer::init$() {
}

$String* SupportedVersionsExtension$SHSupportedVersionsStringizer::toString($HandshakeContext* hc, $ByteBuffer* buffer) {
	try {
		return ($$new($SupportedVersionsExtension$SHSupportedVersionsSpec, hc, buffer))->toString();
	} catch ($IOException& ioe) {
		return ioe->getMessage();
	}
	$shouldNotReachHere();
}

SupportedVersionsExtension$SHSupportedVersionsStringizer::SupportedVersionsExtension$SHSupportedVersionsStringizer() {
}

$Class* SupportedVersionsExtension$SHSupportedVersionsStringizer::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PRIVATE, $method(SupportedVersionsExtension$SHSupportedVersionsStringizer, init$, void)},
		{"toString", "(Lsun/security/ssl/HandshakeContext;Ljava/nio/ByteBuffer;)Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(SupportedVersionsExtension$SHSupportedVersionsStringizer, toString, $String*, $HandshakeContext*, $ByteBuffer*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.security.ssl.SupportedVersionsExtension$SHSupportedVersionsStringizer", "sun.security.ssl.SupportedVersionsExtension", "SHSupportedVersionsStringizer", $PRIVATE | $STATIC | $FINAL},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"sun.security.ssl.SupportedVersionsExtension$SHSupportedVersionsStringizer",
		"java.lang.Object",
		"sun.security.ssl.SSLStringizer",
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"sun.security.ssl.SupportedVersionsExtension"
	};
	$loadClass(SupportedVersionsExtension$SHSupportedVersionsStringizer, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(SupportedVersionsExtension$SHSupportedVersionsStringizer);
	});
	return class$;
}

$Class* SupportedVersionsExtension$SHSupportedVersionsStringizer::class$ = nullptr;

		} // ssl
	} // security
} // sun