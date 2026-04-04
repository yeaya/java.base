#include <sun/security/ssl/DTLSRecord.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;

namespace sun {
	namespace security {
		namespace ssl {

$Class* DTLSRecord::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"headerSize", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(DTLSRecord, headerSize)},
		{"handshakeHeaderSize", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(DTLSRecord, handshakeHeaderSize)},
		{"headerPlusMaxIVSize", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(DTLSRecord, headerPlusMaxIVSize)},
		{"maxPlaintextPlusSize", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(DTLSRecord, maxPlaintextPlusSize)},
		{"maxRecordSize", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(DTLSRecord, maxRecordSize)},
		{"minCertPlaintextSize", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(DTLSRecord, minCertPlaintextSize)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$INTERFACE | $ABSTRACT,
		"sun.security.ssl.DTLSRecord",
		nullptr,
		"sun.security.ssl.Record",
		fieldInfos$$
	};
	$loadClass(DTLSRecord, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(DTLSRecord);
	});
	return class$;
}

$Class* DTLSRecord::class$ = nullptr;

		} // ssl
	} // security
} // sun