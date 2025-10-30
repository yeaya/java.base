#include <java/lang/CharSequence$1CharIterator.h>

#include <java/lang/CharSequence.h>
#include <java/util/NoSuchElementException.h>
#include <java/util/function/IntConsumer.h>
#include <jcpp.h>

using $CharSequence = ::java::lang::CharSequence;
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

$FieldInfo _CharSequence$1CharIterator_FieldInfo_[] = {
	{"this$0", "Ljava/lang/CharSequence;", nullptr, $FINAL | $SYNTHETIC, $field(CharSequence$1CharIterator, this$0)},
	{"cur", "I", nullptr, 0, $field(CharSequence$1CharIterator, cur)},
	{}
};

$MethodInfo _CharSequence$1CharIterator_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/CharSequence;)V", nullptr, 0, $method(static_cast<void(CharSequence$1CharIterator::*)($CharSequence*)>(&CharSequence$1CharIterator::init$))},
	{"forEachRemaining", "(Ljava/util/function/IntConsumer;)V", nullptr, $PUBLIC},
	{"forEachRemaining", "(Ljava/lang/Object;)V", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"hasNext", "()Z", nullptr, $PUBLIC},
	{"nextInt", "()I", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _CharSequence$1CharIterator_EnclosingMethodInfo_ = {
	"java.lang.CharSequence",
	"chars",
	"()Ljava/util/stream/IntStream;"
};

$InnerClassInfo _CharSequence$1CharIterator_InnerClassesInfo_[] = {
	{"java.lang.CharSequence$1CharIterator", nullptr, "CharIterator", 0},
	{"java.util.PrimitiveIterator$OfInt", "java.util.PrimitiveIterator", "OfInt", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _CharSequence$1CharIterator_ClassInfo_ = {
	$ACC_SUPER,
	"java.lang.CharSequence$1CharIterator",
	"java.lang.Object",
	"java.util.PrimitiveIterator$OfInt",
	_CharSequence$1CharIterator_FieldInfo_,
	_CharSequence$1CharIterator_MethodInfo_,
	nullptr,
	&_CharSequence$1CharIterator_EnclosingMethodInfo_,
	_CharSequence$1CharIterator_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.lang.CharSequence"
};

$Object* allocate$CharSequence$1CharIterator($Class* clazz) {
	return $of($alloc(CharSequence$1CharIterator));
}

void CharSequence$1CharIterator::init$($CharSequence* this$0) {
	$set(this, this$0, this$0);
	this->cur = 0;
}

bool CharSequence$1CharIterator::hasNext() {
	return this->cur < this->this$0->length();
}

int32_t CharSequence$1CharIterator::nextInt() {
	if (hasNext()) {
		return this->this$0->charAt(this->cur++);
	} else {
		$throwNew($NoSuchElementException);
	}
}

void CharSequence$1CharIterator::forEachRemaining($IntConsumer* block) {
	for (; this->cur < this->this$0->length(); ++this->cur) {
		$nc(block)->accept(this->this$0->charAt(this->cur));
	}
}

void CharSequence$1CharIterator::forEachRemaining(Object$* block) {
	this->forEachRemaining($cast($IntConsumer, block));
}

CharSequence$1CharIterator::CharSequence$1CharIterator() {
}

$Class* CharSequence$1CharIterator::load$($String* name, bool initialize) {
	$loadClass(CharSequence$1CharIterator, name, initialize, &_CharSequence$1CharIterator_ClassInfo_, allocate$CharSequence$1CharIterator);
	return class$;
}

$Class* CharSequence$1CharIterator::class$ = nullptr;

	} // lang
} // java