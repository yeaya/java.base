#include <jdk/internal/icu/impl/CharacterIteratorWrapper.h>

#include <java/lang/CloneNotSupportedException.h>
#include <java/lang/IndexOutOfBoundsException.h>
#include <java/text/CharacterIterator.h>
#include <jdk/internal/icu/text/UCharacterIterator.h>
#include <jcpp.h>

#undef DONE

using $ClassInfo = ::java::lang::ClassInfo;
using $CloneNotSupportedException = ::java::lang::CloneNotSupportedException;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $IndexOutOfBoundsException = ::java::lang::IndexOutOfBoundsException;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $CharacterIterator = ::java::text::CharacterIterator;
using $UCharacterIterator = ::jdk::internal::icu::text::UCharacterIterator;

namespace jdk {
	namespace internal {
		namespace icu {
			namespace impl {

$FieldInfo _CharacterIteratorWrapper_FieldInfo_[] = {
	{"iterator", "Ljava/text/CharacterIterator;", nullptr, $PRIVATE, $field(CharacterIteratorWrapper, iterator)},
	{}
};

$MethodInfo _CharacterIteratorWrapper_MethodInfo_[] = {
	{"<init>", "(Ljava/text/CharacterIterator;)V", nullptr, $PUBLIC, $method(CharacterIteratorWrapper, init$, void, $CharacterIterator*)},
	{"clone", "()Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(CharacterIteratorWrapper, clone, $Object*)},
	{"current", "()I", nullptr, $PUBLIC, $virtualMethod(CharacterIteratorWrapper, current, int32_t)},
	{"getIndex", "()I", nullptr, $PUBLIC, $virtualMethod(CharacterIteratorWrapper, getIndex, int32_t)},
	{"getLength", "()I", nullptr, $PUBLIC, $virtualMethod(CharacterIteratorWrapper, getLength, int32_t)},
	{"getText", "([CI)I", nullptr, $PUBLIC, $virtualMethod(CharacterIteratorWrapper, getText, int32_t, $chars*, int32_t)},
	{"next", "()I", nullptr, $PUBLIC, $virtualMethod(CharacterIteratorWrapper, next, int32_t)},
	{"previous", "()I", nullptr, $PUBLIC, $virtualMethod(CharacterIteratorWrapper, previous, int32_t)},
	{"setIndex", "(I)V", nullptr, $PUBLIC, $virtualMethod(CharacterIteratorWrapper, setIndex, void, int32_t)},
	{}
};

$ClassInfo _CharacterIteratorWrapper_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"jdk.internal.icu.impl.CharacterIteratorWrapper",
	"jdk.internal.icu.text.UCharacterIterator",
	nullptr,
	_CharacterIteratorWrapper_FieldInfo_,
	_CharacterIteratorWrapper_MethodInfo_
};

$Object* allocate$CharacterIteratorWrapper($Class* clazz) {
	return $of($alloc(CharacterIteratorWrapper));
}

void CharacterIteratorWrapper::init$($CharacterIterator* iter) {
	$UCharacterIterator::init$();
	if (iter == nullptr) {
		$throwNew($IllegalArgumentException);
	}
	$set(this, iterator, iter);
}

int32_t CharacterIteratorWrapper::current() {
	int32_t c = $nc(this->iterator)->current();
	if (c == $CharacterIterator::DONE) {
		return $UCharacterIterator::DONE;
	}
	return c;
}

int32_t CharacterIteratorWrapper::getLength() {
	int32_t var$0 = $nc(this->iterator)->getEndIndex();
	return (var$0 - $nc(this->iterator)->getBeginIndex());
}

int32_t CharacterIteratorWrapper::getIndex() {
	return $nc(this->iterator)->getIndex();
}

int32_t CharacterIteratorWrapper::next() {
	int32_t i = $nc(this->iterator)->current();
	$nc(this->iterator)->next();
	if (i == $CharacterIterator::DONE) {
		return $UCharacterIterator::DONE;
	}
	return i;
}

int32_t CharacterIteratorWrapper::previous() {
	int32_t i = $nc(this->iterator)->previous();
	if (i == $CharacterIterator::DONE) {
		return $UCharacterIterator::DONE;
	}
	return i;
}

void CharacterIteratorWrapper::setIndex(int32_t index) {
	$nc(this->iterator)->setIndex(index);
}

int32_t CharacterIteratorWrapper::getText($chars* fillIn, int32_t offset) {
	int32_t var$0 = $nc(this->iterator)->getEndIndex();
	int32_t length = var$0 - $nc(this->iterator)->getBeginIndex();
	int32_t currentIndex = $nc(this->iterator)->getIndex();
	if (offset < 0 || offset + length > $nc(fillIn)->length) {
		$throwNew($IndexOutOfBoundsException, $($Integer::toString(length)));
	}
	for (char16_t ch = $nc(this->iterator)->first(); ch != $CharacterIterator::DONE; ch = $nc(this->iterator)->next()) {
		$nc(fillIn)->set(offset++, ch);
	}
	$nc(this->iterator)->setIndex(currentIndex);
	return length;
}

$Object* CharacterIteratorWrapper::clone() {
	try {
		$var(CharacterIteratorWrapper, result, $cast(CharacterIteratorWrapper, $UCharacterIterator::clone()));
		$set($nc(result), iterator, $cast($CharacterIterator, $nc(this->iterator)->clone()));
		return $of(result);
	} catch ($CloneNotSupportedException& e) {
		return $of(nullptr);
	}
	$shouldNotReachHere();
}

CharacterIteratorWrapper::CharacterIteratorWrapper() {
}

$Class* CharacterIteratorWrapper::load$($String* name, bool initialize) {
	$loadClass(CharacterIteratorWrapper, name, initialize, &_CharacterIteratorWrapper_ClassInfo_, allocate$CharacterIteratorWrapper);
	return class$;
}

$Class* CharacterIteratorWrapper::class$ = nullptr;

			} // impl
		} // icu
	} // internal
} // jdk