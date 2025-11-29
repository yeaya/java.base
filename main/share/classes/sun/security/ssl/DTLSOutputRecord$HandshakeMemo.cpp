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

$FieldInfo _DTLSOutputRecord$HandshakeMemo_FieldInfo_[] = {
	{"handshakeType", "B", nullptr, 0, $field(DTLSOutputRecord$HandshakeMemo, handshakeType)},
	{"messageSequence", "I", nullptr, 0, $field(DTLSOutputRecord$HandshakeMemo, messageSequence)},
	{"acquireOffset", "I", nullptr, 0, $field(DTLSOutputRecord$HandshakeMemo, acquireOffset)},
	{}
};

$MethodInfo _DTLSOutputRecord$HandshakeMemo_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(DTLSOutputRecord$HandshakeMemo::*)()>(&DTLSOutputRecord$HandshakeMemo::init$))},
	{}
};

$InnerClassInfo _DTLSOutputRecord$HandshakeMemo_InnerClassesInfo_[] = {
	{"sun.security.ssl.DTLSOutputRecord$HandshakeMemo", "sun.security.ssl.DTLSOutputRecord", "HandshakeMemo", $PRIVATE | $STATIC},
	{"sun.security.ssl.DTLSOutputRecord$RecordMemo", "sun.security.ssl.DTLSOutputRecord", "RecordMemo", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _DTLSOutputRecord$HandshakeMemo_ClassInfo_ = {
	$ACC_SUPER,
	"sun.security.ssl.DTLSOutputRecord$HandshakeMemo",
	"sun.security.ssl.DTLSOutputRecord$RecordMemo",
	nullptr,
	_DTLSOutputRecord$HandshakeMemo_FieldInfo_,
	_DTLSOutputRecord$HandshakeMemo_MethodInfo_,
	nullptr,
	nullptr,
	_DTLSOutputRecord$HandshakeMemo_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.security.ssl.DTLSOutputRecord"
};

$Object* allocate$DTLSOutputRecord$HandshakeMemo($Class* clazz) {
	return $of($alloc(DTLSOutputRecord$HandshakeMemo));
}

void DTLSOutputRecord$HandshakeMemo::init$() {
	$DTLSOutputRecord$RecordMemo::init$();
}

DTLSOutputRecord$HandshakeMemo::DTLSOutputRecord$HandshakeMemo() {
}

$Class* DTLSOutputRecord$HandshakeMemo::load$($String* name, bool initialize) {
	$loadClass(DTLSOutputRecord$HandshakeMemo, name, initialize, &_DTLSOutputRecord$HandshakeMemo_ClassInfo_, allocate$DTLSOutputRecord$HandshakeMemo);
	return class$;
}

$Class* DTLSOutputRecord$HandshakeMemo::class$ = nullptr;

		} // ssl
	} // security
} // sun