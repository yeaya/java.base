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

$FieldInfo _CodePointMap$Range_FieldInfo_[] = {
	{"start", "I", nullptr, $PRIVATE, $field(CodePointMap$Range, start)},
	{"end", "I", nullptr, $PRIVATE, $field(CodePointMap$Range, end)},
	{"value", "I", nullptr, $PRIVATE, $field(CodePointMap$Range, value)},
	{}
};

$MethodInfo _CodePointMap$Range_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(CodePointMap$Range::*)()>(&CodePointMap$Range::init$))},
	{"getEnd", "()I", nullptr, $PUBLIC, $method(static_cast<int32_t(CodePointMap$Range::*)()>(&CodePointMap$Range::getEnd))},
	{"getStart", "()I", nullptr, $PUBLIC, $method(static_cast<int32_t(CodePointMap$Range::*)()>(&CodePointMap$Range::getStart))},
	{"getValue", "()I", nullptr, $PUBLIC, $method(static_cast<int32_t(CodePointMap$Range::*)()>(&CodePointMap$Range::getValue))},
	{"set", "(III)V", nullptr, $PUBLIC, $method(static_cast<void(CodePointMap$Range::*)(int32_t,int32_t,int32_t)>(&CodePointMap$Range::set))},
	{}
};

$InnerClassInfo _CodePointMap$Range_InnerClassesInfo_[] = {
	{"jdk.internal.icu.util.CodePointMap$Range", "jdk.internal.icu.util.CodePointMap", "Range", $PUBLIC | $STATIC | $FINAL},
	{}
};

$ClassInfo _CodePointMap$Range_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"jdk.internal.icu.util.CodePointMap$Range",
	"java.lang.Object",
	nullptr,
	_CodePointMap$Range_FieldInfo_,
	_CodePointMap$Range_MethodInfo_,
	nullptr,
	nullptr,
	_CodePointMap$Range_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"jdk.internal.icu.util.CodePointMap"
};

$Object* allocate$CodePointMap$Range($Class* clazz) {
	return $of($alloc(CodePointMap$Range));
}

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
	$loadClass(CodePointMap$Range, name, initialize, &_CodePointMap$Range_ClassInfo_, allocate$CodePointMap$Range);
	return class$;
}

$Class* CodePointMap$Range::class$ = nullptr;

			} // util
		} // icu
	} // internal
} // jdk