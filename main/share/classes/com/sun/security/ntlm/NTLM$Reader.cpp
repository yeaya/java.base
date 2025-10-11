#include <com/sun/security/ntlm/NTLM$Reader.h>

#include <com/sun/security/ntlm/NTLM.h>
#include <com/sun/security/ntlm/NTLMException.h>
#include <java/lang/Array.h>
#include <java/lang/ArrayIndexOutOfBoundsException.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/nio/charset/Charset.h>
#include <java/nio/charset/StandardCharsets.h>
#include <java/util/Arrays.h>
#include <jcpp.h>

#undef UTF_16LE
#undef PACKET_READ_ERROR

using $NTLM = ::com::sun::security::ntlm::NTLM;
using $NTLMException = ::com::sun::security::ntlm::NTLMException;
using $ArrayIndexOutOfBoundsException = ::java::lang::ArrayIndexOutOfBoundsException;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Charset = ::java::nio::charset::Charset;
using $StandardCharsets = ::java::nio::charset::StandardCharsets;
using $Arrays = ::java::util::Arrays;

namespace com {
	namespace sun {
		namespace security {
			namespace ntlm {

$FieldInfo _NTLM$Reader_FieldInfo_[] = {
	{"internal", "[B", nullptr, $PRIVATE | $FINAL, $field(NTLM$Reader, internal)},
	{}
};

$MethodInfo _NTLM$Reader_MethodInfo_[] = {
	{"<init>", "([B)V", nullptr, 0, $method(static_cast<void(NTLM$Reader::*)($bytes*)>(&NTLM$Reader::init$))},
	{"readBytes", "(II)[B", nullptr, 0, nullptr, "com.sun.security.ntlm.NTLMException"},
	{"readInt", "(I)I", nullptr, 0, nullptr, "com.sun.security.ntlm.NTLMException"},
	{"readSecurityBuffer", "(I)[B", nullptr, 0, nullptr, "com.sun.security.ntlm.NTLMException"},
	{"readSecurityBuffer", "(IZ)Ljava/lang/String;", nullptr, 0, nullptr, "com.sun.security.ntlm.NTLMException"},
	{"readShort", "(I)I", nullptr, 0, nullptr, "com.sun.security.ntlm.NTLMException"},
	{}
};

$InnerClassInfo _NTLM$Reader_InnerClassesInfo_[] = {
	{"com.sun.security.ntlm.NTLM$Reader", "com.sun.security.ntlm.NTLM", "Reader", $STATIC},
	{}
};

$ClassInfo _NTLM$Reader_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.security.ntlm.NTLM$Reader",
	"java.lang.Object",
	nullptr,
	_NTLM$Reader_FieldInfo_,
	_NTLM$Reader_MethodInfo_,
	nullptr,
	nullptr,
	_NTLM$Reader_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.security.ntlm.NTLM"
};

$Object* allocate$NTLM$Reader($Class* clazz) {
	return $of($alloc(NTLM$Reader));
}

void NTLM$Reader::init$($bytes* data) {
	$set(this, internal, data);
}

int32_t NTLM$Reader::readInt(int32_t offset) {
	try {
		return ((int32_t)($nc(this->internal)->get(offset) & (uint32_t)255)) + (((int32_t)($nc(this->internal)->get(offset + 1) & (uint32_t)255)) << 8) + (((int32_t)($nc(this->internal)->get(offset + 2) & (uint32_t)255)) << 16) + (((int32_t)($nc(this->internal)->get(offset + 3) & (uint32_t)255)) << 24);
	} catch ($ArrayIndexOutOfBoundsException&) {
		$var($ArrayIndexOutOfBoundsException, ex, $catch());
		$throwNew($NTLMException, $NTLMException::PACKET_READ_ERROR, "Input message incorrect size"_s);
	}
	$shouldNotReachHere();
}

int32_t NTLM$Reader::readShort(int32_t offset) {
	try {
		return ((int32_t)($nc(this->internal)->get(offset) & (uint32_t)255)) + (((int32_t)($nc(this->internal)->get(offset + 1) & (uint32_t)255)) << 8);
	} catch ($ArrayIndexOutOfBoundsException&) {
		$var($ArrayIndexOutOfBoundsException, ex, $catch());
		$throwNew($NTLMException, $NTLMException::PACKET_READ_ERROR, "Input message incorrect size"_s);
	}
	$shouldNotReachHere();
}

$bytes* NTLM$Reader::readBytes(int32_t offset, int32_t len) {
	try {
		return $Arrays::copyOfRange(this->internal, offset, offset + len);
	} catch ($ArrayIndexOutOfBoundsException&) {
		$var($ArrayIndexOutOfBoundsException, ex, $catch());
		$throwNew($NTLMException, $NTLMException::PACKET_READ_ERROR, "Input message incorrect size"_s);
	}
	$shouldNotReachHere();
}

$bytes* NTLM$Reader::readSecurityBuffer(int32_t offset) {
	int32_t pos = readInt(offset + 4);
	if (pos == 0) {
		return $new($bytes, 0);
	}
	try {
		return $Arrays::copyOfRange(this->internal, pos, pos + readShort(offset));
	} catch ($ArrayIndexOutOfBoundsException&) {
		$var($ArrayIndexOutOfBoundsException, ex, $catch());
		$throwNew($NTLMException, $NTLMException::PACKET_READ_ERROR, "Input message incorrect size"_s);
	}
	$shouldNotReachHere();
}

$String* NTLM$Reader::readSecurityBuffer(int32_t offset, bool unicode) {
	$var($bytes, raw, readSecurityBuffer(offset));
	$init($StandardCharsets);
	return raw == nullptr ? ($String*)nullptr : $new($String, raw, unicode ? $StandardCharsets::UTF_16LE : $StandardCharsets::ISO_8859_1);
}

NTLM$Reader::NTLM$Reader() {
}

$Class* NTLM$Reader::load$($String* name, bool initialize) {
	$loadClass(NTLM$Reader, name, initialize, &_NTLM$Reader_ClassInfo_, allocate$NTLM$Reader);
	return class$;
}

$Class* NTLM$Reader::class$ = nullptr;

			} // ntlm
		} // security
	} // sun
} // com