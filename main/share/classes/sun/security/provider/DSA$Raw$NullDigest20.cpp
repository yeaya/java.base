#include <sun/security/provider/DSA$Raw$NullDigest20.h>

#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/Integer.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/RuntimeException.h>
#include <java/lang/String.h>
#include <java/lang/System.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/nio/ByteBuffer.h>
#include <java/security/DigestException.h>
#include <java/security/MessageDigest.h>
#include <sun/security/provider/DSA$Raw.h>
#include <jcpp.h>

#undef MAX_VALUE

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $Buffer = ::java::nio::Buffer;
using $ByteBuffer = ::java::nio::ByteBuffer;
using $DigestException = ::java::security::DigestException;
using $MessageDigest = ::java::security::MessageDigest;
using $DSA$Raw = ::sun::security::provider::DSA$Raw;

namespace sun {
	namespace security {
		namespace provider {

$FieldInfo _DSA$Raw$NullDigest20_FieldInfo_[] = {
	{"digestBuffer", "[B", nullptr, $PRIVATE | $FINAL, $field(DSA$Raw$NullDigest20, digestBuffer)},
	{"ofs", "I", nullptr, $PRIVATE, $field(DSA$Raw$NullDigest20, ofs)},
	{}
};

$MethodInfo _DSA$Raw$NullDigest20_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PROTECTED, $method(static_cast<void(DSA$Raw$NullDigest20::*)()>(&DSA$Raw$NullDigest20::init$))},
	{"engineDigest", "()[B", nullptr, $PROTECTED, nullptr, "java.lang.RuntimeException"},
	{"engineDigest", "([BII)I", nullptr, $PROTECTED, nullptr, "java.security.DigestException"},
	{"engineGetDigestLength", "()I", nullptr, $PROTECTED | $FINAL},
	{"engineReset", "()V", nullptr, $PROTECTED},
	{"engineUpdate", "(B)V", nullptr, $PROTECTED},
	{"engineUpdate", "([BII)V", nullptr, $PROTECTED},
	{"engineUpdate", "(Ljava/nio/ByteBuffer;)V", nullptr, $PROTECTED | $FINAL},
	{}
};

$InnerClassInfo _DSA$Raw$NullDigest20_InnerClassesInfo_[] = {
	{"sun.security.provider.DSA$Raw", "sun.security.provider.DSA", "Raw", $STATIC},
	{"sun.security.provider.DSA$Raw$NullDigest20", "sun.security.provider.DSA$Raw", "NullDigest20", $PUBLIC | $STATIC | $FINAL},
	{}
};

$ClassInfo _DSA$Raw$NullDigest20_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"sun.security.provider.DSA$Raw$NullDigest20",
	"java.security.MessageDigest",
	nullptr,
	_DSA$Raw$NullDigest20_FieldInfo_,
	_DSA$Raw$NullDigest20_MethodInfo_,
	nullptr,
	nullptr,
	_DSA$Raw$NullDigest20_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.security.provider.DSA"
};

$Object* allocate$DSA$Raw$NullDigest20($Class* clazz) {
	return $of($alloc(DSA$Raw$NullDigest20));
}

void DSA$Raw$NullDigest20::init$() {
	$MessageDigest::init$("NullDigest20"_s);
	$set(this, digestBuffer, $new($bytes, 20));
	this->ofs = 0;
}

void DSA$Raw$NullDigest20::engineUpdate(int8_t input) {
	if (this->ofs == $nc(this->digestBuffer)->length) {
		this->ofs = $Integer::MAX_VALUE;
	} else {
		$nc(this->digestBuffer)->set(this->ofs++, input);
	}
}

void DSA$Raw$NullDigest20::engineUpdate($bytes* input, int32_t offset, int32_t len) {
	if (len > ($nc(this->digestBuffer)->length - this->ofs)) {
		this->ofs = $Integer::MAX_VALUE;
	} else {
		$System::arraycopy(input, offset, this->digestBuffer, this->ofs, len);
		this->ofs += len;
	}
}

void DSA$Raw$NullDigest20::engineUpdate($ByteBuffer* input) {
	int32_t inputLen = $nc(input)->remaining();
	if (inputLen > ($nc(this->digestBuffer)->length - this->ofs)) {
		this->ofs = $Integer::MAX_VALUE;
	} else {
		input->get(this->digestBuffer, this->ofs, inputLen);
		this->ofs += inputLen;
	}
}

$bytes* DSA$Raw$NullDigest20::engineDigest() {
	if (this->ofs != $nc(this->digestBuffer)->length) {
		$throwNew($RuntimeException, "Data for RawDSA must be exactly 20 bytes long"_s);
	}
	reset();
	return this->digestBuffer;
}

int32_t DSA$Raw$NullDigest20::engineDigest($bytes* buf, int32_t offset, int32_t len) {
	if (this->ofs != $nc(this->digestBuffer)->length) {
		$throwNew($DigestException, "Data for RawDSA must be exactly 20 bytes long"_s);
	}
	if (len < $nc(this->digestBuffer)->length) {
		$throwNew($DigestException, "Output buffer too small; must be at least 20 bytes"_s);
	}
	$System::arraycopy(this->digestBuffer, 0, buf, offset, $nc(this->digestBuffer)->length);
	reset();
	return $nc(this->digestBuffer)->length;
}

void DSA$Raw$NullDigest20::engineReset() {
	this->ofs = 0;
}

int32_t DSA$Raw$NullDigest20::engineGetDigestLength() {
	return $nc(this->digestBuffer)->length;
}

DSA$Raw$NullDigest20::DSA$Raw$NullDigest20() {
}

$Class* DSA$Raw$NullDigest20::load$($String* name, bool initialize) {
	$loadClass(DSA$Raw$NullDigest20, name, initialize, &_DSA$Raw$NullDigest20_ClassInfo_, allocate$DSA$Raw$NullDigest20);
	return class$;
}

$Class* DSA$Raw$NullDigest20::class$ = nullptr;

		} // provider
	} // security
} // sun