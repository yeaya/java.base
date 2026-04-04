#include <sun/security/ssl/HandshakeHash$CacheOnlyHash.h>
#include <java/io/ByteArrayOutputStream.h>
#include <java/io/IOException.h>
#include <java/lang/IllegalStateException.h>
#include <sun/security/ssl/HandshakeHash.h>
#include <jcpp.h>

using $ByteArrayOutputStream = ::java::io::ByteArrayOutputStream;
using $IOException = ::java::io::IOException;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalStateException = ::java::lang::IllegalStateException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;

namespace sun {
	namespace security {
		namespace ssl {

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
	$FieldInfo fieldInfos$$[] = {
		{"baos", "Ljava/io/ByteArrayOutputStream;", nullptr, $PRIVATE | $FINAL, $field(HandshakeHash$CacheOnlyHash, baos)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(HandshakeHash$CacheOnlyHash, init$, void)},
		{"archived", "()[B", nullptr, $PUBLIC, $virtualMethod(HandshakeHash$CacheOnlyHash, archived, $bytes*)},
		{"copy", "()Lsun/security/ssl/HandshakeHash$CacheOnlyHash;", nullptr, 0, $method(HandshakeHash$CacheOnlyHash, copy, HandshakeHash$CacheOnlyHash*)},
		{"digest", "()[B", nullptr, $PUBLIC, $virtualMethod(HandshakeHash$CacheOnlyHash, digest, $bytes*)},
		{"update", "([BII)V", nullptr, $PUBLIC, $virtualMethod(HandshakeHash$CacheOnlyHash, update, void, $bytes*, int32_t, int32_t)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.security.ssl.HandshakeHash$CacheOnlyHash", "sun.security.ssl.HandshakeHash", "CacheOnlyHash", $PRIVATE | $STATIC | $FINAL},
		{"sun.security.ssl.HandshakeHash$TranscriptHash", "sun.security.ssl.HandshakeHash", "TranscriptHash", $STATIC | $INTERFACE | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"sun.security.ssl.HandshakeHash$CacheOnlyHash",
		"java.lang.Object",
		"sun.security.ssl.HandshakeHash$TranscriptHash",
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"sun.security.ssl.HandshakeHash"
	};
	$loadClass(HandshakeHash$CacheOnlyHash, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(HandshakeHash$CacheOnlyHash);
	});
	return class$;
}

$Class* HandshakeHash$CacheOnlyHash::class$ = nullptr;

		} // ssl
	} // security
} // sun