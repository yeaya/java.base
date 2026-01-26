#include <java/lang/invoke/InvokerBytecodeGenerator$BytecodeGenerationException.h>

#include <java/lang/invoke/InvokerBytecodeGenerator.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;

namespace java {
	namespace lang {
		namespace invoke {

$MethodInfo _InvokerBytecodeGenerator$BytecodeGenerationException_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/Exception;)V", nullptr, 0, $method(InvokerBytecodeGenerator$BytecodeGenerationException, init$, void, $Exception*)},
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

InvokerBytecodeGenerator$BytecodeGenerationException::InvokerBytecodeGenerator$BytecodeGenerationException(const InvokerBytecodeGenerator$BytecodeGenerationException& e) : $RuntimeException(e) {
}

void InvokerBytecodeGenerator$BytecodeGenerationException::throw$() {
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