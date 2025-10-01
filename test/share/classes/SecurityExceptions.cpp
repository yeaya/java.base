#include <SecurityExceptions.h>

#include <java/io/PrintStream.h>
#include <java/lang/Array.h>
#include <java/lang/Boolean.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/NullPointerException.h>
#include <java/lang/RuntimeException.h>
#include <java/lang/SecurityException.h>
#include <java/lang/StackWalker$Option.h>
#include <java/lang/StackWalker.h>
#include <java/lang/String.h>
#include <java/lang/System.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

#undef RETAIN_CLASS_REFERENCE

using $PrintStream = ::java::io::PrintStream;
using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $RuntimeException = ::java::lang::RuntimeException;
using $SecurityException = ::java::lang::SecurityException;
using $StackWalker = ::java::lang::StackWalker;
using $StackWalker$Option = ::java::lang::StackWalker$Option;

$MethodInfo _SecurityExceptions_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(SecurityExceptions::*)()>(&SecurityExceptions::init$))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&SecurityExceptions::main))},
	{}
};

$ClassInfo _SecurityExceptions_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"SecurityExceptions",
	"java.lang.Object",
	nullptr,
	nullptr,
	_SecurityExceptions_MethodInfo_
};

$Object* allocate$SecurityExceptions($Class* clazz) {
	return $of($alloc(SecurityExceptions));
}

void SecurityExceptions::init$() {
}

void SecurityExceptions::main($StringArray* args) {
	bool expectException = $Boolean::parseBoolean($nc(args)->get(0));
	$var($StackWalker, sw, $StackWalker::getInstance());
	try {
		$init($StackWalker$Option);
		$assign(sw, $StackWalker::getInstance($StackWalker$Option::RETAIN_CLASS_REFERENCE));
		if (expectException) {
			$throwNew($RuntimeException, "Expected SecurityException, but none thrown"_s);
		}
	} catch ($SecurityException&) {
		$var($SecurityException, e, $catch());
		if (!expectException) {
			$init($System);
			$nc($System::err)->println("Unexpected security exception:"_s);
			$throw(e);
		}
	}
}

SecurityExceptions::SecurityExceptions() {
}

$Class* SecurityExceptions::load$($String* name, bool initialize) {
	$loadClass(SecurityExceptions, name, initialize, &_SecurityExceptions_ClassInfo_, allocate$SecurityExceptions);
	return class$;
}

$Class* SecurityExceptions::class$ = nullptr;