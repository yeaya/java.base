#include <java/security/MessageDigestSpi.h>

#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/CloneNotSupportedException.h>
#include <java/lang/Cloneable.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/Math.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/System.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/nio/ByteBuffer.h>
#include <java/security/DigestException.h>
#include <sun/security/jca/JCAUtil.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $CloneNotSupportedException = ::java::lang::CloneNotSupportedException;
using $Cloneable = ::java::lang::Cloneable;
using $FieldInfo = ::java::lang::FieldInfo;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;
using $Buffer = ::java::nio::Buffer;
using $ByteBuffer = ::java::nio::ByteBuffer;
using $DigestException = ::java::security::DigestException;
using $JCAUtil = ::sun::security::jca::JCAUtil;

namespace java {
	namespace security {

$FieldInfo _MessageDigestSpi_FieldInfo_[] = {
	{"tempArray", "[B", nullptr, $PRIVATE, $field(MessageDigestSpi, tempArray)},
	{}
};

$MethodInfo _MessageDigestSpi_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(MessageDigestSpi::*)()>(&MessageDigestSpi::init$))},
	{"clone", "()Ljava/lang/Object;", nullptr, $PUBLIC, nullptr, "java.lang.CloneNotSupportedException"},
	{"engineDigest", "()[B", nullptr, $PROTECTED | $ABSTRACT},
	{"engineDigest", "([BII)I", nullptr, $PROTECTED, nullptr, "java.security.DigestException"},
	{"engineGetDigestLength", "()I", nullptr, $PROTECTED},
	{"engineReset", "()V", nullptr, $PROTECTED | $ABSTRACT},
	{"engineUpdate", "(B)V", nullptr, $PROTECTED | $ABSTRACT},
	{"engineUpdate", "([BII)V", nullptr, $PROTECTED | $ABSTRACT},
	{"engineUpdate", "(Ljava/nio/ByteBuffer;)V", nullptr, $PROTECTED},
	{}
};

$ClassInfo _MessageDigestSpi_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER | $ABSTRACT,
	"java.security.MessageDigestSpi",
	"java.lang.Object",
	nullptr,
	_MessageDigestSpi_FieldInfo_,
	_MessageDigestSpi_MethodInfo_
};

$Object* allocate$MessageDigestSpi($Class* clazz) {
	return $of($alloc(MessageDigestSpi));
}

void MessageDigestSpi::init$() {
}

int32_t MessageDigestSpi::engineGetDigestLength() {
	return 0;
}

void MessageDigestSpi::engineUpdate($ByteBuffer* input) {
	if ($nc(input)->hasRemaining() == false) {
		return;
	}
	if ($nc(input)->hasArray()) {
		$var($bytes, b, $cast($bytes, input->array()));
		int32_t ofs = input->arrayOffset();
		int32_t pos = input->position();
		int32_t lim = input->limit();
		engineUpdate(b, ofs + pos, lim - pos);
		input->position(lim);
	} else {
		int32_t len = input->remaining();
		int32_t n = $JCAUtil::getTempArraySize(len);
		if ((this->tempArray == nullptr) || (n > $nc(this->tempArray)->length)) {
			$set(this, tempArray, $new($bytes, n));
		}
		while (len > 0) {
			int32_t chunk = $Math::min(len, $nc(this->tempArray)->length);
			input->get(this->tempArray, 0, chunk);
			engineUpdate(this->tempArray, 0, chunk);
			len -= chunk;
		}
	}
}

int32_t MessageDigestSpi::engineDigest($bytes* buf, int32_t offset, int32_t len) {
	$var($bytes, digest, engineDigest());
	if (len < $nc(digest)->length) {
		$throwNew($DigestException, "partial digests not returned"_s);
	}
	if ($nc(buf)->length - offset < $nc(digest)->length) {
		$throwNew($DigestException, "insufficient space in the output buffer to store the digest"_s);
	}
	$System::arraycopy(digest, 0, buf, offset, $nc(digest)->length);
	return $nc(digest)->length;
}

$Object* MessageDigestSpi::clone() {
	if ($instanceOf($Cloneable, this)) {
		return $of($Object::clone());
	} else {
		$throwNew($CloneNotSupportedException);
	}
}

MessageDigestSpi::MessageDigestSpi() {
}

$Class* MessageDigestSpi::load$($String* name, bool initialize) {
	$loadClass(MessageDigestSpi, name, initialize, &_MessageDigestSpi_ClassInfo_, allocate$MessageDigestSpi);
	return class$;
}

$Class* MessageDigestSpi::class$ = nullptr;

	} // security
} // java