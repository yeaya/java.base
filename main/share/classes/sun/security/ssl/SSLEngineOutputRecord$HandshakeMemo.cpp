#include <sun/security/ssl/SSLEngineOutputRecord$HandshakeMemo.h>

#include <sun/security/ssl/SSLEngineOutputRecord$RecordMemo.h>
#include <sun/security/ssl/SSLEngineOutputRecord.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $SSLEngineOutputRecord = ::sun::security::ssl::SSLEngineOutputRecord;
using $SSLEngineOutputRecord$RecordMemo = ::sun::security::ssl::SSLEngineOutputRecord$RecordMemo;

namespace sun {
	namespace security {
		namespace ssl {

$FieldInfo _SSLEngineOutputRecord$HandshakeMemo_FieldInfo_[] = {
	{"handshakeType", "B", nullptr, 0, $field(SSLEngineOutputRecord$HandshakeMemo, handshakeType)},
	{"acquireOffset", "I", nullptr, 0, $field(SSLEngineOutputRecord$HandshakeMemo, acquireOffset)},
	{}
};

$MethodInfo _SSLEngineOutputRecord$HandshakeMemo_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(SSLEngineOutputRecord$HandshakeMemo::*)()>(&SSLEngineOutputRecord$HandshakeMemo::init$))},
	{}
};

$InnerClassInfo _SSLEngineOutputRecord$HandshakeMemo_InnerClassesInfo_[] = {
	{"sun.security.ssl.SSLEngineOutputRecord$HandshakeMemo", "sun.security.ssl.SSLEngineOutputRecord", "HandshakeMemo", $PRIVATE | $STATIC},
	{"sun.security.ssl.SSLEngineOutputRecord$RecordMemo", "sun.security.ssl.SSLEngineOutputRecord", "RecordMemo", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _SSLEngineOutputRecord$HandshakeMemo_ClassInfo_ = {
	$ACC_SUPER,
	"sun.security.ssl.SSLEngineOutputRecord$HandshakeMemo",
	"sun.security.ssl.SSLEngineOutputRecord$RecordMemo",
	nullptr,
	_SSLEngineOutputRecord$HandshakeMemo_FieldInfo_,
	_SSLEngineOutputRecord$HandshakeMemo_MethodInfo_,
	nullptr,
	nullptr,
	_SSLEngineOutputRecord$HandshakeMemo_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.security.ssl.SSLEngineOutputRecord"
};

$Object* allocate$SSLEngineOutputRecord$HandshakeMemo($Class* clazz) {
	return $of($alloc(SSLEngineOutputRecord$HandshakeMemo));
}

void SSLEngineOutputRecord$HandshakeMemo::init$() {
	$SSLEngineOutputRecord$RecordMemo::init$();
}

SSLEngineOutputRecord$HandshakeMemo::SSLEngineOutputRecord$HandshakeMemo() {
}

$Class* SSLEngineOutputRecord$HandshakeMemo::load$($String* name, bool initialize) {
	$loadClass(SSLEngineOutputRecord$HandshakeMemo, name, initialize, &_SSLEngineOutputRecord$HandshakeMemo_ClassInfo_, allocate$SSLEngineOutputRecord$HandshakeMemo);
	return class$;
}

$Class* SSLEngineOutputRecord$HandshakeMemo::class$ = nullptr;

		} // ssl
	} // security
} // sun