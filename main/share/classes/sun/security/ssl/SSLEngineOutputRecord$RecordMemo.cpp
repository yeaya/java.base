#include <sun/security/ssl/SSLEngineOutputRecord$RecordMemo.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <sun/security/ssl/SSLCipher$SSLWriteCipher.h>
#include <sun/security/ssl/SSLEngineOutputRecord.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $SSLCipher$SSLWriteCipher = ::sun::security::ssl::SSLCipher$SSLWriteCipher;
using $SSLEngineOutputRecord = ::sun::security::ssl::SSLEngineOutputRecord;

namespace sun {
	namespace security {
		namespace ssl {

$FieldInfo _SSLEngineOutputRecord$RecordMemo_FieldInfo_[] = {
	{"contentType", "B", nullptr, 0, $field(SSLEngineOutputRecord$RecordMemo, contentType)},
	{"majorVersion", "B", nullptr, 0, $field(SSLEngineOutputRecord$RecordMemo, majorVersion)},
	{"minorVersion", "B", nullptr, 0, $field(SSLEngineOutputRecord$RecordMemo, minorVersion)},
	{"encodeCipher", "Lsun/security/ssl/SSLCipher$SSLWriteCipher;", nullptr, 0, $field(SSLEngineOutputRecord$RecordMemo, encodeCipher)},
	{"fragment", "[B", nullptr, 0, $field(SSLEngineOutputRecord$RecordMemo, fragment)},
	{}
};

$MethodInfo _SSLEngineOutputRecord$RecordMemo_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(SSLEngineOutputRecord$RecordMemo::*)()>(&SSLEngineOutputRecord$RecordMemo::init$))},
	{}
};

$InnerClassInfo _SSLEngineOutputRecord$RecordMemo_InnerClassesInfo_[] = {
	{"sun.security.ssl.SSLEngineOutputRecord$RecordMemo", "sun.security.ssl.SSLEngineOutputRecord", "RecordMemo", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _SSLEngineOutputRecord$RecordMemo_ClassInfo_ = {
	$ACC_SUPER,
	"sun.security.ssl.SSLEngineOutputRecord$RecordMemo",
	"java.lang.Object",
	nullptr,
	_SSLEngineOutputRecord$RecordMemo_FieldInfo_,
	_SSLEngineOutputRecord$RecordMemo_MethodInfo_,
	nullptr,
	nullptr,
	_SSLEngineOutputRecord$RecordMemo_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.security.ssl.SSLEngineOutputRecord"
};

$Object* allocate$SSLEngineOutputRecord$RecordMemo($Class* clazz) {
	return $of($alloc(SSLEngineOutputRecord$RecordMemo));
}

void SSLEngineOutputRecord$RecordMemo::init$() {
}

SSLEngineOutputRecord$RecordMemo::SSLEngineOutputRecord$RecordMemo() {
}

$Class* SSLEngineOutputRecord$RecordMemo::load$($String* name, bool initialize) {
	$loadClass(SSLEngineOutputRecord$RecordMemo, name, initialize, &_SSLEngineOutputRecord$RecordMemo_ClassInfo_, allocate$SSLEngineOutputRecord$RecordMemo);
	return class$;
}

$Class* SSLEngineOutputRecord$RecordMemo::class$ = nullptr;

		} // ssl
	} // security
} // sun