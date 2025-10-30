#include <java/lang/LiveStackFrameInfo$PrimitiveSlot64.h>

#include <java/lang/LiveStackFrame$PrimitiveSlot.h>
#include <java/lang/LiveStackFrameInfo.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $LiveStackFrame$PrimitiveSlot = ::java::lang::LiveStackFrame$PrimitiveSlot;
using $LiveStackFrameInfo = ::java::lang::LiveStackFrameInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace lang {

$FieldInfo _LiveStackFrameInfo$PrimitiveSlot64_FieldInfo_[] = {
	{"value", "J", nullptr, $FINAL, $field(LiveStackFrameInfo$PrimitiveSlot64, value)},
	{}
};

$MethodInfo _LiveStackFrameInfo$PrimitiveSlot64_MethodInfo_[] = {
	{"<init>", "(J)V", nullptr, 0, $method(static_cast<void(LiveStackFrameInfo$PrimitiveSlot64::*)(int64_t)>(&LiveStackFrameInfo$PrimitiveSlot64::init$))},
	{"longValue", "()J", nullptr, $PUBLIC},
	{"size", "()I", nullptr, $PUBLIC},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _LiveStackFrameInfo$PrimitiveSlot64_InnerClassesInfo_[] = {
	{"java.lang.LiveStackFrameInfo$PrimitiveSlot64", "java.lang.LiveStackFrameInfo", "PrimitiveSlot64", $PRIVATE | $STATIC},
	{"java.lang.LiveStackFrame$PrimitiveSlot", "java.lang.LiveStackFrame", "PrimitiveSlot", $PUBLIC | $STATIC | $ABSTRACT},
	{}
};

$ClassInfo _LiveStackFrameInfo$PrimitiveSlot64_ClassInfo_ = {
	$ACC_SUPER,
	"java.lang.LiveStackFrameInfo$PrimitiveSlot64",
	"java.lang.LiveStackFrame$PrimitiveSlot",
	nullptr,
	_LiveStackFrameInfo$PrimitiveSlot64_FieldInfo_,
	_LiveStackFrameInfo$PrimitiveSlot64_MethodInfo_,
	nullptr,
	nullptr,
	_LiveStackFrameInfo$PrimitiveSlot64_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.lang.LiveStackFrameInfo"
};

$Object* allocate$LiveStackFrameInfo$PrimitiveSlot64($Class* clazz) {
	return $of($alloc(LiveStackFrameInfo$PrimitiveSlot64));
}

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
	$loadClass(LiveStackFrameInfo$PrimitiveSlot64, name, initialize, &_LiveStackFrameInfo$PrimitiveSlot64_ClassInfo_, allocate$LiveStackFrameInfo$PrimitiveSlot64);
	return class$;
}

$Class* LiveStackFrameInfo$PrimitiveSlot64::class$ = nullptr;

	} // lang
} // java