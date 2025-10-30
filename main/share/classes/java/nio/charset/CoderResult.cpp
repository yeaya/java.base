#include <java/nio/charset/CoderResult.h>

#include <java/io/Serializable.h>
#include <java/lang/AssertionError.h>
#include <java/lang/UnsupportedOperationException.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/nio/BufferOverflowException.h>
#include <java/nio/BufferUnderflowException.h>
#include <java/nio/charset/CoderResult$Cache.h>
#include <java/nio/charset/MalformedInputException.h>
#include <java/nio/charset/UnmappableCharacterException.h>
#include <java/util/Map.h>
#include <java/util/function/Function.h>
#include <jcpp.h>

#undef CR_ERROR_MIN
#undef CR_MALFORMED
#undef CR_OVERFLOW
#undef CR_UNDERFLOW
#undef CR_UNMAPPABLE
#undef INSTANCE
#undef OVERFLOW
#undef UNDERFLOW

using $CoderResultArray = $Array<::java::nio::charset::CoderResult>;
using $Serializable = ::java::io::Serializable;
using $AssertionError = ::java::lang::AssertionError;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $UnsupportedOperationException = ::java::lang::UnsupportedOperationException;
using $CallSite = ::java::lang::invoke::CallSite;
using $LambdaMetafactory = ::java::lang::invoke::LambdaMetafactory;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $MethodHandles$Lookup = ::java::lang::invoke::MethodHandles$Lookup;
using $MethodType = ::java::lang::invoke::MethodType;
using $BufferOverflowException = ::java::nio::BufferOverflowException;
using $BufferUnderflowException = ::java::nio::BufferUnderflowException;
using $CoderResult$Cache = ::java::nio::charset::CoderResult$Cache;
using $MalformedInputException = ::java::nio::charset::MalformedInputException;
using $UnmappableCharacterException = ::java::nio::charset::UnmappableCharacterException;
using $Map = ::java::util::Map;
using $Function = ::java::util::function::Function;

namespace java {
	namespace nio {
		namespace charset {

class CoderResult$$Lambda$lambda$malformedForLength$0 : public $Function {
	$class(CoderResult$$Lambda$lambda$malformedForLength$0, $NO_CLASS_INIT, $Function)
public:
	void init$() {
	}
	virtual $Object* apply(Object$* n) override {
		 return $of(CoderResult::lambda$malformedForLength$0($cast($Integer, n)));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<CoderResult$$Lambda$lambda$malformedForLength$0>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo CoderResult$$Lambda$lambda$malformedForLength$0::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(CoderResult$$Lambda$lambda$malformedForLength$0::*)()>(&CoderResult$$Lambda$lambda$malformedForLength$0::init$))},
	{"apply", "(Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo CoderResult$$Lambda$lambda$malformedForLength$0::classInfo$ = {
	$PUBLIC | $FINAL,
	"java.nio.charset.CoderResult$$Lambda$lambda$malformedForLength$0",
	"java.lang.Object",
	"java.util.function.Function",
	nullptr,
	methodInfos
};
$Class* CoderResult$$Lambda$lambda$malformedForLength$0::load$($String* name, bool initialize) {
	$loadClass(CoderResult$$Lambda$lambda$malformedForLength$0, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* CoderResult$$Lambda$lambda$malformedForLength$0::class$ = nullptr;

class CoderResult$$Lambda$lambda$unmappableForLength$1$1 : public $Function {
	$class(CoderResult$$Lambda$lambda$unmappableForLength$1$1, $NO_CLASS_INIT, $Function)
public:
	void init$() {
	}
	virtual $Object* apply(Object$* n) override {
		 return $of(CoderResult::lambda$unmappableForLength$1($cast($Integer, n)));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<CoderResult$$Lambda$lambda$unmappableForLength$1$1>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo CoderResult$$Lambda$lambda$unmappableForLength$1$1::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(CoderResult$$Lambda$lambda$unmappableForLength$1$1::*)()>(&CoderResult$$Lambda$lambda$unmappableForLength$1$1::init$))},
	{"apply", "(Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo CoderResult$$Lambda$lambda$unmappableForLength$1$1::classInfo$ = {
	$PUBLIC | $FINAL,
	"java.nio.charset.CoderResult$$Lambda$lambda$unmappableForLength$1$1",
	"java.lang.Object",
	"java.util.function.Function",
	nullptr,
	methodInfos
};
$Class* CoderResult$$Lambda$lambda$unmappableForLength$1$1::load$($String* name, bool initialize) {
	$loadClass(CoderResult$$Lambda$lambda$unmappableForLength$1$1, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* CoderResult$$Lambda$lambda$unmappableForLength$1$1::class$ = nullptr;

$FieldInfo _CoderResult_FieldInfo_[] = {
	{"$assertionsDisabled", "Z", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(CoderResult, $assertionsDisabled)},
	{"CR_UNDERFLOW", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(CoderResult, CR_UNDERFLOW)},
	{"CR_OVERFLOW", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(CoderResult, CR_OVERFLOW)},
	{"CR_ERROR_MIN", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(CoderResult, CR_ERROR_MIN)},
	{"CR_MALFORMED", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(CoderResult, CR_MALFORMED)},
	{"CR_UNMAPPABLE", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(CoderResult, CR_UNMAPPABLE)},
	{"names", "[Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(CoderResult, names)},
	{"type", "I", nullptr, $PRIVATE | $FINAL, $field(CoderResult, type)},
	{"length", "I", nullptr, $PRIVATE | $FINAL, $field(CoderResult, length$)},
	{"UNDERFLOW", "Ljava/nio/charset/CoderResult;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(CoderResult, UNDERFLOW)},
	{"OVERFLOW", "Ljava/nio/charset/CoderResult;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(CoderResult, OVERFLOW)},
	{"malformed4", "[Ljava/nio/charset/CoderResult;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(CoderResult, malformed4)},
	{"unmappable4", "[Ljava/nio/charset/CoderResult;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(CoderResult, unmappable4)},
	{}
};

$MethodInfo _CoderResult_MethodInfo_[] = {
	{"<init>", "(II)V", nullptr, $PRIVATE, $method(static_cast<void(CoderResult::*)(int32_t,int32_t)>(&CoderResult::init$))},
	{"isError", "()Z", nullptr, $PUBLIC},
	{"isMalformed", "()Z", nullptr, $PUBLIC},
	{"isOverflow", "()Z", nullptr, $PUBLIC},
	{"isUnderflow", "()Z", nullptr, $PUBLIC},
	{"isUnmappable", "()Z", nullptr, $PUBLIC},
	{"lambda$malformedForLength$0", "(Ljava/lang/Integer;)Ljava/nio/charset/CoderResult;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<CoderResult*(*)($Integer*)>(&CoderResult::lambda$malformedForLength$0))},
	{"lambda$unmappableForLength$1", "(Ljava/lang/Integer;)Ljava/nio/charset/CoderResult;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<CoderResult*(*)($Integer*)>(&CoderResult::lambda$unmappableForLength$1))},
	{"length", "()I", nullptr, $PUBLIC},
	{"malformedForLength", "(I)Ljava/nio/charset/CoderResult;", nullptr, $PUBLIC | $STATIC, $method(static_cast<CoderResult*(*)(int32_t)>(&CoderResult::malformedForLength))},
	{"throwException", "()V", nullptr, $PUBLIC, nullptr, "java.nio.charset.CharacterCodingException"},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"unmappableForLength", "(I)Ljava/nio/charset/CoderResult;", nullptr, $PUBLIC | $STATIC, $method(static_cast<CoderResult*(*)(int32_t)>(&CoderResult::unmappableForLength))},
	{}
};

$InnerClassInfo _CoderResult_InnerClassesInfo_[] = {
	{"java.nio.charset.CoderResult$Cache", "java.nio.charset.CoderResult", "Cache", $PRIVATE | $STATIC | $FINAL},
	{}
};

$ClassInfo _CoderResult_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"java.nio.charset.CoderResult",
	"java.lang.Object",
	nullptr,
	_CoderResult_FieldInfo_,
	_CoderResult_MethodInfo_,
	nullptr,
	nullptr,
	_CoderResult_InnerClassesInfo_,
	nullptr,
	nullptr,
	"java.nio.charset.CoderResult$Cache"
};

$Object* allocate$CoderResult($Class* clazz) {
	return $of($alloc(CoderResult));
}

bool CoderResult::$assertionsDisabled = false;
$StringArray* CoderResult::names = nullptr;
CoderResult* CoderResult::UNDERFLOW = nullptr;
CoderResult* CoderResult::OVERFLOW = nullptr;
$CoderResultArray* CoderResult::malformed4 = nullptr;
$CoderResultArray* CoderResult::unmappable4 = nullptr;

void CoderResult::init$(int32_t type, int32_t length) {
	this->type = type;
	this->length$ = length;
}

$String* CoderResult::toString() {
	$useLocalCurrentObjectStackCache();
	$var($String, nm, $nc(CoderResult::names)->get(this->type));
	return isError() ? $str({nm, "["_s, $$str(this->length$), "]"_s}) : nm;
}

bool CoderResult::isUnderflow() {
	return (this->type == CoderResult::CR_UNDERFLOW);
}

bool CoderResult::isOverflow() {
	return (this->type == CoderResult::CR_OVERFLOW);
}

bool CoderResult::isError() {
	return (this->type >= CoderResult::CR_ERROR_MIN);
}

bool CoderResult::isMalformed() {
	return (this->type == CoderResult::CR_MALFORMED);
}

bool CoderResult::isUnmappable() {
	return (this->type == CoderResult::CR_UNMAPPABLE);
}

int32_t CoderResult::length() {
	if (!isError()) {
		$throwNew($UnsupportedOperationException);
	}
	return this->length$;
}

CoderResult* CoderResult::malformedForLength(int32_t length) {
	$init(CoderResult);
	$useLocalCurrentObjectStackCache();
	if (length <= 0) {
		$throwNew($IllegalArgumentException, "Non-positive length"_s);
	}
	if (length <= 4) {
		return $nc(CoderResult::malformed4)->get(length - 1);
	}
	$init($CoderResult$Cache);
	$var($Object, var$0, $of($Integer::valueOf(length)));
	return $cast(CoderResult, $nc($nc($CoderResult$Cache::INSTANCE)->malformed)->computeIfAbsent(var$0, static_cast<$Function*>($$new(CoderResult$$Lambda$lambda$malformedForLength$0))));
}

CoderResult* CoderResult::unmappableForLength(int32_t length) {
	$init(CoderResult);
	$useLocalCurrentObjectStackCache();
	if (length <= 0) {
		$throwNew($IllegalArgumentException, "Non-positive length"_s);
	}
	if (length <= 4) {
		return $nc(CoderResult::unmappable4)->get(length - 1);
	}
	$init($CoderResult$Cache);
	$var($Object, var$0, $of($Integer::valueOf(length)));
	return $cast(CoderResult, $nc($nc($CoderResult$Cache::INSTANCE)->unmappable)->computeIfAbsent(var$0, static_cast<$Function*>($$new(CoderResult$$Lambda$lambda$unmappableForLength$1$1))));
}

void CoderResult::throwException() {
	switch (this->type) {
	case CoderResult::CR_UNDERFLOW:
		{
			$throwNew($BufferUnderflowException);
		}
	case CoderResult::CR_OVERFLOW:
		{
			$throwNew($BufferOverflowException);
		}
	case CoderResult::CR_MALFORMED:
		{
			$throwNew($MalformedInputException, this->length$);
		}
	case CoderResult::CR_UNMAPPABLE:
		{
			$throwNew($UnmappableCharacterException, this->length$);
		}
	default:
		{
			if (!CoderResult::$assertionsDisabled) {
				$throwNew($AssertionError);
			}
		}
	}
}

CoderResult* CoderResult::lambda$unmappableForLength$1($Integer* n) {
	$init(CoderResult);
	return $new(CoderResult, CoderResult::CR_UNMAPPABLE, $nc(n)->intValue());
}

CoderResult* CoderResult::lambda$malformedForLength$0($Integer* n) {
	$init(CoderResult);
	return $new(CoderResult, CoderResult::CR_MALFORMED, $nc(n)->intValue());
}

void clinit$CoderResult($Class* class$) {
	$useLocalCurrentObjectStackCache();
	CoderResult::$assertionsDisabled = !CoderResult::class$->desiredAssertionStatus();
	$assignStatic(CoderResult::names, $new($StringArray, {
		"UNDERFLOW"_s,
		"OVERFLOW"_s,
		"MALFORMED"_s,
		"UNMAPPABLE"_s
	}));
	$assignStatic(CoderResult::UNDERFLOW, $new(CoderResult, CoderResult::CR_UNDERFLOW, 0));
	$assignStatic(CoderResult::OVERFLOW, $new(CoderResult, CoderResult::CR_OVERFLOW, 0));
	$assignStatic(CoderResult::malformed4, $new($CoderResultArray, {
		$$new(CoderResult, CoderResult::CR_MALFORMED, 1),
		$$new(CoderResult, CoderResult::CR_MALFORMED, 2),
		$$new(CoderResult, CoderResult::CR_MALFORMED, 3),
		$$new(CoderResult, CoderResult::CR_MALFORMED, 4)
	}));
	$assignStatic(CoderResult::unmappable4, $new($CoderResultArray, {
		$$new(CoderResult, CoderResult::CR_UNMAPPABLE, 1),
		$$new(CoderResult, CoderResult::CR_UNMAPPABLE, 2),
		$$new(CoderResult, CoderResult::CR_UNMAPPABLE, 3),
		$$new(CoderResult, CoderResult::CR_UNMAPPABLE, 4)
	}));
}

CoderResult::CoderResult() {
}

$Class* CoderResult::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals(CoderResult$$Lambda$lambda$malformedForLength$0::classInfo$.name)) {
			return CoderResult$$Lambda$lambda$malformedForLength$0::load$(name, initialize);
		}
		if (name->equals(CoderResult$$Lambda$lambda$unmappableForLength$1$1::classInfo$.name)) {
			return CoderResult$$Lambda$lambda$unmappableForLength$1$1::load$(name, initialize);
		}
	}
	$loadClass(CoderResult, name, initialize, &_CoderResult_ClassInfo_, clinit$CoderResult, allocate$CoderResult);
	return class$;
}

$Class* CoderResult::class$ = nullptr;

		} // charset
	} // nio
} // java