#include <NewChainedExceptions.h>

#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/Exception.h>
#include <java/lang/IllegalArgumentException.h>
#include <java/lang/IllegalStateException.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/RuntimeException.h>
#include <java/lang/String.h>
#include <java/lang/Throwable.h>
#include <java/lang/UnsupportedOperationException.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $IllegalStateException = ::java::lang::IllegalStateException;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $UnsupportedOperationException = ::java::lang::UnsupportedOperationException;

$MethodInfo _NewChainedExceptions_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(NewChainedExceptions::*)()>(&NewChainedExceptions::init$))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&NewChainedExceptions::main))},
	{}
};

$ClassInfo _NewChainedExceptions_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"NewChainedExceptions",
	"java.lang.Object",
	nullptr,
	nullptr,
	_NewChainedExceptions_MethodInfo_
};

$Object* allocate$NewChainedExceptions($Class* clazz) {
	return $of($alloc(NewChainedExceptions));
}

void NewChainedExceptions::init$() {
}

void NewChainedExceptions::main($StringArray* args) {
	$useLocalCurrentObjectStackCache();
	$var($Throwable, interior, $new($Exception));
	$var($String, message, "Good heavens!"_s);
	try {
		$throwNew($IllegalStateException, message, interior);
	} catch ($IllegalStateException&) {
		$var($IllegalStateException, e, $catch());
		bool var$0 = e->getCause() == interior;
		if (!(var$0 && e->getMessage() == message)) {
			$throwNew($RuntimeException, "1"_s);
		}
	}
	try {
		$throwNew($IllegalStateException, interior);
	} catch ($IllegalStateException&) {
		$var($IllegalStateException, e, $catch());
		bool var$1 = e->getCause() == interior;
		if (!(var$1 && $nc($(e->getMessage()))->equals($(interior->toString())))) {
			$throwNew($RuntimeException, "2"_s);
		}
	}
	try {
		$throwNew($IllegalArgumentException, message, interior);
	} catch ($IllegalArgumentException&) {
		$var($IllegalArgumentException, e, $catch());
		bool var$2 = e->getCause() == interior;
		if (!(var$2 && e->getMessage() == message)) {
			$throwNew($RuntimeException, "3"_s);
		}
	}
	try {
		$throwNew($IllegalArgumentException, interior);
	} catch ($IllegalArgumentException&) {
		$var($IllegalArgumentException, e, $catch());
		bool var$3 = e->getCause() == interior;
		if (!(var$3 && $nc($(e->getMessage()))->equals($(interior->toString())))) {
			$throwNew($RuntimeException, "4"_s);
		}
	}
	try {
		$throwNew($UnsupportedOperationException, message, interior);
	} catch ($UnsupportedOperationException&) {
		$var($UnsupportedOperationException, e, $catch());
		bool var$4 = e->getCause() == interior;
		if (!(var$4 && e->getMessage() == message)) {
			$throwNew($RuntimeException, "5"_s);
		}
	}
	try {
		$throwNew($UnsupportedOperationException, interior);
	} catch ($UnsupportedOperationException&) {
		$var($UnsupportedOperationException, e, $catch());
		bool var$5 = e->getCause() == interior;
		if (!(var$5 && $nc($(e->getMessage()))->equals($(interior->toString())))) {
			$throwNew($RuntimeException, "6"_s);
		}
	}
}

NewChainedExceptions::NewChainedExceptions() {
}

$Class* NewChainedExceptions::load$($String* name, bool initialize) {
	$loadClass(NewChainedExceptions, name, initialize, &_NewChainedExceptions_ClassInfo_, allocate$NewChainedExceptions);
	return class$;
}

$Class* NewChainedExceptions::class$ = nullptr;