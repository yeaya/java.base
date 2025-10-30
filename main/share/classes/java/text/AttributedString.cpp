#include <java/text/AttributedString.h>

#include <java/lang/StringBuffer.h>
#include <java/text/Annotation.h>
#include <java/text/AttributedCharacterIterator$Attribute.h>
#include <java/text/AttributedCharacterIterator.h>
#include <java/text/AttributedString$AttributedStringIterator.h>
#include <java/text/CharacterIterator.h>
#include <java/util/AbstractCollection.h>
#include <java/util/AbstractList.h>
#include <java/util/Arrays.h>
#include <java/util/Collection.h>
#include <java/util/HashSet.h>
#include <java/util/Iterator.h>
#include <java/util/Map$Entry.h>
#include <java/util/Map.h>
#include <java/util/Set.h>
#include <java/util/Vector.h>
#include <jcpp.h>

#undef INITIAL_CAPACITY

using $AttributedCharacterIterator$AttributeArray = $Array<::java::text::AttributedCharacterIterator$Attribute>;
using $AttributedCharacterIteratorArray = $Array<::java::text::AttributedCharacterIterator>;
using $VectorArray = $Array<::java::util::Vector>;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $StringBuffer = ::java::lang::StringBuffer;
using $Annotation = ::java::text::Annotation;
using $AttributedCharacterIterator = ::java::text::AttributedCharacterIterator;
using $AttributedCharacterIterator$Attribute = ::java::text::AttributedCharacterIterator$Attribute;
using $AttributedString$AttributedStringIterator = ::java::text::AttributedString$AttributedStringIterator;
using $CharacterIterator = ::java::text::CharacterIterator;
using $AbstractCollection = ::java::util::AbstractCollection;
using $AbstractList = ::java::util::AbstractList;
using $Arrays = ::java::util::Arrays;
using $Collection = ::java::util::Collection;
using $HashSet = ::java::util::HashSet;
using $Iterator = ::java::util::Iterator;
using $Map = ::java::util::Map;
using $Map$Entry = ::java::util::Map$Entry;
using $Set = ::java::util::Set;
using $Vector = ::java::util::Vector;

namespace java {
	namespace text {

$FieldInfo _AttributedString_FieldInfo_[] = {
	{"text", "Ljava/lang/String;", nullptr, 0, $field(AttributedString, text)},
	{"INITIAL_CAPACITY", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(AttributedString, INITIAL_CAPACITY)},
	{"runCount", "I", nullptr, 0, $field(AttributedString, runCount)},
	{"runStarts", "[I", nullptr, 0, $field(AttributedString, runStarts)},
	{"runAttributes", "[Ljava/util/Vector;", "[Ljava/util/Vector<Ljava/text/AttributedCharacterIterator$Attribute;>;", 0, $field(AttributedString, runAttributes)},
	{"runAttributeValues", "[Ljava/util/Vector;", "[Ljava/util/Vector<Ljava/lang/Object;>;", 0, $field(AttributedString, runAttributeValues)},
	{}
};

$MethodInfo _AttributedString_MethodInfo_[] = {
	{"<init>", "([Ljava/text/AttributedCharacterIterator;)V", nullptr, 0, $method(static_cast<void(AttributedString::*)($AttributedCharacterIteratorArray*)>(&AttributedString::init$))},
	{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(AttributedString::*)($String*)>(&AttributedString::init$))},
	{"<init>", "(Ljava/lang/String;Ljava/util/Map;)V", "(Ljava/lang/String;Ljava/util/Map<+Ljava/text/AttributedCharacterIterator$Attribute;*>;)V", $PUBLIC, $method(static_cast<void(AttributedString::*)($String*,$Map*)>(&AttributedString::init$))},
	{"<init>", "(Ljava/text/AttributedCharacterIterator;)V", nullptr, $PUBLIC, $method(static_cast<void(AttributedString::*)($AttributedCharacterIterator*)>(&AttributedString::init$))},
	{"<init>", "(Ljava/text/AttributedCharacterIterator;II)V", nullptr, $PUBLIC, $method(static_cast<void(AttributedString::*)($AttributedCharacterIterator*,int32_t,int32_t)>(&AttributedString::init$))},
	{"<init>", "(Ljava/text/AttributedCharacterIterator;II[Ljava/text/AttributedCharacterIterator$Attribute;)V", nullptr, $PUBLIC, $method(static_cast<void(AttributedString::*)($AttributedCharacterIterator*,int32_t,int32_t,$AttributedCharacterIterator$AttributeArray*)>(&AttributedString::init$))},
	{"addAttribute", "(Ljava/text/AttributedCharacterIterator$Attribute;Ljava/lang/Object;)V", nullptr, $PUBLIC},
	{"addAttribute", "(Ljava/text/AttributedCharacterIterator$Attribute;Ljava/lang/Object;II)V", nullptr, $PUBLIC},
	{"addAttributeImpl", "(Ljava/text/AttributedCharacterIterator$Attribute;Ljava/lang/Object;II)V", nullptr, $PRIVATE | $SYNCHRONIZED, $method(static_cast<void(AttributedString::*)($AttributedCharacterIterator$Attribute*,Object$*,int32_t,int32_t)>(&AttributedString::addAttributeImpl))},
	{"addAttributeRunData", "(Ljava/text/AttributedCharacterIterator$Attribute;Ljava/lang/Object;II)V", nullptr, $PRIVATE, $method(static_cast<void(AttributedString::*)($AttributedCharacterIterator$Attribute*,Object$*,int32_t,int32_t)>(&AttributedString::addAttributeRunData))},
	{"addAttributes", "(Ljava/util/Map;II)V", "(Ljava/util/Map<+Ljava/text/AttributedCharacterIterator$Attribute;*>;II)V", $PUBLIC},
	{"appendContents", "(Ljava/lang/StringBuffer;Ljava/text/CharacterIterator;)V", nullptr, $PRIVATE | $FINAL, $method(static_cast<void(AttributedString::*)($StringBuffer*,$CharacterIterator*)>(&AttributedString::appendContents))},
	{"attributeValuesMatch", "(Ljava/util/Set;II)Z", "(Ljava/util/Set<+Ljava/text/AttributedCharacterIterator$Attribute;>;II)Z", $PRIVATE, $method(static_cast<bool(AttributedString::*)($Set*,int32_t,int32_t)>(&AttributedString::attributeValuesMatch))},
	{"charAt", "(I)C", nullptr, $PRIVATE, $method(static_cast<char16_t(AttributedString::*)(int32_t)>(&AttributedString::charAt))},
	{"createRunAttributeDataVectors", "()V", nullptr, $PRIVATE | $FINAL, $method(static_cast<void(AttributedString::*)()>(&AttributedString::createRunAttributeDataVectors))},
	{"ensureRunBreak", "(I)I", nullptr, $PRIVATE | $FINAL, $method(static_cast<int32_t(AttributedString::*)(int32_t)>(&AttributedString::ensureRunBreak))},
	{"ensureRunBreak", "(IZ)I", nullptr, $PRIVATE | $FINAL, $method(static_cast<int32_t(AttributedString::*)(int32_t,bool)>(&AttributedString::ensureRunBreak))},
	{"getAttribute", "(Ljava/text/AttributedCharacterIterator$Attribute;I)Ljava/lang/Object;", nullptr, $PRIVATE | $SYNCHRONIZED, $method(static_cast<$Object*(AttributedString::*)($AttributedCharacterIterator$Attribute*,int32_t)>(&AttributedString::getAttribute))},
	{"getAttributeCheckRange", "(Ljava/text/AttributedCharacterIterator$Attribute;III)Ljava/lang/Object;", nullptr, $PRIVATE, $method(static_cast<$Object*(AttributedString::*)($AttributedCharacterIterator$Attribute*,int32_t,int32_t,int32_t)>(&AttributedString::getAttributeCheckRange))},
	{"getIterator", "()Ljava/text/AttributedCharacterIterator;", nullptr, $PUBLIC},
	{"getIterator", "([Ljava/text/AttributedCharacterIterator$Attribute;)Ljava/text/AttributedCharacterIterator;", nullptr, $PUBLIC},
	{"getIterator", "([Ljava/text/AttributedCharacterIterator$Attribute;II)Ljava/text/AttributedCharacterIterator;", nullptr, $PUBLIC},
	{"length", "()I", nullptr, 0},
	{"mapsDiffer", "(Ljava/util/Map;Ljava/util/Map;)Z", "<K:Ljava/lang/Object;V:Ljava/lang/Object;>(Ljava/util/Map<TK;TV;>;Ljava/util/Map<TK;TV;>;)Z", $PRIVATE | $STATIC, $method(static_cast<bool(*)($Map*,$Map*)>(&AttributedString::mapsDiffer))},
	{"setAttributes", "(Ljava/util/Map;I)V", "(Ljava/util/Map<Ljava/text/AttributedCharacterIterator$Attribute;Ljava/lang/Object;>;I)V", $PRIVATE, $method(static_cast<void(AttributedString::*)($Map*,int32_t)>(&AttributedString::setAttributes))},
	{"valuesMatch", "(Ljava/lang/Object;Ljava/lang/Object;)Z", nullptr, $PRIVATE | $STATIC | $FINAL, $method(static_cast<bool(*)(Object$*,Object$*)>(&AttributedString::valuesMatch))},
	{}
};

$InnerClassInfo _AttributedString_InnerClassesInfo_[] = {
	{"java.text.AttributedString$AttributeMap", "java.text.AttributedString", "AttributeMap", $PRIVATE | $FINAL},
	{"java.text.AttributedString$AttributedStringIterator", "java.text.AttributedString", "AttributedStringIterator", $PRIVATE | $FINAL},
	{}
};

$ClassInfo _AttributedString_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"java.text.AttributedString",
	"java.lang.Object",
	nullptr,
	_AttributedString_FieldInfo_,
	_AttributedString_MethodInfo_,
	nullptr,
	nullptr,
	_AttributedString_InnerClassesInfo_,
	nullptr,
	nullptr,
	"java.text.AttributedString$AttributeMap,java.text.AttributedString$AttributedStringIterator"
};

$Object* allocate$AttributedString($Class* clazz) {
	return $of($alloc(AttributedString));
}

void AttributedString::init$($AttributedCharacterIteratorArray* iterators) {
	$useLocalCurrentObjectStackCache();
	if (iterators == nullptr) {
		$throwNew($NullPointerException, "Iterators must not be null"_s);
	}
	if ($nc(iterators)->length == 0) {
		$set(this, text, ""_s);
	} else {
		$var($StringBuffer, buffer, $new($StringBuffer));
		for (int32_t counter = 0; counter < iterators->length; ++counter) {
			appendContents(buffer, iterators->get(counter));
		}
		$set(this, text, buffer->toString());
		if (!$nc(this->text)->isEmpty()) {
			int32_t offset = 0;
			$var($Map, last, nullptr);
			for (int32_t counter = 0; counter < iterators->length; ++counter) {
				$var($AttributedCharacterIterator, iterator, iterators->get(counter));
				int32_t start = $nc(iterator)->getBeginIndex();
				int32_t end = iterator->getEndIndex();
				int32_t index = start;
				while (index < end) {
					iterator->setIndex(index);
					$var($Map, attrs, iterator->getAttributes());
					if (mapsDiffer(last, attrs)) {
						setAttributes(attrs, index - start + offset);
					}
					$assign(last, attrs);
					index = iterator->getRunLimit();
				}
				offset += (end - start);
			}
		}
	}
}

void AttributedString::init$($String* text) {
	if (text == nullptr) {
		$throwNew($NullPointerException);
	}
	$set(this, text, text);
}

void AttributedString::init$($String* text, $Map* attributes) {
	$useLocalCurrentObjectStackCache();
	if (text == nullptr || attributes == nullptr) {
		$throwNew($NullPointerException);
	}
	$set(this, text, text);
	if ($nc(text)->isEmpty()) {
		if ($nc(attributes)->isEmpty()) {
			return;
		}
		$throwNew($IllegalArgumentException, "Can\'t add attribute to 0-length text"_s);
	}
	int32_t attributeCount = $nc(attributes)->size();
	if (attributeCount > 0) {
		createRunAttributeDataVectors();
		$var($Vector, newRunAttributes, $new($Vector, attributeCount));
		$var($Vector, newRunAttributeValues, $new($Vector, attributeCount));
		$nc(this->runAttributes)->set(0, newRunAttributes);
		$nc(this->runAttributeValues)->set(0, newRunAttributeValues);
		$var($Iterator, iterator, $nc($(attributes->entrySet()))->iterator());
		while ($nc(iterator)->hasNext()) {
			$var($Map$Entry, entry, $cast($Map$Entry, iterator->next()));
			newRunAttributes->addElement($cast($AttributedCharacterIterator$Attribute, $($nc(entry)->getKey())));
			newRunAttributeValues->addElement($($nc(entry)->getValue()));
		}
	}
}

void AttributedString::init$($AttributedCharacterIterator* text) {
	$var($AttributedCharacterIterator, var$0, text);
	int32_t var$1 = $nc(text)->getBeginIndex();
	AttributedString::init$(var$0, var$1, text->getEndIndex(), nullptr);
}

void AttributedString::init$($AttributedCharacterIterator* text, int32_t beginIndex, int32_t endIndex) {
	AttributedString::init$(text, beginIndex, endIndex, nullptr);
}

void AttributedString::init$($AttributedCharacterIterator* text, int32_t beginIndex, int32_t endIndex, $AttributedCharacterIterator$AttributeArray* attributes) {
	$useLocalCurrentObjectStackCache();
	if (text == nullptr) {
		$throwNew($NullPointerException);
	}
	int32_t textBeginIndex = $nc(text)->getBeginIndex();
	int32_t textEndIndex = text->getEndIndex();
	if (beginIndex < textBeginIndex || endIndex > textEndIndex || beginIndex > endIndex) {
		$throwNew($IllegalArgumentException, "Invalid substring range"_s);
	}
	$var($StringBuilder, textBuilder, $new($StringBuilder));
	text->setIndex(beginIndex);
	for (char16_t c = text->current(); text->getIndex() < endIndex; c = text->next()) {
		textBuilder->append(c);
	}
	$set(this, text, textBuilder->toString());
	if (beginIndex == endIndex) {
		return;
	}
	$var($HashSet, keys, $new($HashSet));
	if (attributes == nullptr) {
		keys->addAll($(text->getAllAttributeKeys()));
	} else {
		for (int32_t i = 0; i < $nc(attributes)->length; ++i) {
			keys->add(attributes->get(i));
		}
		keys->retainAll($(text->getAllAttributeKeys()));
	}
	if (keys->isEmpty()) {
		return;
	}
	$var($Iterator, itr, keys->iterator());
	while ($nc(itr)->hasNext()) {
		$var($AttributedCharacterIterator$Attribute, attributeKey, $cast($AttributedCharacterIterator$Attribute, itr->next()));
		text->setIndex(textBeginIndex);
		while (text->getIndex() < endIndex) {
			int32_t start = text->getRunStart(attributeKey);
			int32_t limit = text->getRunLimit(attributeKey);
			$var($Object, value, text->getAttribute(attributeKey));
			if (value != nullptr) {
				if ($instanceOf($Annotation, value)) {
					if (start >= beginIndex && limit <= endIndex) {
						addAttribute(attributeKey, value, start - beginIndex, limit - beginIndex);
					} else if (limit > endIndex) {
						break;
					}
				} else {
					if (start >= endIndex) {
						break;
					}
					if (limit > beginIndex) {
						if (start < beginIndex) {
							start = beginIndex;
						}
						if (limit > endIndex) {
							limit = endIndex;
						}
						if (start != limit) {
							addAttribute(attributeKey, value, start - beginIndex, limit - beginIndex);
						}
					}
				}
			}
			text->setIndex(limit);
		}
	}
}

void AttributedString::addAttribute($AttributedCharacterIterator$Attribute* attribute, Object$* value) {
	if (attribute == nullptr) {
		$throwNew($NullPointerException);
	}
	int32_t len = length();
	if (len == 0) {
		$throwNew($IllegalArgumentException, "Can\'t add attribute to 0-length text"_s);
	}
	addAttributeImpl(attribute, value, 0, len);
}

void AttributedString::addAttribute($AttributedCharacterIterator$Attribute* attribute, Object$* value, int32_t beginIndex, int32_t endIndex) {
	if (attribute == nullptr) {
		$throwNew($NullPointerException);
	}
	if (beginIndex < 0 || endIndex > length() || beginIndex >= endIndex) {
		$throwNew($IllegalArgumentException, "Invalid substring range"_s);
	}
	addAttributeImpl(attribute, value, beginIndex, endIndex);
}

void AttributedString::addAttributes($Map* attributes, int32_t beginIndex, int32_t endIndex) {
	$useLocalCurrentObjectStackCache();
	if (attributes == nullptr) {
		$throwNew($NullPointerException);
	}
	if (beginIndex < 0 || endIndex > length() || beginIndex > endIndex) {
		$throwNew($IllegalArgumentException, "Invalid substring range"_s);
	}
	if (beginIndex == endIndex) {
		if ($nc(attributes)->isEmpty()) {
			return;
		}
		$throwNew($IllegalArgumentException, "Can\'t add attribute to 0-length text"_s);
	}
	if (this->runCount == 0) {
		createRunAttributeDataVectors();
	}
	int32_t beginRunIndex = ensureRunBreak(beginIndex);
	int32_t endRunIndex = ensureRunBreak(endIndex);
	$var($Iterator, iterator, $nc($($nc(attributes)->entrySet()))->iterator());
	while ($nc(iterator)->hasNext()) {
		$var($Map$Entry, entry, $cast($Map$Entry, iterator->next()));
		$var($AttributedCharacterIterator$Attribute, var$0, $cast($AttributedCharacterIterator$Attribute, $nc(entry)->getKey()));
		addAttributeRunData(var$0, $(entry->getValue()), beginRunIndex, endRunIndex);
	}
}

void AttributedString::addAttributeImpl($AttributedCharacterIterator$Attribute* attribute, Object$* value, int32_t beginIndex, int32_t endIndex) {
	$synchronized(this) {
		if (this->runCount == 0) {
			createRunAttributeDataVectors();
		}
		int32_t beginRunIndex = ensureRunBreak(beginIndex);
		int32_t endRunIndex = ensureRunBreak(endIndex);
		addAttributeRunData(attribute, value, beginRunIndex, endRunIndex);
	}
}

void AttributedString::createRunAttributeDataVectors() {
	$useLocalCurrentObjectStackCache();
	$var($ints, newRunStarts, $new($ints, AttributedString::INITIAL_CAPACITY));
	$var($VectorArray, newRunAttributes, $new($VectorArray, AttributedString::INITIAL_CAPACITY));
	$var($VectorArray, newRunAttributeValues, $new($VectorArray, AttributedString::INITIAL_CAPACITY));
	$set(this, runStarts, newRunStarts);
	$set(this, runAttributes, newRunAttributes);
	$set(this, runAttributeValues, newRunAttributeValues);
	this->runCount = 1;
}

int32_t AttributedString::ensureRunBreak(int32_t offset) {
	return ensureRunBreak(offset, true);
}

int32_t AttributedString::ensureRunBreak(int32_t offset, bool copyAttrs) {
	$useLocalCurrentObjectStackCache();
	if (offset == length()) {
		return this->runCount;
	}
	int32_t runIndex = 0;
	while (runIndex < this->runCount && $nc(this->runStarts)->get(runIndex) < offset) {
		++runIndex;
	}
	if (runIndex < this->runCount && $nc(this->runStarts)->get(runIndex) == offset) {
		return runIndex;
	}
	int32_t currentCapacity = $nc(this->runStarts)->length;
	if (this->runCount == currentCapacity) {
		int32_t newCapacity = currentCapacity + (currentCapacity >> 2);
		$var($ints, newRunStarts, $Arrays::copyOf(this->runStarts, newCapacity));
		$var($VectorArray, newRunAttributes, $fcast($VectorArray, $Arrays::copyOf(this->runAttributes, newCapacity)));
		$var($VectorArray, newRunAttributeValues, $fcast($VectorArray, $Arrays::copyOf(this->runAttributeValues, newCapacity)));
		$set(this, runStarts, newRunStarts);
		$set(this, runAttributes, newRunAttributes);
		$set(this, runAttributeValues, newRunAttributeValues);
	}
	$var($Vector, newRunAttributes, nullptr);
	$var($Vector, newRunAttributeValues, nullptr);
	if (copyAttrs) {
		$var($Vector, oldRunAttributes, $nc(this->runAttributes)->get(runIndex - 1));
		$var($Vector, oldRunAttributeValues, $nc(this->runAttributeValues)->get(runIndex - 1));
		if (oldRunAttributes != nullptr) {
			$assign(newRunAttributes, $new($Vector, static_cast<$Collection*>(static_cast<$AbstractCollection*>(static_cast<$AbstractList*>(oldRunAttributes)))));
		}
		if (oldRunAttributeValues != nullptr) {
			$assign(newRunAttributeValues, $new($Vector, static_cast<$Collection*>(static_cast<$AbstractCollection*>(static_cast<$AbstractList*>(oldRunAttributeValues)))));
		}
	}
	++this->runCount;
	for (int32_t i = this->runCount - 1; i > runIndex; --i) {
		$nc(this->runStarts)->set(i, $nc(this->runStarts)->get(i - 1));
		$nc(this->runAttributes)->set(i, $nc(this->runAttributes)->get(i - 1));
		$nc(this->runAttributeValues)->set(i, $nc(this->runAttributeValues)->get(i - 1));
	}
	$nc(this->runStarts)->set(runIndex, offset);
	$nc(this->runAttributes)->set(runIndex, newRunAttributes);
	$nc(this->runAttributeValues)->set(runIndex, newRunAttributeValues);
	return runIndex;
}

void AttributedString::addAttributeRunData($AttributedCharacterIterator$Attribute* attribute, Object$* value, int32_t beginRunIndex, int32_t endRunIndex) {
	$useLocalCurrentObjectStackCache();
	for (int32_t i = beginRunIndex; i < endRunIndex; ++i) {
		int32_t keyValueIndex = -1;
		if ($nc(this->runAttributes)->get(i) == nullptr) {
			$var($Vector, newRunAttributes, $new($Vector));
			$var($Vector, newRunAttributeValues, $new($Vector));
			$nc(this->runAttributes)->set(i, newRunAttributes);
			$nc(this->runAttributeValues)->set(i, newRunAttributeValues);
		} else {
			keyValueIndex = $nc($nc(this->runAttributes)->get(i))->indexOf(attribute);
		}
		if (keyValueIndex == -1) {
			int32_t oldSize = $nc($nc(this->runAttributes)->get(i))->size();
			$nc($nc(this->runAttributes)->get(i))->addElement(attribute);
			try {
				$nc($nc(this->runAttributeValues)->get(i))->addElement(value);
			} catch ($Exception& e) {
				$nc($nc(this->runAttributes)->get(i))->setSize(oldSize);
				$nc($nc(this->runAttributeValues)->get(i))->setSize(oldSize);
			}
		} else {
			$nc($nc(this->runAttributeValues)->get(i))->set(keyValueIndex, value);
		}
	}
}

$AttributedCharacterIterator* AttributedString::getIterator() {
	return getIterator(nullptr, 0, length());
}

$AttributedCharacterIterator* AttributedString::getIterator($AttributedCharacterIterator$AttributeArray* attributes) {
	return getIterator(attributes, 0, length());
}

$AttributedCharacterIterator* AttributedString::getIterator($AttributedCharacterIterator$AttributeArray* attributes, int32_t beginIndex, int32_t endIndex) {
	return $new($AttributedString$AttributedStringIterator, this, attributes, beginIndex, endIndex);
}

int32_t AttributedString::length() {
	return $nc(this->text)->length();
}

char16_t AttributedString::charAt(int32_t index) {
	return $nc(this->text)->charAt(index);
}

$Object* AttributedString::getAttribute($AttributedCharacterIterator$Attribute* attribute, int32_t runIndex) {
	$synchronized(this) {
		$useLocalCurrentObjectStackCache();
		$var($Vector, currentRunAttributes, $nc(this->runAttributes)->get(runIndex));
		$var($Vector, currentRunAttributeValues, $nc(this->runAttributeValues)->get(runIndex));
		if (currentRunAttributes == nullptr) {
			return $of(nullptr);
		}
		int32_t attributeIndex = $nc(currentRunAttributes)->indexOf(attribute);
		if (attributeIndex != -1) {
			return $of($nc(currentRunAttributeValues)->elementAt(attributeIndex));
		} else {
			return $of(nullptr);
		}
	}
}

$Object* AttributedString::getAttributeCheckRange($AttributedCharacterIterator$Attribute* attribute, int32_t runIndex, int32_t beginIndex, int32_t endIndex) {
	$useLocalCurrentObjectStackCache();
	$var($Object, value, getAttribute(attribute, runIndex));
	if ($instanceOf($Annotation, value)) {
		if (beginIndex > 0) {
			int32_t currIndex = runIndex;
			int32_t runStart = $nc(this->runStarts)->get(currIndex);
			while (runStart >= beginIndex && valuesMatch(value, $(getAttribute(attribute, currIndex - 1)))) {
				--currIndex;
				runStart = $nc(this->runStarts)->get(currIndex);
			}
			if (runStart < beginIndex) {
				return $of(nullptr);
			}
		}
		int32_t textLength = length();
		if (endIndex < textLength) {
			int32_t currIndex = runIndex;
			int32_t runLimit = (currIndex < this->runCount - 1) ? $nc(this->runStarts)->get(currIndex + 1) : textLength;
			while (runLimit <= endIndex && valuesMatch(value, $(getAttribute(attribute, currIndex + 1)))) {
				++currIndex;
				runLimit = (currIndex < this->runCount - 1) ? $nc(this->runStarts)->get(currIndex + 1) : textLength;
			}
			if (runLimit > endIndex) {
				return $of(nullptr);
			}
		}
	}
	return $of(value);
}

bool AttributedString::attributeValuesMatch($Set* attributes, int32_t runIndex1, int32_t runIndex2) {
	$useLocalCurrentObjectStackCache();
	$var($Iterator, iterator, $nc(attributes)->iterator());
	while ($nc(iterator)->hasNext()) {
		$var($AttributedCharacterIterator$Attribute, key, $cast($AttributedCharacterIterator$Attribute, iterator->next()));
		$var($Object, var$0, getAttribute(key, runIndex1));
		if (!valuesMatch(var$0, $(getAttribute(key, runIndex2)))) {
			return false;
		}
	}
	return true;
}

bool AttributedString::valuesMatch(Object$* value1, Object$* value2) {
	if (value1 == nullptr) {
		return value2 == nullptr;
	} else {
		return $nc($of(value1))->equals(value2);
	}
}

void AttributedString::appendContents($StringBuffer* buf, $CharacterIterator* iterator) {
	int32_t index = $nc(iterator)->getBeginIndex();
	int32_t end = iterator->getEndIndex();
	while (index < end) {
		iterator->setIndex(index++);
		$nc(buf)->append(iterator->current());
	}
}

void AttributedString::setAttributes($Map* attrs, int32_t offset) {
	$useLocalCurrentObjectStackCache();
	if (this->runCount == 0) {
		createRunAttributeDataVectors();
	}
	int32_t index = ensureRunBreak(offset, false);
	int32_t size = 0;
	if (attrs != nullptr && (size = attrs->size()) > 0) {
		$var($Vector, runAttrs, $new($Vector, size));
		$var($Vector, runValues, $new($Vector, size));
		$var($Iterator, iterator, $nc($(attrs->entrySet()))->iterator());
		while ($nc(iterator)->hasNext()) {
			$var($Map$Entry, entry, $cast($Map$Entry, iterator->next()));
			runAttrs->add($cast($AttributedCharacterIterator$Attribute, $($nc(entry)->getKey())));
			runValues->add($($nc(entry)->getValue()));
		}
		$nc(this->runAttributes)->set(index, runAttrs);
		$nc(this->runAttributeValues)->set(index, runValues);
	}
}

bool AttributedString::mapsDiffer($Map* last, $Map* attrs) {
	if (last == nullptr) {
		return (attrs != nullptr && attrs->size() > 0);
	}
	return (!$nc(last)->equals(attrs));
}

AttributedString::AttributedString() {
}

$Class* AttributedString::load$($String* name, bool initialize) {
	$loadClass(AttributedString, name, initialize, &_AttributedString_ClassInfo_, allocate$AttributedString);
	return class$;
}

$Class* AttributedString::class$ = nullptr;

	} // text
} // java