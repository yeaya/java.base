#include <sun/security/ssl/HandshakeHash$TranscriptHash.h>
#include <sun/security/ssl/HandshakeHash.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace sun {
	namespace security {
		namespace ssl {

$Class* HandshakeHash$TranscriptHash::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"archived", "()[B", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(HandshakeHash$TranscriptHash, archived, $bytes*)},
		{"digest", "()[B", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(HandshakeHash$TranscriptHash, digest, $bytes*)},
		{"update", "([BII)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(HandshakeHash$TranscriptHash, update, void, $bytes*, int32_t, int32_t)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.security.ssl.HandshakeHash$TranscriptHash", "sun.security.ssl.HandshakeHash", "TranscriptHash", $STATIC | $INTERFACE | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$INTERFACE | $ABSTRACT,
		"sun.security.ssl.HandshakeHash$TranscriptHash",
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
		"sun.security.ssl.HandshakeHash"
	};
	$loadClass(HandshakeHash$TranscriptHash, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(HandshakeHash$TranscriptHash);
	});
	return class$;
}

$Class* HandshakeHash$TranscriptHash::class$ = nullptr;

		} // ssl
	} // security
} // sun