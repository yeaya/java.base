#include <sun/security/ssl/Plaintext.h>

#include <java/nio/ByteBuffer.h>
#include <javax/net/ssl/SSLEngineResult$HandshakeStatus.h>
#include <jcpp.h>

#undef PLAINTEXT_NULL

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $Long = ::java::lang::Long;
using $MethodInfo = ::java::lang::MethodInfo;
using $ByteBuffer = ::java::nio::ByteBuffer;

namespace sun {
	namespace security {
		namespace ssl {

$FieldInfo _Plaintext_FieldInfo_[] = {
	{"PLAINTEXT_NULL", "Lsun/security/ssl/Plaintext;", nullptr, $STATIC | $FINAL, $staticField(Plaintext, PLAINTEXT_NULL)},
	{"contentType", "B", nullptr, $FINAL, $field(Plaintext, contentType)},
	{"majorVersion", "B", nullptr, $FINAL, $field(Plaintext, majorVersion)},
	{"minorVersion", "B", nullptr, $FINAL, $field(Plaintext, minorVersion)},
	{"recordEpoch", "I", nullptr, $FINAL, $field(Plaintext, recordEpoch)},
	{"recordSN", "J", nullptr, $FINAL, $field(Plaintext, recordSN)},
	{"fragment", "Ljava/nio/ByteBuffer;", nullptr, $FINAL, $field(Plaintext, fragment)},
	{"handshakeStatus", "Ljavax/net/ssl/SSLEngineResult$HandshakeStatus;", nullptr, 0, $field(Plaintext, handshakeStatus)},
	{}
};

$MethodInfo _Plaintext_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(Plaintext, init$, void)},
	{"<init>", "(BBBIJLjava/nio/ByteBuffer;)V", nullptr, 0, $method(Plaintext, init$, void, int8_t, int8_t, int8_t, int32_t, int64_t, $ByteBuffer*)},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(Plaintext, toString, $String*)},
	{}
};

$ClassInfo _Plaintext_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"sun.security.ssl.Plaintext",
	"java.lang.Object",
	nullptr,
	_Plaintext_FieldInfo_,
	_Plaintext_MethodInfo_
};

$Object* allocate$Plaintext($Class* clazz) {
	return $of($alloc(Plaintext));
}

Plaintext* Plaintext::PLAINTEXT_NULL = nullptr;

void Plaintext::init$() {
	this->contentType = (int8_t)0;
	this->majorVersion = (int8_t)0;
	this->minorVersion = (int8_t)0;
	this->recordEpoch = -1;
	this->recordSN = -1;
	$set(this, fragment, nullptr);
	$set(this, handshakeStatus, nullptr);
}

void Plaintext::init$(int8_t contentType, int8_t majorVersion, int8_t minorVersion, int32_t recordEpoch, int64_t recordSN, $ByteBuffer* fragment) {
	this->contentType = contentType;
	this->majorVersion = majorVersion;
	this->minorVersion = minorVersion;
	this->recordEpoch = recordEpoch;
	this->recordSN = recordSN;
	$set(this, fragment, fragment);
	$set(this, handshakeStatus, nullptr);
}

$String* Plaintext::toString() {
	$useLocalCurrentObjectStackCache();
	return $str({"contentType: "_s, $$str(this->contentType), "/majorVersion: "_s, $$str(this->majorVersion), "/minorVersion: "_s, $$str(this->minorVersion), "/recordEpoch: "_s, $$str(this->recordEpoch), "/recordSN: 0x"_s, $($Long::toHexString(this->recordSN)), "/fragment: "_s, this->fragment});
}

void clinit$Plaintext($Class* class$) {
	$assignStatic(Plaintext::PLAINTEXT_NULL, $new(Plaintext));
}

Plaintext::Plaintext() {
}

$Class* Plaintext::load$($String* name, bool initialize) {
	$loadClass(Plaintext, name, initialize, &_Plaintext_ClassInfo_, clinit$Plaintext, allocate$Plaintext);
	return class$;
}

$Class* Plaintext::class$ = nullptr;

		} // ssl
	} // security
} // sun