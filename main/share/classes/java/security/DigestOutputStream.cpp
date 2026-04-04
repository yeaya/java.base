#include <java/security/DigestOutputStream.h>
#include <java/io/FilterOutputStream.h>
#include <java/io/OutputStream.h>
#include <java/security/MessageDigest.h>
#include <jcpp.h>

using $FilterOutputStream = ::java::io::FilterOutputStream;
using $OutputStream = ::java::io::OutputStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $MessageDigest = ::java::security::MessageDigest;

namespace java {
	namespace security {

void DigestOutputStream::init$($OutputStream* stream, $MessageDigest* digest) {
	$FilterOutputStream::init$(stream);
	this->on$ = true;
	setMessageDigest(digest);
}

$MessageDigest* DigestOutputStream::getMessageDigest() {
	return this->digest;
}

void DigestOutputStream::setMessageDigest($MessageDigest* digest) {
	$set(this, digest, digest);
}

void DigestOutputStream::write(int32_t b) {
	$nc(this->out)->write(b);
	if (this->on$) {
		$nc(this->digest)->update((int8_t)b);
	}
}

void DigestOutputStream::write($bytes* b, int32_t off, int32_t len) {
	$nc(this->out)->write(b, off, len);
	if (this->on$) {
		$nc(this->digest)->update(b, off, len);
	}
}

void DigestOutputStream::on(bool on) {
	this->on$ = on;
}

$String* DigestOutputStream::toString() {
	return $str({"[Digest Output Stream] "_s, $($nc(this->digest)->toString())});
}

DigestOutputStream::DigestOutputStream() {
}

$Class* DigestOutputStream::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"on", "Z", nullptr, $PRIVATE, $field(DigestOutputStream, on$)},
		{"digest", "Ljava/security/MessageDigest;", nullptr, $PROTECTED, $field(DigestOutputStream, digest)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/io/OutputStream;Ljava/security/MessageDigest;)V", nullptr, $PUBLIC, $method(DigestOutputStream, init$, void, $OutputStream*, $MessageDigest*)},
		{"getMessageDigest", "()Ljava/security/MessageDigest;", nullptr, $PUBLIC, $virtualMethod(DigestOutputStream, getMessageDigest, $MessageDigest*)},
		{"on", "(Z)V", nullptr, $PUBLIC, $virtualMethod(DigestOutputStream, on, void, bool)},
		{"setMessageDigest", "(Ljava/security/MessageDigest;)V", nullptr, $PUBLIC, $virtualMethod(DigestOutputStream, setMessageDigest, void, $MessageDigest*)},
		{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(DigestOutputStream, toString, $String*)},
		{"write", "(I)V", nullptr, $PUBLIC, $virtualMethod(DigestOutputStream, write, void, int32_t), "java.io.IOException"},
		{"write", "([BII)V", nullptr, $PUBLIC, $virtualMethod(DigestOutputStream, write, void, $bytes*, int32_t, int32_t), "java.io.IOException"},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"java.security.DigestOutputStream",
		"java.io.FilterOutputStream",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(DigestOutputStream, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(DigestOutputStream));
	});
	return class$;
}

$Class* DigestOutputStream::class$ = nullptr;

	} // security
} // java