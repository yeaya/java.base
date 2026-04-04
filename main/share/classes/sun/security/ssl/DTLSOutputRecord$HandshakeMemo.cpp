#include <sun/security/ssl/DTLSOutputRecord$HandshakeMemo.h>
#include <sun/security/ssl/DTLSOutputRecord$RecordMemo.h>
#include <sun/security/ssl/DTLSOutputRecord.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $DTLSOutputRecord$RecordMemo = ::sun::security::ssl::DTLSOutputRecord$RecordMemo;

namespace sun {
	namespace security {
		namespace ssl {

void DTLSOutputRecord$HandshakeMemo::init$() {
	$DTLSOutputRecord$RecordMemo::init$();
}

DTLSOutputRecord$HandshakeMemo::DTLSOutputRecord$HandshakeMemo() {
}

$Class* DTLSOutputRecord$HandshakeMemo::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"handshakeType", "B", nullptr, 0, $field(DTLSOutputRecord$HandshakeMemo, handshakeType)},
		{"messageSequence", "I", nullptr, 0, $field(DTLSOutputRecord$HandshakeMemo, messageSequence)},
		{"acquireOffset", "I", nullptr, 0, $field(DTLSOutputRecord$HandshakeMemo, acquireOffset)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PRIVATE, $method(DTLSOutputRecord$HandshakeMemo, init$, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.security.ssl.DTLSOutputRecord$HandshakeMemo", "sun.security.ssl.DTLSOutputRecord", "HandshakeMemo", $PRIVATE | $STATIC},
		{"sun.security.ssl.DTLSOutputRecord$RecordMemo", "sun.security.ssl.DTLSOutputRecord", "RecordMemo", $PRIVATE | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.security.ssl.DTLSOutputRecord$HandshakeMemo",
		"sun.security.ssl.DTLSOutputRecord$RecordMemo",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"sun.security.ssl.DTLSOutputRecord"
	};
	$loadClass(DTLSOutputRecord$HandshakeMemo, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(DTLSOutputRecord$HandshakeMemo);
	});
	return class$;
}

$Class* DTLSOutputRecord$HandshakeMemo::class$ = nullptr;

		} // ssl
	} // security
} // sun