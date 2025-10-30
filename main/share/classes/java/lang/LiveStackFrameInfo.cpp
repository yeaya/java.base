#include <java/lang/LiveStackFrameInfo.h>

#include <java/lang/LiveStackFrame$PrimitiveSlot.h>
#include <java/lang/LiveStackFrameInfo$PrimitiveSlot32.h>
#include <java/lang/LiveStackFrameInfo$PrimitiveSlot64.h>
#include <java/lang/StackFrameInfo.h>
#include <java/lang/StackTraceElement.h>
#include <java/lang/StackWalker.h>
#include <java/lang/invoke/MethodType.h>
#include <jcpp.h>

#undef EMPTY_ARRAY
#undef MODE_COMPILED
#undef MODE_INTERPRETED

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $LiveStackFrame = ::java::lang::LiveStackFrame;
using $LiveStackFrame$PrimitiveSlot = ::java::lang::LiveStackFrame$PrimitiveSlot;
using $LiveStackFrameInfo$PrimitiveSlot32 = ::java::lang::LiveStackFrameInfo$PrimitiveSlot32;
using $LiveStackFrameInfo$PrimitiveSlot64 = ::java::lang::LiveStackFrameInfo$PrimitiveSlot64;
using $MethodInfo = ::java::lang::MethodInfo;
using $StackFrameInfo = ::java::lang::StackFrameInfo;
using $StackTraceElement = ::java::lang::StackTraceElement;
using $StackWalker = ::java::lang::StackWalker;
using $MethodType = ::java::lang::invoke::MethodType;

namespace java {
	namespace lang {

$FieldInfo _LiveStackFrameInfo_FieldInfo_[] = {
	{"EMPTY_ARRAY", "[Ljava/lang/Object;", nullptr, $PRIVATE | $STATIC, $staticField(LiveStackFrameInfo, EMPTY_ARRAY)},
	{"MODE_INTERPRETED", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(LiveStackFrameInfo, MODE_INTERPRETED)},
	{"MODE_COMPILED", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(LiveStackFrameInfo, MODE_COMPILED)},
	{"monitors", "[Ljava/lang/Object;", nullptr, $PRIVATE, $field(LiveStackFrameInfo, monitors)},
	{"locals", "[Ljava/lang/Object;", nullptr, $PRIVATE, $field(LiveStackFrameInfo, locals)},
	{"operands", "[Ljava/lang/Object;", nullptr, $PRIVATE, $field(LiveStackFrameInfo, operands)},
	{"mode", "I", nullptr, $PRIVATE, $field(LiveStackFrameInfo, mode)},
	{}
};

$MethodInfo _LiveStackFrameInfo_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*getByteCodeIndex", "()I", nullptr, $PUBLIC},
	{"*getClassName", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"*getDeclaringClass", "()Ljava/lang/Class;", nullptr, $PUBLIC},
	{"*getDescriptor", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"*getFileName", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"*getLineNumber", "()I", nullptr, $PUBLIC},
	{"*getMethodName", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"*getMethodType", "()Ljava/lang/invoke/MethodType;", nullptr, $PUBLIC},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(Ljava/lang/StackWalker;)V", nullptr, 0, $method(static_cast<void(LiveStackFrameInfo::*)($StackWalker*)>(&LiveStackFrameInfo::init$))},
	{"asPrimitive", "(I)Ljava/lang/LiveStackFrame$PrimitiveSlot;", nullptr, $STATIC, $method(static_cast<$LiveStackFrame$PrimitiveSlot*(*)(int32_t)>(&LiveStackFrameInfo::asPrimitive))},
	{"asPrimitive", "(J)Ljava/lang/LiveStackFrame$PrimitiveSlot;", nullptr, $STATIC, $method(static_cast<$LiveStackFrame$PrimitiveSlot*(*)(int64_t)>(&LiveStackFrameInfo::asPrimitive))},
	{"getLocals", "()[Ljava/lang/Object;", nullptr, $PUBLIC},
	{"getMonitors", "()[Ljava/lang/Object;", nullptr, $PUBLIC},
	{"getStack", "()[Ljava/lang/Object;", nullptr, $PUBLIC},
	{"*isNativeMethod", "()Z", nullptr, $PUBLIC},
	{"*toStackTraceElement", "()Ljava/lang/StackTraceElement;", nullptr, $PUBLIC},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _LiveStackFrameInfo_InnerClassesInfo_[] = {
	{"java.lang.LiveStackFrameInfo$PrimitiveSlot64", "java.lang.LiveStackFrameInfo", "PrimitiveSlot64", $PRIVATE | $STATIC},
	{"java.lang.LiveStackFrameInfo$PrimitiveSlot32", "java.lang.LiveStackFrameInfo", "PrimitiveSlot32", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _LiveStackFrameInfo_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"java.lang.LiveStackFrameInfo",
	"java.lang.StackFrameInfo",
	"java.lang.LiveStackFrame",
	_LiveStackFrameInfo_FieldInfo_,
	_LiveStackFrameInfo_MethodInfo_,
	nullptr,
	nullptr,
	_LiveStackFrameInfo_InnerClassesInfo_,
	nullptr,
	nullptr,
	"java.lang.LiveStackFrameInfo$PrimitiveSlot64,java.lang.LiveStackFrameInfo$PrimitiveSlot32"
};

$Object* allocate$LiveStackFrameInfo($Class* clazz) {
	return $of($alloc(LiveStackFrameInfo));
}

$String* LiveStackFrameInfo::getClassName() {
	 return this->$StackFrameInfo::getClassName();
}

$Class* LiveStackFrameInfo::getDeclaringClass() {
	 return this->$StackFrameInfo::getDeclaringClass();
}

$String* LiveStackFrameInfo::getMethodName() {
	 return this->$StackFrameInfo::getMethodName();
}

$MethodType* LiveStackFrameInfo::getMethodType() {
	 return this->$StackFrameInfo::getMethodType();
}

$String* LiveStackFrameInfo::getDescriptor() {
	 return this->$StackFrameInfo::getDescriptor();
}

int32_t LiveStackFrameInfo::getByteCodeIndex() {
	 return this->$StackFrameInfo::getByteCodeIndex();
}

$String* LiveStackFrameInfo::getFileName() {
	 return this->$StackFrameInfo::getFileName();
}

int32_t LiveStackFrameInfo::getLineNumber() {
	 return this->$StackFrameInfo::getLineNumber();
}

bool LiveStackFrameInfo::isNativeMethod() {
	 return this->$StackFrameInfo::isNativeMethod();
}

$StackTraceElement* LiveStackFrameInfo::toStackTraceElement() {
	 return this->$StackFrameInfo::toStackTraceElement();
}

int32_t LiveStackFrameInfo::hashCode() {
	 return this->$StackFrameInfo::hashCode();
}

bool LiveStackFrameInfo::equals(Object$* obj) {
	 return this->$StackFrameInfo::equals(obj);
}

$Object* LiveStackFrameInfo::clone() {
	 return this->$StackFrameInfo::clone();
}

void LiveStackFrameInfo::finalize() {
	this->$StackFrameInfo::finalize();
}

$ObjectArray* LiveStackFrameInfo::EMPTY_ARRAY = nullptr;

void LiveStackFrameInfo::init$($StackWalker* walker) {
	$StackFrameInfo::init$(walker);
	$set(this, monitors, LiveStackFrameInfo::EMPTY_ARRAY);
	$set(this, locals, LiveStackFrameInfo::EMPTY_ARRAY);
	$set(this, operands, LiveStackFrameInfo::EMPTY_ARRAY);
	this->mode = 0;
}

$ObjectArray* LiveStackFrameInfo::getMonitors() {
	return this->monitors;
}

$ObjectArray* LiveStackFrameInfo::getLocals() {
	return this->locals;
}

$ObjectArray* LiveStackFrameInfo::getStack() {
	return this->operands;
}

$String* LiveStackFrameInfo::toString() {
	$useLocalCurrentObjectStackCache();
	$var($StringBuilder, retVal, $new($StringBuilder, $($StackFrameInfo::toString())));
	if (this->mode != 0) {
		retVal->append("("_s);
		if (((int32_t)(this->mode & (uint32_t)LiveStackFrameInfo::MODE_INTERPRETED)) == LiveStackFrameInfo::MODE_INTERPRETED) {
			retVal->append(" interpreted "_s);
		}
		if (((int32_t)(this->mode & (uint32_t)LiveStackFrameInfo::MODE_COMPILED)) == LiveStackFrameInfo::MODE_COMPILED) {
			retVal->append(" compiled "_s);
		}
		retVal->append(")"_s);
	}
	return retVal->toString();
}

$LiveStackFrame$PrimitiveSlot* LiveStackFrameInfo::asPrimitive(int32_t value) {
	$init(LiveStackFrameInfo);
	return $new($LiveStackFrameInfo$PrimitiveSlot32, value);
}

$LiveStackFrame$PrimitiveSlot* LiveStackFrameInfo::asPrimitive(int64_t value) {
	$init(LiveStackFrameInfo);
	return $new($LiveStackFrameInfo$PrimitiveSlot64, value);
}

void clinit$LiveStackFrameInfo($Class* class$) {
	$assignStatic(LiveStackFrameInfo::EMPTY_ARRAY, $new($ObjectArray, 0));
}

LiveStackFrameInfo::LiveStackFrameInfo() {
}

$Class* LiveStackFrameInfo::load$($String* name, bool initialize) {
	$loadClass(LiveStackFrameInfo, name, initialize, &_LiveStackFrameInfo_ClassInfo_, clinit$LiveStackFrameInfo, allocate$LiveStackFrameInfo);
	return class$;
}

$Class* LiveStackFrameInfo::class$ = nullptr;

	} // lang
} // java