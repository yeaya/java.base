#include <SecurityExceptions.h>
#include <java/lang/SecurityException.h>
#include <java/lang/StackWalker$Option.h>
#include <java/lang/StackWalker.h>
#include <jcpp.h>

#undef RETAIN_CLASS_REFERENCE

using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $SecurityException = ::java::lang::SecurityException;
using $StackWalker = ::java::lang::StackWalker;
using $StackWalker$Option = ::java::lang::StackWalker$Option;

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
	} catch ($SecurityException& e) {
		if (!expectException) {
			$nc($System::err)->println("Unexpected security exception:"_s);
			$throw(e);
		}
	}
}

SecurityExceptions::SecurityExceptions() {
}

$Class* SecurityExceptions::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(SecurityExceptions, init$, void)},
		{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(SecurityExceptions, main, void, $StringArray*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"SecurityExceptions",
		"java.lang.Object",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(SecurityExceptions, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(SecurityExceptions);
	});
	return class$;
}

$Class* SecurityExceptions::class$ = nullptr;