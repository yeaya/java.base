#include <java/lang/LiveStackFrameInfo$PrimitiveSlot64.h>
#include <java/lang/LiveStackFrame$PrimitiveSlot.h>
#include <java/lang/LiveStackFrameInfo.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $LiveStackFrame$PrimitiveSlot = ::java::lang::LiveStackFrame$PrimitiveSlot;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace lang {

void LiveStackFrameInfo$PrimitiveSlot64::init$(int64_t value) {
	$LiveStackFrame$PrimitiveSlot::init$();
	this->value = value;
}

int32_t LiveStackFrameInfo$PrimitiveSlot64::size() {
	return 8;
}

int64_t LiveStackFrameInfo$PrimitiveSlot64::longValue() {
	return this->value;
}

$String* LiveStackFrameInfo$PrimitiveSlot64::toString() {
	return $String::valueOf(this->value);
}

LiveStackFrameInfo$PrimitiveSlot64::LiveStackFrameInfo$PrimitiveSlot64() {
}

$Class* LiveStackFrameInfo$PrimitiveSlot64::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"value", "J", nullptr, $FINAL, $field(LiveStackFrameInfo$PrimitiveSlot64, value)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(J)V", nullptr, 0, $method(LiveStackFrameInfo$PrimitiveSlot64, init$, void, int64_t)},
		{"longValue", "()J", nullptr, $PUBLIC, $virtualMethod(LiveStackFrameInfo$PrimitiveSlot64, longValue, int64_t)},
		{"size", "()I", nullptr, $PUBLIC, $virtualMethod(LiveStackFrameInfo$PrimitiveSlot64, size, int32_t)},
		{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(LiveStackFrameInfo$PrimitiveSlot64, toString, $String*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.lang.LiveStackFrameInfo$PrimitiveSlot64", "java.lang.LiveStackFrameInfo", "PrimitiveSlot64", $PRIVATE | $STATIC},
		{"java.lang.LiveStackFrame$PrimitiveSlot", "java.lang.LiveStackFrame", "PrimitiveSlot", $PUBLIC | $STATIC | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"java.lang.LiveStackFrameInfo$PrimitiveSlot64",
		"java.lang.LiveStackFrame$PrimitiveSlot",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"java.lang.LiveStackFrameInfo"
	};
	$loadClass(LiveStackFrameInfo$PrimitiveSlot64, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(LiveStackFrameInfo$PrimitiveSlot64);
	});
	return class$;
}

$Class* LiveStackFrameInfo$PrimitiveSlot64::class$ = nullptr;

	} // lang
} // java