#include <sun/security/ssl/SupportedGroupsExtension$SupportedGroupsStringizer.h>
#include <java/io/IOException.h>
#include <java/nio/ByteBuffer.h>
#include <sun/security/ssl/HandshakeContext.h>
#include <sun/security/ssl/SupportedGroupsExtension$SupportedGroupsSpec.h>
#include <sun/security/ssl/SupportedGroupsExtension.h>
#include <jcpp.h>

using $IOException = ::java::io::IOException;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ByteBuffer = ::java::nio::ByteBuffer;
using $HandshakeContext = ::sun::security::ssl::HandshakeContext;
using $SupportedGroupsExtension$SupportedGroupsSpec = ::sun::security::ssl::SupportedGroupsExtension$SupportedGroupsSpec;

namespace sun {
	namespace security {
		namespace ssl {

void SupportedGroupsExtension$SupportedGroupsStringizer::init$() {
}

$String* SupportedGroupsExtension$SupportedGroupsStringizer::toString($HandshakeContext* hc, $ByteBuffer* buffer) {
	try {
		return ($$new($SupportedGroupsExtension$SupportedGroupsSpec, hc, buffer))->toString();
	} catch ($IOException& ioe) {
		return ioe->getMessage();
	}
	$shouldNotReachHere();
}

SupportedGroupsExtension$SupportedGroupsStringizer::SupportedGroupsExtension$SupportedGroupsStringizer() {
}

$Class* SupportedGroupsExtension$SupportedGroupsStringizer::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PRIVATE, $method(SupportedGroupsExtension$SupportedGroupsStringizer, init$, void)},
		{"toString", "(Lsun/security/ssl/HandshakeContext;Ljava/nio/ByteBuffer;)Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(SupportedGroupsExtension$SupportedGroupsStringizer, toString, $String*, $HandshakeContext*, $ByteBuffer*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.security.ssl.SupportedGroupsExtension$SupportedGroupsStringizer", "sun.security.ssl.SupportedGroupsExtension", "SupportedGroupsStringizer", $PRIVATE | $STATIC | $FINAL},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"sun.security.ssl.SupportedGroupsExtension$SupportedGroupsStringizer",
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
		"sun.security.ssl.SupportedGroupsExtension"
	};
	$loadClass(SupportedGroupsExtension$SupportedGroupsStringizer, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(SupportedGroupsExtension$SupportedGroupsStringizer);
	});
	return class$;
}

$Class* SupportedGroupsExtension$SupportedGroupsStringizer::class$ = nullptr;

		} // ssl
	} // security
} // sun