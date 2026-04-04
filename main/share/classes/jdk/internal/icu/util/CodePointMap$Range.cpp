#include <jdk/internal/icu/util/CodePointMap$Range.h>
#include <jdk/internal/icu/util/CodePointMap.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace jdk {
	namespace internal {
		namespace icu {
			namespace util {

void CodePointMap$Range::init$() {
	this->start = (this->end = -1);
	this->value = 0;
}

int32_t CodePointMap$Range::getStart() {
	return this->start;
}

int32_t CodePointMap$Range::getEnd() {
	return this->end;
}

int32_t CodePointMap$Range::getValue() {
	return this->value;
}

void CodePointMap$Range::set(int32_t start, int32_t end, int32_t value) {
	this->start = start;
	this->end = end;
	this->value = value;
}

CodePointMap$Range::CodePointMap$Range() {
}

$Class* CodePointMap$Range::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"start", "I", nullptr, $PRIVATE, $field(CodePointMap$Range, start)},
		{"end", "I", nullptr, $PRIVATE, $field(CodePointMap$Range, end)},
		{"value", "I", nullptr, $PRIVATE, $field(CodePointMap$Range, value)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(CodePointMap$Range, init$, void)},
		{"getEnd", "()I", nullptr, $PUBLIC, $method(CodePointMap$Range, getEnd, int32_t)},
		{"getStart", "()I", nullptr, $PUBLIC, $method(CodePointMap$Range, getStart, int32_t)},
		{"getValue", "()I", nullptr, $PUBLIC, $method(CodePointMap$Range, getValue, int32_t)},
		{"set", "(III)V", nullptr, $PUBLIC, $method(CodePointMap$Range, set, void, int32_t, int32_t, int32_t)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"jdk.internal.icu.util.CodePointMap$Range", "jdk.internal.icu.util.CodePointMap", "Range", $PUBLIC | $STATIC | $FINAL},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL | $ACC_SUPER,
		"jdk.internal.icu.util.CodePointMap$Range",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"jdk.internal.icu.util.CodePointMap"
	};
	$loadClass(CodePointMap$Range, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(CodePointMap$Range);
	});
	return class$;
}

$Class* CodePointMap$Range::class$ = nullptr;

			} // util
		} // icu
	} // internal
} // jdk