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

$FieldInfo _HandshakeHash$NonCloneableHash_FieldInfo_[] = {
	{"md", "Ljava/security/MessageDigest;", nullptr, $PRIVATE | $FINAL, $field(HandshakeHash$NonCloneableHash, md)},
	{"baos", "Ljava/io/ByteArrayOutputStream;", nullptr, $PRIVATE | $FINAL, $field(HandshakeHash$NonCloneableHash, baos)},
	{}
};

$MethodInfo _HandshakeHash$NonCloneableHash_MethodInfo_[] = {
	{"<init>", "(Ljava/security/MessageDigest;)V", nullptr, 0, $method(static_cast<void(HandshakeHash$NonCloneableHash::*)($MessageDigest*)>(&HandshakeHash$NonCloneableHash::init$))},
	{"archived", "()[B", nullptr, $PUBLIC},
	{"digest", "()[B", nullptr, $PUBLIC},
	{"update", "([BII)V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _HandshakeHash$NonCloneableHash_InnerClassesInfo_[] = {
	{"sun.security.ssl.HandshakeHash$NonCloneableHash", "sun.security.ssl.HandshakeHash", "NonCloneableHash", $STATIC | $FINAL},
	{"sun.security.ssl.HandshakeHash$TranscriptHash", "sun.security.ssl.HandshakeHash", "TranscriptHash", $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _HandshakeHash$NonCloneableHash_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"sun.security.ssl.HandshakeHash$NonCloneableHash",
	"java.lang.Object",
	"sun.security.ssl.HandshakeHash$TranscriptHash",
	_HandshakeHash$NonCloneableHash_FieldInfo_,
	_HandshakeHash$NonCloneableHash_MethodInfo_,
	nullptr,
	nullptr,
	_HandshakeHash$NonCloneableHash_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.security.ssl.HandshakeHash"
};

$Object* allocate$HandshakeHash$NonCloneableHash($Class* clazz) {
	return $of($alloc(HandshakeHash$NonCloneableHash));
}

void HandshakeHash$NonCloneableHash::init$($MessageDigest* md) {
	$set(this, baos, $new($ByteArrayOutputStream));
	$set(this, md, md);
}

void HandshakeHash$NonCloneableHash::update($bytes* input, int32_t offset, int32_t length) {
	$nc(this->baos)->write(input, offset, length);
}

$bytes* HandshakeHash$NonCloneableHash::digest() {
	$var($bytes, bytes, $nc(this->baos)->toByteArray());
	$nc(this->md)->reset();
	return $nc(this->md)->digest(bytes);
}

$bytes* HandshakeHash$NonCloneableHash::archived() {
	return $nc(this->baos)->toByteArray();
}

HandshakeHash$NonCloneableHash::HandshakeHash$NonCloneableHash() {
}

$Class* HandshakeHash$NonCloneableHash::load$($String* name, bool initialize) {
	$loadClass(HandshakeHash$NonCloneableHash, name, initialize, &_HandshakeHash$NonCloneableHash_ClassInfo_, allocate$HandshakeHash$NonCloneableHash);
	return class$;
}

$Class* HandshakeHash$NonCloneableHash::class$ = nullptr;

		} // ssl
	} // security
} // sun