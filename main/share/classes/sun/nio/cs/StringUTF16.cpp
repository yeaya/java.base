#include <sun/nio/cs/StringUTF16.h>
#include <jdk/internal/misc/Unsafe.h>
#include <jcpp.h>

#undef ARRAY_BYTE_BASE_OFFSET
#undef ARRAY_BYTE_INDEX_SCALE

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Unsafe = ::jdk::internal::misc::Unsafe;

namespace sun {
	namespace nio {
		namespace cs {

$Unsafe* StringUTF16::unsafe = nullptr;

void StringUTF16::init$() {
}

char16_t StringUTF16::getChar($bytes* val, int32_t index) {
	$init(StringUTF16);
	$init($Unsafe);
	return $nc(StringUTF16::unsafe)->getChar(val, $Unsafe::ARRAY_BYTE_BASE_OFFSET + $Unsafe::ARRAY_BYTE_INDEX_SCALE * index * (int64_t)2);
}

void StringUTF16::clinit$($Class* clazz) {
	$assignStatic(StringUTF16::unsafe, $Unsafe::getUnsafe());
}

StringUTF16::StringUTF16() {
}

$Class* StringUTF16::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"unsafe", "Ljdk/internal/misc/Unsafe;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(StringUTF16, unsafe)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(StringUTF16, init$, void)},
		{"getChar", "([BI)C", nullptr, $PUBLIC | $STATIC, $staticMethod(StringUTF16, getChar, char16_t, $bytes*, int32_t)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.nio.cs.StringUTF16",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(StringUTF16, name, initialize, &classInfo$$, StringUTF16::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(StringUTF16);
	});
	return class$;
}

$Class* StringUTF16::class$ = nullptr;

		} // cs
	} // nio
} // sun