#include <sun/util/locale/StringTokenIterator.h>

#include <java/lang/IndexOutOfBoundsException.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IndexOutOfBoundsException = ::java::lang::IndexOutOfBoundsException;
using $MethodInfo = ::java::lang::MethodInfo;

namespace sun {
	namespace util {
		namespace locale {

$FieldInfo _StringTokenIterator_FieldInfo_[] = {
	{"text", "Ljava/lang/String;", nullptr, $PRIVATE, $field(StringTokenIterator, text)},
	{"dlms", "Ljava/lang/String;", nullptr, $PRIVATE, $field(StringTokenIterator, dlms)},
	{"delimiterChar", "C", nullptr, $PRIVATE, $field(StringTokenIterator, delimiterChar)},
	{"token", "Ljava/lang/String;", nullptr, $PRIVATE, $field(StringTokenIterator, token)},
	{"start", "I", nullptr, $PRIVATE, $field(StringTokenIterator, start)},
	{"end", "I", nullptr, $PRIVATE, $field(StringTokenIterator, end)},
	{"done", "Z", nullptr, $PRIVATE, $field(StringTokenIterator, done)},
	{}
};

$MethodInfo _StringTokenIterator_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(StringTokenIterator::*)($String*,$String*)>(&StringTokenIterator::init$))},
	{"current", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"currentEnd", "()I", nullptr, $PUBLIC},
	{"currentStart", "()I", nullptr, $PUBLIC},
	{"first", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"hasNext", "()Z", nullptr, $PUBLIC},
	{"isDone", "()Z", nullptr, $PUBLIC},
	{"next", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"nextDelimiter", "(I)I", nullptr, $PRIVATE, $method(static_cast<int32_t(StringTokenIterator::*)(int32_t)>(&StringTokenIterator::nextDelimiter))},
	{"setStart", "(I)Lsun/util/locale/StringTokenIterator;", nullptr, $PUBLIC},
	{"setText", "(Ljava/lang/String;)Lsun/util/locale/StringTokenIterator;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _StringTokenIterator_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.util.locale.StringTokenIterator",
	"java.lang.Object",
	nullptr,
	_StringTokenIterator_FieldInfo_,
	_StringTokenIterator_MethodInfo_
};

$Object* allocate$StringTokenIterator($Class* clazz) {
	return $of($alloc(StringTokenIterator));
}

void StringTokenIterator::init$($String* text, $String* dlms) {
	$set(this, text, text);
	if ($nc(dlms)->length() == 1) {
		this->delimiterChar = dlms->charAt(0);
	} else {
		$set(this, dlms, dlms);
	}
	setStart(0);
}

$String* StringTokenIterator::first() {
	setStart(0);
	return this->token;
}

$String* StringTokenIterator::current() {
	return this->token;
}

int32_t StringTokenIterator::currentStart() {
	return this->start;
}

int32_t StringTokenIterator::currentEnd() {
	return this->end;
}

bool StringTokenIterator::isDone() {
	return this->done;
}

$String* StringTokenIterator::next() {
	if (hasNext()) {
		this->start = this->end + 1;
		this->end = nextDelimiter(this->start);
		$set(this, token, $nc(this->text)->substring(this->start, this->end));
	} else {
		this->start = this->end;
		$set(this, token, nullptr);
		this->done = true;
	}
	return this->token;
}

bool StringTokenIterator::hasNext() {
	return (this->end < $nc(this->text)->length());
}

StringTokenIterator* StringTokenIterator::setStart(int32_t offset) {
	if (offset > $nc(this->text)->length()) {
		$throwNew($IndexOutOfBoundsException);
	}
	this->start = offset;
	this->end = nextDelimiter(this->start);
	$set(this, token, $nc(this->text)->substring(this->start, this->end));
	this->done = false;
	return this;
}

StringTokenIterator* StringTokenIterator::setText($String* text) {
	$set(this, text, text);
	setStart(0);
	return this;
}

int32_t StringTokenIterator::nextDelimiter(int32_t start) {
	int32_t textlen = $nc(this->text)->length();
	if (this->dlms == nullptr) {
		for (int32_t idx = start; idx < textlen; ++idx) {
			if ($nc(this->text)->charAt(idx) == this->delimiterChar) {
				return idx;
			}
		}
	} else {
		int32_t dlmslen = $nc(this->dlms)->length();
		for (int32_t idx = start; idx < textlen; ++idx) {
			char16_t c = $nc(this->text)->charAt(idx);
			for (int32_t i = 0; i < dlmslen; ++i) {
				if (c == $nc(this->dlms)->charAt(i)) {
					return idx;
				}
			}
		}
	}
	return textlen;
}

StringTokenIterator::StringTokenIterator() {
}

$Class* StringTokenIterator::load$($String* name, bool initialize) {
	$loadClass(StringTokenIterator, name, initialize, &_StringTokenIterator_ClassInfo_, allocate$StringTokenIterator);
	return class$;
}

$Class* StringTokenIterator::class$ = nullptr;

		} // locale
	} // util
} // sun