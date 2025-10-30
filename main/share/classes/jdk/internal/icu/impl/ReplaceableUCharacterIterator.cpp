#include <jdk/internal/icu/impl/ReplaceableUCharacterIterator.h>

#include <java/lang/CloneNotSupportedException.h>
#include <java/lang/IndexOutOfBoundsException.h>
#include <java/lang/StringBuffer.h>
#include <jdk/internal/icu/text/Replaceable.h>
#include <jdk/internal/icu/text/ReplaceableString.h>
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
using $StringBuffer = ::java::lang::StringBuffer;
using $Replaceable = ::jdk::internal::icu::text::Replaceable;
using $ReplaceableString = ::jdk::internal::icu::text::ReplaceableString;
using $UCharacterIterator = ::jdk::internal::icu::text::UCharacterIterator;

namespace jdk {
	namespace internal {
		namespace icu {
			namespace impl {

$FieldInfo _ReplaceableUCharacterIterator_FieldInfo_[] = {
	{"replaceable", "Ljdk/internal/icu/text/Replaceable;", nullptr, $PRIVATE, $field(ReplaceableUCharacterIterator, replaceable)},
	{"currentIndex", "I", nullptr, $PRIVATE, $field(ReplaceableUCharacterIterator, currentIndex)},
	{}
};

$MethodInfo _ReplaceableUCharacterIterator_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(ReplaceableUCharacterIterator::*)($String*)>(&ReplaceableUCharacterIterator::init$))},
	{"<init>", "(Ljava/lang/StringBuffer;)V", nullptr, $PUBLIC, $method(static_cast<void(ReplaceableUCharacterIterator::*)($StringBuffer*)>(&ReplaceableUCharacterIterator::init$))},
	{"clone", "()Ljava/lang/Object;", nullptr, $PUBLIC},
	{"current", "()I", nullptr, $PUBLIC},
	{"getIndex", "()I", nullptr, $PUBLIC},
	{"getLength", "()I", nullptr, $PUBLIC},
	{"getText", "([CI)I", nullptr, $PUBLIC},
	{"next", "()I", nullptr, $PUBLIC},
	{"previous", "()I", nullptr, $PUBLIC},
	{"setIndex", "(I)V", nullptr, $PUBLIC},
	{}
};

$ClassInfo _ReplaceableUCharacterIterator_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"jdk.internal.icu.impl.ReplaceableUCharacterIterator",
	"jdk.internal.icu.text.UCharacterIterator",
	nullptr,
	_ReplaceableUCharacterIterator_FieldInfo_,
	_ReplaceableUCharacterIterator_MethodInfo_
};

$Object* allocate$ReplaceableUCharacterIterator($Class* clazz) {
	return $of($alloc(ReplaceableUCharacterIterator));
}

void ReplaceableUCharacterIterator::init$($String* str) {
	$UCharacterIterator::init$();
	if (str == nullptr) {
		$throwNew($IllegalArgumentException);
	}
	$set(this, replaceable, $new($ReplaceableString, str));
	this->currentIndex = 0;
}

void ReplaceableUCharacterIterator::init$($StringBuffer* buf) {
	$UCharacterIterator::init$();
	if (buf == nullptr) {
		$throwNew($IllegalArgumentException);
	}
	$set(this, replaceable, $new($ReplaceableString, buf));
	this->currentIndex = 0;
}

$Object* ReplaceableUCharacterIterator::clone() {
	try {
		return $of($UCharacterIterator::clone());
	} catch ($CloneNotSupportedException& e) {
		return $of(nullptr);
	}
	$shouldNotReachHere();
}

int32_t ReplaceableUCharacterIterator::current() {
	if (this->currentIndex < $nc(this->replaceable)->length()) {
		return $nc(this->replaceable)->charAt(this->currentIndex);
	}
	return $UCharacterIterator::DONE;
}

int32_t ReplaceableUCharacterIterator::getLength() {
	return $nc(this->replaceable)->length();
}

int32_t ReplaceableUCharacterIterator::getIndex() {
	return this->currentIndex;
}

int32_t ReplaceableUCharacterIterator::next() {
	if (this->currentIndex < $nc(this->replaceable)->length()) {
		return $nc(this->replaceable)->charAt(this->currentIndex++);
	}
	return $UCharacterIterator::DONE;
}

int32_t ReplaceableUCharacterIterator::previous() {
	if (this->currentIndex > 0) {
		return $nc(this->replaceable)->charAt(--this->currentIndex);
	}
	return $UCharacterIterator::DONE;
}

void ReplaceableUCharacterIterator::setIndex(int32_t currentIndex) {
	if (currentIndex < 0 || currentIndex > $nc(this->replaceable)->length()) {
		$throwNew($IllegalArgumentException);
	}
	this->currentIndex = currentIndex;
}

int32_t ReplaceableUCharacterIterator::getText($chars* fillIn, int32_t offset) {
	int32_t length = $nc(this->replaceable)->length();
	if (offset < 0 || offset + length > $nc(fillIn)->length) {
		$throwNew($IndexOutOfBoundsException, $($Integer::toString(length)));
	}
	$nc(this->replaceable)->getChars(0, length, fillIn, offset);
	return length;
}

ReplaceableUCharacterIterator::ReplaceableUCharacterIterator() {
}

$Class* ReplaceableUCharacterIterator::load$($String* name, bool initialize) {
	$loadClass(ReplaceableUCharacterIterator, name, initialize, &_ReplaceableUCharacterIterator_ClassInfo_, allocate$ReplaceableUCharacterIterator);
	return class$;
}

$Class* ReplaceableUCharacterIterator::class$ = nullptr;

			} // impl
		} // icu
	} // internal
} // jdk