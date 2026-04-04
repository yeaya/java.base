#include <sun/security/ssl/DTLSOutputRecord$RecordMemo.h>
#include <sun/security/ssl/DTLSOutputRecord.h>
#include <sun/security/ssl/SSLCipher$SSLWriteCipher.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace sun {
	namespace security {
		namespace ssl {

void DTLSOutputRecord$RecordMemo::init$() {
}

DTLSOutputRecord$RecordMemo::DTLSOutputRecord$RecordMemo() {
}

$Class* DTLSOutputRecord$RecordMemo::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"contentType", "B", nullptr, 0, $field(DTLSOutputRecord$RecordMemo, contentType)},
		{"majorVersion", "B", nullptr, 0, $field(DTLSOutputRecord$RecordMemo, majorVersion)},
		{"minorVersion", "B", nullptr, 0, $field(DTLSOutputRecord$RecordMemo, minorVersion)},
		{"encodeEpoch", "I", nullptr, 0, $field(DTLSOutputRecord$RecordMemo, encodeEpoch)},
		{"encodeCipher", "Lsun/security/ssl/SSLCipher$SSLWriteCipher;", nullptr, 0, $field(DTLSOutputRecord$RecordMemo, encodeCipher)},
		{"fragment", "[B", nullptr, 0, $field(DTLSOutputRecord$RecordMemo, fragment)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PRIVATE, $method(DTLSOutputRecord$RecordMemo, init$, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.security.ssl.DTLSOutputRecord$RecordMemo", "sun.security.ssl.DTLSOutputRecord", "RecordMemo", $PRIVATE | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.security.ssl.DTLSOutputRecord$RecordMemo",
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
		"sun.security.ssl.DTLSOutputRecord"
	};
	$loadClass(DTLSOutputRecord$RecordMemo, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(DTLSOutputRecord$RecordMemo);
	});
	return class$;
}

$Class* DTLSOutputRecord$RecordMemo::class$ = nullptr;

		} // ssl
	} // security
} // sun