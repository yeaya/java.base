#include <jdk/internal/icu/util/CodePointMap$StringIterator.h>

#include <java/lang/CharSequence.h>
#include <jdk/internal/icu/util/CodePointMap.h>
#include <jcpp.h>

using $CharSequence = ::java::lang::CharSequence;
using $Character = ::java::lang::Character;
using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $CodePointMap = ::jdk::internal::icu::util::CodePointMap;

namespace jdk {
	namespace internal {
		namespace icu {
			namespace util {

$CompoundAttribute _CodePointMap$StringIterator_FieldAnnotations_s[] = {
	{"Ljava/lang/Deprecated;", nullptr},
	{}
};

$CompoundAttribute _CodePointMap$StringIterator_FieldAnnotations_sIndex[] = {
	{"Ljava/lang/Deprecated;", nullptr},
	{}
};

$CompoundAttribute _CodePointMap$StringIterator_FieldAnnotations_c[] = {
	{"Ljava/lang/Deprecated;", nullptr},
	{}
};

$CompoundAttribute _CodePointMap$StringIterator_FieldAnnotations_value[] = {
	{"Ljava/lang/Deprecated;", nullptr},
	{}
};

$CompoundAttribute _CodePointMap$StringIterator_MethodAnnotations_init$0[] = {
	{"Ljava/lang/Deprecated;", nullptr},
	{}
};

$FieldInfo _CodePointMap$StringIterator_FieldInfo_[] = {
	{"this$0", "Ljdk/internal/icu/util/CodePointMap;", nullptr, $FINAL | $SYNTHETIC, $field(CodePointMap$StringIterator, this$0)},
	{"s", "Ljava/lang/CharSequence;", nullptr, $PROTECTED | $DEPRECATED, $field(CodePointMap$StringIterator, s), _CodePointMap$StringIterator_FieldAnnotations_s},
	{"sIndex", "I", nullptr, $PROTECTED | $DEPRECATED, $field(CodePointMap$StringIterator, sIndex), _CodePointMap$StringIterator_FieldAnnotations_sIndex},
	{"c", "I", nullptr, $PROTECTED | $DEPRECATED, $field(CodePointMap$StringIterator, c), _CodePointMap$StringIterator_FieldAnnotations_c},
	{"value", "I", nullptr, $PROTECTED | $DEPRECATED, $field(CodePointMap$StringIterator, value), _CodePointMap$StringIterator_FieldAnnotations_value},
	{}
};

$MethodInfo _CodePointMap$StringIterator_MethodInfo_[] = {
	{"<init>", "(Ljdk/internal/icu/util/CodePointMap;Ljava/lang/CharSequence;I)V", nullptr, $PROTECTED | $DEPRECATED, $method(CodePointMap$StringIterator, init$, void, $CodePointMap*, $CharSequence*, int32_t), nullptr, nullptr, _CodePointMap$StringIterator_MethodAnnotations_init$0},
	{"getCodePoint", "()I", nullptr, $PUBLIC | $FINAL, $method(CodePointMap$StringIterator, getCodePoint, int32_t)},
	{"getIndex", "()I", nullptr, $PUBLIC | $FINAL, $method(CodePointMap$StringIterator, getIndex, int32_t)},
	{"getValue", "()I", nullptr, $PUBLIC | $FINAL, $method(CodePointMap$StringIterator, getValue, int32_t)},
	{"next", "()Z", nullptr, $PUBLIC, $virtualMethod(CodePointMap$StringIterator, next, bool)},
	{"previous", "()Z", nullptr, $PUBLIC, $virtualMethod(CodePointMap$StringIterator, previous, bool)},
	{"reset", "(Ljava/lang/CharSequence;I)V", nullptr, $PUBLIC, $virtualMethod(CodePointMap$StringIterator, reset, void, $CharSequence*, int32_t)},
	{}
};

$InnerClassInfo _CodePointMap$StringIterator_InnerClassesInfo_[] = {
	{"jdk.internal.icu.util.CodePointMap$StringIterator", "jdk.internal.icu.util.CodePointMap", "StringIterator", $PUBLIC},
	{}
};

$ClassInfo _CodePointMap$StringIterator_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"jdk.internal.icu.util.CodePointMap$StringIterator",
	"java.lang.Object",
	nullptr,
	_CodePointMap$StringIterator_FieldInfo_,
	_CodePointMap$StringIterator_MethodInfo_,
	nullptr,
	nullptr,
	_CodePointMap$StringIterator_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"jdk.internal.icu.util.CodePointMap"
};

$Object* allocate$CodePointMap$StringIterator($Class* clazz) {
	return $of($alloc(CodePointMap$StringIterator));
}

void CodePointMap$StringIterator::init$($CodePointMap* this$0, $CharSequence* s, int32_t sIndex) {
	$set(this, this$0, this$0);
	$set(this, s, s);
	this->sIndex = sIndex;
	this->c = -1;
	this->value = 0;
}

void CodePointMap$StringIterator::reset($CharSequence* s, int32_t sIndex) {
	$set(this, s, s);
	this->sIndex = sIndex;
	this->c = -1;
	this->value = 0;
}

bool CodePointMap$StringIterator::next() {
	if (this->sIndex >= $nc(this->s)->length()) {
		return false;
	}
	this->c = $Character::codePointAt(this->s, this->sIndex);
	this->sIndex += $Character::charCount(this->c);
	this->value = this->this$0->get(this->c);
	return true;
}

bool CodePointMap$StringIterator::previous() {
	if (this->sIndex <= 0) {
		return false;
	}
	this->c = $Character::codePointBefore(this->s, this->sIndex);
	this->sIndex -= $Character::charCount(this->c);
	this->value = this->this$0->get(this->c);
	return true;
}

int32_t CodePointMap$StringIterator::getIndex() {
	return this->sIndex;
}

int32_t CodePointMap$StringIterator::getCodePoint() {
	return this->c;
}

int32_t CodePointMap$StringIterator::getValue() {
	return this->value;
}

CodePointMap$StringIterator::CodePointMap$StringIterator() {
}

$Class* CodePointMap$StringIterator::load$($String* name, bool initialize) {
	$loadClass(CodePointMap$StringIterator, name, initialize, &_CodePointMap$StringIterator_ClassInfo_, allocate$CodePointMap$StringIterator);
	return class$;
}

$Class* CodePointMap$StringIterator::class$ = nullptr;

			} // util
		} // icu
	} // internal
} // jdk