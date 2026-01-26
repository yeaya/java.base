#include <java/lang/StackWalker$StackFrame.h>

#include <java/lang/StackTraceElement.h>
#include <java/lang/StackWalker.h>
#include <java/lang/UnsupportedOperationException.h>
#include <java/lang/invoke/MethodType.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $StackTraceElement = ::java::lang::StackTraceElement;
using $UnsupportedOperationException = ::java::lang::UnsupportedOperationException;
using $MethodType = ::java::lang::invoke::MethodType;

namespace java {
	namespace lang {

$MethodInfo _StackWalker$StackFrame_MethodInfo_[] = {
	{"getByteCodeIndex", "()I", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(StackWalker$StackFrame, getByteCodeIndex, int32_t)},
	{"getClassName", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(StackWalker$StackFrame, getClassName, $String*)},
	{"getDeclaringClass", "()Ljava/lang/Class;", "()Ljava/lang/Class<*>;", $PUBLIC | $ABSTRACT, $virtualMethod(StackWalker$StackFrame, getDeclaringClass, $Class*)},
	{"getDescriptor", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(StackWalker$StackFrame, getDescriptor, $String*)},
	{"getFileName", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(StackWalker$StackFrame, getFileName, $String*)},
	{"getLineNumber", "()I", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(StackWalker$StackFrame, getLineNumber, int32_t)},
	{"getMethodName", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(StackWalker$StackFrame, getMethodName, $String*)},
	{"getMethodType", "()Ljava/lang/invoke/MethodType;", nullptr, $PUBLIC, $virtualMethod(StackWalker$StackFrame, getMethodType, $MethodType*)},
	{"isNativeMethod", "()Z", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(StackWalker$StackFrame, isNativeMethod, bool)},
	{"toStackTraceElement", "()Ljava/lang/StackTraceElement;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(StackWalker$StackFrame, toStackTraceElement, $StackTraceElement*)},
	{}
};

$InnerClassInfo _StackWalker$StackFrame_InnerClassesInfo_[] = {
	{"java.lang.StackWalker$StackFrame", "java.lang.StackWalker", "StackFrame", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _StackWalker$StackFrame_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"java.lang.StackWalker$StackFrame",
	nullptr,
	nullptr,
	nullptr,
	_StackWalker$StackFrame_MethodInfo_,
	nullptr,
	nullptr,
	_StackWalker$StackFrame_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.lang.StackWalker"
};

$Object* allocate$StackWalker$StackFrame($Class* clazz) {
	return $of($alloc(StackWalker$StackFrame));
}

$MethodType* StackWalker$StackFrame::getMethodType() {
	$throwNew($UnsupportedOperationException);
	$shouldNotReachHere();
}

$String* StackWalker$StackFrame::getDescriptor() {
	$throwNew($UnsupportedOperationException);
	$shouldNotReachHere();
}

$Class* StackWalker$StackFrame::load$($String* name, bool initialize) {
	$loadClass(StackWalker$StackFrame, name, initialize, &_StackWalker$StackFrame_ClassInfo_, allocate$StackWalker$StackFrame);
	return class$;
}

$Class* StackWalker$StackFrame::class$ = nullptr;

	} // lang
} // java