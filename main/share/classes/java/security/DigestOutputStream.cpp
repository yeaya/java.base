#include <java/security/DigestOutputStream.h>

#include <java/io/FilterOutputStream.h>
#include <java/io/OutputStream.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
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

$FieldInfo _DigestOutputStream_FieldInfo_[] = {
	{"on", "Z", nullptr, $PRIVATE, $field(DigestOutputStream, on$)},
	{"digest", "Ljava/security/MessageDigest;", nullptr, $PROTECTED, $field(DigestOutputStream, digest)},
	{}
};

$MethodInfo _DigestOutputStream_MethodInfo_[] = {
	{"<init>", "(Ljava/io/OutputStream;Ljava/security/MessageDigest;)V", nullptr, $PUBLIC, $method(static_cast<void(DigestOutputStream::*)($OutputStream*,$MessageDigest*)>(&DigestOutputStream::init$))},
	{"getMessageDigest", "()Ljava/security/MessageDigest;", nullptr, $PUBLIC},
	{"on", "(Z)V", nullptr, $PUBLIC},
	{"setMessageDigest", "(Ljava/security/MessageDigest;)V", nullptr, $PUBLIC},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"write", "(I)V", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"write", "([BII)V", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{}
};

$ClassInfo _DigestOutputStream_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"java.security.DigestOutputStream",
	"java.io.FilterOutputStream",
	nullptr,
	_DigestOutputStream_FieldInfo_,
	_DigestOutputStream_MethodInfo_
};

$Object* allocate$DigestOutputStream($Class* clazz) {
	return $of($alloc(DigestOutputStream));
}

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
	$loadClass(DigestOutputStream, name, initialize, &_DigestOutputStream_ClassInfo_, allocate$DigestOutputStream);
	return class$;
}

$Class* DigestOutputStream::class$ = nullptr;

	} // security
} // java