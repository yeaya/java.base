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
using $PrintStream = ::java::io::PrintStream;
using $AssertionError = ::java::lang::AssertionError;
using $ClassInfo = ::java::lang::ClassInfo;
using $ClassLoader = ::java::lang::ClassLoader;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Module = ::java::lang::Module;
using $StackTraceElement = ::java::lang::StackTraceElement;
using $StackWalker$StackFrame = ::java::lang::StackWalker$StackFrame;
using $Objects = ::java::util::Objects;

namespace com {
	namespace app {

$MethodInfo _Utils_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(Utils::*)()>(&Utils::init$))},
	{"assertEquals", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)($String*,$String*,$String*)>(&Utils::assertEquals))},
	{"checkFrame", "(Ljava/lang/String;Ljava/lang/StackWalker$StackFrame;Ljava/lang/StackTraceElement;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($String*,$StackWalker$StackFrame*,$StackTraceElement*)>(&Utils::checkFrame))},
	{"makeStackFrame", "(Ljava/lang/Class;Ljava/lang/String;Ljava/lang/String;)Ljava/lang/StackWalker$StackFrame;", "(Ljava/lang/Class<*>;Ljava/lang/String;Ljava/lang/String;)Ljava/lang/StackWalker$StackFrame;", $PUBLIC | $STATIC, $method(static_cast<$StackWalker$StackFrame*(*)($Class*,$String*,$String*)>(&Utils::makeStackFrame))},
	{"verify", "(Ljava/lang/Class;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V", "(Ljava/lang/Class<*>;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V", $PUBLIC | $STATIC, $method(static_cast<void(*)($Class*,$String*,$String*,$String*)>(&Utils::verify))},
	{}
};

$InnerClassInfo _Utils_InnerClassesInfo_[] = {
	{"com.app.Utils$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _Utils_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.app.Utils",
	"java.lang.Object",
	nullptr,
	nullptr,
	_Utils_MethodInfo_,
	nullptr,
	nullptr,
	_Utils_InnerClassesInfo_,
	nullptr,
	nullptr,
	"com.app.Utils$1"
};

$Object* allocate$Utils($Class* clazz) {
	return $of($alloc(Utils));
}

void Utils::init$() {
}

void Utils::verify($Class* caller, $String* loaderName, $String* methodname, $String* filename) {
	$useLocalCurrentObjectStackCache();
	$var($StackTraceElementArray, stes, $($Thread::currentThread())->getStackTrace());
	$load(Utils);
	$var($StackWalker$StackFrameArray, frames, $new($StackWalker$StackFrameArray, {
		$(makeStackFrame(Utils::class$, "verify"_s, "Utils.java"_s)),
		$(makeStackFrame(caller, methodname, filename))
	}));
	checkFrame("app"_s, frames->get(0), $nc(stes)->get(1));
	checkFrame(loaderName, frames->get(1), $nc(stes)->get(2));
}

$StackWalker$StackFrame* Utils::makeStackFrame($Class* c, $String* methodname, $String* filename) {
	return $new($Utils$1, c, methodname, filename);
}

void Utils::checkFrame($String* loaderName, $StackWalker$StackFrame* frame, $StackTraceElement* ste) {
	$load(Utils);
	$useLocalCurrentObjectStackCache();
	$beforeCallerSensitive();
	$var($String, var$0, $$str({"checking "_s, $($nc(ste)->toString()), " expected: "_s}));
	$nc($System::err)->println($$concat(var$0, $($nc($of(frame))->toString())));
	$Class* c = $nc(frame)->getDeclaringClass();
	$var($Module, module, $nc(c)->getModule());
	$var($String, var$1, $nc(ste)->getModuleName());
	assertEquals(var$1, $($nc(module)->getName()), "module name"_s);
	assertEquals($($nc(ste)->getClassLoaderName()), loaderName, "class loader name"_s);
	$var($String, var$2, $nc(ste)->getClassLoaderName());
	assertEquals(var$2, $($nc($(c->getClassLoader()))->getName()), "class loader name"_s);
	$var($String, var$3, $nc(ste)->getClassName());
	assertEquals(var$3, $(c->getName()), "class name"_s);
	$var($String, var$4, $nc(ste)->getMethodName());
	assertEquals(var$4, $(frame->getMethodName()), "method name"_s);
	$var($String, var$5, $nc(ste)->getFileName());
	assertEquals(var$5, $(frame->getFileName()), "file name"_s);
}

void Utils::assertEquals($String* actual, $String* expected, $String* msg) {
	if (!$Objects::equals(actual, expected)) {
		$throwNew($AssertionError, $of($$str({"Actual: "_s, actual, " Excepted: "_s, expected, " mismatched "_s, msg})));
	}
}

Utils::Utils() {
}

$Class* Utils::load$($String* name, bool initialize) {
	$loadClass(Utils, name, initialize, &_Utils_ClassInfo_, allocate$Utils);
	return class$;
}

$Class* Utils::class$ = nullptr;

	} // app
} // com