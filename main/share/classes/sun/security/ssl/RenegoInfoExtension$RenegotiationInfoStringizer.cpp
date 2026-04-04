#include <sun/security/ssl/RenegoInfoExtension$RenegotiationInfoStringizer.h>
#include <java/io/IOException.h>
#include <java/nio/ByteBuffer.h>
#include <sun/security/ssl/HandshakeContext.h>
#include <sun/security/ssl/RenegoInfoExtension$RenegotiationInfoSpec.h>
#include <sun/security/ssl/RenegoInfoExtension.h>
#include <jcpp.h>

using $IOException = ::java::io::IOException;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ByteBuffer = ::java::nio::ByteBuffer;
using $HandshakeContext = ::sun::security::ssl::HandshakeContext;
using $RenegoInfoExtension$RenegotiationInfoSpec = ::sun::security::ssl::RenegoInfoExtension$RenegotiationInfoSpec;

namespace sun {
	namespace security {
		namespace ssl {

void RenegoInfoExtension$RenegotiationInfoStringizer::init$() {
}

$String* RenegoInfoExtension$RenegotiationInfoStringizer::toString($HandshakeContext* hc, $ByteBuffer* buffer) {
	try {
		return ($$new($RenegoInfoExtension$RenegotiationInfoSpec, hc, buffer))->toString();
	} catch ($IOException& ioe) {
		return ioe->getMessage();
	}
	$shouldNotReachHere();
}

RenegoInfoExtension$RenegotiationInfoStringizer::RenegoInfoExtension$RenegotiationInfoStringizer() {
}

$Class* RenegoInfoExtension$RenegotiationInfoStringizer::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PRIVATE, $method(RenegoInfoExtension$RenegotiationInfoStringizer, init$, void)},
		{"toString", "(Lsun/security/ssl/HandshakeContext;Ljava/nio/ByteBuffer;)Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(RenegoInfoExtension$RenegotiationInfoStringizer, toString, $String*, $HandshakeContext*, $ByteBuffer*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.security.ssl.RenegoInfoExtension$RenegotiationInfoStringizer", "sun.security.ssl.RenegoInfoExtension", "RenegotiationInfoStringizer", $PRIVATE | $STATIC | $FINAL},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"sun.security.ssl.RenegoInfoExtension$RenegotiationInfoStringizer",
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
		"sun.security.ssl.RenegoInfoExtension"
	};
	$loadClass(RenegoInfoExtension$RenegotiationInfoStringizer, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(RenegoInfoExtension$RenegotiationInfoStringizer);
	});
	return class$;
}

$Class* RenegoInfoExtension$RenegotiationInfoStringizer::class$ = nullptr;

		} // ssl
	} // security
} // sun