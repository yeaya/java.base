#include <sun/security/ssl/SSLRecord.h>

#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;

namespace sun {
	namespace security {
		namespace ssl {

$FieldInfo _SSLRecord_FieldInfo_[] = {
	{"headerSize", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(SSLRecord, headerSize)},
	{"handshakeHeaderSize", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(SSLRecord, handshakeHeaderSize)},
	{"headerPlusMaxIVSize", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(SSLRecord, headerPlusMaxIVSize)},
	{"maxPlaintextPlusSize", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(SSLRecord, maxPlaintextPlusSize)},
	{"maxRecordSize", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(SSLRecord, maxRecordSize)},
	{"maxLargeRecordSize", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(SSLRecord, maxLargeRecordSize)},
	{"v2NoCipher", "[B", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(SSLRecord, v2NoCipher)},
	{}
};

$ClassInfo _SSLRecord_ClassInfo_ = {
	$INTERFACE | $ABSTRACT,
	"sun.security.ssl.SSLRecord",
	nullptr,
	"sun.security.ssl.Record",
	_SSLRecord_FieldInfo_
};

$Object* allocate$SSLRecord($Class* clazz) {
	return $of($alloc(SSLRecord));
}

$bytes* SSLRecord::v2NoCipher = nullptr;

void clinit$SSLRecord($Class* class$) {
	$assignStatic(SSLRecord::v2NoCipher, $new($bytes, {
		(int8_t)128,
		(int8_t)3,
		(int8_t)0,
		(int8_t)0,
		(int8_t)1
	}));
}

$Class* SSLRecord::load$($String* name, bool initialize) {
	$loadClass(SSLRecord, name, initialize, &_SSLRecord_ClassInfo_, clinit$SSLRecord, allocate$SSLRecord);
	return class$;
}

$Class* SSLRecord::class$ = nullptr;

		} // ssl
	} // security
} // sun