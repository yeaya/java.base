#include <sun/security/ssl/DTLSRecord.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $Record = ::sun::security::ssl::Record;

namespace sun {
	namespace security {
		namespace ssl {

$FieldInfo _DTLSRecord_FieldInfo_[] = {
	{"headerSize", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(DTLSRecord, headerSize)},
	{"handshakeHeaderSize", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(DTLSRecord, handshakeHeaderSize)},
	{"headerPlusMaxIVSize", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(DTLSRecord, headerPlusMaxIVSize)},
	{"maxPlaintextPlusSize", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(DTLSRecord, maxPlaintextPlusSize)},
	{"maxRecordSize", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(DTLSRecord, maxRecordSize)},
	{"minCertPlaintextSize", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(DTLSRecord, minCertPlaintextSize)},
	{}
};

$ClassInfo _DTLSRecord_ClassInfo_ = {
	$INTERFACE | $ABSTRACT,
	"sun.security.ssl.DTLSRecord",
	nullptr,
	"sun.security.ssl.Record",
	_DTLSRecord_FieldInfo_
};

$Object* allocate$DTLSRecord($Class* clazz) {
	return $of($alloc(DTLSRecord));
}

$Class* DTLSRecord::load$($String* name, bool initialize) {
	$loadClass(DTLSRecord, name, initialize, &_DTLSRecord_ClassInfo_, allocate$DTLSRecord);
	return class$;
}

$Class* DTLSRecord::class$ = nullptr;

		} // ssl
	} // security
} // sun