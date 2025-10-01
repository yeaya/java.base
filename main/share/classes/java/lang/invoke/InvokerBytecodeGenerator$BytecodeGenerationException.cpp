#include <java/lang/invoke/InvokerBytecodeGenerator$BytecodeGenerationException.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/Exception.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/RuntimeException.h>
#include <java/lang/String.h>
#include <java/lang/Throwable.h>
#include <java/lang/invoke/InvokerBytecodeGenerator.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $InvokerBytecodeGenerator = ::java::lang::invoke::InvokerBytecodeGenerator;

namespace java {
	namespace lang {
		namespace invoke {

$MethodInfo _InvokerBytecodeGenerator$BytecodeGenerationException_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/Exception;)V", nullptr, 0, $method(static_cast<void(InvokerBytecodeGenerator$BytecodeGenerationException::*)($Exception*)>(&InvokerBytecodeGenerator$BytecodeGenerationException::init$))},
	{}
};

$InnerClassInfo _InvokerBytecodeGenerator$BytecodeGenerationException_InnerClassesInfo_[] = {
	{"java.lang.invoke.InvokerBytecodeGenerator$BytecodeGenerationException", "java.lang.invoke.InvokerBytecodeGenerator", "BytecodeGenerationException", $STATIC | $FINAL},
	{}
};

$ClassInfo _InvokerBytecodeGenerator$BytecodeGenerationException_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"java.lang.invoke.InvokerBytecodeGenerator$BytecodeGenerationException",
	"java.lang.RuntimeException",
	nullptr,
	nullptr,
	_InvokerBytecodeGenerator$BytecodeGenerationException_MethodInfo_,
	nullptr,
	nullptr,
	_InvokerBytecodeGenerator$BytecodeGenerationException_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.lang.invoke.InvokerBytecodeGenerator"
};

$Object* allocate$InvokerBytecodeGenerator$BytecodeGenerationException($Class* clazz) {
	return $of($alloc(InvokerBytecodeGenerator$BytecodeGenerationException));
}

void InvokerBytecodeGenerator$BytecodeGenerationException::init$($Exception* cause) {
	$RuntimeException::init$(static_cast<$Throwable*>(cause));
}

InvokerBytecodeGenerator$BytecodeGenerationException::InvokerBytecodeGenerator$BytecodeGenerationException() {
}

InvokerBytecodeGenerator$BytecodeGenerationException::InvokerBytecodeGenerator$BytecodeGenerationException(const InvokerBytecodeGenerator$BytecodeGenerationException& e) {
}

InvokerBytecodeGenerator$BytecodeGenerationException InvokerBytecodeGenerator$BytecodeGenerationException::wrapper$() {
	$pendingException(this);
	return *this;
}

void InvokerBytecodeGenerator$BytecodeGenerationException::throwWrapper$() {
	$pendingException(this);
	throw *this;
}

$Class* InvokerBytecodeGenerator$BytecodeGenerationException::load$($String* name, bool initialize) {
	$loadClass(InvokerBytecodeGenerator$BytecodeGenerationException, name, initialize, &_InvokerBytecodeGenerator$BytecodeGenerationException_ClassInfo_, allocate$InvokerBytecodeGenerator$BytecodeGenerationException);
	return class$;
}

$Class* InvokerBytecodeGenerator$BytecodeGenerationException::class$ = nullptr;

		} // invoke
	} // lang
} // java