#include <com/sun/security/ntlm/NTLM$Writer.h>

#include <com/sun/security/ntlm/NTLM.h>
#include <java/lang/AssertionError.h>
#include <java/nio/charset/Charset.h>
#include <java/nio/charset/StandardCharsets.h>
#include <java/util/Arrays.h>
#include <jcpp.h>

#undef UTF_16LE

using $NTLM = ::com::sun::security::ntlm::NTLM;
using $AssertionError = ::java::lang::AssertionError;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $StandardCharsets = ::java::nio::charset::StandardCharsets;
using $Arrays = ::java::util::Arrays;

namespace com {
	namespace sun {
		namespace security {
			namespace ntlm {

$FieldInfo _NTLM$Writer_FieldInfo_[] = {
	{"$assertionsDisabled", "Z", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(NTLM$Writer, $assertionsDisabled)},
	{"internal", "[B", nullptr, $PRIVATE, $field(NTLM$Writer, internal)},
	{"current", "I", nullptr, $PRIVATE, $field(NTLM$Writer, current)},
	{}
};

$MethodInfo _NTLM$Writer_MethodInfo_[] = {
	{"<init>", "(II)V", nullptr, 0, $method(NTLM$Writer, init$, void, int32_t, int32_t)},
	{"getBytes", "()[B", nullptr, 0, $virtualMethod(NTLM$Writer, getBytes, $bytes*)},
	{"writeBytes", "(I[B)V", nullptr, 0, $virtualMethod(NTLM$Writer, writeBytes, void, int32_t, $bytes*)},
	{"writeInt", "(II)V", nullptr, 0, $virtualMethod(NTLM$Writer, writeInt, void, int32_t, int32_t)},
	{"writeSecurityBuffer", "(I[B)V", nullptr, 0, $virtualMethod(NTLM$Writer, writeSecurityBuffer, void, int32_t, $bytes*)},
	{"writeSecurityBuffer", "(ILjava/lang/String;Z)V", nullptr, 0, $virtualMethod(NTLM$Writer, writeSecurityBuffer, void, int32_t, $String*, bool)},
	{"writeShort", "(II)V", nullptr, 0, $virtualMethod(NTLM$Writer, writeShort, void, int32_t, int32_t)},
	{}
};

$InnerClassInfo _NTLM$Writer_InnerClassesInfo_[] = {
	{"com.sun.security.ntlm.NTLM$Writer", "com.sun.security.ntlm.NTLM", "Writer", $STATIC},
	{}
};

$ClassInfo _NTLM$Writer_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.security.ntlm.NTLM$Writer",
	"java.lang.Object",
	nullptr,
	_NTLM$Writer_FieldInfo_,
	_NTLM$Writer_MethodInfo_,
	nullptr,
	nullptr,
	_NTLM$Writer_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.security.ntlm.NTLM"
};

$Object* allocate$NTLM$Writer($Class* clazz) {
	return $of($alloc(NTLM$Writer));
}

bool NTLM$Writer::$assertionsDisabled = false;

void NTLM$Writer::init$(int32_t type, int32_t len) {
	if (!NTLM$Writer::$assertionsDisabled && !(len < 256)) {
		$throwNew($AssertionError);
	}
	$set(this, internal, $new($bytes, 256));
	this->current = len;
	$System::arraycopy($$new($bytes, {
		(int8_t)u'N',
		(int8_t)u'T',
		(int8_t)u'L',
		(int8_t)u'M',
		(int8_t)u'S',
		(int8_t)u'S',
		(int8_t)u'P',
		(int8_t)0,
		(int8_t)type
	}), 0, this->internal, 0, 9);
}

void NTLM$Writer::writeShort(int32_t offset, int32_t number) {
	$nc(this->internal)->set(offset, (int8_t)(number));
	$nc(this->internal)->set(offset + 1, (int8_t)(number >> 8));
}

void NTLM$Writer::writeInt(int32_t offset, int32_t number) {
	$nc(this->internal)->set(offset, (int8_t)(number));
	$nc(this->internal)->set(offset + 1, (int8_t)(number >> 8));
	$nc(this->internal)->set(offset + 2, (int8_t)(number >> 16));
	$nc(this->internal)->set(offset + 3, (int8_t)(number >> 24));
}

void NTLM$Writer::writeBytes(int32_t offset, $bytes* data) {
	$System::arraycopy(data, 0, this->internal, offset, $nc(data)->length);
}

void NTLM$Writer::writeSecurityBuffer(int32_t offset, $bytes* data) {
	if (data == nullptr) {
		writeShort(offset + 4, this->current);
	} else {
		int32_t len = $nc(data)->length;
		if (this->current + len > $nc(this->internal)->length) {
			$set(this, internal, $Arrays::copyOf(this->internal, this->current + len + 256));
		}
		writeShort(offset, len);
		writeShort(offset + 2, len);
		writeShort(offset + 4, this->current);
		$System::arraycopy(data, 0, this->internal, this->current, len);
		this->current += len;
	}
}

void NTLM$Writer::writeSecurityBuffer(int32_t offset, $String* str, bool unicode) {
	$init($StandardCharsets);
	writeSecurityBuffer(offset, str == nullptr ? ($bytes*)nullptr : $($nc(str)->getBytes(unicode ? $StandardCharsets::UTF_16LE : $StandardCharsets::ISO_8859_1)));
}

$bytes* NTLM$Writer::getBytes() {
	return $Arrays::copyOf(this->internal, this->current);
}

void clinit$NTLM$Writer($Class* class$) {
	$load($NTLM);
	NTLM$Writer::$assertionsDisabled = !$NTLM::class$->desiredAssertionStatus();
}

NTLM$Writer::NTLM$Writer() {
}

$Class* NTLM$Writer::load$($String* name, bool initialize) {
	$loadClass(NTLM$Writer, name, initialize, &_NTLM$Writer_ClassInfo_, clinit$NTLM$Writer, allocate$NTLM$Writer);
	return class$;
}

$Class* NTLM$Writer::class$ = nullptr;

			} // ntlm
		} // security
	} // sun
} // com