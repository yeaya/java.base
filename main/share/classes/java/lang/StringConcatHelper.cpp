#include <java/lang/StringConcatHelper.h>

#include <java/lang/Array.h>
#include <java/lang/AssertionError.h>
#include <java/lang/Byte.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/CompoundAttribute.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/IllegalAccessException.h>
#include <java/lang/Integer.h>
#include <java/lang/InternalError.h>
#include <java/lang/Long.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/NoSuchMethodException.h>
#include <java/lang/OutOfMemoryError.h>
#include <java/lang/ReflectiveOperationException.h>
#include <java/lang/String.h>
#include <java/lang/StringLatin1.h>
#include <java/lang/StringUTF16.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodHandles.h>
#include <java/lang/invoke/MethodType.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jdk/internal/misc/Unsafe.h>
#include <jcpp.h>

#undef COMPACT_STRINGS
#undef LATIN1
#undef TYPE
#undef UNSAFE
#undef UTF16

using $AssertionError = ::java::lang::AssertionError;
using $Byte = ::java::lang::Byte;
using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalAccessException = ::java::lang::IllegalAccessException;
using $Integer = ::java::lang::Integer;
using $InternalError = ::java::lang::InternalError;
using $Long = ::java::lang::Long;
using $MethodInfo = ::java::lang::MethodInfo;
using $NoSuchMethodException = ::java::lang::NoSuchMethodException;
using $OutOfMemoryError = ::java::lang::OutOfMemoryError;
using $ReflectiveOperationException = ::java::lang::ReflectiveOperationException;
using $StringLatin1 = ::java::lang::StringLatin1;
using $StringUTF16 = ::java::lang::StringUTF16;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $MethodHandles = ::java::lang::invoke::MethodHandles;
using $MethodHandles$Lookup = ::java::lang::invoke::MethodHandles$Lookup;
using $MethodType = ::java::lang::invoke::MethodType;
using $Unsafe = ::jdk::internal::misc::Unsafe;

namespace java {
	namespace lang {

$CompoundAttribute _StringConcatHelper_MethodAnnotations_newArray11[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _StringConcatHelper_MethodAnnotations_newArrayWithSuffix12[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _StringConcatHelper_MethodAnnotations_newStringOf14[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$CompoundAttribute _StringConcatHelper_MethodAnnotations_simpleConcat27[] = {
	{"Ljdk/internal/vm/annotation/ForceInline;", nullptr},
	{}
};

$FieldInfo _StringConcatHelper_FieldInfo_[] = {
	{"LATIN1", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(StringConcatHelper, LATIN1)},
	{"UTF16", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(StringConcatHelper, UTF16)},
	{"UNSAFE", "Ljdk/internal/misc/Unsafe;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(StringConcatHelper, UNSAFE)},
	{}
};

$MethodInfo _StringConcatHelper_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(StringConcatHelper::*)()>(&StringConcatHelper::init$))},
	{"checkOverflow", "(J)J", nullptr, $PRIVATE | $STATIC, $method(static_cast<int64_t(*)(int64_t)>(&StringConcatHelper::checkOverflow))},
	{"initialCoder", "()J", nullptr, $STATIC, $method(static_cast<int64_t(*)()>(&StringConcatHelper::initialCoder))},
	{"lookupStatic", "(Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/MethodHandle;", nullptr, $STATIC, $method(static_cast<$MethodHandle*(*)($String*,$MethodType*)>(&StringConcatHelper::lookupStatic))},
	{"mix", "(JZ)J", nullptr, $STATIC, $method(static_cast<int64_t(*)(int64_t,bool)>(&StringConcatHelper::mix))},
	{"mix", "(JB)J", nullptr, $STATIC, $method(static_cast<int64_t(*)(int64_t,int8_t)>(&StringConcatHelper::mix))},
	{"mix", "(JC)J", nullptr, $STATIC, $method(static_cast<int64_t(*)(int64_t,char16_t)>(&StringConcatHelper::mix))},
	{"mix", "(JS)J", nullptr, $STATIC, $method(static_cast<int64_t(*)(int64_t,int16_t)>(&StringConcatHelper::mix))},
	{"mix", "(JI)J", nullptr, $STATIC, $method(static_cast<int64_t(*)(int64_t,int32_t)>(&StringConcatHelper::mix))},
	{"mix", "(JJ)J", nullptr, $STATIC, $method(static_cast<int64_t(*)(int64_t,int64_t)>(&StringConcatHelper::mix))},
	{"mix", "(JLjava/lang/String;)J", nullptr, $STATIC, $method(static_cast<int64_t(*)(int64_t,$String*)>(&StringConcatHelper::mix))},
	{"newArray", "(J)[B", nullptr, $STATIC, $method(static_cast<$bytes*(*)(int64_t)>(&StringConcatHelper::newArray)), nullptr, nullptr, _StringConcatHelper_MethodAnnotations_newArray11},
	{"newArrayWithSuffix", "(Ljava/lang/String;J)[B", nullptr, $STATIC, $method(static_cast<$bytes*(*)($String*,int64_t)>(&StringConcatHelper::newArrayWithSuffix)), nullptr, nullptr, _StringConcatHelper_MethodAnnotations_newArrayWithSuffix12},
	{"newString", "([BJ)Ljava/lang/String;", nullptr, $STATIC, $method(static_cast<$String*(*)($bytes*,int64_t)>(&StringConcatHelper::newString))},
	{"newStringOf", "(Ljava/lang/Object;)Ljava/lang/String;", nullptr, $STATIC, $method(static_cast<$String*(*)(Object$*)>(&StringConcatHelper::newStringOf)), nullptr, nullptr, _StringConcatHelper_MethodAnnotations_newStringOf14},
	{"prepend", "(J[BZ)J", nullptr, $PRIVATE | $STATIC, $method(static_cast<int64_t(*)(int64_t,$bytes*,bool)>(&StringConcatHelper::prepend))},
	{"prepend", "(J[BZLjava/lang/String;)J", nullptr, $STATIC, $method(static_cast<int64_t(*)(int64_t,$bytes*,bool,$String*)>(&StringConcatHelper::prepend))},
	{"prepend", "(J[BBLjava/lang/String;)J", nullptr, $STATIC, $method(static_cast<int64_t(*)(int64_t,$bytes*,int8_t,$String*)>(&StringConcatHelper::prepend))},
	{"prepend", "(J[BC)J", nullptr, $PRIVATE | $STATIC, $method(static_cast<int64_t(*)(int64_t,$bytes*,char16_t)>(&StringConcatHelper::prepend))},
	{"prepend", "(J[BCLjava/lang/String;)J", nullptr, $STATIC, $method(static_cast<int64_t(*)(int64_t,$bytes*,char16_t,$String*)>(&StringConcatHelper::prepend))},
	{"prepend", "(J[BSLjava/lang/String;)J", nullptr, $STATIC, $method(static_cast<int64_t(*)(int64_t,$bytes*,int16_t,$String*)>(&StringConcatHelper::prepend))},
	{"prepend", "(J[BI)J", nullptr, $PRIVATE | $STATIC, $method(static_cast<int64_t(*)(int64_t,$bytes*,int32_t)>(&StringConcatHelper::prepend))},
	{"prepend", "(J[BILjava/lang/String;)J", nullptr, $STATIC, $method(static_cast<int64_t(*)(int64_t,$bytes*,int32_t,$String*)>(&StringConcatHelper::prepend))},
	{"prepend", "(J[BJ)J", nullptr, $PRIVATE | $STATIC, $method(static_cast<int64_t(*)(int64_t,$bytes*,int64_t)>(&StringConcatHelper::prepend))},
	{"prepend", "(J[BJLjava/lang/String;)J", nullptr, $STATIC, $method(static_cast<int64_t(*)(int64_t,$bytes*,int64_t,$String*)>(&StringConcatHelper::prepend))},
	{"prepend", "(J[BLjava/lang/String;)J", nullptr, $PRIVATE | $STATIC, $method(static_cast<int64_t(*)(int64_t,$bytes*,$String*)>(&StringConcatHelper::prepend))},
	{"prepend", "(J[BLjava/lang/String;Ljava/lang/String;)J", nullptr, $STATIC, $method(static_cast<int64_t(*)(int64_t,$bytes*,$String*,$String*)>(&StringConcatHelper::prepend))},
	{"simpleConcat", "(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/String;", nullptr, $STATIC, $method(static_cast<$String*(*)(Object$*,Object$*)>(&StringConcatHelper::simpleConcat)), nullptr, nullptr, _StringConcatHelper_MethodAnnotations_simpleConcat27},
	{"stringOf", "(Ljava/lang/Object;)Ljava/lang/String;", nullptr, $STATIC, $method(static_cast<$String*(*)(Object$*)>(&StringConcatHelper::stringOf))},
	{}
};

$ClassInfo _StringConcatHelper_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"java.lang.StringConcatHelper",
	"java.lang.Object",
	nullptr,
	_StringConcatHelper_FieldInfo_,
	_StringConcatHelper_MethodInfo_
};

$Object* allocate$StringConcatHelper($Class* clazz) {
	return $of($alloc(StringConcatHelper));
}

$Unsafe* StringConcatHelper::UNSAFE = nullptr;

void StringConcatHelper::init$() {
}

int64_t StringConcatHelper::checkOverflow(int64_t lengthCoder) {
	$init(StringConcatHelper);
	if ((int32_t)lengthCoder >= 0) {
		return lengthCoder;
	}
	$throwNew($OutOfMemoryError, "Overflow: String length out of range"_s);
}

int64_t StringConcatHelper::mix(int64_t lengthCoder, bool value) {
	$init(StringConcatHelper);
	return checkOverflow(lengthCoder + (value ? 4 : 5));
}

int64_t StringConcatHelper::mix(int64_t lengthCoder, int8_t value) {
	$init(StringConcatHelper);
	return mix(lengthCoder, (int32_t)value);
}

int64_t StringConcatHelper::mix(int64_t lengthCoder, char16_t value) {
	$init(StringConcatHelper);
	int64_t var$0 = checkOverflow(lengthCoder + 1);
	return var$0 | ($StringLatin1::canEncode(value) ? (int64_t)0 : StringConcatHelper::UTF16);
}

int64_t StringConcatHelper::mix(int64_t lengthCoder, int16_t value) {
	$init(StringConcatHelper);
	return mix(lengthCoder, (int32_t)value);
}

int64_t StringConcatHelper::mix(int64_t lengthCoder, int32_t value) {
	$init(StringConcatHelper);
	return checkOverflow(lengthCoder + $Integer::stringSize(value));
}

int64_t StringConcatHelper::mix(int64_t lengthCoder, int64_t value) {
	$init(StringConcatHelper);
	return checkOverflow(lengthCoder + $Long::stringSize(value));
}

int64_t StringConcatHelper::mix(int64_t lengthCoder, $String* value) {
	$init(StringConcatHelper);
	lengthCoder += $nc(value)->length();
	if (value->coder() == $String::UTF16) {
		lengthCoder |= StringConcatHelper::UTF16;
	}
	return checkOverflow(lengthCoder);
}

int64_t StringConcatHelper::prepend(int64_t indexCoder, $bytes* buf, bool value) {
	$init(StringConcatHelper);
	int32_t index = (int32_t)indexCoder;
	if (indexCoder < StringConcatHelper::UTF16) {
		if (value) {
			$nc(buf)->set(--index, (int8_t)u'e');
			buf->set(--index, (int8_t)u'u');
			buf->set(--index, (int8_t)u'r');
			buf->set(--index, (int8_t)u't');
		} else {
			$nc(buf)->set(--index, (int8_t)u'e');
			buf->set(--index, (int8_t)u's');
			buf->set(--index, (int8_t)u'l');
			buf->set(--index, (int8_t)u'a');
			buf->set(--index, (int8_t)u'f');
		}
		return index;
	} else {
		if (value) {
			$StringUTF16::putChar(buf, --index, u'e');
			$StringUTF16::putChar(buf, --index, u'u');
			$StringUTF16::putChar(buf, --index, u'r');
			$StringUTF16::putChar(buf, --index, u't');
		} else {
			$StringUTF16::putChar(buf, --index, u'e');
			$StringUTF16::putChar(buf, --index, u's');
			$StringUTF16::putChar(buf, --index, u'l');
			$StringUTF16::putChar(buf, --index, u'a');
			$StringUTF16::putChar(buf, --index, u'f');
		}
		return index | StringConcatHelper::UTF16;
	}
}

int64_t StringConcatHelper::prepend(int64_t indexCoder, $bytes* buf, bool value, $String* prefix) {
	$init(StringConcatHelper);
	indexCoder = prepend(indexCoder, buf, value);
	if (prefix != nullptr) {
		indexCoder = prepend(indexCoder, buf, prefix);
	}
	return indexCoder;
}

int64_t StringConcatHelper::prepend(int64_t indexCoder, $bytes* buf, int8_t value, $String* prefix) {
	$init(StringConcatHelper);
	indexCoder = prepend(indexCoder, buf, (int32_t)value);
	if (prefix != nullptr) {
		indexCoder = prepend(indexCoder, buf, prefix);
	}
	return indexCoder;
}

int64_t StringConcatHelper::prepend(int64_t indexCoder, $bytes* buf, char16_t value) {
	$init(StringConcatHelper);
	if (indexCoder < StringConcatHelper::UTF16) {
		$nc(buf)->set((int32_t)(--indexCoder), (int8_t)((int32_t)(value & (uint32_t)255)));
	} else {
		$StringUTF16::putChar(buf, (int32_t)(--indexCoder), value);
	}
	return indexCoder;
}

int64_t StringConcatHelper::prepend(int64_t indexCoder, $bytes* buf, char16_t value, $String* prefix) {
	$init(StringConcatHelper);
	indexCoder = prepend(indexCoder, buf, value);
	if (prefix != nullptr) {
		indexCoder = prepend(indexCoder, buf, prefix);
	}
	return indexCoder;
}

int64_t StringConcatHelper::prepend(int64_t indexCoder, $bytes* buf, int16_t value, $String* prefix) {
	$init(StringConcatHelper);
	indexCoder = prepend(indexCoder, buf, (int32_t)value);
	if (prefix != nullptr) {
		indexCoder = prepend(indexCoder, buf, prefix);
	}
	return indexCoder;
}

int64_t StringConcatHelper::prepend(int64_t indexCoder, $bytes* buf, int32_t value) {
	$init(StringConcatHelper);
	if (indexCoder < StringConcatHelper::UTF16) {
		return $Integer::getChars(value, (int32_t)indexCoder, buf);
	} else {
		return $StringUTF16::getChars(value, (int32_t)indexCoder, buf) | StringConcatHelper::UTF16;
	}
}

int64_t StringConcatHelper::prepend(int64_t indexCoder, $bytes* buf, int32_t value, $String* prefix) {
	$init(StringConcatHelper);
	indexCoder = prepend(indexCoder, buf, value);
	if (prefix != nullptr) {
		indexCoder = prepend(indexCoder, buf, prefix);
	}
	return indexCoder;
}

int64_t StringConcatHelper::prepend(int64_t indexCoder, $bytes* buf, int64_t value) {
	$init(StringConcatHelper);
	if (indexCoder < StringConcatHelper::UTF16) {
		return $Long::getChars(value, (int32_t)indexCoder, buf);
	} else {
		return $StringUTF16::getChars(value, (int32_t)indexCoder, buf) | StringConcatHelper::UTF16;
	}
}

int64_t StringConcatHelper::prepend(int64_t indexCoder, $bytes* buf, int64_t value, $String* prefix) {
	$init(StringConcatHelper);
	indexCoder = prepend(indexCoder, buf, value);
	if (prefix != nullptr) {
		indexCoder = prepend(indexCoder, buf, prefix);
	}
	return indexCoder;
}

int64_t StringConcatHelper::prepend(int64_t indexCoder, $bytes* buf, $String* value) {
	$init(StringConcatHelper);
	indexCoder -= $nc(value)->length();
	if (indexCoder < StringConcatHelper::UTF16) {
		value->getBytes(buf, (int32_t)indexCoder, $String::LATIN1);
	} else {
		value->getBytes(buf, (int32_t)indexCoder, $String::UTF16);
	}
	return indexCoder;
}

int64_t StringConcatHelper::prepend(int64_t indexCoder, $bytes* buf, $String* value, $String* prefix) {
	$init(StringConcatHelper);
	indexCoder = prepend(indexCoder, buf, value);
	if (prefix != nullptr) {
		indexCoder = prepend(indexCoder, buf, prefix);
	}
	return indexCoder;
}

$String* StringConcatHelper::newString($bytes* buf, int64_t indexCoder) {
	$init(StringConcatHelper);
	if (indexCoder == StringConcatHelper::LATIN1) {
		return $new($String, buf, $String::LATIN1);
	} else if (indexCoder == StringConcatHelper::UTF16) {
		return $new($String, buf, $String::UTF16);
	} else {
		$throwNew($InternalError, $$str({"Storage is not completely initialized, "_s, $$str((int32_t)indexCoder), " bytes left"_s}));
	}
}

$String* StringConcatHelper::simpleConcat(Object$* first, Object$* second) {
	$init(StringConcatHelper);
	$var($String, s1, stringOf(first));
	$var($String, s2, stringOf(second));
	if ($nc(s1)->isEmpty()) {
		return $new($String, s2);
	}
	if ($nc(s2)->isEmpty()) {
		return $new($String, s1);
	}
	int64_t indexCoder = mix(initialCoder(), s1);
	indexCoder = mix(indexCoder, s2);
	$var($bytes, buf, newArray(indexCoder));
	indexCoder = prepend(indexCoder, buf, s2);
	indexCoder = prepend(indexCoder, buf, s1);
	return newString(buf, indexCoder);
}

$String* StringConcatHelper::newStringOf(Object$* arg) {
	$init(StringConcatHelper);
	return $new($String, $(stringOf(arg)));
}

$String* StringConcatHelper::stringOf(Object$* value) {
	$init(StringConcatHelper);
	$var($String, s, nullptr);
	return (value == nullptr || ($assign(s, $nc($of(value))->toString())) == nullptr) ? "null"_s : s;
}

$bytes* StringConcatHelper::newArrayWithSuffix($String* suffix, int64_t indexCoder) {
	$init(StringConcatHelper);
	$var($bytes, buf, newArray(indexCoder + $nc(suffix)->length()));
	if (indexCoder < StringConcatHelper::UTF16) {
		$nc(suffix)->getBytes(buf, (int32_t)indexCoder, $String::LATIN1);
	} else {
		$nc(suffix)->getBytes(buf, (int32_t)indexCoder, $String::UTF16);
	}
	return buf;
}

$bytes* StringConcatHelper::newArray(int64_t indexCoder) {
	$init(StringConcatHelper);
	int8_t coder = (int8_t)(indexCoder >> 32);
	int32_t index = (int32_t)indexCoder;
	$init($Byte);
	return $cast($bytes, $nc(StringConcatHelper::UNSAFE)->allocateUninitializedArray($Byte::TYPE, $sl(index, coder)));
}

int64_t StringConcatHelper::initialCoder() {
	$init(StringConcatHelper);
	$init($String);
	return $String::COMPACT_STRINGS ? StringConcatHelper::LATIN1 : StringConcatHelper::UTF16;
}

$MethodHandle* StringConcatHelper::lookupStatic($String* name, $MethodType* methodType) {
	$init(StringConcatHelper);
	$beforeCallerSensitive();
	try {
		return $nc($($MethodHandles::lookup()))->findStatic(StringConcatHelper::class$, name, methodType);
	} catch ($NoSuchMethodException&) {
		$var($ReflectiveOperationException, e, $catch());
		$throwNew($AssertionError, $of(e));
	} catch ($IllegalAccessException&) {
		$var($ReflectiveOperationException, e, $catch());
		$throwNew($AssertionError, $of(e));
	}
	$shouldNotReachHere();
}

void clinit$StringConcatHelper($Class* class$) {
	$assignStatic(StringConcatHelper::UNSAFE, $Unsafe::getUnsafe());
}

StringConcatHelper::StringConcatHelper() {
}

$Class* StringConcatHelper::load$($String* name, bool initialize) {
	$loadClass(StringConcatHelper, name, initialize, &_StringConcatHelper_ClassInfo_, clinit$StringConcatHelper, allocate$StringConcatHelper);
	return class$;
}

$Class* StringConcatHelper::class$ = nullptr;

	} // lang
} // java