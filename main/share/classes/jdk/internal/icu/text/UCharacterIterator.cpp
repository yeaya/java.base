#include <jdk/internal/icu/text/UCharacterIterator.h>

#include <java/lang/Cloneable.h>
#include <java/lang/IndexOutOfBoundsException.h>
#include <java/lang/StringBuffer.h>
#include <java/text/CharacterIterator.h>
#include <jdk/internal/icu/impl/CharacterIteratorWrapper.h>
#include <jdk/internal/icu/impl/ReplaceableUCharacterIterator.h>
#include <jdk/internal/icu/impl/UCharacterProperty.h>
#include <jdk/internal/icu/text/UTF16.h>
#include <jcpp.h>

#undef DONE

using $ClassInfo = ::java::lang::ClassInfo;
using $Cloneable = ::java::lang::Cloneable;
using $FieldInfo = ::java::lang::FieldInfo;
using $IndexOutOfBoundsException = ::java::lang::IndexOutOfBoundsException;
using $MethodInfo = ::java::lang::MethodInfo;
using $StringBuffer = ::java::lang::StringBuffer;
using $CharacterIterator = ::java::text::CharacterIterator;
using $CharacterIteratorWrapper = ::jdk::internal::icu::impl::CharacterIteratorWrapper;
using $ReplaceableUCharacterIterator = ::jdk::internal::icu::impl::ReplaceableUCharacterIterator;
using $UCharacterProperty = ::jdk::internal::icu::impl::UCharacterProperty;
using $UTF16 = ::jdk::internal::icu::text::UTF16;

namespace jdk {
	namespace internal {
		namespace icu {
			namespace text {

$FieldInfo _UCharacterIterator_FieldInfo_[] = {
	{"DONE", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(UCharacterIterator, DONE)},
	{}
};

$MethodInfo _UCharacterIterator_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PROTECTED, $method(UCharacterIterator, init$, void)},
	{"clone", "()Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(UCharacterIterator, clone, $Object*), "java.lang.CloneNotSupportedException"},
	{"getIndex", "()I", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(UCharacterIterator, getIndex, int32_t)},
	{"getInstance", "(Ljava/lang/String;)Ljdk/internal/icu/text/UCharacterIterator;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticMethod(UCharacterIterator, getInstance, UCharacterIterator*, $String*)},
	{"getInstance", "(Ljava/lang/StringBuffer;)Ljdk/internal/icu/text/UCharacterIterator;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticMethod(UCharacterIterator, getInstance, UCharacterIterator*, $StringBuffer*)},
	{"getInstance", "(Ljava/text/CharacterIterator;)Ljdk/internal/icu/text/UCharacterIterator;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticMethod(UCharacterIterator, getInstance, UCharacterIterator*, $CharacterIterator*)},
	{"getLength", "()I", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(UCharacterIterator, getLength, int32_t)},
	{"getText", "([CI)I", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(UCharacterIterator, getText, int32_t, $chars*, int32_t)},
	{"getText", "([C)I", nullptr, $PUBLIC | $FINAL, $method(UCharacterIterator, getText, int32_t, $chars*)},
	{"getText", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(UCharacterIterator, getText, $String*)},
	{"moveCodePointIndex", "(I)I", nullptr, $PUBLIC, $virtualMethod(UCharacterIterator, moveCodePointIndex, int32_t, int32_t)},
	{"next", "()I", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(UCharacterIterator, next, int32_t)},
	{"nextCodePoint", "()I", nullptr, $PUBLIC, $virtualMethod(UCharacterIterator, nextCodePoint, int32_t)},
	{"previous", "()I", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(UCharacterIterator, previous, int32_t)},
	{"previousCodePoint", "()I", nullptr, $PUBLIC, $virtualMethod(UCharacterIterator, previousCodePoint, int32_t)},
	{"setIndex", "(I)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(UCharacterIterator, setIndex, void, int32_t)},
	{"setToStart", "()V", nullptr, $PUBLIC, $virtualMethod(UCharacterIterator, setToStart, void)},
	{}
};

$ClassInfo _UCharacterIterator_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER | $ABSTRACT,
	"jdk.internal.icu.text.UCharacterIterator",
	"java.lang.Object",
	"java.lang.Cloneable",
	_UCharacterIterator_FieldInfo_,
	_UCharacterIterator_MethodInfo_
};

$Object* allocate$UCharacterIterator($Class* clazz) {
	return $of($alloc(UCharacterIterator));
}

void UCharacterIterator::init$() {
}

UCharacterIterator* UCharacterIterator::getInstance($String* source) {
	$init(UCharacterIterator);
	return $new($ReplaceableUCharacterIterator, source);
}

UCharacterIterator* UCharacterIterator::getInstance($StringBuffer* source) {
	$init(UCharacterIterator);
	return $new($ReplaceableUCharacterIterator, source);
}

UCharacterIterator* UCharacterIterator::getInstance($CharacterIterator* source) {
	$init(UCharacterIterator);
	return $new($CharacterIteratorWrapper, source);
}

int32_t UCharacterIterator::nextCodePoint() {
	int32_t ch1 = next();
	if ($UTF16::isLeadSurrogate((char16_t)ch1)) {
		int32_t ch2 = next();
		if ($UTF16::isTrailSurrogate((char16_t)ch2)) {
			return $UCharacterProperty::getRawSupplementary((char16_t)ch1, (char16_t)ch2);
		} else if (ch2 != UCharacterIterator::DONE) {
			previous();
		}
	}
	return ch1;
}

int32_t UCharacterIterator::previousCodePoint() {
	int32_t ch1 = previous();
	if ($UTF16::isTrailSurrogate((char16_t)ch1)) {
		int32_t ch2 = previous();
		if ($UTF16::isLeadSurrogate((char16_t)ch2)) {
			return $UCharacterProperty::getRawSupplementary((char16_t)ch2, (char16_t)ch1);
		} else if (ch2 != UCharacterIterator::DONE) {
			next();
		}
	}
	return ch1;
}

void UCharacterIterator::setToStart() {
	setIndex(0);
}

int32_t UCharacterIterator::getText($chars* fillIn) {
	return getText(fillIn, 0);
}

$String* UCharacterIterator::getText() {
	$var($chars, text, $new($chars, getLength()));
	getText(text);
	return $new($String, text);
}

int32_t UCharacterIterator::moveCodePointIndex(int32_t delta) {
	if (delta > 0) {
		while (delta > 0 && nextCodePoint() != UCharacterIterator::DONE) {
			--delta;
		}
	} else {
		while (delta < 0 && previousCodePoint() != UCharacterIterator::DONE) {
			++delta;
		}
	}
	if (delta != 0) {
		$throwNew($IndexOutOfBoundsException);
	}
	return getIndex();
}

$Object* UCharacterIterator::clone() {
	return $of($Cloneable::clone());
}

UCharacterIterator::UCharacterIterator() {
}

$Class* UCharacterIterator::load$($String* name, bool initialize) {
	$loadClass(UCharacterIterator, name, initialize, &_UCharacterIterator_ClassInfo_, allocate$UCharacterIterator);
	return class$;
}

$Class* UCharacterIterator::class$ = nullptr;

			} // text
		} // icu
	} // internal
} // jdk