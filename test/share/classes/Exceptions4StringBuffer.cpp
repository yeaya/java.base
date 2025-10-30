#include <Exceptions4StringBuffer.h>

#include <Exceptions4StringBuffer$1.h>
#include <Exceptions4StringBuffer$2.h>
#include <Exceptions4StringBuffer$3.h>
#include <Exceptions4StringBuffer$4.h>
#include <Exceptions4StringBuffer$5.h>
#include <Exceptions4StringBuffer$6.h>
#include <Exceptions4StringBuffer$7.h>
#include <Exceptions4StringBuffer$8.h>
#include <java/lang/IndexOutOfBoundsException.h>
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
using $PrintStream = ::java::io::PrintStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $IndexOutOfBoundsException = ::java::lang::IndexOutOfBoundsException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NegativeArraySizeException = ::java::lang::NegativeArraySizeException;
using $NullPointerException = ::java::lang::NullPointerException;
using $Runnable = ::java::lang::Runnable;
using $RuntimeException = ::java::lang::RuntimeException;
using $StringIndexOutOfBoundsException = ::java::lang::StringIndexOutOfBoundsException;

$FieldInfo _Exceptions4StringBuffer_FieldInfo_[] = {
	{"ok", "Z", nullptr, $PRIVATE | $STATIC, $staticField(Exceptions4StringBuffer, ok)},
	{}
};

$MethodInfo _Exceptions4StringBuffer_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(Exceptions4StringBuffer::*)()>(&Exceptions4StringBuffer::init$))},
	{"fail", "(Ljava/lang/Throwable;Ljava/lang/String;Ljava/lang/Throwable;)V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)($Throwable*,$String*,$Throwable*)>(&Exceptions4StringBuffer::fail))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&Exceptions4StringBuffer::main))},
	{"pass", "(Ljava/lang/String;)V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)($String*)>(&Exceptions4StringBuffer::pass))},
	{"tryCatch", "(Ljava/lang/String;Ljava/lang/Throwable;Ljava/lang/Runnable;)V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)($String*,$Throwable*,$Runnable*)>(&Exceptions4StringBuffer::tryCatch))},
	{}
};

$InnerClassInfo _Exceptions4StringBuffer_InnerClassesInfo_[] = {
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

$ClassInfo _Exceptions4StringBuffer_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"Exceptions4StringBuffer",
	"java.lang.Object",
	nullptr,
	_Exceptions4StringBuffer_FieldInfo_,
	_Exceptions4StringBuffer_MethodInfo_,
	nullptr,
	nullptr,
	_Exceptions4StringBuffer_InnerClassesInfo_,
	nullptr,
	nullptr,
	"Exceptions4StringBuffer$8,Exceptions4StringBuffer$7,Exceptions4StringBuffer$6,Exceptions4StringBuffer$5,Exceptions4StringBuffer$4,Exceptions4StringBuffer$3,Exceptions4StringBuffer$2,Exceptions4StringBuffer$1"
};

$Object* allocate$Exceptions4StringBuffer($Class* clazz) {
	return $of($alloc(Exceptions4StringBuffer));
}

bool Exceptions4StringBuffer::ok = false;

void Exceptions4StringBuffer::init$() {
}

void Exceptions4StringBuffer::fail($Throwable* ex, $String* s, $Throwable* got) {
	$init(Exceptions4StringBuffer);
	$useLocalCurrentObjectStackCache();
	Exceptions4StringBuffer::ok = false;
	$var($String, var$7, $$str({"expected "_s, $($nc($of(ex))->getClass()->getName()), ": "_s}));
	$var($String, var$6, $$concat(var$7, $(ex->getMessage())));
	$var($String, var$5, $$concat(var$6, " for "));
	$var($String, var$4, $$concat(var$5, s));
	$var($String, var$3, $$concat(var$4, " got "));
	$var($String, var$2, $$concat(var$3, $($nc($of(got))->getClass()->getName())));
	$var($String, var$1, $$concat(var$2, ": "));
	$var($String, var$0, $$concat(var$1, $(got->getMessage())));
	$nc($System::err)->println($$concat(var$0, " - FAILED"));
}

void Exceptions4StringBuffer::pass($String* s) {
	$init(Exceptions4StringBuffer);
	$nc($System::out)->println($$str({s, " -- OK"_s}));
}

void Exceptions4StringBuffer::tryCatch($String* s, $Throwable* ex, $Runnable* thunk) {
	$init(Exceptions4StringBuffer);
	$useLocalCurrentObjectStackCache();
	$var($Throwable, t, nullptr);
	try {
		$nc(thunk)->run();
	} catch ($Throwable& x) {
		if ($nc($of(ex))->getClass()->isAssignableFrom($of(x)->getClass())) {
			$assign(t, x);
		} else {
			x->printStackTrace();
		}
	}
	if ((t == nullptr) && (ex != nullptr)) {
		fail(ex, s, t);
	}
	$var($String, msg, ex == nullptr ? ($String*)nullptr : $nc(ex)->getMessage());
	if ((msg != nullptr) && !msg->equals($($nc(t)->getMessage()))) {
		fail(ex, s, t);
	} else {
		pass(s);
	}
}

void Exceptions4StringBuffer::main($StringArray* args) {
	$init(Exceptions4StringBuffer);
	$useLocalCurrentObjectStackCache();
	$nc($System::out)->println("StringBuffer()"_s);
	tryCatch("  no args"_s, nullptr, $$new($Exceptions4StringBuffer$1));
	$nc($System::out)->println("StringBuffer(int length)"_s);
	tryCatch("  1"_s, nullptr, $$new($Exceptions4StringBuffer$2));
	$var($String, var$0, "  -1"_s);
	$var($Throwable, var$1, static_cast<$Throwable*>($new($NegativeArraySizeException)));
	tryCatch(var$0, var$1, $$new($Exceptions4StringBuffer$3));
	$nc($System::out)->println("StringBuffer(String str)"_s);
	$var($String, var$2, "  null"_s);
	$var($Throwable, var$3, static_cast<$Throwable*>($new($NullPointerException)));
	tryCatch(var$2, var$3, $$new($Exceptions4StringBuffer$4));
	tryCatch("  foo"_s, nullptr, $$new($Exceptions4StringBuffer$5));
	$nc($System::out)->println("StringBuffer.replace(int start, int end, String str)"_s);
	$var($String, var$4, "  -1, 2, \" \""_s);
	$var($Throwable, var$5, static_cast<$Throwable*>($new($StringIndexOutOfBoundsException, "start -1, end 2, length 7"_s)));
	tryCatch(var$4, var$5, $$new($Exceptions4StringBuffer$6));
	$var($String, var$6, "  7, 8, \" \""_s);
	$var($Throwable, var$7, static_cast<$Throwable*>($new($StringIndexOutOfBoundsException, "start 7, end 6, length 6"_s)));
	tryCatch(var$6, var$7, $$new($Exceptions4StringBuffer$7));
	$var($String, var$8, "  2, 1, \" \""_s);
	$var($Throwable, var$9, static_cast<$Throwable*>($new($StringIndexOutOfBoundsException, "start 2, end 1, length 7"_s)));
	tryCatch(var$8, var$9, $$new($Exceptions4StringBuffer$8));
	if (!Exceptions4StringBuffer::ok) {
		$throwNew($RuntimeException, "Some tests FAILED"_s);
	} else {
		$nc($System::out)->println("All tests PASSED"_s);
	}
}

void clinit$Exceptions4StringBuffer($Class* class$) {
	Exceptions4StringBuffer::ok = true;
}

Exceptions4StringBuffer::Exceptions4StringBuffer() {
}

$Class* Exceptions4StringBuffer::load$($String* name, bool initialize) {
	$loadClass(Exceptions4StringBuffer, name, initialize, &_Exceptions4StringBuffer_ClassInfo_, clinit$Exceptions4StringBuffer, allocate$Exceptions4StringBuffer);
	return class$;
}

$Class* Exceptions4StringBuffer::class$ = nullptr;