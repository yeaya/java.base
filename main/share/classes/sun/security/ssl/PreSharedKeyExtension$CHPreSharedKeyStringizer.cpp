#include <sun/security/ssl/PreSharedKeyExtension$CHPreSharedKeyStringizer.h>
#include <java/nio/ByteBuffer.h>
#include <sun/security/ssl/HandshakeContext.h>
#include <sun/security/ssl/PreSharedKeyExtension$CHPreSharedKeySpec.h>
#include <sun/security/ssl/PreSharedKeyExtension.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ByteBuffer = ::java::nio::ByteBuffer;
using $HandshakeContext = ::sun::security::ssl::HandshakeContext;
using $PreSharedKeyExtension$CHPreSharedKeySpec = ::sun::security::ssl::PreSharedKeyExtension$CHPreSharedKeySpec;

namespace sun {
	namespace security {
		namespace ssl {

void PreSharedKeyExtension$CHPreSharedKeyStringizer::init$() {
}

$String* PreSharedKeyExtension$CHPreSharedKeyStringizer::toString($HandshakeContext* hc, $ByteBuffer* buffer) {
	try {
		return ($$new($PreSharedKeyExtension$CHPreSharedKeySpec, hc, buffer))->toString();
	} catch ($Exception& ex) {
		return ex->getMessage();
	}
	$shouldNotReachHere();
}

PreSharedKeyExtension$CHPreSharedKeyStringizer::PreSharedKeyExtension$CHPreSharedKeyStringizer() {
}

$Class* PreSharedKeyExtension$CHPreSharedKeyStringizer::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PRIVATE, $method(PreSharedKeyExtension$CHPreSharedKeyStringizer, init$, void)},
		{"toString", "(Lsun/security/ssl/HandshakeContext;Ljava/nio/ByteBuffer;)Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(PreSharedKeyExtension$CHPreSharedKeyStringizer, toString, $String*, $HandshakeContext*, $ByteBuffer*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.security.ssl.PreSharedKeyExtension$CHPreSharedKeyStringizer", "sun.security.ssl.PreSharedKeyExtension", "CHPreSharedKeyStringizer", $PRIVATE | $STATIC | $FINAL},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"sun.security.ssl.PreSharedKeyExtension$CHPreSharedKeyStringizer",
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
		"sun.security.ssl.PreSharedKeyExtension"
	};
	$loadClass(PreSharedKeyExtension$CHPreSharedKeyStringizer, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(PreSharedKeyExtension$CHPreSharedKeyStringizer);
	});
	return class$;
}

$Class* PreSharedKeyExtension$CHPreSharedKeyStringizer::class$ = nullptr;

		} // ssl
	} // security
} // sun