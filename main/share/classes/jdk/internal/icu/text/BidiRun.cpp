#include <jdk/internal/icu/text/BidiRun.h>

#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace jdk {
	namespace internal {
		namespace icu {
			namespace text {

$FieldInfo _BidiRun_FieldInfo_[] = {
	{"start", "I", nullptr, 0, $field(BidiRun, start)},
	{"limit", "I", nullptr, 0, $field(BidiRun, limit)},
	{"insertRemove", "I", nullptr, 0, $field(BidiRun, insertRemove)},
	{"level", "B", nullptr, 0, $field(BidiRun, level)},
	{}
};

$MethodInfo _BidiRun_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(BidiRun::*)()>(&BidiRun::init$))},
	{"<init>", "(IIB)V", nullptr, 0, $method(static_cast<void(BidiRun::*)(int32_t,int32_t,int8_t)>(&BidiRun::init$))},
	{"copyFrom", "(Ljdk/internal/icu/text/BidiRun;)V", nullptr, 0},
	{"getEmbeddingLevel", "()B", nullptr, 0},
	{"isEvenRun", "()Z", nullptr, 0},
	{}
};

$ClassInfo _BidiRun_ClassInfo_ = {
	$ACC_SUPER,
	"jdk.internal.icu.text.BidiRun",
	"java.lang.Object",
	nullptr,
	_BidiRun_FieldInfo_,
	_BidiRun_MethodInfo_
};

$Object* allocate$BidiRun($Class* clazz) {
	return $of($alloc(BidiRun));
}

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
	return ((int32_t)(this->level & (uint32_t)1)) == 0;
}

BidiRun::BidiRun() {
}

$Class* BidiRun::load$($String* name, bool initialize) {
	$loadClass(BidiRun, name, initialize, &_BidiRun_ClassInfo_, allocate$BidiRun);
	return class$;
}

$Class* BidiRun::class$ = nullptr;

			} // text
		} // icu
	} // internal
} // jdk