#include <java/lang/StringCoding.h>
#include <java/lang/StringUTF16.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $MethodInfo = ::java::lang::MethodInfo;
using $StringUTF16 = ::java::lang::StringUTF16;

namespace java {
	namespace lang {

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
		if (c > (char16_t)0xff) {
			break;
		}
		$nc(da)->set(dp++, (int8_t)c);
	}
	return i;
}

StringCoding::StringCoding() {
}

$Class* StringCoding::load$($String* name, bool initialize) {
	$CompoundAttribute hasNegativesmethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/IntrinsicCandidate;", nullptr},
		{}
	};
	$CompoundAttribute implEncodeISOArraymethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/IntrinsicCandidate;", nullptr},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PRIVATE, $method(StringCoding, init$, void)},
		{"hasNegatives", "([BII)Z", nullptr, $PUBLIC | $STATIC, $staticMethod(StringCoding, hasNegatives, bool, $bytes*, int32_t, int32_t), nullptr, nullptr, hasNegativesmethodAnnotations$$},
		{"implEncodeISOArray", "([BI[BII)I", nullptr, $PUBLIC | $STATIC, $staticMethod(StringCoding, implEncodeISOArray, int32_t, $bytes*, int32_t, $bytes*, int32_t, int32_t), nullptr, nullptr, implEncodeISOArraymethodAnnotations$$},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"java.lang.StringCoding",
		"java.lang.Object",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(StringCoding, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(StringCoding);
	});
	return class$;
}

$Class* StringCoding::class$ = nullptr;

	} // lang
} // java