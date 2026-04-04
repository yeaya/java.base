#include <sun/security/ssl/PreSharedKeyExtension$SHPreSharedKeyStringizer.h>
#include <java/nio/ByteBuffer.h>
#include <sun/security/ssl/HandshakeContext.h>
#include <sun/security/ssl/PreSharedKeyExtension$SHPreSharedKeySpec.h>
#include <sun/security/ssl/PreSharedKeyExtension.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ByteBuffer = ::java::nio::ByteBuffer;
using $HandshakeContext = ::sun::security::ssl::HandshakeContext;
using $PreSharedKeyExtension$SHPreSharedKeySpec = ::sun::security::ssl::PreSharedKeyExtension$SHPreSharedKeySpec;

namespace sun {
	namespace security {
		namespace ssl {

void PreSharedKeyExtension$SHPreSharedKeyStringizer::init$() {
}

$String* PreSharedKeyExtension$SHPreSharedKeyStringizer::toString($HandshakeContext* hc, $ByteBuffer* buffer) {
	try {
		return ($$new($PreSharedKeyExtension$SHPreSharedKeySpec, hc, buffer))->toString();
	} catch ($Exception& ex) {
		return ex->getMessage();
	}
	$shouldNotReachHere();
}

PreSharedKeyExtension$SHPreSharedKeyStringizer::PreSharedKeyExtension$SHPreSharedKeyStringizer() {
}

$Class* PreSharedKeyExtension$SHPreSharedKeyStringizer::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PRIVATE, $method(PreSharedKeyExtension$SHPreSharedKeyStringizer, init$, void)},
		{"toString", "(Lsun/security/ssl/HandshakeContext;Ljava/nio/ByteBuffer;)Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(PreSharedKeyExtension$SHPreSharedKeyStringizer, toString, $String*, $HandshakeContext*, $ByteBuffer*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.security.ssl.PreSharedKeyExtension$SHPreSharedKeyStringizer", "sun.security.ssl.PreSharedKeyExtension", "SHPreSharedKeyStringizer", $PRIVATE | $STATIC | $FINAL},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"sun.security.ssl.PreSharedKeyExtension$SHPreSharedKeyStringizer",
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
	$loadClass(PreSharedKeyExtension$SHPreSharedKeyStringizer, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(PreSharedKeyExtension$SHPreSharedKeyStringizer);
	});
	return class$;
}

$Class* PreSharedKeyExtension$SHPreSharedKeyStringizer::class$ = nullptr;

		} // ssl
	} // security
} // sun