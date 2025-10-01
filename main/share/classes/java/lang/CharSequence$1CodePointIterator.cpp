#include <java/lang/CharSequence$1CodePointIterator.h>

#include <java/lang/CharSequence.h>
#include <java/lang/Character.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/EnclosingMethodInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/Throwable.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/NoSuchElementException.h>
#include <java/util/function/IntConsumer.h>
#include <jcpp.h>

using $CharSequence = ::java::lang::CharSequence;
using $Character = ::java::lang::Character;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NoSuchElementException = ::java::util::NoSuchElementException;
using $PrimitiveIterator$OfInt = ::java::util::PrimitiveIterator$OfInt;
using $IntConsumer = ::java::util::function::IntConsumer;

namespace java {
	namespace lang {

$FieldInfo _CharSequence$1CodePointIterator_FieldInfo_[] = {
	{"this$0", "Ljava/lang/CharSequence;", nullptr, $FINAL | $SYNTHETIC, $field(CharSequence$1CodePointIterator, this$0)},
	{"cur", "I", nullptr, 0, $field(CharSequence$1CodePointIterator, cur)},
	{}
};

$MethodInfo _CharSequence$1CodePointIterator_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/CharSequence;)V", nullptr, 0, $method(static_cast<void(CharSequence$1CodePointIterator::*)($CharSequence*)>(&CharSequence$1CodePointIterator::init$))},
	{"forEachRemaining", "(Ljava/util/function/IntConsumer;)V", nullptr, $PUBLIC},
	{"forEachRemaining", "(Ljava/lang/Object;)V", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"hasNext", "()Z", nullptr, $PUBLIC},
	{"nextInt", "()I", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _CharSequence$1CodePointIterator_EnclosingMethodInfo_ = {
	"java.lang.CharSequence",
	"codePoints",
	"()Ljava/util/stream/IntStream;"
};

$InnerClassInfo _CharSequence$1CodePointIterator_InnerClassesInfo_[] = {
	{"java.lang.CharSequence$1CodePointIterator", nullptr, "CodePointIterator", 0},
	{"java.util.PrimitiveIterator$OfInt", "java.util.PrimitiveIterator", "OfInt", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _CharSequence$1CodePointIterator_ClassInfo_ = {
	$ACC_SUPER,
	"java.lang.CharSequence$1CodePointIterator",
	"java.lang.Object",
	"java.util.PrimitiveIterator$OfInt",
	_CharSequence$1CodePointIterator_FieldInfo_,
	_CharSequence$1CodePointIterator_MethodInfo_,
	nullptr,
	&_CharSequence$1CodePointIterator_EnclosingMethodInfo_,
	_CharSequence$1CodePointIterator_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.lang.CharSequence"
};

$Object* allocate$CharSequence$1CodePointIterator($Class* clazz) {
	return $of($alloc(CharSequence$1CodePointIterator));
}

void CharSequence$1CodePointIterator::init$($CharSequence* this$0) {
	$set(this, this$0, this$0);
	this->cur = 0;
}

void CharSequence$1CodePointIterator::forEachRemaining($IntConsumer* block) {
	int32_t length = this->this$0->length();
	int32_t i = this->cur;
	{
		$var($Throwable, var$0, nullptr);
		try {
			while (i < length) {
				char16_t c1 = this->this$0->charAt(i++);
				if (!$Character::isHighSurrogate(c1) || i >= length) {
					$nc(block)->accept(c1);
				} else {
					char16_t c2 = this->this$0->charAt(i);
					if ($Character::isLowSurrogate(c2)) {
						++i;
						$nc(block)->accept($Character::toCodePoint(c1, c2));
					} else {
						$nc(block)->accept(c1);
					}
				}
			}
		} catch ($Throwable&) {
			$assign(var$0, $catch());
		} /*finally*/ {
			this->cur = i;
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
}

bool CharSequence$1CodePointIterator::hasNext() {
	return this->cur < this->this$0->length();
}

int32_t CharSequence$1CodePointIterator::nextInt() {
	int32_t length = this->this$0->length();
	if (this->cur >= length) {
		$throwNew($NoSuchElementException);
	}
	char16_t c1 = this->this$0->charAt(this->cur++);
	if ($Character::isHighSurrogate(c1) && this->cur < length) {
		char16_t c2 = this->this$0->charAt(this->cur);
		if ($Character::isLowSurrogate(c2)) {
			++this->cur;
			return $Character::toCodePoint(c1, c2);
		}
	}
	return c1;
}

void CharSequence$1CodePointIterator::forEachRemaining(Object$* block) {
	this->forEachRemaining($cast($IntConsumer, block));
}

CharSequence$1CodePointIterator::CharSequence$1CodePointIterator() {
}

$Class* CharSequence$1CodePointIterator::load$($String* name, bool initialize) {
	$loadClass(CharSequence$1CodePointIterator, name, initialize, &_CharSequence$1CodePointIterator_ClassInfo_, allocate$CharSequence$1CodePointIterator);
	return class$;
}

$Class* CharSequence$1CodePointIterator::class$ = nullptr;

	} // lang
} // java