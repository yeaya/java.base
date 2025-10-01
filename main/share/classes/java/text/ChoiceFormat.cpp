#include <java/text/ChoiceFormat.h>

#include <java/io/InvalidObjectException.h>
#include <java/io/ObjectInputStream.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/Double.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/IllegalArgumentException.h>
#include <java/lang/Math.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/Number.h>
#include <java/lang/String.h>
#include <java/lang/StringBuffer.h>
#include <java/lang/StringBuilder.h>
#include <java/lang/System.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/text/FieldPosition.h>
#include <java/text/NumberFormat.h>
#include <java/text/ParsePosition.h>
#include <java/util/Arrays.h>
#include <jcpp.h>

#undef POSITIVE_INFINITY
#undef NEGATIVE_INFINITY

using $StringBufferArray = $Array<::java::lang::StringBuffer>;
using $InvalidObjectException = ::java::io::InvalidObjectException;
using $ObjectInputStream = ::java::io::ObjectInputStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $Double = ::java::lang::Double;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;
using $Number = ::java::lang::Number;
using $StringBuffer = ::java::lang::StringBuffer;
using $FieldPosition = ::java::text::FieldPosition;
using $NumberFormat = ::java::text::NumberFormat;
using $ParsePosition = ::java::text::ParsePosition;
using $Arrays = ::java::util::Arrays;

namespace java {
	namespace text {

$FieldInfo _ChoiceFormat_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(ChoiceFormat, serialVersionUID)},
	{"choiceLimits", "[D", nullptr, $PRIVATE, $field(ChoiceFormat, choiceLimits)},
	{"choiceFormats", "[Ljava/lang/String;", nullptr, $PRIVATE, $field(ChoiceFormat, choiceFormats)},
	{}
};

$MethodInfo _ChoiceFormat_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(ChoiceFormat::*)($String*)>(&ChoiceFormat::init$))},
	{"<init>", "([D[Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(ChoiceFormat::*)($doubles*,$StringArray*)>(&ChoiceFormat::init$))},
	{"applyPattern", "(Ljava/lang/String;)V", nullptr, $PUBLIC},
	{"clone", "()Ljava/lang/Object;", nullptr, $PUBLIC},
	{"doubleArraySize", "([D)[D", nullptr, $PRIVATE | $STATIC, $method(static_cast<$doubles*(*)($doubles*)>(&ChoiceFormat::doubleArraySize))},
	{"doubleArraySize", "([Ljava/lang/String;)[Ljava/lang/String;", nullptr, $PRIVATE, $method(static_cast<$StringArray*(ChoiceFormat::*)($StringArray*)>(&ChoiceFormat::doubleArraySize))},
	{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"format", "(JLjava/lang/StringBuffer;Ljava/text/FieldPosition;)Ljava/lang/StringBuffer;", nullptr, $PUBLIC},
	{"format", "(DLjava/lang/StringBuffer;Ljava/text/FieldPosition;)Ljava/lang/StringBuffer;", nullptr, $PUBLIC},
	{"getFormats", "()[Ljava/lang/Object;", nullptr, $PUBLIC},
	{"getLimits", "()[D", nullptr, $PUBLIC},
	{"hashCode", "()I", nullptr, $PUBLIC},
	{"nextDouble", "(D)D", nullptr, $PUBLIC | $STATIC | $FINAL, $method(static_cast<double(*)(double)>(&ChoiceFormat::nextDouble))},
	{"nextDouble", "(DZ)D", nullptr, $PUBLIC | $STATIC, $method(static_cast<double(*)(double,bool)>(&ChoiceFormat::nextDouble))},
	{"parse", "(Ljava/lang/String;Ljava/text/ParsePosition;)Ljava/lang/Number;", nullptr, $PUBLIC},
	{"previousDouble", "(D)D", nullptr, $PUBLIC | $STATIC | $FINAL, $method(static_cast<double(*)(double)>(&ChoiceFormat::previousDouble))},
	{"readObject", "(Ljava/io/ObjectInputStream;)V", nullptr, $PRIVATE, $method(static_cast<void(ChoiceFormat::*)($ObjectInputStream*)>(&ChoiceFormat::readObject)), "java.io.IOException,java.lang.ClassNotFoundException"},
	{"setChoices", "([D[Ljava/lang/String;)V", nullptr, $PUBLIC},
	{"toPattern", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _ChoiceFormat_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"java.text.ChoiceFormat",
	"java.text.NumberFormat",
	nullptr,
	_ChoiceFormat_FieldInfo_,
	_ChoiceFormat_MethodInfo_
};

$Object* allocate$ChoiceFormat($Class* clazz) {
	return $of($alloc(ChoiceFormat));
}

void ChoiceFormat::applyPattern($String* newPattern) {
	$var($StringBufferArray, segments, $new($StringBufferArray, 2));
	for (int32_t i = 0; i < segments->length; ++i) {
		segments->set(i, $$new($StringBuffer));
	}
	$var($doubles, newChoiceLimits, $new($doubles, 30));
	$var($StringArray, newChoiceFormats, $new($StringArray, 30));
	int32_t count = 0;
	int32_t part = 0;
	double startValue = (double)0;
	$init($Double);
	double oldStartValue = $Double::NaN;
	bool inQuote = false;
	for (int32_t i = 0; i < $nc(newPattern)->length(); ++i) {
		char16_t ch = newPattern->charAt(i);
		if (ch == u'\'') {
			bool var$0 = (i + 1) < newPattern->length();
			if (var$0 && newPattern->charAt(i + 1) == ch) {
				$nc(segments->get(part))->append(ch);
				++i;
			} else {
				inQuote = !inQuote;
			}
		} else if (inQuote) {
			$nc($nc(segments)->get(part))->append(ch);
		} else if (ch == u'<' || ch == u'#' || ch == (char16_t)0x2264) {
			if ($nc($nc(segments)->get(0))->length() == 0) {
				$throwNew($IllegalArgumentException, "Each interval must contain a number before a format"_s);
			}
			$var($String, tempBuffer, $nc($nc(segments)->get(0))->toString());
			if ($nc(tempBuffer)->equals(u"\u221e"_s)) {
				$init($Double);
				startValue = $Double::POSITIVE_INFINITY;
			} else if ($nc(tempBuffer)->equals(u"-\u221e"_s)) {
				$init($Double);
				startValue = $Double::NEGATIVE_INFINITY;
			} else {
				startValue = $Double::parseDouble(tempBuffer);
			}
			$init($Double);
			if (ch == u'<' && startValue != $Double::POSITIVE_INFINITY && startValue != $Double::NEGATIVE_INFINITY) {
				startValue = nextDouble(startValue);
			}
			if (startValue <= oldStartValue) {
				$throwNew($IllegalArgumentException, "Incorrect order of intervals, must be in ascending order"_s);
			}
			$nc(segments->get(0))->setLength(0);
			part = 1;
		} else if (ch == u'|') {
			if (count == $nc(newChoiceLimits)->length) {
				$assign(newChoiceLimits, doubleArraySize(newChoiceLimits));
				$assign(newChoiceFormats, doubleArraySize(newChoiceFormats));
			}
			$nc(newChoiceLimits)->set(count, startValue);
			$nc(newChoiceFormats)->set(count, $($nc($nc(segments)->get(1))->toString()));
			++count;
			oldStartValue = startValue;
			$nc(segments->get(1))->setLength(0);
			part = 0;
		} else {
			$nc($nc(segments)->get(part))->append(ch);
		}
	}
	if (part == 1) {
		if (count == $nc(newChoiceLimits)->length) {
			$assign(newChoiceLimits, doubleArraySize(newChoiceLimits));
			$assign(newChoiceFormats, doubleArraySize(newChoiceFormats));
		}
		$nc(newChoiceLimits)->set(count, startValue);
		$nc(newChoiceFormats)->set(count, $($nc(segments->get(1))->toString()));
		++count;
	}
	$set(this, choiceLimits, $new($doubles, count));
	$System::arraycopy(newChoiceLimits, 0, this->choiceLimits, 0, count);
	$set(this, choiceFormats, $new($StringArray, count));
	$System::arraycopy(newChoiceFormats, 0, this->choiceFormats, 0, count);
}

$String* ChoiceFormat::toPattern() {
	$var($StringBuilder, result, $new($StringBuilder));
	for (int32_t i = 0; i < $nc(this->choiceLimits)->length; ++i) {
		if (i != 0) {
			result->append(u'|');
		}
		double less = previousDouble($nc(this->choiceLimits)->get(i));
		double tryLessOrEqual = $Math::abs($Math::IEEEremainder($nc(this->choiceLimits)->get(i), 1.0));
		double tryLess = $Math::abs($Math::IEEEremainder(less, 1.0));
		if (tryLessOrEqual < tryLess) {
			result->append($nc(this->choiceLimits)->get(i));
			result->append(u'#');
		} else {
			$init($Double);
			if ($nc(this->choiceLimits)->get(i) == $Double::POSITIVE_INFINITY) {
				result->append(u"\u221e"_s);
			} else {
				if ($nc(this->choiceLimits)->get(i) == $Double::NEGATIVE_INFINITY) {
					result->append(u"-\u221e"_s);
				} else {
					result->append(less);
				}
			}
			result->append(u'<');
		}
		$var($String, text, $nc(this->choiceFormats)->get(i));
		bool var$2 = $nc(text)->indexOf((int32_t)u'<') >= 0;
		bool var$1 = var$2 || $nc(text)->indexOf((int32_t)u'#') >= 0;
		bool var$0 = var$1 || $nc(text)->indexOf((int32_t)(char16_t)0x2264) >= 0;
		bool needQuote = var$0 || $nc(text)->indexOf((int32_t)u'|') >= 0;
		if (needQuote) {
			result->append(u'\'');
		}
		if (text->indexOf((int32_t)u'\'') < 0) {
			result->append(text);
		} else {
			for (int32_t j = 0; j < text->length(); ++j) {
				char16_t c = text->charAt(j);
				result->append(c);
				if (c == u'\'') {
					result->append(c);
				}
			}
		}
		if (needQuote) {
			result->append(u'\'');
		}
	}
	return result->toString();
}

void ChoiceFormat::init$($String* newPattern) {
	$NumberFormat::init$();
	applyPattern(newPattern);
}

void ChoiceFormat::init$($doubles* limits, $StringArray* formats) {
	$NumberFormat::init$();
	setChoices(limits, formats);
}

void ChoiceFormat::setChoices($doubles* limits, $StringArray* formats) {
	if ($nc(limits)->length != $nc(formats)->length) {
		$throwNew($IllegalArgumentException, "Array and limit arrays must be of the same length."_s);
	}
	$set(this, choiceLimits, $Arrays::copyOf(limits, $nc(limits)->length));
	$set(this, choiceFormats, $fcast($StringArray, $Arrays::copyOf(formats, $nc(formats)->length)));
}

$doubles* ChoiceFormat::getLimits() {
	$var($doubles, newLimits, $Arrays::copyOf(this->choiceLimits, $nc(this->choiceLimits)->length));
	return newLimits;
}

$ObjectArray* ChoiceFormat::getFormats() {
	$var($ObjectArray, newFormats, $Arrays::copyOf(this->choiceFormats, $nc(this->choiceFormats)->length));
	return newFormats;
}

$StringBuffer* ChoiceFormat::format(int64_t number, $StringBuffer* toAppendTo, $FieldPosition* status) {
	return format((double)number, toAppendTo, status);
}

$StringBuffer* ChoiceFormat::format(double number, $StringBuffer* toAppendTo, $FieldPosition* status) {
	int32_t i = 0;
	for (i = 0; i < $nc(this->choiceLimits)->length; ++i) {
		if (!(number >= $nc(this->choiceLimits)->get(i))) {
			break;
		}
	}
	--i;
	if (i < 0) {
		i = 0;
	}
	return $nc(toAppendTo)->append($nc(this->choiceFormats)->get(i));
}

$Number* ChoiceFormat::parse($String* text, $ParsePosition* status) {
	int32_t start = $nc(status)->index;
	int32_t furthest = start;
	$init($Double);
	double bestNumber = $Double::NaN;
	double tempNumber = 0.0;
	for (int32_t i = 0; i < $nc(this->choiceFormats)->length; ++i) {
		$var($String, tempString, $nc(this->choiceFormats)->get(i));
		if ($nc(text)->regionMatches(start, tempString, 0, $nc(tempString)->length())) {
			status->index = start + $nc(tempString)->length();
			tempNumber = $nc(this->choiceLimits)->get(i);
			if (status->index > furthest) {
				furthest = status->index;
				bestNumber = tempNumber;
				if (furthest == text->length()) {
					break;
				}
			}
		}
	}
	status->index = furthest;
	if (status->index == start) {
		status->errorIndex = furthest;
	}
	return $Double::valueOf(bestNumber);
}

double ChoiceFormat::nextDouble(double d) {
	$init(ChoiceFormat);
	return $Math::nextUp(d);
}

double ChoiceFormat::previousDouble(double d) {
	$init(ChoiceFormat);
	return $Math::nextDown(d);
}

$Object* ChoiceFormat::clone() {
	$var(ChoiceFormat, other, $cast(ChoiceFormat, $NumberFormat::clone()));
	$set($nc(other), choiceLimits, $cast($doubles, $nc(this->choiceLimits)->clone()));
	$set(other, choiceFormats, $cast($StringArray, $nc(this->choiceFormats)->clone()));
	return $of(other);
}

int32_t ChoiceFormat::hashCode() {
	int32_t result = $nc(this->choiceLimits)->length;
	if ($nc(this->choiceFormats)->length > 0) {
		result ^= $nc($nc(this->choiceFormats)->get($nc(this->choiceFormats)->length - 1))->hashCode();
	}
	return result;
}

bool ChoiceFormat::equals(Object$* obj) {
	if (obj == nullptr) {
		return false;
	}
	if ($equals(this, obj)) {
		return true;
	}
	if ($of(this)->getClass() != $nc($of(obj))->getClass()) {
		return false;
	}
	$var(ChoiceFormat, other, $cast(ChoiceFormat, obj));
	bool var$0 = $Arrays::equals(this->choiceLimits, $nc(other)->choiceLimits);
	return (var$0 && $Arrays::equals(this->choiceFormats, $nc(other)->choiceFormats));
}

void ChoiceFormat::readObject($ObjectInputStream* in) {
	$nc(in)->defaultReadObject();
	if ($nc(this->choiceLimits)->length != $nc(this->choiceFormats)->length) {
		$throwNew($InvalidObjectException, "limits and format arrays of different length."_s);
	}
}

double ChoiceFormat::nextDouble(double d, bool positive) {
	$init(ChoiceFormat);
	return positive ? $Math::nextUp(d) : $Math::nextDown(d);
}

$doubles* ChoiceFormat::doubleArraySize($doubles* array) {
	$init(ChoiceFormat);
	int32_t oldSize = $nc(array)->length;
	$var($doubles, newArray, $new($doubles, oldSize * 2));
	$System::arraycopy(array, 0, newArray, 0, oldSize);
	return newArray;
}

$StringArray* ChoiceFormat::doubleArraySize($StringArray* array) {
	int32_t oldSize = $nc(array)->length;
	$var($StringArray, newArray, $new($StringArray, oldSize * 2));
	$System::arraycopy(array, 0, newArray, 0, oldSize);
	return newArray;
}

ChoiceFormat::ChoiceFormat() {
}

$Class* ChoiceFormat::load$($String* name, bool initialize) {
	$loadClass(ChoiceFormat, name, initialize, &_ChoiceFormat_ClassInfo_, allocate$ChoiceFormat);
	return class$;
}

$Class* ChoiceFormat::class$ = nullptr;

	} // text
} // java