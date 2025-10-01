#include <sun/security/ssl/HandshakeHash$T12HandshakeHash.h>

#include <java/io/ByteArrayOutputStream.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/Cloneable.h>
#include <java/lang/Exception.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/RuntimeException.h>
#include <java/lang/String.h>
#include <java/lang/Throwable.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/security/GeneralSecurityException.h>
#include <java/security/MessageDigest.h>
#include <java/security/NoSuchAlgorithmException.h>
#include <sun/security/ssl/CipherSuite$HashAlg.h>
#include <sun/security/ssl/CipherSuite.h>
#include <sun/security/ssl/HandshakeHash$CloneableHash.h>
#include <sun/security/ssl/HandshakeHash$NonCloneableHash.h>
#include <sun/security/ssl/HandshakeHash$TranscriptHash.h>
#include <sun/security/ssl/HandshakeHash.h>
#include <jcpp.h>

using $ByteArrayOutputStream = ::java::io::ByteArrayOutputStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $Cloneable = ::java::lang::Cloneable;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $GeneralSecurityException = ::java::security::GeneralSecurityException;
using $MessageDigest = ::java::security::MessageDigest;
using $NoSuchAlgorithmException = ::java::security::NoSuchAlgorithmException;
using $CipherSuite = ::sun::security::ssl::CipherSuite;
using $CipherSuite$HashAlg = ::sun::security::ssl::CipherSuite$HashAlg;
using $HandshakeHash = ::sun::security::ssl::HandshakeHash;
using $HandshakeHash$CloneableHash = ::sun::security::ssl::HandshakeHash$CloneableHash;
using $HandshakeHash$NonCloneableHash = ::sun::security::ssl::HandshakeHash$NonCloneableHash;
using $HandshakeHash$TranscriptHash = ::sun::security::ssl::HandshakeHash$TranscriptHash;

namespace sun {
	namespace security {
		namespace ssl {

$FieldInfo _HandshakeHash$T12HandshakeHash_FieldInfo_[] = {
	{"transcriptHash", "Lsun/security/ssl/HandshakeHash$TranscriptHash;", nullptr, $PRIVATE | $FINAL, $field(HandshakeHash$T12HandshakeHash, transcriptHash)},
	{"baos", "Ljava/io/ByteArrayOutputStream;", nullptr, $PRIVATE | $FINAL, $field(HandshakeHash$T12HandshakeHash, baos)},
	{}
};

$MethodInfo _HandshakeHash$T12HandshakeHash_MethodInfo_[] = {
	{"<init>", "(Lsun/security/ssl/CipherSuite;)V", nullptr, 0, $method(static_cast<void(HandshakeHash$T12HandshakeHash::*)($CipherSuite*)>(&HandshakeHash$T12HandshakeHash::init$))},
	{"archived", "()[B", nullptr, $PUBLIC},
	{"digest", "()[B", nullptr, $PUBLIC},
	{"update", "([BII)V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _HandshakeHash$T12HandshakeHash_InnerClassesInfo_[] = {
	{"sun.security.ssl.HandshakeHash$T12HandshakeHash", "sun.security.ssl.HandshakeHash", "T12HandshakeHash", $STATIC | $FINAL},
	{"sun.security.ssl.HandshakeHash$TranscriptHash", "sun.security.ssl.HandshakeHash", "TranscriptHash", $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _HandshakeHash$T12HandshakeHash_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"sun.security.ssl.HandshakeHash$T12HandshakeHash",
	"java.lang.Object",
	"sun.security.ssl.HandshakeHash$TranscriptHash",
	_HandshakeHash$T12HandshakeHash_FieldInfo_,
	_HandshakeHash$T12HandshakeHash_MethodInfo_,
	nullptr,
	nullptr,
	_HandshakeHash$T12HandshakeHash_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.security.ssl.HandshakeHash"
};

$Object* allocate$HandshakeHash$T12HandshakeHash($Class* clazz) {
	return $of($alloc(HandshakeHash$T12HandshakeHash));
}

void HandshakeHash$T12HandshakeHash::init$($CipherSuite* cipherSuite) {
	$var($MessageDigest, md, nullptr);
	try {
		$assign(md, $MessageDigest::getInstance($nc(cipherSuite)->hashAlg->name$));
	} catch ($NoSuchAlgorithmException&) {
		$var($NoSuchAlgorithmException, nsae, $catch());
		$throwNew($RuntimeException, $$str({"Hash algorithm "_s, $nc(cipherSuite)->hashAlg->name$, " is not available"_s}), nsae);
	}
	if ($instanceOf($Cloneable, md)) {
		$set(this, transcriptHash, $new($HandshakeHash$CloneableHash, md));
		$set(this, baos, $new($ByteArrayOutputStream));
	} else {
		$set(this, transcriptHash, $new($HandshakeHash$NonCloneableHash, md));
		$set(this, baos, nullptr);
	}
}

void HandshakeHash$T12HandshakeHash::update($bytes* input, int32_t offset, int32_t length) {
	$nc(this->transcriptHash)->update(input, offset, length);
	if (this->baos != nullptr) {
		$nc(this->baos)->write(input, offset, length);
	}
}

$bytes* HandshakeHash$T12HandshakeHash::digest() {
	return $nc(this->transcriptHash)->digest();
}

$bytes* HandshakeHash$T12HandshakeHash::archived() {
	if (this->baos != nullptr) {
		return $nc(this->baos)->toByteArray();
	} else {
		return $nc(this->transcriptHash)->archived();
	}
}

HandshakeHash$T12HandshakeHash::HandshakeHash$T12HandshakeHash() {
}

$Class* HandshakeHash$T12HandshakeHash::load$($String* name, bool initialize) {
	$loadClass(HandshakeHash$T12HandshakeHash, name, initialize, &_HandshakeHash$T12HandshakeHash_ClassInfo_, allocate$HandshakeHash$T12HandshakeHash);
	return class$;
}

$Class* HandshakeHash$T12HandshakeHash::class$ = nullptr;

		} // ssl
	} // security
} // sun