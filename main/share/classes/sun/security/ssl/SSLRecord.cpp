#include <sun/security/ssl/SSLRecord.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;

namespace sun {
	namespace security {
		namespace ssl {

$bytes* SSLRecord::v2NoCipher = nullptr;

void SSLRecord::clinit$($Class* clazz) {
	$assignStatic(SSLRecord::v2NoCipher, $new($bytes, {
		(int8_t)128,
		(int8_t)3,
		(int8_t)0,
		(int8_t)0,
		(int8_t)1
	}));
}

$Class* SSLRecord::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"headerSize", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(SSLRecord, headerSize)},
		{"handshakeHeaderSize", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(SSLRecord, handshakeHeaderSize)},
		{"headerPlusMaxIVSize", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(SSLRecord, headerPlusMaxIVSize)},
		{"maxPlaintextPlusSize", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(SSLRecord, maxPlaintextPlusSize)},
		{"maxRecordSize", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(SSLRecord, maxRecordSize)},
		{"maxLargeRecordSize", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(SSLRecord, maxLargeRecordSize)},
		{"v2NoCipher", "[B", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(SSLRecord, v2NoCipher)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$INTERFACE | $ABSTRACT,
		"sun.security.ssl.SSLRecord",
		nullptr,
		"sun.security.ssl.Record",
		fieldInfos$$
	};
	$loadClass(SSLRecord, name, initialize, &classInfo$$, SSLRecord::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(SSLRecord);
	});
	return class$;
}

$Class* SSLRecord::class$ = nullptr;

		} // ssl
	} // security
} // sun