#include <com/app/Utils.h>
#include <com/app/Utils$1.h>
#include <java/lang/AssertionError.h>
#include <java/lang/ClassLoader.h>
#include <java/lang/Module.h>
#include <java/lang/StackTraceElement.h>
#include <java/lang/StackWalker$StackFrame.h>
#include <java/util/Objects.h>
#include <jcpp.h>

using $StackTraceElementArray = $Array<::java::lang::StackTraceElement>;
using $StackWalker$StackFrameArray = $Array<::java::lang::StackWalker$StackFrame>;
using $Utils$1 = ::com::app::Utils$1;
using $AssertionError = ::java::lang::AssertionError;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Module = ::java::lang::Module;
using $StackTraceElement = ::java::lang::StackTraceElement;
using $StackWalker$StackFrame = ::java::lang::StackWalker$StackFrame;
using $Objects = ::java::util::Objects;

namespace com {
	namespace app {

void Utils::init$() {
}

void Utils::verify($Class* caller, $String* loaderName, $String* methodname, $String* filename) {
	$useLocalObjectStack();
	$var($StackTraceElementArray, stes, $($Thread::currentThread())->getStackTrace());
	$load(Utils);
	$var($StackWalker$StackFrameArray, frames, $new($StackWalker$StackFrameArray, {
		$(makeStackFrame(Utils::class$, "verify"_s, "Utils.java"_s)),
		$(makeStackFrame(caller, methodname, filename))
	}));
	checkFrame("app"_s, frames->get(0), $nc(stes)->get(1));
	checkFrame(loaderName, frames->get(1), stes->get(2));
}

$StackWalker$StackFrame* Utils::makeStackFrame($Class* c, $String* methodname, $String* filename) {
	return $new($Utils$1, c, methodname, filename);
}

void Utils::checkFrame($String* loaderName, $StackWalker$StackFrame* frame, $StackTraceElement* ste) {
	$useLocalObjectStack();
	$load(Utils);
	$beforeCallerSensitive();
	$var($StringBuilder, var$0, $new($StringBuilder));
	var$0->append("checking "_s);
	var$0->append($($nc(ste)->toString()));
	var$0->append(" expected: "_s);
	var$0->append($($nc($of(frame))->toString()));
	$nc($System::err)->println($$str(var$0));
	$Class* c = $nc(frame)->getDeclaringClass();
	$var($Module, module, $nc(c)->getModule());
	$var($String, var$1, $nc(ste)->getModuleName());
	assertEquals(var$1, $($nc(module)->getName()), "module name"_s);
	assertEquals($(ste->getClassLoaderName()), loaderName, "class loader name"_s);
	$var($String, var$2, ste->getClassLoaderName());
	assertEquals(var$2, $($$nc(c->getClassLoader())->getName()), "class loader name"_s);
	$var($String, var$3, ste->getClassName());
	assertEquals(var$3, $(c->getName()), "class name"_s);
	$var($String, var$4, ste->getMethodName());
	assertEquals(var$4, $(frame->getMethodName()), "method name"_s);
	$var($String, var$5, ste->getFileName());
	assertEquals(var$5, $(frame->getFileName()), "file name"_s);
}

void Utils::assertEquals($String* actual, $String* expected, $String* msg) {
	if (!$Objects::equals(actual, expected)) {
		$throwNew($AssertionError, $$of($str({"Actual: "_s, actual, " Excepted: "_s, expected, " mismatched "_s, msg})));
	}
}

Utils::Utils() {
}

$Class* Utils::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(Utils, init$, void)},
		{"assertEquals", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PRIVATE | $STATIC, $staticMethod(Utils, assertEquals, void, $String*, $String*, $String*)},
		{"checkFrame", "(Ljava/lang/String;Ljava/lang/StackWalker$StackFrame;Ljava/lang/StackTraceElement;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(Utils, checkFrame, void, $String*, $StackWalker$StackFrame*, $StackTraceElement*)},
		{"makeStackFrame", "(Ljava/lang/Class;Ljava/lang/String;Ljava/lang/String;)Ljava/lang/StackWalker$StackFrame;", "(Ljava/lang/Class<*>;Ljava/lang/String;Ljava/lang/String;)Ljava/lang/StackWalker$StackFrame;", $PUBLIC | $STATIC, $staticMethod(Utils, makeStackFrame, $StackWalker$StackFrame*, $Class*, $String*, $String*)},
		{"verify", "(Ljava/lang/Class;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V", "(Ljava/lang/Class<*>;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V", $PUBLIC | $STATIC, $staticMethod(Utils, verify, void, $Class*, $String*, $String*, $String*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.app.Utils$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"com.app.Utils",
		"java.lang.Object",
		nullptr,
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"com.app.Utils$1"
	};
	$loadClass(Utils, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Utils);
	});
	return class$;
}

$Class* Utils::class$ = nullptr;

	} // app
} // com