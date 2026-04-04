#include <sun/security/ssl/SSLEngineOutputRecord$RecordMemo.h>
#include <sun/security/ssl/SSLCipher$SSLWriteCipher.h>
#include <sun/security/ssl/SSLEngineOutputRecord.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace sun {
	namespace security {
		namespace ssl {

void SSLEngineOutputRecord$RecordMemo::init$() {
}

SSLEngineOutputRecord$RecordMemo::SSLEngineOutputRecord$RecordMemo() {
}

$Class* SSLEngineOutputRecord$RecordMemo::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"contentType", "B", nullptr, 0, $field(SSLEngineOutputRecord$RecordMemo, contentType)},
		{"majorVersion", "B", nullptr, 0, $field(SSLEngineOutputRecord$RecordMemo, majorVersion)},
		{"minorVersion", "B", nullptr, 0, $field(SSLEngineOutputRecord$RecordMemo, minorVersion)},
		{"encodeCipher", "Lsun/security/ssl/SSLCipher$SSLWriteCipher;", nullptr, 0, $field(SSLEngineOutputRecord$RecordMemo, encodeCipher)},
		{"fragment", "[B", nullptr, 0, $field(SSLEngineOutputRecord$RecordMemo, fragment)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PRIVATE, $method(SSLEngineOutputRecord$RecordMemo, init$, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.security.ssl.SSLEngineOutputRecord$RecordMemo", "sun.security.ssl.SSLEngineOutputRecord", "RecordMemo", $PRIVATE | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.security.ssl.SSLEngineOutputRecord$RecordMemo",
		"java.lang.Object",
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
	$loadClass(SSLEngineOutputRecord$RecordMemo, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(SSLEngineOutputRecord$RecordMemo);
	});
	return class$;
}

$Class* SSLEngineOutputRecord$RecordMemo::class$ = nullptr;

		} // ssl
	} // security
} // sun