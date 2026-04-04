#include <sun/security/ssl/SSLEngineOutputRecord$HandshakeMemo.h>
#include <sun/security/ssl/SSLEngineOutputRecord$RecordMemo.h>
#include <sun/security/ssl/SSLEngineOutputRecord.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $SSLEngineOutputRecord$RecordMemo = ::sun::security::ssl::SSLEngineOutputRecord$RecordMemo;

namespace sun {
	namespace security {
		namespace ssl {

void SSLEngineOutputRecord$HandshakeMemo::init$() {
	$SSLEngineOutputRecord$RecordMemo::init$();
}

SSLEngineOutputRecord$HandshakeMemo::SSLEngineOutputRecord$HandshakeMemo() {
}

$Class* SSLEngineOutputRecord$HandshakeMemo::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"handshakeType", "B", nullptr, 0, $field(SSLEngineOutputRecord$HandshakeMemo, handshakeType)},
		{"acquireOffset", "I", nullptr, 0, $field(SSLEngineOutputRecord$HandshakeMemo, acquireOffset)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PRIVATE, $method(SSLEngineOutputRecord$HandshakeMemo, init$, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.security.ssl.SSLEngineOutputRecord$HandshakeMemo", "sun.security.ssl.SSLEngineOutputRecord", "HandshakeMemo", $PRIVATE | $STATIC},
		{"sun.security.ssl.SSLEngineOutputRecord$RecordMemo", "sun.security.ssl.SSLEngineOutputRecord", "RecordMemo", $PRIVATE | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.security.ssl.SSLEngineOutputRecord$HandshakeMemo",
		"sun.security.ssl.SSLEngineOutputRecord$RecordMemo",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"sun.security.ssl.SSLEngineOutputRecord"
	};
	$loadClass(SSLEngineOutputRecord$HandshakeMemo, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(SSLEngineOutputRecord$HandshakeMemo);
	});
	return class$;
}

$Class* SSLEngineOutputRecord$HandshakeMemo::class$ = nullptr;

		} // ssl
	} // security
} // sun