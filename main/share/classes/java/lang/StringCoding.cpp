#include <java/lang/StringCoding.h>

#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/CompoundAttribute.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/StringUTF16.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $MethodInfo = ::java::lang::MethodInfo;
using $StringUTF16 = ::java::lang::StringUTF16;

namespace java {
	namespace lang {

$CompoundAttribute _StringCoding_MethodAnnotations_hasNegatives1[] = {
	{"Ljdk/internal/vm/annotation/IntrinsicCandidate;", nullptr},
	{}
};

$CompoundAttribute _StringCoding_MethodAnnotations_implEncodeISOArray2[] = {
	{"Ljdk/internal/vm/annotation/IntrinsicCandidate;", nullptr},
	{}
};

$MethodInfo _StringCoding_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(StringCoding::*)()>(&StringCoding::init$))},
	{"hasNegatives", "([BII)Z", nullptr, $PUBLIC | $STATIC, $method(static_cast<bool(*)($bytes*,int32_t,int32_t)>(&StringCoding::hasNegatives)), nullptr, nullptr, _StringCoding_MethodAnnotations_hasNegatives1},
	{"implEncodeISOArray", "([BI[BII)I", nullptr, $PUBLIC | $STATIC, $method(static_cast<int32_t(*)($bytes*,int32_t,$bytes*,int32_t,int32_t)>(&StringCoding::implEncodeISOArray)), nullptr, nullptr, _StringCoding_MethodAnnotations_implEncodeISOArray2},
	{}
};

$ClassInfo _StringCoding_ClassInfo_ = {
	$ACC_SUPER,
	"java.lang.StringCoding",
	"java.lang.Object",
	nullptr,
	nullptr,
	_StringCoding_MethodInfo_
};

$Object* allocate$StringCoding($Class* clazz) {
	return $of($alloc(StringCoding));
}

void StringCoding::init$() {
}

bool StringCoding::hasNegatives($bytes* ba, int32_t off, int32_t len) {
	for (int32_t i = off; i < off + len; ++i) {
		if ($nc(ba)->get(i) < 0) {
			return true;
		}
	}
	return false;
}

int32_t StringCoding::implEncodeISOArray($bytes* sa, int32_t sp, $bytes* da, int32_t dp, int32_t len) {
	int32_t i = 0;
	for (; i < len; ++i) {
		char16_t c = $StringUTF16::getChar(sa, sp++);
		if (c > (char16_t)0xFF) {
			break;
		}
		$nc(da)->set(dp++, (int8_t)c);
	}
	return i;
}

StringCoding::StringCoding() {
}

$Class* StringCoding::load$($String* name, bool initialize) {
	$loadClass(StringCoding, name, initialize, &_StringCoding_ClassInfo_, allocate$StringCoding);
	return class$;
}

$Class* StringCoding::class$ = nullptr;

	} // lang
} // java