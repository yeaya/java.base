#include <Exceptions4StringBuffer.h>
#include <Exceptions4StringBuffer$1.h>
#include <Exceptions4StringBuffer$2.h>
#include <Exceptions4StringBuffer$3.h>
#include <Exceptions4StringBuffer$4.h>
#include <Exceptions4StringBuffer$5.h>
#include <Exceptions4StringBuffer$6.h>
#include <Exceptions4StringBuffer$7.h>
#include <Exceptions4StringBuffer$8.h>
#include <java/lang/NegativeArraySizeException.h>
#include <java/lang/Runnable.h>
#include <java/lang/StringIndexOutOfBoundsException.h>
#include <jcpp.h>

using $Exceptions4StringBuffer$1 = ::Exceptions4StringBuffer$1;
using $Exceptions4StringBuffer$2 = ::Exceptions4StringBuffer$2;
using $Exceptions4StringBuffer$3 = ::Exceptions4StringBuffer$3;
using $Exceptions4StringBuffer$4 = ::Exceptions4StringBuffer$4;
using $Exceptions4StringBuffer$5 = ::Exceptions4StringBuffer$5;
using $Exceptions4StringBuffer$6 = ::Exceptions4StringBuffer$6;
using $Exceptions4StringBuffer$7 = ::Exceptions4StringBuffer$7;
using $Exceptions4StringBuffer$8 = ::Exceptions4StringBuffer$8;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NegativeArraySizeException = ::java::lang::NegativeArraySizeException;
using $NullPointerException = ::java::lang::NullPointerException;
using $Runnable = ::java::lang::Runnable;
using $RuntimeException = ::java::lang::RuntimeException;
using $StringIndexOutOfBoundsException = ::java::lang::StringIndexOutOfBoundsException;

bool Exceptions4StringBuffer::ok = false;

void Exceptions4StringBuffer::init$() {
}

void Exceptions4StringBuffer::fail($Throwable* ex, $String* s, $Throwable* got) {
	$init(Exceptions4StringBuffer);
	$useLocalObjectStack();
	Exceptions4StringBuffer::ok = false;
	$var($StringBuilder, var$0, $new($StringBuilder));
	var$0->append("expected "_s);
	var$0->append($($nc($of(ex))->getClass()->getName()));
	var$0->append(": "_s);
	var$0->append($(ex->getMessage()));
	var$0->append(" for "_s);
	var$0->append(s);
	var$0->append(" got "_s);
	var$0->append($($nc($of(got))->getClass()->getName()));
	var$0->append(": "_s);
	var$0->append($(got->getMessage()));
	var$0->append(" - FAILED"_s);
	$nc($System::err)->println($$str(var$0));
}

void Exceptions4StringBuffer::pass($String* s) {
	$init(Exceptions4StringBuffer);
	$nc($System::out)->println($$str({s, " -- OK"_s}));
}

void Exceptions4StringBuffer::tryCatch($String* s, $Throwable* ex, $Runnable* thunk) {
	$init(Exceptions4StringBuffer);
	$useLocalObjectStack();
	$var($Throwable, t, nullptr);
	try {
		$nc(thunk)->run();
	} catch ($Throwable& x) {
		if ($nc($of(ex))->getClass()->isAssignableFrom(x->getClass())) {
			$assign(t, x);
		} else {
			x->printStackTrace();
		}
	}
	if ((t == nullptr) && (ex != nullptr)) {
		fail(ex, s, t);
	}
	$var($String, msg, ex == nullptr ? ($String*)nullptr : ex->getMessage());
	if ((msg != nullptr) && !msg->equals($($nc(t)->getMessage()))) {
		fail(ex, s, t);
	} else {
		pass(s);
	}
}

void Exceptions4StringBuffer::main($StringArray* args) {
	$init(Exceptions4StringBuffer);
	$useLocalObjectStack();
	$nc($System::out)->println("StringBuffer()"_s);
	tryCatch("  no args"_s, nullptr, $$new($Exceptions4StringBuffer$1));
	$System::out->println("StringBuffer(int length)"_s);
	tryCatch("  1"_s, nullptr, $$new($Exceptions4StringBuffer$2));
	$var($String, var$0, "  -1"_s);
	$var($Throwable, var$1, $new($NegativeArraySizeException));
	tryCatch(var$0, var$1, $$new($Exceptions4StringBuffer$3));
	$System::out->println("StringBuffer(String str)"_s);
	$var($String, var$2, "  null"_s);
	$var($Throwable, var$3, $new($NullPointerException));
	tryCatch(var$2, var$3, $$new($Exceptions4StringBuffer$4));
	tryCatch("  foo"_s, nullptr, $$new($Exceptions4StringBuffer$5));
	$System::out->println("StringBuffer.replace(int start, int end, String str)"_s);
	$var($String, var$4, "  -1, 2, \" \""_s);
	$var($Throwable, var$5, $new($StringIndexOutOfBoundsException, "start -1, end 2, length 7"_s));
	tryCatch(var$4, var$5, $$new($Exceptions4StringBuffer$6));
	$var($String, var$6, "  7, 8, \" \""_s);
	$var($Throwable, var$7, $new($StringIndexOutOfBoundsException, "start 7, end 6, length 6"_s));
	tryCatch(var$6, var$7, $$new($Exceptions4StringBuffer$7));
	$var($String, var$8, "  2, 1, \" \""_s);
	$var($Throwable, var$9, $new($StringIndexOutOfBoundsException, "start 2, end 1, length 7"_s));
	tryCatch(var$8, var$9, $$new($Exceptions4StringBuffer$8));
	if (!Exceptions4StringBuffer::ok) {
		$throwNew($RuntimeException, "Some tests FAILED"_s);
	} else {
		$System::out->println("All tests PASSED"_s);
	}
}

void Exceptions4StringBuffer::clinit$($Class* clazz) {
	Exceptions4StringBuffer::ok = true;
}

Exceptions4StringBuffer::Exceptions4StringBuffer() {
}

$Class* Exceptions4StringBuffer::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"ok", "Z", nullptr, $PRIVATE | $STATIC, $staticField(Exceptions4StringBuffer, ok)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(Exceptions4StringBuffer, init$, void)},
		{"fail", "(Ljava/lang/Throwable;Ljava/lang/String;Ljava/lang/Throwable;)V", nullptr, $PRIVATE | $STATIC, $staticMethod(Exceptions4StringBuffer, fail, void, $Throwable*, $String*, $Throwable*)},
		{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(Exceptions4StringBuffer, main, void, $StringArray*)},
		{"pass", "(Ljava/lang/String;)V", nullptr, $PRIVATE | $STATIC, $staticMethod(Exceptions4StringBuffer, pass, void, $String*)},
		{"tryCatch", "(Ljava/lang/String;Ljava/lang/Throwable;Ljava/lang/Runnable;)V", nullptr, $PRIVATE | $STATIC, $staticMethod(Exceptions4StringBuffer, tryCatch, void, $String*, $Throwable*, $Runnable*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"Exceptions4StringBuffer$8", nullptr, nullptr, 0},
		{"Exceptions4StringBuffer$7", nullptr, nullptr, 0},
		{"Exceptions4StringBuffer$6", nullptr, nullptr, 0},
		{"Exceptions4StringBuffer$5", nullptr, nullptr, 0},
		{"Exceptions4StringBuffer$4", nullptr, nullptr, 0},
		{"Exceptions4StringBuffer$3", nullptr, nullptr, 0},
		{"Exceptions4StringBuffer$2", nullptr, nullptr, 0},
		{"Exceptions4StringBuffer$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"Exceptions4StringBuffer",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"Exceptions4StringBuffer$8,Exceptions4StringBuffer$7,Exceptions4StringBuffer$6,Exceptions4StringBuffer$5,Exceptions4StringBuffer$4,Exceptions4StringBuffer$3,Exceptions4StringBuffer$2,Exceptions4StringBuffer$1"
	};
	$loadClass(Exceptions4StringBuffer, name, initialize, &classInfo$$, Exceptions4StringBuffer::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(Exceptions4StringBuffer);
	});
	return class$;
}

$Class* Exceptions4StringBuffer::class$ = nullptr;