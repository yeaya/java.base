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

$MethodInfo _Authenticator$MAC_MethodInfo_[] = {
	{"compute", "(BLjava/nio/ByteBuffer;[BZ)[B", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Authenticator$MAC, compute, $bytes*, int8_t, $ByteBuffer*, $bytes*, bool)},
	{"compute", "(BLjava/nio/ByteBuffer;Z)[B", nullptr, $PUBLIC, $virtualMethod(Authenticator$MAC, compute, $bytes*, int8_t, $ByteBuffer*, bool)},
	{"macAlg", "()Lsun/security/ssl/CipherSuite$MacAlg;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Authenticator$MAC, macAlg, $CipherSuite$MacAlg*)},
	{}
};

$InnerClassInfo _Authenticator$MAC_InnerClassesInfo_[] = {
	{"sun.security.ssl.Authenticator$MAC", "sun.security.ssl.Authenticator", "MAC", $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _Authenticator$MAC_ClassInfo_ = {
	$INTERFACE | $ABSTRACT,
	"sun.security.ssl.Authenticator$MAC",
	nullptr,
	nullptr,
	nullptr,
	_Authenticator$MAC_MethodInfo_,
	nullptr,
	nullptr,
	_Authenticator$MAC_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.security.ssl.Authenticator"
};

$Object* allocate$Authenticator$MAC($Class* clazz) {
	return $of($alloc(Authenticator$MAC));
}

$bytes* Authenticator$MAC::compute(int8_t type, $ByteBuffer* bb, bool isSimulated) {
	return compute(type, bb, nullptr, isSimulated);
}

$Class* Authenticator$MAC::load$($String* name, bool initialize) {
	$loadClass(Authenticator$MAC, name, initialize, &_Authenticator$MAC_ClassInfo_, allocate$Authenticator$MAC);
	return class$;
}

$Class* Authenticator$MAC::class$ = nullptr;

		} // ssl
	} // security
} // sun