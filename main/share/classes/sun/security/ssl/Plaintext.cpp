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

Plaintext* Plaintext::PLAINTEXT_NULL = nullptr;

void Plaintext::init$() {
	this->contentType = 0;
	this->majorVersion = 0;
	this->minorVersion = 0;
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
	$useLocalObjectStack();
	return $str({"contentType: "_s, $$str(this->contentType), "/majorVersion: "_s, $$str(this->majorVersion), "/minorVersion: "_s, $$str(this->minorVersion), "/recordEpoch: "_s, $$str(this->recordEpoch), "/recordSN: 0x"_s, $($Long::toHexString(this->recordSN)), "/fragment: "_s, this->fragment});
}

void Plaintext::clinit$($Class* clazz) {
	$assignStatic(Plaintext::PLAINTEXT_NULL, $new(Plaintext));
}

Plaintext::Plaintext() {
}

$Class* Plaintext::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
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
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PRIVATE, $method(Plaintext, init$, void)},
		{"<init>", "(BBBIJLjava/nio/ByteBuffer;)V", nullptr, 0, $method(Plaintext, init$, void, int8_t, int8_t, int8_t, int32_t, int64_t, $ByteBuffer*)},
		{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(Plaintext, toString, $String*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"sun.security.ssl.Plaintext",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(Plaintext, name, initialize, &classInfo$$, Plaintext::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(Plaintext);
	});
	return class$;
}

$Class* Plaintext::class$ = nullptr;

		} // ssl
	} // security
} // sun