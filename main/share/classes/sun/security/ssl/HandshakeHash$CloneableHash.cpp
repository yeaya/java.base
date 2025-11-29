#include <sun/security/ssl/HandshakeHash$CloneableHash.h>

#include <java/lang/CloneNotSupportedException.h>
#include <java/lang/UnsupportedOperationException.h>
#include <java/security/MessageDigest.h>
#include <sun/security/ssl/HandshakeHash.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $CloneNotSupportedException = ::java::lang::CloneNotSupportedException;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $UnsupportedOperationException = ::java::lang::UnsupportedOperationException;
using $MessageDigest = ::java::security::MessageDigest;

namespace sun {
	namespace security {
		namespace ssl {

$FieldInfo _HandshakeHash$CloneableHash_FieldInfo_[] = {
	{"md", "Ljava/security/MessageDigest;", nullptr, $PRIVATE | $FINAL, $field(HandshakeHash$CloneableHash, md)},
	{}
};

$MethodInfo _HandshakeHash$CloneableHash_MethodInfo_[] = {
	{"<init>", "(Ljava/security/MessageDigest;)V", nullptr, 0, $method(static_cast<void(HandshakeHash$CloneableHash::*)($MessageDigest*)>(&HandshakeHash$CloneableHash::init$))},
	{"archived", "()[B", nullptr, $PUBLIC},
	{"digest", "()[B", nullptr, $PUBLIC},
	{"update", "([BII)V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _HandshakeHash$CloneableHash_InnerClassesInfo_[] = {
	{"sun.security.ssl.HandshakeHash$CloneableHash", "sun.security.ssl.HandshakeHash", "CloneableHash", $STATIC | $FINAL},
	{"sun.security.ssl.HandshakeHash$TranscriptHash", "sun.security.ssl.HandshakeHash", "TranscriptHash", $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _HandshakeHash$CloneableHash_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"sun.security.ssl.HandshakeHash$CloneableHash",
	"java.lang.Object",
	"sun.security.ssl.HandshakeHash$TranscriptHash",
	_HandshakeHash$CloneableHash_FieldInfo_,
	_HandshakeHash$CloneableHash_MethodInfo_,
	nullptr,
	nullptr,
	_HandshakeHash$CloneableHash_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.security.ssl.HandshakeHash"
};

$Object* allocate$HandshakeHash$CloneableHash($Class* clazz) {
	return $of($alloc(HandshakeHash$CloneableHash));
}

void HandshakeHash$CloneableHash::init$($MessageDigest* md) {
	$set(this, md, md);
}

void HandshakeHash$CloneableHash::update($bytes* input, int32_t offset, int32_t length) {
	$nc(this->md)->update(input, offset, length);
}

$bytes* HandshakeHash$CloneableHash::digest() {
	try {
		return $nc(($cast($MessageDigest, $($nc(this->md)->clone()))))->digest();
	} catch ($CloneNotSupportedException& ex) {
		return $new($bytes, 0);
	}
	$shouldNotReachHere();
}

$bytes* HandshakeHash$CloneableHash::archived() {
	$throwNew($UnsupportedOperationException, "Not supported yet."_s);
	$shouldNotReachHere();
}

HandshakeHash$CloneableHash::HandshakeHash$CloneableHash() {
}

$Class* HandshakeHash$CloneableHash::load$($String* name, bool initialize) {
	$loadClass(HandshakeHash$CloneableHash, name, initialize, &_HandshakeHash$CloneableHash_ClassInfo_, allocate$HandshakeHash$CloneableHash);
	return class$;
}

$Class* HandshakeHash$CloneableHash::class$ = nullptr;

		} // ssl
	} // security
} // sun