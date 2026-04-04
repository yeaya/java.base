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

void InvokerBytecodeGenerator$BytecodeGenerationException::init$($Exception* cause) {
	$RuntimeException::init$(cause);
}

InvokerBytecodeGenerator$BytecodeGenerationException::InvokerBytecodeGenerator$BytecodeGenerationException() {
}

InvokerBytecodeGenerator$BytecodeGenerationException::InvokerBytecodeGenerator$BytecodeGenerationException(const InvokerBytecodeGenerator$BytecodeGenerationException& e) : $RuntimeException(e) {
}

void InvokerBytecodeGenerator$BytecodeGenerationException::throw$() {
	throw *this;
}

$Class* InvokerBytecodeGenerator$BytecodeGenerationException::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/Exception;)V", nullptr, 0, $method(InvokerBytecodeGenerator$BytecodeGenerationException, init$, void, $Exception*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.lang.invoke.InvokerBytecodeGenerator$BytecodeGenerationException", "java.lang.invoke.InvokerBytecodeGenerator", "BytecodeGenerationException", $STATIC | $FINAL},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"java.lang.invoke.InvokerBytecodeGenerator$BytecodeGenerationException",
		"java.lang.RuntimeException",
		nullptr,
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"java.lang.invoke.InvokerBytecodeGenerator"
	};
	$loadClass(InvokerBytecodeGenerator$BytecodeGenerationException, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(InvokerBytecodeGenerator$BytecodeGenerationException);
	});
	return class$;
}

$Class* InvokerBytecodeGenerator$BytecodeGenerationException::class$ = nullptr;

		} // invoke
	} // lang
} // java