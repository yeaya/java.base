#include <java/lang/StackFrameInfo.h>

#include <java/lang/StackTraceElement.h>
#include <java/lang/StackWalker.h>
#include <java/lang/UnsupportedOperationException.h>
#include <java/lang/invoke/MethodType.h>
#include <jdk/internal/access/JavaLangInvokeAccess.h>
#include <jdk/internal/access/SharedSecrets.h>
#include <jcpp.h>

#undef JLIA

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $StackTraceElement = ::java::lang::StackTraceElement;
using $StackWalker = ::java::lang::StackWalker;
using $StackWalker$StackFrame = ::java::lang::StackWalker$StackFrame;
using $UnsupportedOperationException = ::java::lang::UnsupportedOperationException;
using $MethodType = ::java::lang::invoke::MethodType;
using $JavaLangInvokeAccess = ::jdk::internal::access::JavaLangInvokeAccess;
using $SharedSecrets = ::jdk::internal::access::SharedSecrets;

namespace java {
	namespace lang {

$FieldInfo _StackFrameInfo_FieldInfo_[] = {
	{"JLIA", "Ljdk/internal/access/JavaLangInvokeAccess;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(StackFrameInfo, JLIA)},
	{"retainClassRef", "Z", nullptr, $PRIVATE | $FINAL, $field(StackFrameInfo, retainClassRef)},
	{"memberName", "Ljava/lang/Object;", nullptr, $PRIVATE | $FINAL, $field(StackFrameInfo, memberName)},
	{"bci", "I", nullptr, $PRIVATE, $field(StackFrameInfo, bci)},
	{"ste", "Ljava/lang/StackTraceElement;", nullptr, $PRIVATE | $VOLATILE, $field(StackFrameInfo, ste)},
	{}
};

$MethodInfo _StackFrameInfo_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/StackWalker;)V", nullptr, 0, $method(static_cast<void(StackFrameInfo::*)($StackWalker*)>(&StackFrameInfo::init$))},
	{"declaringClass", "()Ljava/lang/Class;", "()Ljava/lang/Class<*>;", 0},
	{"ensureRetainClassRefEnabled", "()V", nullptr, $PRIVATE, $method(static_cast<void(StackFrameInfo::*)()>(&StackFrameInfo::ensureRetainClassRefEnabled))},
	{"getByteCodeIndex", "()I", nullptr, $PUBLIC},
	{"getClassName", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"getDeclaringClass", "()Ljava/lang/Class;", "()Ljava/lang/Class<*>;", $PUBLIC},
	{"getDescriptor", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"getFileName", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"getLineNumber", "()I", nullptr, $PUBLIC},
	{"getMethodName", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"getMethodType", "()Ljava/lang/invoke/MethodType;", nullptr, $PUBLIC},
	{"isNativeMethod", "()Z", nullptr, $PUBLIC},
	{"toStackTraceElement", "()Ljava/lang/StackTraceElement;", nullptr, $PUBLIC},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _StackFrameInfo_InnerClassesInfo_[] = {
	{"java.lang.StackWalker$StackFrame", "java.lang.StackWalker", "StackFrame", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _StackFrameInfo_ClassInfo_ = {
	$ACC_SUPER,
	"java.lang.StackFrameInfo",
	"java.lang.Object",
	"java.lang.StackWalker$StackFrame",
	_StackFrameInfo_FieldInfo_,
	_StackFrameInfo_MethodInfo_,
	nullptr,
	nullptr,
	_StackFrameInfo_InnerClassesInfo_
};

$Object* allocate$StackFrameInfo($Class* clazz) {
	return $of($alloc(StackFrameInfo));
}

$JavaLangInvokeAccess* StackFrameInfo::JLIA = nullptr;

void StackFrameInfo::init$($StackWalker* walker) {
	this->retainClassRef = $nc(walker)->retainClassRef;
	$set(this, memberName, $nc(StackFrameInfo::JLIA)->newMemberName());
}

$Class* StackFrameInfo::declaringClass() {
	return $nc(StackFrameInfo::JLIA)->getDeclaringClass(this->memberName);
}

$String* StackFrameInfo::getClassName() {
	return $nc(declaringClass())->getName();
}

$Class* StackFrameInfo::getDeclaringClass() {
	ensureRetainClassRefEnabled();
	return declaringClass();
}

$String* StackFrameInfo::getMethodName() {
	return $nc(StackFrameInfo::JLIA)->getName(this->memberName);
}

$MethodType* StackFrameInfo::getMethodType() {
	ensureRetainClassRefEnabled();
	return $nc(StackFrameInfo::JLIA)->getMethodType(this->memberName);
}

$String* StackFrameInfo::getDescriptor() {
	return $nc(StackFrameInfo::JLIA)->getMethodDescriptor(this->memberName);
}

int32_t StackFrameInfo::getByteCodeIndex() {
	if (isNativeMethod()) {
		return -1;
	}
	return this->bci;
}

$String* StackFrameInfo::getFileName() {
	return $nc($(toStackTraceElement()))->getFileName();
}

int32_t StackFrameInfo::getLineNumber() {
	if (isNativeMethod()) {
		return -2;
	}
	return $nc($(toStackTraceElement()))->getLineNumber();
}

bool StackFrameInfo::isNativeMethod() {
	return $nc(StackFrameInfo::JLIA)->isNative(this->memberName);
}

$String* StackFrameInfo::toString() {
	return $nc($(toStackTraceElement()))->toString();
}

$StackTraceElement* StackFrameInfo::toStackTraceElement() {
	$var($StackTraceElement, s, this->ste);
	if (s == nullptr) {
		$synchronized(this) {
			$assign(s, this->ste);
			if (s == nullptr) {
				$set(this, ste, ($assign(s, $StackTraceElement::of(this))));
			}
		}
	}
	return s;
}

void StackFrameInfo::ensureRetainClassRefEnabled() {
	if (!this->retainClassRef) {
		$throwNew($UnsupportedOperationException, "No access to RETAIN_CLASS_REFERENCE"_s);
	}
}

void clinit$StackFrameInfo($Class* class$) {
	$assignStatic(StackFrameInfo::JLIA, $SharedSecrets::getJavaLangInvokeAccess());
}

StackFrameInfo::StackFrameInfo() {
}

$Class* StackFrameInfo::load$($String* name, bool initialize) {
	$loadClass(StackFrameInfo, name, initialize, &_StackFrameInfo_ClassInfo_, clinit$StackFrameInfo, allocate$StackFrameInfo);
	return class$;
}

$Class* StackFrameInfo::class$ = nullptr;

	} // lang
} // java