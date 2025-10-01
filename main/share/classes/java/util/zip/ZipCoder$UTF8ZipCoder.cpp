#include <java/util/zip/ZipCoder$UTF8ZipCoder.h>

#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/nio/charset/Charset.h>
#include <java/util/zip/ZipCoder.h>
#include <jdk/internal/access/JavaLangAccess.h>
#include <jcpp.h>

#undef JLA

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Charset = ::java::nio::charset::Charset;
using $ZipCoder = ::java::util::zip::ZipCoder;
using $JavaLangAccess = ::jdk::internal::access::JavaLangAccess;

namespace java {
	namespace util {
		namespace zip {

$MethodInfo _ZipCoder$UTF8ZipCoder_MethodInfo_[] = {
	{"<init>", "(Ljava/nio/charset/Charset;)V", nullptr, $PRIVATE, $method(static_cast<void(ZipCoder$UTF8ZipCoder::*)($Charset*)>(&ZipCoder$UTF8ZipCoder::init$))},
	{"checkedHash", "([BII)I", nullptr, 0, nullptr, "java.lang.Exception"},
	{"getBytes", "(Ljava/lang/String;)[B", nullptr, 0},
	{"hasTrailingSlash", "([BI)Z", nullptr, 0},
	{"isUTF8", "()Z", nullptr, 0},
	{"toString", "([BII)Ljava/lang/String;", nullptr, 0},
	{}
};

$InnerClassInfo _ZipCoder$UTF8ZipCoder_InnerClassesInfo_[] = {
	{"java.util.zip.ZipCoder$UTF8ZipCoder", "java.util.zip.ZipCoder", "UTF8ZipCoder", $STATIC | $FINAL},
	{}
};

$ClassInfo _ZipCoder$UTF8ZipCoder_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"java.util.zip.ZipCoder$UTF8ZipCoder",
	"java.util.zip.ZipCoder",
	nullptr,
	nullptr,
	_ZipCoder$UTF8ZipCoder_MethodInfo_,
	nullptr,
	nullptr,
	_ZipCoder$UTF8ZipCoder_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.util.zip.ZipCoder"
};

$Object* allocate$ZipCoder$UTF8ZipCoder($Class* clazz) {
	return $of($alloc(ZipCoder$UTF8ZipCoder));
}

void ZipCoder$UTF8ZipCoder::init$($Charset* utf8) {
	$ZipCoder::init$(utf8);
}

bool ZipCoder$UTF8ZipCoder::isUTF8() {
	return true;
}

$String* ZipCoder$UTF8ZipCoder::toString($bytes* ba, int32_t off, int32_t length) {
	$init($ZipCoder);
	return $nc($ZipCoder::JLA)->newStringUTF8NoRepl(ba, off, length);
}

$bytes* ZipCoder$UTF8ZipCoder::getBytes($String* s) {
	$init($ZipCoder);
	return $nc($ZipCoder::JLA)->getBytesUTF8NoRepl(s);
}

int32_t ZipCoder$UTF8ZipCoder::checkedHash($bytes* a, int32_t off, int32_t len) {
	if (len == 0) {
		return 0;
	}
	int32_t end = off + len;
	int32_t h = 0;
	while (off < end) {
		int8_t b = $nc(a)->get(off);
		if (b >= 0) {
			h = 31 * h + b;
			++off;
		} else {
			$init($ZipCoder);
			return hash($($nc($ZipCoder::JLA)->newStringUTF8NoRepl(a, end - len, len)));
		}
	}
	if ($nc(a)->get(end - 1) != u'/') {
		h = 31 * h + u'/';
	}
	return h;
}

bool ZipCoder$UTF8ZipCoder::hasTrailingSlash($bytes* a, int32_t end) {
	return end > 0 && $nc(a)->get(end - 1) == u'/';
}

ZipCoder$UTF8ZipCoder::ZipCoder$UTF8ZipCoder() {
}

$Class* ZipCoder$UTF8ZipCoder::load$($String* name, bool initialize) {
	$loadClass(ZipCoder$UTF8ZipCoder, name, initialize, &_ZipCoder$UTF8ZipCoder_ClassInfo_, allocate$ZipCoder$UTF8ZipCoder);
	return class$;
}

$Class* ZipCoder$UTF8ZipCoder::class$ = nullptr;

		} // zip
	} // util
} // java