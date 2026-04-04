#include <sun/security/ssl/HandshakeHash.h>
#include <java/io/ByteArrayOutputStream.h>
#include <java/lang/IllegalStateException.h>
#include <java/nio/ByteBuffer.h>
#include <java/util/AbstractCollection.h>
#include <java/util/Arrays.h>
#include <java/util/Collection.h>
#include <java/util/LinkedList.h>
#include <javax/crypto/SecretKey.h>
#include <sun/security/ssl/CipherSuite.h>
#include <sun/security/ssl/HandshakeHash$CacheOnlyHash.h>
#include <sun/security/ssl/HandshakeHash$S30HandshakeHash.h>
#include <sun/security/ssl/HandshakeHash$T10HandshakeHash.h>
#include <sun/security/ssl/HandshakeHash$T12HandshakeHash.h>
#include <sun/security/ssl/HandshakeHash$T13HandshakeHash.h>
#include <sun/security/ssl/HandshakeHash$TranscriptHash.h>
#include <sun/security/ssl/ProtocolVersion.h>
#include <sun/security/ssl/SSLHandshake.h>
#include <jcpp.h>

#undef HELLO_REQUEST
#undef HELLO_VERIFY_REQUEST

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalStateException = ::java::lang::IllegalStateException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ByteBuffer = ::java::nio::ByteBuffer;
using $AbstractCollection = ::java::util::AbstractCollection;
using $Arrays = ::java::util::Arrays;
using $LinkedList = ::java::util::LinkedList;
using $SecretKey = ::javax::crypto::SecretKey;
using $CipherSuite = ::sun::security::ssl::CipherSuite;
using $HandshakeHash$CacheOnlyHash = ::sun::security::ssl::HandshakeHash$CacheOnlyHash;
using $HandshakeHash$S30HandshakeHash = ::sun::security::ssl::HandshakeHash$S30HandshakeHash;
using $HandshakeHash$T10HandshakeHash = ::sun::security::ssl::HandshakeHash$T10HandshakeHash;
using $HandshakeHash$T12HandshakeHash = ::sun::security::ssl::HandshakeHash$T12HandshakeHash;
using $HandshakeHash$T13HandshakeHash = ::sun::security::ssl::HandshakeHash$T13HandshakeHash;
using $ProtocolVersion = ::sun::security::ssl::ProtocolVersion;
using $SSLHandshake = ::sun::security::ssl::SSLHandshake;

namespace sun {
	namespace security {
		namespace ssl {

void HandshakeHash::init$() {
	$set(this, transcriptHash, $new($HandshakeHash$CacheOnlyHash));
	$set(this, reserves, $new($LinkedList));
	this->hasBeenUsed = false;
}

void HandshakeHash::determine($ProtocolVersion* protocolVersion, $CipherSuite* cipherSuite) {
	$useLocalObjectStack();
	if (!($instanceOf($HandshakeHash$CacheOnlyHash, this->transcriptHash))) {
		$throwNew($IllegalStateException, "Not expected instance of transcript hash"_s);
	}
	$var($HandshakeHash$CacheOnlyHash, coh, $cast($HandshakeHash$CacheOnlyHash, this->transcriptHash));
	if ($nc(protocolVersion)->useTLS13PlusSpec()) {
		$set(this, transcriptHash, $new($HandshakeHash$T13HandshakeHash, cipherSuite));
	} else if (protocolVersion->useTLS12PlusSpec()) {
		$set(this, transcriptHash, $new($HandshakeHash$T12HandshakeHash, cipherSuite));
	} else if (protocolVersion->useTLS10PlusSpec()) {
		$set(this, transcriptHash, $new($HandshakeHash$T10HandshakeHash, cipherSuite));
	} else {
		$set(this, transcriptHash, $new($HandshakeHash$S30HandshakeHash, cipherSuite));
	}
	$var($bytes, reserved, $nc($nc(coh)->baos)->toByteArray());
	if ($nc(reserved)->length != 0) {
		$nc(this->transcriptHash)->update(reserved, 0, reserved->length);
	}
}

HandshakeHash* HandshakeHash::copy() {
	if ($instanceOf($HandshakeHash$CacheOnlyHash, this->transcriptHash)) {
		$var(HandshakeHash, result, $new(HandshakeHash));
		$set(result, transcriptHash, $cast($HandshakeHash$CacheOnlyHash, this->transcriptHash)->copy());
		$set(result, reserves, $new($LinkedList, $cast($AbstractCollection, this->reserves)));
		result->hasBeenUsed = this->hasBeenUsed;
		return result;
	} else {
		$throwNew($IllegalStateException, "Hash does not support copying"_s);
	}
}

void HandshakeHash::receive($bytes* input) {
	$nc(this->reserves)->add($($Arrays::copyOf(input, $nc(input)->length)));
}

void HandshakeHash::receive($ByteBuffer* input, int32_t length) {
	$useLocalObjectStack();
	if ($nc(input)->hasArray()) {
		int32_t var$0 = input->position();
		int32_t from = var$0 + input->arrayOffset();
		int32_t to = from + length;
		$nc(this->reserves)->add($($Arrays::copyOfRange($$cast($bytes, input->array()), from, to)));
	} else {
		int32_t inPos = input->position();
		$var($bytes, holder, $new($bytes, length));
		input->get(holder);
		input->position(inPos);
		$nc(this->reserves)->add($($Arrays::copyOf(holder, holder->length)));
	}
}

void HandshakeHash::receive($ByteBuffer* input) {
	receive(input, $nc(input)->remaining());
}

void HandshakeHash::push($bytes* input) {
	$nc(this->reserves)->push($($Arrays::copyOf(input, $nc(input)->length)));
}

$bytes* HandshakeHash::removeLastReceived() {
	return $cast($bytes, $nc(this->reserves)->removeLast());
}

void HandshakeHash::deliver($bytes* input) {
	update();
	$nc(this->transcriptHash)->update(input, 0, $nc(input)->length);
}

void HandshakeHash::deliver($bytes* input, int32_t offset, int32_t length) {
	update();
	$nc(this->transcriptHash)->update(input, offset, length);
}

void HandshakeHash::deliver($ByteBuffer* input) {
	$useLocalObjectStack();
	update();
	if ($nc(input)->hasArray()) {
		$var($bytes, var$0, $cast($bytes, input->array()));
		int32_t var$2 = input->position();
		int32_t var$1 = var$2 + input->arrayOffset();
		$nc(this->transcriptHash)->update(var$0, var$1, input->remaining());
	} else {
		int32_t inPos = input->position();
		$var($bytes, holder, $new($bytes, input->remaining()));
		input->get(holder);
		input->position(inPos);
		$nc(this->transcriptHash)->update(holder, 0, holder->length);
	}
}

void HandshakeHash::utilize() {
	if (this->hasBeenUsed) {
		return;
	}
	if ($nc(this->reserves)->size() != 0) {
		$var($bytes, holder, $cast($bytes, this->reserves->remove()));
		$nc(this->transcriptHash)->update(holder, 0, $nc(holder)->length);
		this->hasBeenUsed = true;
	}
}

void HandshakeHash::consume() {
	if (this->hasBeenUsed) {
		this->hasBeenUsed = false;
		return;
	}
	if ($nc(this->reserves)->size() != 0) {
		$var($bytes, holder, $cast($bytes, this->reserves->remove()));
		$nc(this->transcriptHash)->update(holder, 0, $nc(holder)->length);
	}
}

void HandshakeHash::update() {
	$useLocalObjectStack();
	while ($nc(this->reserves)->size() != 0) {
		$var($bytes, holder, $cast($bytes, this->reserves->remove()));
		$nc(this->transcriptHash)->update(holder, 0, $nc(holder)->length);
	}
	this->hasBeenUsed = false;
}

$bytes* HandshakeHash::digest() {
	return $nc(this->transcriptHash)->digest();
}

void HandshakeHash::finish() {
	$set(this, transcriptHash, $new($HandshakeHash$CacheOnlyHash));
	$set(this, reserves, $new($LinkedList));
	this->hasBeenUsed = false;
}

$bytes* HandshakeHash::archived() {
	return $nc(this->transcriptHash)->archived();
}

$bytes* HandshakeHash::digest($String* algorithm) {
	$var($HandshakeHash$T10HandshakeHash, hh, $cast($HandshakeHash$T10HandshakeHash, this->transcriptHash));
	return $nc(hh)->digest(algorithm);
}

$bytes* HandshakeHash::digest($String* algorithm, $SecretKey* masterSecret) {
	$var($HandshakeHash$S30HandshakeHash, hh, $cast($HandshakeHash$S30HandshakeHash, this->transcriptHash));
	return $nc(hh)->digest(algorithm, masterSecret);
}

$bytes* HandshakeHash::digest(bool useClientLabel, $SecretKey* masterSecret) {
	$var($HandshakeHash$S30HandshakeHash, hh, $cast($HandshakeHash$S30HandshakeHash, this->transcriptHash));
	return $nc(hh)->digest(useClientLabel, masterSecret);
}

bool HandshakeHash::isHashable(int8_t handshakeType) {
	$init($SSLHandshake);
	return handshakeType != $SSLHandshake::HELLO_REQUEST->id && handshakeType != $SSLHandshake::HELLO_VERIFY_REQUEST->id;
}

HandshakeHash::HandshakeHash() {
}

$Class* HandshakeHash::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"transcriptHash", "Lsun/security/ssl/HandshakeHash$TranscriptHash;", nullptr, $PRIVATE, $field(HandshakeHash, transcriptHash)},
		{"reserves", "Ljava/util/LinkedList;", "Ljava/util/LinkedList<[B>;", $PRIVATE, $field(HandshakeHash, reserves)},
		{"hasBeenUsed", "Z", nullptr, $PRIVATE, $field(HandshakeHash, hasBeenUsed)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(HandshakeHash, init$, void)},
		{"archived", "()[B", nullptr, 0, $method(HandshakeHash, archived, $bytes*)},
		{"consume", "()V", nullptr, 0, $method(HandshakeHash, consume, void)},
		{"copy", "()Lsun/security/ssl/HandshakeHash;", nullptr, 0, $method(HandshakeHash, copy, HandshakeHash*)},
		{"deliver", "([B)V", nullptr, 0, $method(HandshakeHash, deliver, void, $bytes*)},
		{"deliver", "([BII)V", nullptr, 0, $method(HandshakeHash, deliver, void, $bytes*, int32_t, int32_t)},
		{"deliver", "(Ljava/nio/ByteBuffer;)V", nullptr, 0, $method(HandshakeHash, deliver, void, $ByteBuffer*)},
		{"determine", "(Lsun/security/ssl/ProtocolVersion;Lsun/security/ssl/CipherSuite;)V", nullptr, 0, $method(HandshakeHash, determine, void, $ProtocolVersion*, $CipherSuite*)},
		{"digest", "()[B", nullptr, 0, $method(HandshakeHash, digest, $bytes*)},
		{"digest", "(Ljava/lang/String;)[B", nullptr, 0, $method(HandshakeHash, digest, $bytes*, $String*)},
		{"digest", "(Ljava/lang/String;Ljavax/crypto/SecretKey;)[B", nullptr, 0, $method(HandshakeHash, digest, $bytes*, $String*, $SecretKey*)},
		{"digest", "(ZLjavax/crypto/SecretKey;)[B", nullptr, 0, $method(HandshakeHash, digest, $bytes*, bool, $SecretKey*)},
		{"finish", "()V", nullptr, 0, $method(HandshakeHash, finish, void)},
		{"isHashable", "(B)Z", nullptr, $PUBLIC, $method(HandshakeHash, isHashable, bool, int8_t)},
		{"push", "([B)V", nullptr, 0, $method(HandshakeHash, push, void, $bytes*)},
		{"receive", "([B)V", nullptr, 0, $method(HandshakeHash, receive, void, $bytes*)},
		{"receive", "(Ljava/nio/ByteBuffer;I)V", nullptr, 0, $method(HandshakeHash, receive, void, $ByteBuffer*, int32_t)},
		{"receive", "(Ljava/nio/ByteBuffer;)V", nullptr, 0, $method(HandshakeHash, receive, void, $ByteBuffer*)},
		{"removeLastReceived", "()[B", nullptr, 0, $method(HandshakeHash, removeLastReceived, $bytes*)},
		{"update", "()V", nullptr, 0, $method(HandshakeHash, update, void)},
		{"utilize", "()V", nullptr, 0, $method(HandshakeHash, utilize, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.security.ssl.HandshakeHash$NonCloneableHash", "sun.security.ssl.HandshakeHash", "NonCloneableHash", $STATIC | $FINAL},
		{"sun.security.ssl.HandshakeHash$CloneableHash", "sun.security.ssl.HandshakeHash", "CloneableHash", $STATIC | $FINAL},
		{"sun.security.ssl.HandshakeHash$T13HandshakeHash", "sun.security.ssl.HandshakeHash", "T13HandshakeHash", $STATIC | $FINAL},
		{"sun.security.ssl.HandshakeHash$T12HandshakeHash", "sun.security.ssl.HandshakeHash", "T12HandshakeHash", $STATIC | $FINAL},
		{"sun.security.ssl.HandshakeHash$T10HandshakeHash", "sun.security.ssl.HandshakeHash", "T10HandshakeHash", $STATIC | $FINAL},
		{"sun.security.ssl.HandshakeHash$S30HandshakeHash", "sun.security.ssl.HandshakeHash", "S30HandshakeHash", $STATIC | $FINAL},
		{"sun.security.ssl.HandshakeHash$CacheOnlyHash", "sun.security.ssl.HandshakeHash", "CacheOnlyHash", $PRIVATE | $STATIC | $FINAL},
		{"sun.security.ssl.HandshakeHash$TranscriptHash", "sun.security.ssl.HandshakeHash", "TranscriptHash", $STATIC | $INTERFACE | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"sun.security.ssl.HandshakeHash",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"sun.security.ssl.HandshakeHash$NonCloneableHash,sun.security.ssl.HandshakeHash$CloneableHash,sun.security.ssl.HandshakeHash$T13HandshakeHash,sun.security.ssl.HandshakeHash$T12HandshakeHash,sun.security.ssl.HandshakeHash$T10HandshakeHash,sun.security.ssl.HandshakeHash$S30HandshakeHash,sun.security.ssl.HandshakeHash$CacheOnlyHash,sun.security.ssl.HandshakeHash$TranscriptHash"
	};
	$loadClass(HandshakeHash, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(HandshakeHash);
	});
	return class$;
}

$Class* HandshakeHash::class$ = nullptr;

		} // ssl
	} // security
} // sun