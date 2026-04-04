#include <sun/security/ssl/HandshakeHash$NonCloneableHash.h>
#include <java/io/ByteArrayOutputStream.h>
#include <java/security/MessageDigest.h>
#include <sun/security/ssl/HandshakeHash.h>
#include <jcpp.h>

using $ByteArrayOutputStream = ::java::io::ByteArrayOutputStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $MessageDigest = ::java::security::MessageDigest;

namespace sun {
	namespace security {
		namespace ssl {

void HandshakeHash$NonCloneableHash::init$($MessageDigest* md) {
	$set(this, baos, $new($ByteArrayOutputStream));
	$set(this, md, md);
}

void HandshakeHash$NonCloneableHash::update($bytes* input, int32_t offset, int32_t length) {
	this->baos->write(input, offset, length);
}

$bytes* HandshakeHash$NonCloneableHash::digest() {
	$var($bytes, bytes, this->baos->toByteArray());
	$nc(this->md)->reset();
	return this->md->digest(bytes);
}

$bytes* HandshakeHash$NonCloneableHash::archived() {
	return this->baos->toByteArray();
}

HandshakeHash$NonCloneableHash::HandshakeHash$NonCloneableHash() {
}

$Class* HandshakeHash$NonCloneableHash::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"md", "Ljava/security/MessageDigest;", nullptr, $PRIVATE | $FINAL, $field(HandshakeHash$NonCloneableHash, md)},
		{"baos", "Ljava/io/ByteArrayOutputStream;", nullptr, $PRIVATE | $FINAL, $field(HandshakeHash$NonCloneableHash, baos)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/security/MessageDigest;)V", nullptr, 0, $method(HandshakeHash$NonCloneableHash, init$, void, $MessageDigest*)},
		{"archived", "()[B", nullptr, $PUBLIC, $virtualMethod(HandshakeHash$NonCloneableHash, archived, $bytes*)},
		{"digest", "()[B", nullptr, $PUBLIC, $virtualMethod(HandshakeHash$NonCloneableHash, digest, $bytes*)},
		{"update", "([BII)V", nullptr, $PUBLIC, $virtualMethod(HandshakeHash$NonCloneableHash, update, void, $bytes*, int32_t, int32_t)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.security.ssl.HandshakeHash$NonCloneableHash", "sun.security.ssl.HandshakeHash", "NonCloneableHash", $STATIC | $FINAL},
		{"sun.security.ssl.HandshakeHash$TranscriptHash", "sun.security.ssl.HandshakeHash", "TranscriptHash", $STATIC | $INTERFACE | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"sun.security.ssl.HandshakeHash$NonCloneableHash",
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
	$loadClass(HandshakeHash$NonCloneableHash, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(HandshakeHash$NonCloneableHash);
	});
	return class$;
}

$Class* HandshakeHash$NonCloneableHash::class$ = nullptr;

		} // ssl
	} // security
} // sun