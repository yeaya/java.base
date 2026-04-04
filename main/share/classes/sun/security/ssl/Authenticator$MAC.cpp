#include <sun/security/ssl/Authenticator$MAC.h>
#include <java/nio/ByteBuffer.h>
#include <sun/security/ssl/Authenticator.h>
#include <sun/security/ssl/CipherSuite$MacAlg.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ByteBuffer = ::java::nio::ByteBuffer;
using $CipherSuite$MacAlg = ::sun::security::ssl::CipherSuite$MacAlg;

namespace sun {
	namespace security {
		namespace ssl {

$bytes* Authenticator$MAC::compute(int8_t type, $ByteBuffer* bb, bool isSimulated) {
	return compute(type, bb, nullptr, isSimulated);
}

$Class* Authenticator$MAC::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"compute", "(BLjava/nio/ByteBuffer;[BZ)[B", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Authenticator$MAC, compute, $bytes*, int8_t, $ByteBuffer*, $bytes*, bool)},
		{"compute", "(BLjava/nio/ByteBuffer;Z)[B", nullptr, $PUBLIC, $virtualMethod(Authenticator$MAC, compute, $bytes*, int8_t, $ByteBuffer*, bool)},
		{"macAlg", "()Lsun/security/ssl/CipherSuite$MacAlg;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Authenticator$MAC, macAlg, $CipherSuite$MacAlg*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.security.ssl.Authenticator$MAC", "sun.security.ssl.Authenticator", "MAC", $STATIC | $INTERFACE | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$INTERFACE | $ABSTRACT,
		"sun.security.ssl.Authenticator$MAC",
		nullptr,
		nullptr,
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"sun.security.ssl.Authenticator"
	};
	$loadClass(Authenticator$MAC, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Authenticator$MAC);
	});
	return class$;
}

$Class* Authenticator$MAC::class$ = nullptr;

		} // ssl
	} // security
} // sun