#include <jdk/internal/icu/text/BidiRun.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace jdk {
	namespace internal {
		namespace icu {
			namespace text {

void BidiRun::init$() {
	BidiRun::init$(0, 0, (int8_t)0);
}

void BidiRun::init$(int32_t start, int32_t limit, int8_t embeddingLevel) {
	this->start = start;
	this->limit = limit;
	this->level = embeddingLevel;
}

void BidiRun::copyFrom(BidiRun* run) {
	this->start = $nc(run)->start;
	this->limit = run->limit;
	this->level = run->level;
	this->insertRemove = run->insertRemove;
}

int8_t BidiRun::getEmbeddingLevel() {
	return this->level;
}

bool BidiRun::isEvenRun() {
	return (this->level & 1) == 0;
}

BidiRun::BidiRun() {
}

$Class* BidiRun::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"start", "I", nullptr, 0, $field(BidiRun, start)},
		{"limit", "I", nullptr, 0, $field(BidiRun, limit)},
		{"insertRemove", "I", nullptr, 0, $field(BidiRun, insertRemove)},
		{"level", "B", nullptr, 0, $field(BidiRun, level)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(BidiRun, init$, void)},
		{"<init>", "(IIB)V", nullptr, 0, $method(BidiRun, init$, void, int32_t, int32_t, int8_t)},
		{"copyFrom", "(Ljdk/internal/icu/text/BidiRun;)V", nullptr, 0, $virtualMethod(BidiRun, copyFrom, void, BidiRun*)},
		{"getEmbeddingLevel", "()B", nullptr, 0, $virtualMethod(BidiRun, getEmbeddingLevel, int8_t)},
		{"isEvenRun", "()Z", nullptr, 0, $virtualMethod(BidiRun, isEvenRun, bool)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"jdk.internal.icu.text.BidiRun",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(BidiRun, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(BidiRun);
	});
	return class$;
}

$Class* BidiRun::class$ = nullptr;

			} // text
		} // icu
	} // internal
} // jdk