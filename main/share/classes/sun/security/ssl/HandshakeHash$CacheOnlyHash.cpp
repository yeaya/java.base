#include <sun/security/ssl/HandshakeHash$CacheOnlyHash.h>

#include <java/io/ByteArrayOutputStream.h>
#include <java/io/IOException.h>
#include <java/io/OutputStream.h>
#include <java/lang/IllegalStateException.h>
#include <sun/security/ssl/HandshakeHash.h>
#include <jcpp.h>

using $ByteArrayOutputStream = ::java::io::ByteArrayOutputStream;
using $IOException = ::java::io::IOException;
using $OutputStream = ::java::io::OutputStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalStateException = ::java::lang::IllegalStateException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $HandshakeHash = ::sun::security::ssl::HandshakeHash;
using $HandshakeHash$TranscriptHash = ::sun::security::ssl::HandshakeHash$TranscriptHash;

namespace sun {
	namespace security {
		namespace ssl {

$FieldInfo _HandshakeHash$CacheOnlyHash_FieldInfo_[] = {
	{"baos", "Ljava/io/ByteArrayOutputStream;", nullptr, $PRIVATE | $FINAL, $field(HandshakeHash$CacheOnlyHash, baos)},
	{}
};

$MethodInfo _HandshakeHash$CacheOnlyHash_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(HandshakeHash$CacheOnlyHash::*)()>(&HandshakeHash$CacheOnlyHash::init$))},
	{"archived", "()[B", nullptr, $PUBLIC},
	{"copy", "()Lsun/security/ssl/HandshakeHash$CacheOnlyHash;", nullptr, 0, $method(static_cast<HandshakeHash$CacheOnlyHash*(HandshakeHash$CacheOnlyHash::*)()>(&HandshakeHash$CacheOnlyHash::copy))},
	{"digest", "()[B", nullptr, $PUBLIC},
	{"update", "([BII)V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _HandshakeHash$CacheOnlyHash_InnerClassesInfo_[] = {
	{"sun.security.ssl.HandshakeHash$CacheOnlyHash", "sun.security.ssl.HandshakeHash", "CacheOnlyHash", $PRIVATE | $STATIC | $FINAL},
	{"sun.security.ssl.HandshakeHash$TranscriptHash", "sun.security.ssl.HandshakeHash", "TranscriptHash", $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _HandshakeHash$CacheOnlyHash_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"sun.security.ssl.HandshakeHash$CacheOnlyHash",
	"java.lang.Object",
	"sun.security.ssl.HandshakeHash$TranscriptHash",
	_HandshakeHash$CacheOnlyHash_FieldInfo_,
	_HandshakeHash$CacheOnlyHash_MethodInfo_,
	nullptr,
	nullptr,
	_HandshakeHash$CacheOnlyHash_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.security.ssl.HandshakeHash"
};

$Object* allocate$HandshakeHash$CacheOnlyHash($Class* clazz) {
	return $of($alloc(HandshakeHash$CacheOnlyHash));
}

void HandshakeHash$CacheOnlyHash::init$() {
	$set(this, baos, $new($ByteArrayOutputStream));
}

void HandshakeHash$CacheOnlyHash::update($bytes* input, int32_t offset, int32_t length) {
	$nc(this->baos)->write(input, offset, length);
}

$bytes* HandshakeHash$CacheOnlyHash::digest() {
	$throwNew($IllegalStateException, "Not expected call to handshake hash digest"_s);
	$shouldNotReachHere();
}

$bytes* HandshakeHash$CacheOnlyHash::archived() {
	return $nc(this->baos)->toByteArray();
}

HandshakeHash$CacheOnlyHash* HandshakeHash$CacheOnlyHash::copy() {
	$var(HandshakeHash$CacheOnlyHash, result, $new(HandshakeHash$CacheOnlyHash));
	try {
		$nc(this->baos)->writeTo(result->baos);
	} catch ($IOException& ex) {
		$throwNew($RuntimeException, "unable to clone hash state"_s);
	}
	return result;
}

HandshakeHash$CacheOnlyHash::HandshakeHash$CacheOnlyHash() {
}

$Class* HandshakeHash$CacheOnlyHash::load$($String* name, bool initialize) {
	$loadClass(HandshakeHash$CacheOnlyHash, name, initialize, &_HandshakeHash$CacheOnlyHash_ClassInfo_, allocate$HandshakeHash$CacheOnlyHash);
	return class$;
}

$Class* HandshakeHash$CacheOnlyHash::class$ = nullptr;

		} // ssl
	} // security
} // sun