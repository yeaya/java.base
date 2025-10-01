#include <java/text/CharacterIteratorFieldDelegate.h>

#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/Math.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/StringBuffer.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/text/AttributedCharacterIterator$Attribute.h>
#include <java/text/AttributedCharacterIterator.h>
#include <java/text/AttributedString.h>
#include <java/text/Format$Field.h>
#include <java/util/ArrayList.h>
#include <jcpp.h>

using $AttributedCharacterIteratorArray = $Array<::java::text::AttributedCharacterIterator>;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;
using $StringBuffer = ::java::lang::StringBuffer;
using $AttributedCharacterIterator = ::java::text::AttributedCharacterIterator;
using $AttributedCharacterIterator$Attribute = ::java::text::AttributedCharacterIterator$Attribute;
using $AttributedString = ::java::text::AttributedString;
using $Format$Field = ::java::text::Format$Field;
using $Format$FieldDelegate = ::java::text::Format$FieldDelegate;
using $ArrayList = ::java::util::ArrayList;

namespace java {
	namespace text {

$FieldInfo _CharacterIteratorFieldDelegate_FieldInfo_[] = {
	{"attributedStrings", "Ljava/util/ArrayList;", "Ljava/util/ArrayList<Ljava/text/AttributedString;>;", $PRIVATE, $field(CharacterIteratorFieldDelegate, attributedStrings)},
	{"size", "I", nullptr, $PRIVATE, $field(CharacterIteratorFieldDelegate, size)},
	{}
};

$MethodInfo _CharacterIteratorFieldDelegate_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(CharacterIteratorFieldDelegate::*)()>(&CharacterIteratorFieldDelegate::init$))},
	{"formatted", "(Ljava/text/Format$Field;Ljava/lang/Object;IILjava/lang/StringBuffer;)V", nullptr, $PUBLIC},
	{"formatted", "(ILjava/text/Format$Field;Ljava/lang/Object;IILjava/lang/StringBuffer;)V", nullptr, $PUBLIC},
	{"getIterator", "(Ljava/lang/String;)Ljava/text/AttributedCharacterIterator;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _CharacterIteratorFieldDelegate_InnerClassesInfo_[] = {
	{"java.text.Format$FieldDelegate", "java.text.Format", "FieldDelegate", $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _CharacterIteratorFieldDelegate_ClassInfo_ = {
	$ACC_SUPER,
	"java.text.CharacterIteratorFieldDelegate",
	"java.lang.Object",
	"java.text.Format$FieldDelegate",
	_CharacterIteratorFieldDelegate_FieldInfo_,
	_CharacterIteratorFieldDelegate_MethodInfo_,
	nullptr,
	nullptr,
	_CharacterIteratorFieldDelegate_InnerClassesInfo_
};

$Object* allocate$CharacterIteratorFieldDelegate($Class* clazz) {
	return $of($alloc(CharacterIteratorFieldDelegate));
}

void CharacterIteratorFieldDelegate::init$() {
	$set(this, attributedStrings, $new($ArrayList));
}

void CharacterIteratorFieldDelegate::formatted($Format$Field* attr, Object$* value, int32_t start, int32_t end, $StringBuffer* buffer) {
	if (start != end) {
		if (start < this->size) {
			int32_t index = this->size;
			int32_t asIndex = $nc(this->attributedStrings)->size() - 1;
			while (start < index) {
				$var($AttributedString, as, $cast($AttributedString, $nc(this->attributedStrings)->get(asIndex--)));
				int32_t newIndex = index - $nc(as)->length();
				int32_t aStart = $Math::max(0, start - newIndex);
				as->addAttribute(attr, value, aStart, $Math::min(end - start, as->length() - aStart) + aStart);
				index = newIndex;
			}
		}
		if (this->size < start) {
			$nc(this->attributedStrings)->add($$new($AttributedString, $($nc(buffer)->substring(this->size, start))));
			this->size = start;
		}
		if (this->size < end) {
			int32_t aStart = $Math::max(start, this->size);
			$var($AttributedString, string, $new($AttributedString, $($nc(buffer)->substring(aStart, end))));
			string->addAttribute(attr, value);
			$nc(this->attributedStrings)->add(string);
			this->size = end;
		}
	}
}

void CharacterIteratorFieldDelegate::formatted(int32_t fieldID, $Format$Field* attr, Object$* value, int32_t start, int32_t end, $StringBuffer* buffer) {
	formatted(attr, value, start, end, buffer);
}

$AttributedCharacterIterator* CharacterIteratorFieldDelegate::getIterator($String* string) {
	if ($nc(string)->length() > this->size) {
		$nc(this->attributedStrings)->add($$new($AttributedString, $(string->substring(this->size))));
		this->size = string->length();
	}
	int32_t iCount = $nc(this->attributedStrings)->size();
	$var($AttributedCharacterIteratorArray, iterators, $new($AttributedCharacterIteratorArray, iCount));
	for (int32_t counter = 0; counter < iCount; ++counter) {
		iterators->set(counter, $($nc(($cast($AttributedString, $($nc(this->attributedStrings)->get(counter)))))->getIterator()));
	}
	return $$new($AttributedString, iterators)->getIterator();
}

CharacterIteratorFieldDelegate::CharacterIteratorFieldDelegate() {
}

$Class* CharacterIteratorFieldDelegate::load$($String* name, bool initialize) {
	$loadClass(CharacterIteratorFieldDelegate, name, initialize, &_CharacterIteratorFieldDelegate_ClassInfo_, allocate$CharacterIteratorFieldDelegate);
	return class$;
}

$Class* CharacterIteratorFieldDelegate::class$ = nullptr;

	} // text
} // java