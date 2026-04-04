#include <NewChainedExceptions.h>
#include <java/lang/IllegalStateException.h>
#include <java/lang/UnsupportedOperationException.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $IllegalStateException = ::java::lang::IllegalStateException;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $UnsupportedOperationException = ::java::lang::UnsupportedOperationException;

void NewChainedExceptions::init$() {
}

void NewChainedExceptions::main($StringArray* args) {
	$useLocalObjectStack();
	$var($Throwable, interior, $new($Exception));
	$var($String, message, "Good heavens!"_s);
	try {
		$throwNew($IllegalStateException, message, interior);
	} catch ($IllegalStateException& e) {
		bool var$0 = e->getCause() == interior;
		if (!(var$0 && e->getMessage() == message)) {
			$throwNew($RuntimeException, "1"_s);
		}
	}
	try {
		$throwNew($IllegalStateException, interior);
	} catch ($IllegalStateException& e) {
		bool var$1 = e->getCause() == interior;
		if (!(var$1 && $$nc(e->getMessage())->equals($(interior->toString())))) {
			$throwNew($RuntimeException, "2"_s);
		}
	}
	try {
		$throwNew($IllegalArgumentException, message, interior);
	} catch ($IllegalArgumentException& e) {
		bool var$2 = e->getCause() == interior;
		if (!(var$2 && e->getMessage() == message)) {
			$throwNew($RuntimeException, "3"_s);
		}
	}
	try {
		$throwNew($IllegalArgumentException, interior);
	} catch ($IllegalArgumentException& e) {
		bool var$3 = e->getCause() == interior;
		if (!(var$3 && $$nc(e->getMessage())->equals($(interior->toString())))) {
			$throwNew($RuntimeException, "4"_s);
		}
	}
	try {
		$throwNew($UnsupportedOperationException, message, interior);
	} catch ($UnsupportedOperationException& e) {
		bool var$4 = e->getCause() == interior;
		if (!(var$4 && e->getMessage() == message)) {
			$throwNew($RuntimeException, "5"_s);
		}
	}
	try {
		$throwNew($UnsupportedOperationException, interior);
	} catch ($UnsupportedOperationException& e) {
		bool var$5 = e->getCause() == interior;
		if (!(var$5 && $$nc(e->getMessage())->equals($(interior->toString())))) {
			$throwNew($RuntimeException, "6"_s);
		}
	}
}

NewChainedExceptions::NewChainedExceptions() {
}

$Class* NewChainedExceptions::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(NewChainedExceptions, init$, void)},
		{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(NewChainedExceptions, main, void, $StringArray*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"NewChainedExceptions",
		"java.lang.Object",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(NewChainedExceptions, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(NewChainedExceptions);
	});
	return class$;
}

$Class* NewChainedExceptions::class$ = nullptr;