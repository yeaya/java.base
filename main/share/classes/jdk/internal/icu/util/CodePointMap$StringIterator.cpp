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
	$CompoundAttribute sfieldAnnotations$$[] = {
		{"Ljava/lang/Deprecated;", nullptr},
		{}
	};
	$CompoundAttribute sIndexfieldAnnotations$$[] = {
		{"Ljava/lang/Deprecated;", nullptr},
		{}
	};
	$CompoundAttribute cfieldAnnotations$$[] = {
		{"Ljava/lang/Deprecated;", nullptr},
		{}
	};
	$CompoundAttribute valuefieldAnnotations$$[] = {
		{"Ljava/lang/Deprecated;", nullptr},
		{}
	};
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Ljdk/internal/icu/util/CodePointMap;", nullptr, $FINAL | $SYNTHETIC, $field(CodePointMap$StringIterator, this$0)},
		{"s", "Ljava/lang/CharSequence;", nullptr, $PROTECTED | $DEPRECATED, $field(CodePointMap$StringIterator, s), sfieldAnnotations$$},
		{"sIndex", "I", nullptr, $PROTECTED | $DEPRECATED, $field(CodePointMap$StringIterator, sIndex), sIndexfieldAnnotations$$},
		{"c", "I", nullptr, $PROTECTED | $DEPRECATED, $field(CodePointMap$StringIterator, c), cfieldAnnotations$$},
		{"value", "I", nullptr, $PROTECTED | $DEPRECATED, $field(CodePointMap$StringIterator, value), valuefieldAnnotations$$},
		{}
	};
	$CompoundAttribute init$methodAnnotations$$[] = {
		{"Ljava/lang/Deprecated;", nullptr},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljdk/internal/icu/util/CodePointMap;Ljava/lang/CharSequence;I)V", nullptr, $PROTECTED | $DEPRECATED, $method(CodePointMap$StringIterator, init$, void, $CodePointMap*, $CharSequence*, int32_t), nullptr, nullptr, init$methodAnnotations$$},
		{"getCodePoint", "()I", nullptr, $PUBLIC | $FINAL, $method(CodePointMap$StringIterator, getCodePoint, int32_t)},
		{"getIndex", "()I", nullptr, $PUBLIC | $FINAL, $method(CodePointMap$StringIterator, getIndex, int32_t)},
		{"getValue", "()I", nullptr, $PUBLIC | $FINAL, $method(CodePointMap$StringIterator, getValue, int32_t)},
		{"next", "()Z", nullptr, $PUBLIC, $virtualMethod(CodePointMap$StringIterator, next, bool)},
		{"previous", "()Z", nullptr, $PUBLIC, $virtualMethod(CodePointMap$StringIterator, previous, bool)},
		{"reset", "(Ljava/lang/CharSequence;I)V", nullptr, $PUBLIC, $virtualMethod(CodePointMap$StringIterator, reset, void, $CharSequence*, int32_t)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"jdk.internal.icu.util.CodePointMap$StringIterator", "jdk.internal.icu.util.CodePointMap", "StringIterator", $PUBLIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"jdk.internal.icu.util.CodePointMap$StringIterator",
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
	$loadClass(CodePointMap$StringIterator, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(CodePointMap$StringIterator);
	});
	return class$;
}

$Class* CodePointMap$StringIterator::class$ = nullptr;

			} // util
		} // icu
	} // internal
} // jdk