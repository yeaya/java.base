#include <sun/security/ssl/HandshakeHash$TranscriptHash.h>

#include <sun/security/ssl/HandshakeHash.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $HandshakeHash = ::sun::security::ssl::HandshakeHash;

namespace sun {
	namespace security {
		namespace ssl {

$MethodInfo _HandshakeHash$TranscriptHash_MethodInfo_[] = {
	{"archived", "()[B", nullptr, $PUBLIC | $ABSTRACT},
	{"digest", "()[B", nullptr, $PUBLIC | $ABSTRACT},
	{"update", "([BII)V", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$InnerClassInfo _HandshakeHash$TranscriptHash_InnerClassesInfo_[] = {
	{"sun.security.ssl.HandshakeHash$TranscriptHash", "sun.security.ssl.HandshakeHash", "TranscriptHash", $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _HandshakeHash$TranscriptHash_ClassInfo_ = {
	$INTERFACE | $ABSTRACT,
	"sun.security.ssl.HandshakeHash$TranscriptHash",
	nullptr,
	nullptr,
	nullptr,
	_HandshakeHash$TranscriptHash_MethodInfo_,
	nullptr,
	nullptr,
	_HandshakeHash$TranscriptHash_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.security.ssl.HandshakeHash"
};

$Object* allocate$HandshakeHash$TranscriptHash($Class* clazz) {
	return $of($alloc(HandshakeHash$TranscriptHash));
}

$Class* HandshakeHash$TranscriptHash::load$($String* name, bool initialize) {
	$loadClass(HandshakeHash$TranscriptHash, name, initialize, &_HandshakeHash$TranscriptHash_ClassInfo_, allocate$HandshakeHash$TranscriptHash);
	return class$;
}

$Class* HandshakeHash$TranscriptHash::class$ = nullptr;

		} // ssl
	} // security
} // sun