#include <jdk/internal/reflect/UTF8.h>
#include <java/lang/ArrayIndexOutOfBoundsException.h>
#include <java/lang/InternalError.h>
#include <jcpp.h>

#undef UTF8

using $ArrayIndexOutOfBoundsException = ::java::lang::ArrayIndexOutOfBoundsException;
using $ClassInfo = ::java::lang::ClassInfo;
using $InternalError = ::java::lang::InternalError;
using $MethodInfo = ::java::lang::MethodInfo;

namespace jdk {
	namespace internal {
		namespace reflect {

void UTF8::init$() {
}

$bytes* UTF8::encode($String* str) {
	int32_t len = $nc(str)->length();
	$var($bytes, res, $new($bytes, utf8Length(str)));
	int32_t utf8Idx = 0;
	try {
		for (int32_t i = 0; i < len; ++i) {
			int32_t c = str->charAt(i) & 0xffff;
			if (c >= 1 && c <= 127) {
				res->set(utf8Idx++, (int8_t)c);
			} else if (c == 0 || (c >= 128 && c <= 2047)) {
				res->set(utf8Idx++, (int8_t)(192 + (c >> 6)));
				res->set(utf8Idx++, (int8_t)(0x80 + (c & 0x3f)));
			} else {
				res->set(utf8Idx++, (int8_t)(224 + (c >> 12)));
				res->set(utf8Idx++, (int8_t)(0x80 + ((c >> 6) & 0x3f)));
				res->set(utf8Idx++, (int8_t)(0x80 + (c & 0x3f)));
			}
		}
	} catch ($ArrayIndexOutOfBoundsException& e) {
		$throwNew($InternalError, "Bug in sun.reflect bootstrap UTF-8 encoder"_s, e);
	}
	return res;
}

int32_t UTF8::utf8Length($String* str) {
	int32_t len = $nc(str)->length();
	int32_t utf8Len = 0;
	for (int32_t i = 0; i < len; ++i) {
		int32_t c = str->charAt(i) & 0xffff;
		if (c >= 1 && c <= 127) {
			utf8Len += 1;
		} else if (c == 0 || (c >= 128 && c <= 2047)) {
			utf8Len += 2;
		} else {
			utf8Len += 3;
		}
	}
	return utf8Len;
}

UTF8::UTF8() {
}

$Class* UTF8::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(UTF8, init$, void)},
		{"encode", "(Ljava/lang/String;)[B", nullptr, $STATIC, $staticMethod(UTF8, encode, $bytes*, $String*)},
		{"utf8Length", "(Ljava/lang/String;)I", nullptr, $PRIVATE | $STATIC, $staticMethod(UTF8, utf8Length, int32_t, $String*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"jdk.internal.reflect.UTF8",
		"java.lang.Object",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(UTF8, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(UTF8);
	});
	return class$;
}

$Class* UTF8::class$ = nullptr;

		} // reflect
	} // internal
} // jdk