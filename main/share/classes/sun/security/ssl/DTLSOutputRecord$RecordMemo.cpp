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

$FieldInfo _DTLSOutputRecord$RecordMemo_FieldInfo_[] = {
	{"contentType", "B", nullptr, 0, $field(DTLSOutputRecord$RecordMemo, contentType)},
	{"majorVersion", "B", nullptr, 0, $field(DTLSOutputRecord$RecordMemo, majorVersion)},
	{"minorVersion", "B", nullptr, 0, $field(DTLSOutputRecord$RecordMemo, minorVersion)},
	{"encodeEpoch", "I", nullptr, 0, $field(DTLSOutputRecord$RecordMemo, encodeEpoch)},
	{"encodeCipher", "Lsun/security/ssl/SSLCipher$SSLWriteCipher;", nullptr, 0, $field(DTLSOutputRecord$RecordMemo, encodeCipher)},
	{"fragment", "[B", nullptr, 0, $field(DTLSOutputRecord$RecordMemo, fragment)},
	{}
};

$MethodInfo _DTLSOutputRecord$RecordMemo_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(DTLSOutputRecord$RecordMemo, init$, void)},
	{}
};

$InnerClassInfo _DTLSOutputRecord$RecordMemo_InnerClassesInfo_[] = {
	{"sun.security.ssl.DTLSOutputRecord$RecordMemo", "sun.security.ssl.DTLSOutputRecord", "RecordMemo", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _DTLSOutputRecord$RecordMemo_ClassInfo_ = {
	$ACC_SUPER,
	"sun.security.ssl.DTLSOutputRecord$RecordMemo",
	"java.lang.Object",
	nullptr,
	_DTLSOutputRecord$RecordMemo_FieldInfo_,
	_DTLSOutputRecord$RecordMemo_MethodInfo_,
	nullptr,
	nullptr,
	_DTLSOutputRecord$RecordMemo_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.security.ssl.DTLSOutputRecord"
};

$Object* allocate$DTLSOutputRecord$RecordMemo($Class* clazz) {
	return $of($alloc(DTLSOutputRecord$RecordMemo));
}

void DTLSOutputRecord$RecordMemo::init$() {
}

DTLSOutputRecord$RecordMemo::DTLSOutputRecord$RecordMemo() {
}

$Class* DTLSOutputRecord$RecordMemo::load$($String* name, bool initialize) {
	$loadClass(DTLSOutputRecord$RecordMemo, name, initialize, &_DTLSOutputRecord$RecordMemo_ClassInfo_, allocate$DTLSOutputRecord$RecordMemo);
	return class$;
}

$Class* DTLSOutputRecord$RecordMemo::class$ = nullptr;

		} // ssl
	} // security
} // sun