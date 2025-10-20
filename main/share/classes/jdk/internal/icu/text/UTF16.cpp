#include <jdk/internal/icu/text/UTF16.h>

#include <java/lang/Array.h>
#include <java/lang/ArrayIndexOutOfBoundsException.h>
#include <java/lang/CharSequence.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/IllegalArgumentException.h>
#include <java/lang/Integer.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/StringBuffer.h>
#include <java/lang/StringBuilder.h>
#include <java/lang/StringIndexOutOfBoundsException.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jdk/internal/icu/impl/UCharacterProperty.h>
#include <jcpp.h>

#undef CODEPOINT_MAX_VALUE
#undef CODEPOINT_MIN_VALUE
#undef LEAD_SURROGATE_BITMASK
#undef LEAD_SURROGATE_BITS
#undef LEAD_SURROGATE_MAX_VALUE
#undef LEAD_SURROGATE_MIN_VALUE
#undef LEAD_SURROGATE_OFFSET_
#undef LEAD_SURROGATE_SHIFT_
#undef SUPPLEMENTARY_MIN_VALUE
#undef SURROGATE_BITMASK
#undef SURROGATE_BITS
#undef SURROGATE_MIN_VALUE
#undef TRAIL_SURROGATE_BITMASK
#undef TRAIL_SURROGATE_BITS
#undef TRAIL_SURROGATE_MASK_
#undef TRAIL_SURROGATE_MAX_VALUE
#undef TRAIL_SURROGATE_MIN_VALUE
#undef UTF16

using $ArrayIndexOutOfBoundsException = ::java::lang::ArrayIndexOutOfBoundsException;
using $CharSequence = ::java::lang::CharSequence;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $StringBuffer = ::java::lang::StringBuffer;
using $StringIndexOutOfBoundsException = ::java::lang::StringIndexOutOfBoundsException;
using $UCharacterProperty = ::jdk::internal::icu::impl::UCharacterProperty;

namespace jdk {
	namespace internal {
		namespace icu {
			namespace text {

$FieldInfo _UTF16_FieldInfo_[] = {
	{"CODEPOINT_MIN_VALUE", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(UTF16, CODEPOINT_MIN_VALUE)},
	{"CODEPOINT_MAX_VALUE", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(UTF16, CODEPOINT_MAX_VALUE)},
	{"SUPPLEMENTARY_MIN_VALUE", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(UTF16, SUPPLEMENTARY_MIN_VALUE)},
	{"LEAD_SURROGATE_MIN_VALUE", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(UTF16, LEAD_SURROGATE_MIN_VALUE)},
	{"TRAIL_SURROGATE_MIN_VALUE", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(UTF16, TRAIL_SURROGATE_MIN_VALUE)},
	{"LEAD_SURROGATE_MAX_VALUE", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(UTF16, LEAD_SURROGATE_MAX_VALUE)},
	{"TRAIL_SURROGATE_MAX_VALUE", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(UTF16, TRAIL_SURROGATE_MAX_VALUE)},
	{"SURROGATE_MIN_VALUE", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(UTF16, SURROGATE_MIN_VALUE)},
	{"LEAD_SURROGATE_BITMASK", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(UTF16, LEAD_SURROGATE_BITMASK)},
	{"TRAIL_SURROGATE_BITMASK", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(UTF16, TRAIL_SURROGATE_BITMASK)},
	{"SURROGATE_BITMASK", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(UTF16, SURROGATE_BITMASK)},
	{"LEAD_SURROGATE_BITS", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(UTF16, LEAD_SURROGATE_BITS)},
	{"TRAIL_SURROGATE_BITS", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(UTF16, TRAIL_SURROGATE_BITS)},
	{"SURROGATE_BITS", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(UTF16, SURROGATE_BITS)},
	{"LEAD_SURROGATE_SHIFT_", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(UTF16, LEAD_SURROGATE_SHIFT_)},
	{"TRAIL_SURROGATE_MASK_", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(UTF16, TRAIL_SURROGATE_MASK_)},
	{"LEAD_SURROGATE_OFFSET_", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(UTF16, LEAD_SURROGATE_OFFSET_)},
	{}
};

$MethodInfo _UTF16_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(UTF16::*)()>(&UTF16::init$))},
	{"_charAt", "(Ljava/lang/String;IC)I", nullptr, $PRIVATE | $STATIC, $method(static_cast<int32_t(*)($String*,int32_t,char16_t)>(&UTF16::_charAt))},
	{"_charAt", "(Ljava/lang/CharSequence;IC)I", nullptr, $PRIVATE | $STATIC, $method(static_cast<int32_t(*)($CharSequence*,int32_t,char16_t)>(&UTF16::_charAt))},
	{"append", "(Ljava/lang/StringBuffer;I)Ljava/lang/StringBuffer;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$StringBuffer*(*)($StringBuffer*,int32_t)>(&UTF16::append))},
	{"charAt", "(Ljava/lang/String;I)I", nullptr, $PUBLIC | $STATIC, $method(static_cast<int32_t(*)($String*,int32_t)>(&UTF16::charAt))},
	{"charAt", "(Ljava/lang/CharSequence;I)I", nullptr, $PUBLIC | $STATIC, $method(static_cast<int32_t(*)($CharSequence*,int32_t)>(&UTF16::charAt))},
	{"charAt", "([CIII)I", nullptr, $PUBLIC | $STATIC, $method(static_cast<int32_t(*)($chars*,int32_t,int32_t,int32_t)>(&UTF16::charAt))},
	{"getCharCount", "(I)I", nullptr, $PUBLIC | $STATIC, $method(static_cast<int32_t(*)(int32_t)>(&UTF16::getCharCount))},
	{"getLeadSurrogate", "(I)C", nullptr, $PUBLIC | $STATIC, $method(static_cast<char16_t(*)(int32_t)>(&UTF16::getLeadSurrogate))},
	{"getTrailSurrogate", "(I)C", nullptr, $PUBLIC | $STATIC, $method(static_cast<char16_t(*)(int32_t)>(&UTF16::getTrailSurrogate))},
	{"isLeadSurrogate", "(C)Z", nullptr, $PUBLIC | $STATIC, $method(static_cast<bool(*)(char16_t)>(&UTF16::isLeadSurrogate))},
	{"isSurrogate", "(C)Z", nullptr, $PUBLIC | $STATIC, $method(static_cast<bool(*)(char16_t)>(&UTF16::isSurrogate))},
	{"isTrailSurrogate", "(C)Z", nullptr, $PUBLIC | $STATIC, $method(static_cast<bool(*)(char16_t)>(&UTF16::isTrailSurrogate))},
	{"moveCodePointOffset", "([CIIII)I", nullptr, $PUBLIC | $STATIC, $method(static_cast<int32_t(*)($chars*,int32_t,int32_t,int32_t,int32_t)>(&UTF16::moveCodePointOffset))},
	{"toString", "(I)Ljava/lang/String;", nullptr, $PRIVATE | $STATIC, $method(static_cast<$String*(*)(int32_t)>(&UTF16::toString))},
	{"valueOf", "(I)Ljava/lang/String;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$String*(*)(int32_t)>(&UTF16::valueOf))},
	{}
};

$ClassInfo _UTF16_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"jdk.internal.icu.text.UTF16",
	"java.lang.Object",
	nullptr,
	_UTF16_FieldInfo_,
	_UTF16_MethodInfo_
};

$Object* allocate$UTF16($Class* clazz) {
	return $of($alloc(UTF16));
}

void UTF16::init$() {
}

int32_t UTF16::charAt($String* source, int32_t offset16) {
	char16_t single = $nc(source)->charAt(offset16);
	if (single < UTF16::LEAD_SURROGATE_MIN_VALUE) {
		return single;
	}
	return _charAt(source, offset16, single);
}

int32_t UTF16::_charAt($String* source, int32_t offset16, char16_t single) {
	if (single > UTF16::TRAIL_SURROGATE_MAX_VALUE) {
		return single;
	}
	if (single <= UTF16::LEAD_SURROGATE_MAX_VALUE) {
		++offset16;
		if ($nc(source)->length() != offset16) {
			char16_t trail = source->charAt(offset16);
			if (trail >= UTF16::TRAIL_SURROGATE_MIN_VALUE && trail <= UTF16::TRAIL_SURROGATE_MAX_VALUE) {
				return $UCharacterProperty::getRawSupplementary(single, trail);
			}
		}
	} else {
		--offset16;
		if (offset16 >= 0) {
			char16_t lead = $nc(source)->charAt(offset16);
			if (lead >= UTF16::LEAD_SURROGATE_MIN_VALUE && lead <= UTF16::LEAD_SURROGATE_MAX_VALUE) {
				return $UCharacterProperty::getRawSupplementary(lead, single);
			}
		}
	}
	return single;
}

int32_t UTF16::charAt($CharSequence* source, int32_t offset16) {
	char16_t single = $nc(source)->charAt(offset16);
	if (single < UTF16::LEAD_SURROGATE_MIN_VALUE) {
		return single;
	}
	return _charAt(source, offset16, single);
}

int32_t UTF16::_charAt($CharSequence* source, int32_t offset16, char16_t single) {
	if (single > UTF16::TRAIL_SURROGATE_MAX_VALUE) {
		return single;
	}
	if (single <= UTF16::LEAD_SURROGATE_MAX_VALUE) {
		++offset16;
		if ($nc(source)->length() != offset16) {
			char16_t trail = source->charAt(offset16);
			if (trail >= UTF16::TRAIL_SURROGATE_MIN_VALUE && trail <= UTF16::TRAIL_SURROGATE_MAX_VALUE) {
				return $UCharacterProperty::getRawSupplementary(single, trail);
			}
		}
	} else {
		--offset16;
		if (offset16 >= 0) {
			char16_t lead = $nc(source)->charAt(offset16);
			if (lead >= UTF16::LEAD_SURROGATE_MIN_VALUE && lead <= UTF16::LEAD_SURROGATE_MAX_VALUE) {
				return $UCharacterProperty::getRawSupplementary(lead, single);
			}
		}
	}
	return single;
}

int32_t UTF16::charAt($chars* source, int32_t start, int32_t limit, int32_t offset16) {
	offset16 += start;
	if (offset16 < start || offset16 >= limit) {
		$throwNew($ArrayIndexOutOfBoundsException, offset16);
	}
	char16_t single = $nc(source)->get(offset16);
	if (!isSurrogate(single)) {
		return single;
	}
	if (single <= UTF16::LEAD_SURROGATE_MAX_VALUE) {
		++offset16;
		if (offset16 >= limit) {
			return single;
		}
		char16_t trail = source->get(offset16);
		if (isTrailSurrogate(trail)) {
			return $UCharacterProperty::getRawSupplementary(single, trail);
		}
	} else {
		if (offset16 == start) {
			return single;
		}
		--offset16;
		char16_t lead = source->get(offset16);
		if (isLeadSurrogate(lead)) {
			return $UCharacterProperty::getRawSupplementary(lead, single);
		}
	}
	return single;
}

int32_t UTF16::getCharCount(int32_t char32) {
	if (char32 < UTF16::SUPPLEMENTARY_MIN_VALUE) {
		return 1;
	}
	return 2;
}

bool UTF16::isSurrogate(char16_t char16) {
	return ((int32_t)(char16 & (uint32_t)UTF16::SURROGATE_BITMASK)) == UTF16::SURROGATE_BITS;
}

bool UTF16::isTrailSurrogate(char16_t char16) {
	return ((int32_t)(char16 & (uint32_t)UTF16::TRAIL_SURROGATE_BITMASK)) == UTF16::TRAIL_SURROGATE_BITS;
}

bool UTF16::isLeadSurrogate(char16_t char16) {
	return ((int32_t)(char16 & (uint32_t)UTF16::LEAD_SURROGATE_BITMASK)) == UTF16::LEAD_SURROGATE_BITS;
}

char16_t UTF16::getLeadSurrogate(int32_t char32) {
	if (char32 >= UTF16::SUPPLEMENTARY_MIN_VALUE) {
		return (char16_t)(UTF16::LEAD_SURROGATE_OFFSET_ + ($sr(char32, UTF16::LEAD_SURROGATE_SHIFT_)));
	}
	return (char16_t)0;
}

char16_t UTF16::getTrailSurrogate(int32_t char32) {
	if (char32 >= UTF16::SUPPLEMENTARY_MIN_VALUE) {
		return (char16_t)(UTF16::TRAIL_SURROGATE_MIN_VALUE + ((int32_t)(char32 & (uint32_t)UTF16::TRAIL_SURROGATE_MASK_)));
	}
	return (char16_t)char32;
}

$String* UTF16::valueOf(int32_t char32) {
	if (char32 < UTF16::CODEPOINT_MIN_VALUE || char32 > UTF16::CODEPOINT_MAX_VALUE) {
		$throwNew($IllegalArgumentException, "Illegal codepoint"_s);
	}
	return toString(char32);
}

$StringBuffer* UTF16::append($StringBuffer* target, int32_t char32) {
	$useLocalCurrentObjectStackCache();
	if (char32 < UTF16::CODEPOINT_MIN_VALUE || char32 > UTF16::CODEPOINT_MAX_VALUE) {
		$throwNew($IllegalArgumentException, $$str({"Illegal codepoint: "_s, $($Integer::toHexString(char32))}));
	}
	if (char32 >= UTF16::SUPPLEMENTARY_MIN_VALUE) {
		$nc(target)->append(getLeadSurrogate(char32));
		target->append(getTrailSurrogate(char32));
	} else {
		$nc(target)->append((char16_t)char32);
	}
	return target;
}

int32_t UTF16::moveCodePointOffset($chars* source, int32_t start, int32_t limit, int32_t offset16, int32_t shift32) {
	int32_t size = $nc(source)->length;
	int32_t count = 0;
	char16_t ch = 0;
	int32_t result = offset16 + start;
	if (start < 0 || limit < start) {
		$throwNew($StringIndexOutOfBoundsException, start);
	}
	if (limit > size) {
		$throwNew($StringIndexOutOfBoundsException, limit);
	}
	if (offset16 < 0 || result > limit) {
		$throwNew($StringIndexOutOfBoundsException, offset16);
	}
	if (shift32 > 0) {
		if (shift32 + result > size) {
			$throwNew($StringIndexOutOfBoundsException, result);
		}
		count = shift32;
		while (result < limit && count > 0) {
			ch = source->get(result);
			bool var$0 = isLeadSurrogate(ch) && (result + 1 < limit);
			if (var$0 && isTrailSurrogate(source->get(result + 1))) {
				++result;
			}
			--count;
			++result;
		}
	} else {
		if (result + shift32 < start) {
			$throwNew($StringIndexOutOfBoundsException, result);
		}
		for (count = -shift32; count > 0; --count) {
			--result;
			if (result < start) {
				break;
			}
			ch = source->get(result);
			bool var$1 = isTrailSurrogate(ch) && result > start;
			if (var$1 && isLeadSurrogate(source->get(result - 1))) {
				--result;
			}
		}
	}
	if (count != 0) {
		$throwNew($StringIndexOutOfBoundsException, shift32);
	}
	result -= start;
	return result;
}

$String* UTF16::toString(int32_t ch) {
	if (ch < UTF16::SUPPLEMENTARY_MIN_VALUE) {
		return $String::valueOf((char16_t)ch);
	}
	$var($StringBuilder, result, $new($StringBuilder));
	result->append(getLeadSurrogate(ch));
	result->append(getTrailSurrogate(ch));
	return result->toString();
}

UTF16::UTF16() {
}

$Class* UTF16::load$($String* name, bool initialize) {
	$loadClass(UTF16, name, initialize, &_UTF16_ClassInfo_, allocate$UTF16);
	return class$;
}

$Class* UTF16::class$ = nullptr;

			} // text
		} // icu
	} // internal
} // jdk