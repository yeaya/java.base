#include <java/security/DigestInputStream.h>

#include <java/io/FilterInputStream.h>
#include <java/io/InputStream.h>
#include <java/security/MessageDigest.h>
#include <jcpp.h>

using $FilterInputStream = ::java::io::FilterInputStream;
using $InputStream = ::java::io::InputStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $MessageDigest = ::java::security::MessageDigest;

namespace java {
	namespace security {

$FieldInfo _DigestInputStream_FieldInfo_[] = {
	{"on", "Z", nullptr, $PRIVATE, $field(DigestInputStream, on$)},
	{"digest", "Ljava/security/MessageDigest;", nullptr, $PROTECTED, $field(DigestInputStream, digest)},
	{}
};

$MethodInfo _DigestInputStream_MethodInfo_[] = {
	{"<init>", "(Ljava/io/InputStream;Ljava/security/MessageDigest;)V", nullptr, $PUBLIC, $method(DigestInputStream, init$, void, $InputStream*, $MessageDigest*)},
	{"getMessageDigest", "()Ljava/security/MessageDigest;", nullptr, $PUBLIC, $virtualMethod(DigestInputStream, getMessageDigest, $MessageDigest*)},
	{"on", "(Z)V", nullptr, $PUBLIC, $virtualMethod(DigestInputStream, on, void, bool)},
	{"read", "()I", nullptr, $PUBLIC, $virtualMethod(DigestInputStream, read, int32_t), "java.io.IOException"},
	{"read", "([BII)I", nullptr, $PUBLIC, $virtualMethod(DigestInputStream, read, int32_t, $bytes*, int32_t, int32_t), "java.io.IOException"},
	{"setMessageDigest", "(Ljava/security/MessageDigest;)V", nullptr, $PUBLIC, $virtualMethod(DigestInputStream, setMessageDigest, void, $MessageDigest*)},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(DigestInputStream, toString, $String*)},
	{}
};

$ClassInfo _DigestInputStream_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"java.security.DigestInputStream",
	"java.io.FilterInputStream",
	nullptr,
	_DigestInputStream_FieldInfo_,
	_DigestInputStream_MethodInfo_
};

$Object* allocate$DigestInputStream($Class* clazz) {
	return $of($alloc(DigestInputStream));
}

void DigestInputStream::init$($InputStream* stream, $MessageDigest* digest) {
	$FilterInputStream::init$(stream);
	this->on$ = true;
	setMessageDigest(digest);
}

$MessageDigest* DigestInputStream::getMessageDigest() {
	return this->digest;
}

void DigestInputStream::setMessageDigest($MessageDigest* digest) {
	$set(this, digest, digest);
}

int32_t DigestInputStream::read() {
	int32_t ch = $nc(this->in)->read();
	if (this->on$ && ch != -1) {
		$nc(this->digest)->update((int8_t)ch);
	}
	return ch;
}

int32_t DigestInputStream::read($bytes* b, int32_t off, int32_t len) {
	int32_t result = $nc(this->in)->read(b, off, len);
	if (this->on$ && result != -1) {
		$nc(this->digest)->update(b, off, result);
	}
	return result;
}

void DigestInputStream::on(bool on) {
	this->on$ = on;
}

$String* DigestInputStream::toString() {
	return $str({"[Digest Input Stream] "_s, $($nc(this->digest)->toString())});
}

DigestInputStream::DigestInputStream() {
}

$Class* DigestInputStream::load$($String* name, bool initialize) {
	$loadClass(DigestInputStream, name, initialize, &_DigestInputStream_ClassInfo_, allocate$DigestInputStream);
	return class$;
}

$Class* DigestInputStream::class$ = nullptr;

	} // security
} // java