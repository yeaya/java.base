#include <sun/security/ssl/HandshakeHash$T10HandshakeHash.h>
#include <java/io/ByteArrayOutputStream.h>
#include <java/lang/Cloneable.h>
#include <java/security/MessageDigest.h>
#include <java/security/NoSuchAlgorithmException.h>
#include <sun/security/ssl/CipherSuite.h>
#include <sun/security/ssl/HandshakeHash$CloneableHash.h>
#include <sun/security/ssl/HandshakeHash$NonCloneableHash.h>
#include <sun/security/ssl/HandshakeHash$TranscriptHash.h>
#include <sun/security/ssl/HandshakeHash.h>
#include <jcpp.h>

using $ByteArrayOutputStream = ::java::io::ByteArrayOutputStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $Cloneable = ::java::lang::Cloneable;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $MessageDigest = ::java::security::MessageDigest;
using $NoSuchAlgorithmException = ::java::security::NoSuchAlgorithmException;
using $CipherSuite = ::sun::security::ssl::CipherSuite;
using $HandshakeHash$CloneableHash = ::sun::security::ssl::HandshakeHash$CloneableHash;
using $HandshakeHash$NonCloneableHash = ::sun::security::ssl::HandshakeHash$NonCloneableHash;

namespace sun {
	namespace security {
		namespace ssl {

void HandshakeHash$T10HandshakeHash::init$($CipherSuite* cipherSuite) {
	$useLocalObjectStack();
	$var($MessageDigest, mdMD5, nullptr);
	$var($MessageDigest, mdSHA, nullptr);
	try {
		$assign(mdMD5, $MessageDigest::getInstance("MD5"_s));
		$assign(mdSHA, $MessageDigest::getInstance("SHA"_s));
	} catch ($NoSuchAlgorithmException& nsae) {
		$throwNew($RuntimeException, "Hash algorithm MD5 or SHA is not available"_s, nsae);
	}
	bool hasArchived = false;
	if ($instanceOf($Cloneable, mdMD5)) {
		$set(this, md5, $new($HandshakeHash$CloneableHash, mdMD5));
	} else {
		hasArchived = true;
		$set(this, md5, $new($HandshakeHash$NonCloneableHash, mdMD5));
	}
	if ($instanceOf($Cloneable, mdSHA)) {
		$set(this, sha, $new($HandshakeHash$CloneableHash, mdSHA));
	} else {
		hasArchived = true;
		$set(this, sha, $new($HandshakeHash$NonCloneableHash, mdSHA));
	}
	if (hasArchived) {
		$set(this, baos, nullptr);
	} else {
		$set(this, baos, $new($ByteArrayOutputStream));
	}
}

void HandshakeHash$T10HandshakeHash::update($bytes* input, int32_t offset, int32_t length) {
	this->md5->update(input, offset, length);
	this->sha->update(input, offset, length);
	if (this->baos != nullptr) {
		this->baos->write(input, offset, length);
	}
}

$bytes* HandshakeHash$T10HandshakeHash::digest() {
	$useLocalObjectStack();
	$var($bytes, digest, $new($bytes, 36));
	$System::arraycopy($(this->md5->digest()), 0, digest, 0, 16);
	$System::arraycopy($(this->sha->digest()), 0, digest, 16, 20);
	return digest;
}

$bytes* HandshakeHash$T10HandshakeHash::digest($String* algorithm) {
	if ("RSA"_s->equalsIgnoreCase(algorithm)) {
		return digest();
	} else {
		return this->sha->digest();
	}
}

$bytes* HandshakeHash$T10HandshakeHash::archived() {
	if (this->baos != nullptr) {
		return this->baos->toByteArray();
	} else if ($instanceOf($HandshakeHash$NonCloneableHash, this->md5)) {
		return this->md5->archived();
	} else {
		return this->sha->archived();
	}
}

HandshakeHash$T10HandshakeHash::HandshakeHash$T10HandshakeHash() {
}

$Class* HandshakeHash$T10HandshakeHash::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"md5", "Lsun/security/ssl/HandshakeHash$TranscriptHash;", nullptr, $PRIVATE | $FINAL, $field(HandshakeHash$T10HandshakeHash, md5)},
		{"sha", "Lsun/security/ssl/HandshakeHash$TranscriptHash;", nullptr, $PRIVATE | $FINAL, $field(HandshakeHash$T10HandshakeHash, sha)},
		{"baos", "Ljava/io/ByteArrayOutputStream;", nullptr, $PRIVATE | $FINAL, $field(HandshakeHash$T10HandshakeHash, baos)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lsun/security/ssl/CipherSuite;)V", nullptr, 0, $method(HandshakeHash$T10HandshakeHash, init$, void, $CipherSuite*)},
		{"archived", "()[B", nullptr, $PUBLIC, $virtualMethod(HandshakeHash$T10HandshakeHash, archived, $bytes*)},
		{"digest", "()[B", nullptr, $PUBLIC, $virtualMethod(HandshakeHash$T10HandshakeHash, digest, $bytes*)},
		{"digest", "(Ljava/lang/String;)[B", nullptr, 0, $method(HandshakeHash$T10HandshakeHash, digest, $bytes*, $String*)},
		{"update", "([BII)V", nullptr, $PUBLIC, $virtualMethod(HandshakeHash$T10HandshakeHash, update, void, $bytes*, int32_t, int32_t)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.security.ssl.HandshakeHash$T10HandshakeHash", "sun.security.ssl.HandshakeHash", "T10HandshakeHash", $STATIC | $FINAL},
		{"sun.security.ssl.HandshakeHash$TranscriptHash", "sun.security.ssl.HandshakeHash", "TranscriptHash", $STATIC | $INTERFACE | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"sun.security.ssl.HandshakeHash$T10HandshakeHash",
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
	$loadClass(HandshakeHash$T10HandshakeHash, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(HandshakeHash$T10HandshakeHash);
	});
	return class$;
}

$Class* HandshakeHash$T10HandshakeHash::class$ = nullptr;

		} // ssl
	} // security
} // sun