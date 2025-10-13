#include <java/text/Bidi.h>

#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/IllegalArgumentException.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/text/AttributedCharacterIterator.h>
#include <java/text/AttributedString.h>
#include <jdk/internal/icu/text/BidiBase.h>
#include <jcpp.h>

#undef DIRECTION_DEFAULT_LEFT_TO_RIGHT
#undef DIRECTION_DEFAULT_RIGHT_TO_LEFT
#undef DIRECTION_LEFT_TO_RIGHT
#undef DIRECTION_RIGHT_TO_LEFT

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $MethodInfo = ::java::lang::MethodInfo;
using $AttributedCharacterIterator = ::java::text::AttributedCharacterIterator;
using $AttributedString = ::java::text::AttributedString;
using $BidiBase = ::jdk::internal::icu::text::BidiBase;

namespace java {
	namespace text {

$FieldInfo _Bidi_FieldInfo_[] = {
	{"DIRECTION_LEFT_TO_RIGHT", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Bidi, DIRECTION_LEFT_TO_RIGHT)},
	{"DIRECTION_RIGHT_TO_LEFT", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Bidi, DIRECTION_RIGHT_TO_LEFT)},
	{"DIRECTION_DEFAULT_LEFT_TO_RIGHT", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Bidi, DIRECTION_DEFAULT_LEFT_TO_RIGHT)},
	{"DIRECTION_DEFAULT_RIGHT_TO_LEFT", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Bidi, DIRECTION_DEFAULT_RIGHT_TO_LEFT)},
	{"bidiBase", "Ljdk/internal/icu/text/BidiBase;", nullptr, $PRIVATE, $field(Bidi, bidiBase)},
	{}
};

$MethodInfo _Bidi_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;I)V", nullptr, $PUBLIC, $method(static_cast<void(Bidi::*)($String*,int32_t)>(&Bidi::init$))},
	{"<init>", "(Ljava/text/AttributedCharacterIterator;)V", nullptr, $PUBLIC, $method(static_cast<void(Bidi::*)($AttributedCharacterIterator*)>(&Bidi::init$))},
	{"<init>", "([CI[BIII)V", nullptr, $PUBLIC, $method(static_cast<void(Bidi::*)($chars*,int32_t,$bytes*,int32_t,int32_t,int32_t)>(&Bidi::init$))},
	{"baseIsLeftToRight", "()Z", nullptr, $PUBLIC, $method(static_cast<bool(Bidi::*)()>(&Bidi::baseIsLeftToRight))},
	{"createLineBidi", "(II)Ljava/text/Bidi;", nullptr, $PUBLIC, $method(static_cast<Bidi*(Bidi::*)(int32_t,int32_t)>(&Bidi::createLineBidi))},
	{"getBaseLevel", "()I", nullptr, $PUBLIC, $method(static_cast<int32_t(Bidi::*)()>(&Bidi::getBaseLevel))},
	{"getLength", "()I", nullptr, $PUBLIC, $method(static_cast<int32_t(Bidi::*)()>(&Bidi::getLength))},
	{"getLevelAt", "(I)I", nullptr, $PUBLIC, $method(static_cast<int32_t(Bidi::*)(int32_t)>(&Bidi::getLevelAt))},
	{"getRunCount", "()I", nullptr, $PUBLIC, $method(static_cast<int32_t(Bidi::*)()>(&Bidi::getRunCount))},
	{"getRunLevel", "(I)I", nullptr, $PUBLIC, $method(static_cast<int32_t(Bidi::*)(int32_t)>(&Bidi::getRunLevel))},
	{"getRunLimit", "(I)I", nullptr, $PUBLIC, $method(static_cast<int32_t(Bidi::*)(int32_t)>(&Bidi::getRunLimit))},
	{"getRunStart", "(I)I", nullptr, $PUBLIC, $method(static_cast<int32_t(Bidi::*)(int32_t)>(&Bidi::getRunStart))},
	{"isLeftToRight", "()Z", nullptr, $PUBLIC, $method(static_cast<bool(Bidi::*)()>(&Bidi::isLeftToRight))},
	{"isMixed", "()Z", nullptr, $PUBLIC, $method(static_cast<bool(Bidi::*)()>(&Bidi::isMixed))},
	{"isRightToLeft", "()Z", nullptr, $PUBLIC, $method(static_cast<bool(Bidi::*)()>(&Bidi::isRightToLeft))},
	{"reorderVisually", "([BI[Ljava/lang/Object;II)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($bytes*,int32_t,$ObjectArray*,int32_t,int32_t)>(&Bidi::reorderVisually))},
	{"requiresBidi", "([CII)Z", nullptr, $PUBLIC | $STATIC, $method(static_cast<bool(*)($chars*,int32_t,int32_t)>(&Bidi::requiresBidi))},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _Bidi_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"java.text.Bidi",
	"java.lang.Object",
	nullptr,
	_Bidi_FieldInfo_,
	_Bidi_MethodInfo_
};

$Object* allocate$Bidi($Class* clazz) {
	return $of($alloc(Bidi));
}

void Bidi::init$($String* paragraph, int32_t flags) {
	if (paragraph == nullptr) {
		$throwNew($IllegalArgumentException, "paragraph is null"_s);
	}
	$var($chars, var$0, $nc(paragraph)->toCharArray());
	$set(this, bidiBase, $new($BidiBase, var$0, 0, nullptr, 0, paragraph->length(), flags));
}

void Bidi::init$($AttributedCharacterIterator* paragraph) {
	if (paragraph == nullptr) {
		$throwNew($IllegalArgumentException, "paragraph is null"_s);
	}
	$set(this, bidiBase, $new($BidiBase, 0, 0));
	$nc(this->bidiBase)->setPara(paragraph);
}

void Bidi::init$($chars* text, int32_t textStart, $bytes* embeddings, int32_t embStart, int32_t paragraphLength, int32_t flags) {
	if (text == nullptr) {
		$throwNew($IllegalArgumentException, "text is null"_s);
	}
	if (paragraphLength < 0) {
		$throwNew($IllegalArgumentException, $$str({"bad length: "_s, $$str(paragraphLength)}));
	}
	if (textStart < 0 || paragraphLength > $nc(text)->length - textStart) {
		$throwNew($IllegalArgumentException, $$str({"bad range: "_s, $$str(textStart), " length: "_s, $$str(paragraphLength), " for text of length: "_s, $$str(text->length)}));
	}
	if (embeddings != nullptr && (embStart < 0 || paragraphLength > $nc(embeddings)->length - embStart)) {
		$throwNew($IllegalArgumentException, $$str({"bad range: "_s, $$str(embStart), " length: "_s, $$str(paragraphLength), " for embeddings of length: "_s, $$str($nc(text)->length)}));
	}
	$set(this, bidiBase, $new($BidiBase, text, textStart, embeddings, embStart, paragraphLength, flags));
}

Bidi* Bidi::createLineBidi(int32_t lineStart, int32_t lineLimit) {
	$var($AttributedString, astr, $new($AttributedString, ""_s));
	$var(Bidi, newBidi, $new(Bidi, $(astr->getIterator())));
	return $nc(this->bidiBase)->setLine(this, this->bidiBase, newBidi, newBidi->bidiBase, lineStart, lineLimit);
}

bool Bidi::isMixed() {
	return $nc(this->bidiBase)->isMixed();
}

bool Bidi::isLeftToRight() {
	return $nc(this->bidiBase)->isLeftToRight();
}

bool Bidi::isRightToLeft() {
	return $nc(this->bidiBase)->isRightToLeft();
}

int32_t Bidi::getLength() {
	return $nc(this->bidiBase)->getLength();
}

bool Bidi::baseIsLeftToRight() {
	return $nc(this->bidiBase)->baseIsLeftToRight();
}

int32_t Bidi::getBaseLevel() {
	return $nc(this->bidiBase)->getParaLevel();
}

int32_t Bidi::getLevelAt(int32_t offset) {
	return $nc(this->bidiBase)->getLevelAt(offset);
}

int32_t Bidi::getRunCount() {
	return $nc(this->bidiBase)->countRuns();
}

int32_t Bidi::getRunLevel(int32_t run) {
	return $nc(this->bidiBase)->getRunLevel(run);
}

int32_t Bidi::getRunStart(int32_t run) {
	return $nc(this->bidiBase)->getRunStart(run);
}

int32_t Bidi::getRunLimit(int32_t run) {
	return $nc(this->bidiBase)->getRunLimit(run);
}

bool Bidi::requiresBidi($chars* text, int32_t start, int32_t limit) {
	return $BidiBase::requiresBidi(text, start, limit);
}

void Bidi::reorderVisually($bytes* levels, int32_t levelStart, $ObjectArray* objects, int32_t objectStart, int32_t count) {
	$BidiBase::reorderVisually(levels, levelStart, objects, objectStart, count);
}

$String* Bidi::toString() {
	return $nc(this->bidiBase)->toString();
}

Bidi::Bidi() {
}

$Class* Bidi::load$($String* name, bool initialize) {
	$loadClass(Bidi, name, initialize, &_Bidi_ClassInfo_, allocate$Bidi);
	return class$;
}

$Class* Bidi::class$ = nullptr;

	} // text
} // java