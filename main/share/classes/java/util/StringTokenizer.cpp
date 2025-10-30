#include <java/util/StringTokenizer.h>

#include <java/util/NoSuchElementException.h>
#include <jcpp.h>

#undef MAX_LOW_SURROGATE
#undef MIN_HIGH_SURROGATE

using $Character = ::java::lang::Character;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $Enumeration = ::java::util::Enumeration;
using $NoSuchElementException = ::java::util::NoSuchElementException;

namespace java {
	namespace util {

$FieldInfo _StringTokenizer_FieldInfo_[] = {
	{"currentPosition", "I", nullptr, $PRIVATE, $field(StringTokenizer, currentPosition)},
	{"newPosition", "I", nullptr, $PRIVATE, $field(StringTokenizer, newPosition)},
	{"maxPosition", "I", nullptr, $PRIVATE, $field(StringTokenizer, maxPosition)},
	{"str", "Ljava/lang/String;", nullptr, $PRIVATE, $field(StringTokenizer, str)},
	{"delimiters", "Ljava/lang/String;", nullptr, $PRIVATE, $field(StringTokenizer, delimiters)},
	{"retDelims", "Z", nullptr, $PRIVATE, $field(StringTokenizer, retDelims)},
	{"delimsChanged", "Z", nullptr, $PRIVATE, $field(StringTokenizer, delimsChanged)},
	{"maxDelimCodePoint", "I", nullptr, $PRIVATE, $field(StringTokenizer, maxDelimCodePoint)},
	{"hasSurrogates", "Z", nullptr, $PRIVATE, $field(StringTokenizer, hasSurrogates)},
	{"delimiterCodePoints", "[I", nullptr, $PRIVATE, $field(StringTokenizer, delimiterCodePoints)},
	{}
};

$MethodInfo _StringTokenizer_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;Ljava/lang/String;Z)V", nullptr, $PUBLIC, $method(static_cast<void(StringTokenizer::*)($String*,$String*,bool)>(&StringTokenizer::init$))},
	{"<init>", "(Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(StringTokenizer::*)($String*,$String*)>(&StringTokenizer::init$))},
	{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(StringTokenizer::*)($String*)>(&StringTokenizer::init$))},
	{"countTokens", "()I", nullptr, $PUBLIC},
	{"hasMoreElements", "()Z", nullptr, $PUBLIC},
	{"hasMoreTokens", "()Z", nullptr, $PUBLIC},
	{"isDelimiter", "(I)Z", nullptr, $PRIVATE, $method(static_cast<bool(StringTokenizer::*)(int32_t)>(&StringTokenizer::isDelimiter))},
	{"nextElement", "()Ljava/lang/Object;", nullptr, $PUBLIC},
	{"nextToken", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"nextToken", "(Ljava/lang/String;)Ljava/lang/String;", nullptr, $PUBLIC},
	{"scanToken", "(I)I", nullptr, $PRIVATE, $method(static_cast<int32_t(StringTokenizer::*)(int32_t)>(&StringTokenizer::scanToken))},
	{"setMaxDelimCodePoint", "()V", nullptr, $PRIVATE, $method(static_cast<void(StringTokenizer::*)()>(&StringTokenizer::setMaxDelimCodePoint))},
	{"skipDelimiters", "(I)I", nullptr, $PRIVATE, $method(static_cast<int32_t(StringTokenizer::*)(int32_t)>(&StringTokenizer::skipDelimiters))},
	{}
};

$ClassInfo _StringTokenizer_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"java.util.StringTokenizer",
	"java.lang.Object",
	"java.util.Enumeration",
	_StringTokenizer_FieldInfo_,
	_StringTokenizer_MethodInfo_,
	"Ljava/lang/Object;Ljava/util/Enumeration<Ljava/lang/Object;>;"
};

$Object* allocate$StringTokenizer($Class* clazz) {
	return $of($alloc(StringTokenizer));
}

void StringTokenizer::setMaxDelimCodePoint() {
	if (this->delimiters == nullptr) {
		this->maxDelimCodePoint = 0;
		return;
	}
	int32_t m = 0;
	int32_t c = 0;
	int32_t count = 0;
	for (int32_t i = 0; i < $nc(this->delimiters)->length(); i += $Character::charCount(c)) {
		c = $nc(this->delimiters)->charAt(i);
		if (c >= $Character::MIN_HIGH_SURROGATE && c <= $Character::MAX_LOW_SURROGATE) {
			c = $nc(this->delimiters)->codePointAt(i);
			this->hasSurrogates = true;
		}
		if (m < c) {
			m = c;
		}
		++count;
	}
	this->maxDelimCodePoint = m;
	if (this->hasSurrogates) {
		$set(this, delimiterCodePoints, $new($ints, count));
		{
			int32_t i = 0;
			int32_t j = 0;
			for (; i < count; ++i, j += $Character::charCount(c)) {
				c = $nc(this->delimiters)->codePointAt(j);
				$nc(this->delimiterCodePoints)->set(i, c);
			}
		}
	}
}

void StringTokenizer::init$($String* str, $String* delim, bool returnDelims) {
	this->hasSurrogates = false;
	this->currentPosition = 0;
	this->newPosition = -1;
	this->delimsChanged = false;
	$set(this, str, str);
	this->maxPosition = $nc(str)->length();
	$set(this, delimiters, delim);
	this->retDelims = returnDelims;
	setMaxDelimCodePoint();
}

void StringTokenizer::init$($String* str, $String* delim) {
	StringTokenizer::init$(str, delim, false);
}

void StringTokenizer::init$($String* str) {
	StringTokenizer::init$(str, " \t\n\r\f"_s, false);
}

int32_t StringTokenizer::skipDelimiters(int32_t startPos) {
	if (this->delimiters == nullptr) {
		$throwNew($NullPointerException);
	}
	int32_t position = startPos;
	while (!this->retDelims && position < this->maxPosition) {
		if (!this->hasSurrogates) {
			char16_t c = $nc(this->str)->charAt(position);
			if ((c > this->maxDelimCodePoint) || ($nc(this->delimiters)->indexOf((int32_t)c) < 0)) {
				break;
			}
			++position;
		} else {
			int32_t c = $nc(this->str)->codePointAt(position);
			if ((c > this->maxDelimCodePoint) || !isDelimiter(c)) {
				break;
			}
			position += $Character::charCount(c);
		}
	}
	return position;
}

int32_t StringTokenizer::scanToken(int32_t startPos) {
	int32_t position = startPos;
	while (position < this->maxPosition) {
		if (!this->hasSurrogates) {
			char16_t c = $nc(this->str)->charAt(position);
			if ((c <= this->maxDelimCodePoint) && ($nc(this->delimiters)->indexOf((int32_t)c) >= 0)) {
				break;
			}
			++position;
		} else {
			int32_t c = $nc(this->str)->codePointAt(position);
			if ((c <= this->maxDelimCodePoint) && isDelimiter(c)) {
				break;
			}
			position += $Character::charCount(c);
		}
	}
	if (this->retDelims && (startPos == position)) {
		if (!this->hasSurrogates) {
			char16_t c = $nc(this->str)->charAt(position);
			if ((c <= this->maxDelimCodePoint) && ($nc(this->delimiters)->indexOf((int32_t)c) >= 0)) {
				++position;
			}
		} else {
			int32_t c = $nc(this->str)->codePointAt(position);
			if ((c <= this->maxDelimCodePoint) && isDelimiter(c)) {
				position += $Character::charCount(c);
			}
		}
	}
	return position;
}

bool StringTokenizer::isDelimiter(int32_t codePoint) {
	{
		$var($ints, arr$, this->delimiterCodePoints);
		int32_t len$ = $nc(arr$)->length;
		int32_t i$ = 0;
		for (; i$ < len$; ++i$) {
			int32_t delimiterCodePoint = arr$->get(i$);
			{
				if (delimiterCodePoint == codePoint) {
					return true;
				}
			}
		}
	}
	return false;
}

bool StringTokenizer::hasMoreTokens() {
	this->newPosition = skipDelimiters(this->currentPosition);
	return (this->newPosition < this->maxPosition);
}

$String* StringTokenizer::nextToken() {
	this->currentPosition = (this->newPosition >= 0 && !this->delimsChanged) ? this->newPosition : skipDelimiters(this->currentPosition);
	this->delimsChanged = false;
	this->newPosition = -1;
	if (this->currentPosition >= this->maxPosition) {
		$throwNew($NoSuchElementException);
	}
	int32_t start = this->currentPosition;
	this->currentPosition = scanToken(this->currentPosition);
	return $nc(this->str)->substring(start, this->currentPosition);
}

$String* StringTokenizer::nextToken($String* delim) {
	$set(this, delimiters, delim);
	this->delimsChanged = true;
	setMaxDelimCodePoint();
	return nextToken();
}

bool StringTokenizer::hasMoreElements() {
	return hasMoreTokens();
}

$Object* StringTokenizer::nextElement() {
	return $of(nextToken());
}

int32_t StringTokenizer::countTokens() {
	int32_t count = 0;
	int32_t currpos = this->currentPosition;
	while (currpos < this->maxPosition) {
		currpos = skipDelimiters(currpos);
		if (currpos >= this->maxPosition) {
			break;
		}
		currpos = scanToken(currpos);
		++count;
	}
	return count;
}

StringTokenizer::StringTokenizer() {
}

$Class* StringTokenizer::load$($String* name, bool initialize) {
	$loadClass(StringTokenizer, name, initialize, &_StringTokenizer_ClassInfo_, allocate$StringTokenizer);
	return class$;
}

$Class* StringTokenizer::class$ = nullptr;

	} // util
} // java