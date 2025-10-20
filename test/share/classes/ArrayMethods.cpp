#include <ArrayMethods.h>

#include <java/io/PrintStream.h>
#include <java/lang/Array.h>
#include <java/lang/CharSequence.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/Integer.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/NoSuchMethodException.h>
#include <java/lang/RuntimeException.h>
#include <java/lang/String.h>
#include <java/lang/System.h>
#include <java/lang/Throwable.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/Arrays.h>
#include <java/util/List.h>
#include <jcpp.h>

using $IntegerArray = $Array<::java::lang::Integer>;
using $MethodArray = $Array<::java::lang::reflect::Method>;
using $ObjectArray2 = $Array<::java::lang::Object, 2>;
using $IntegerArray3 = $Array<::java::lang::Integer, 3>;
using $ThrowableArray4 = $Array<::java::lang::Throwable, 4>;
using $PrintStream = ::java::io::PrintStream;
using $CharSequence = ::java::lang::CharSequence;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $NoSuchMethodException = ::java::lang::NoSuchMethodException;
using $RuntimeException = ::java::lang::RuntimeException;
using $Method = ::java::lang::reflect::Method;
using $Arrays = ::java::util::Arrays;
using $List = ::java::util::List;

$FieldInfo _ArrayMethods_FieldInfo_[] = {
	{"failed", "I", nullptr, $PUBLIC, $field(ArrayMethods, failed)},
	{}
};

$MethodInfo _ArrayMethods_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(ArrayMethods::*)()>(&ArrayMethods::init$))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&ArrayMethods::main)), "java.lang.Exception"},
	{"testGetDeclaredMethod", "()V", nullptr, $PUBLIC},
	{"testGetDeclaredMethods", "()V", nullptr, $PUBLIC},
	{"testGetInterfaces", "()V", nullptr, $PUBLIC},
	{"testGetMethod", "()V", nullptr, $PUBLIC},
	{"testGetMethods", "()V", nullptr, $PUBLIC},
	{}
};

$ClassInfo _ArrayMethods_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"ArrayMethods",
	"java.lang.Object",
	nullptr,
	_ArrayMethods_FieldInfo_,
	_ArrayMethods_MethodInfo_
};

$Object* allocate$ArrayMethods($Class* clazz) {
	return $of($alloc(ArrayMethods));
}

void ArrayMethods::init$() {
	this->failed = 0;
}

void ArrayMethods::main($StringArray* args) {
	$var(ArrayMethods, m, $new(ArrayMethods));
	m->testGetMethod();
	m->testGetMethods();
	m->testGetDeclaredMethod();
	m->testGetDeclaredMethods();
	m->testGetInterfaces();
	if (m->failed != 0) {
		$throwNew($RuntimeException, "Test failed, check log for details"_s);
	}
}

void ArrayMethods::testGetMethod() {
	$useLocalCurrentObjectStackCache();
	$beforeCallerSensitive();
	try {
		$var($Method, m, $of($$new($StringArray, 0))->getClass()->getMethod("clone"_s, ($ClassArray*)nullptr));
		++this->failed;
		$init($System);
		$nc($System::out)->println("getMethod(\"clone\", null) Should not find clone()"_s);
	} catch ($NoSuchMethodException&) {
		$var($NoSuchMethodException, e, $catch());
	}
}

void ArrayMethods::testGetMethods() {
	$useLocalCurrentObjectStackCache();
	$beforeCallerSensitive();
	$var($MethodArray, m, $of($$new($IntegerArray3, 0, 0, 0))->getClass()->getMethods());
	{
		$var($MethodArray, arr$, m);
		int32_t len$ = $nc(arr$)->length;
		int32_t i$ = 0;
		for (; i$ < len$; ++i$) {
			$var($Method, mm, arr$->get(i$));
			if ($nc($($nc(mm)->getName()))->contentEquals(static_cast<$CharSequence*>("clone"_s))) {
				++this->failed;
				$init($System);
				$nc($System::out)->println("getMethods() Should not find clone()"_s);
			}
		}
	}
}

void ArrayMethods::testGetDeclaredMethod() {
	$useLocalCurrentObjectStackCache();
	$beforeCallerSensitive();
	try {
		$var($Method, m, $of($$new($ObjectArray2, 0, 0))->getClass()->getDeclaredMethod("clone"_s, ($ClassArray*)nullptr));
		++this->failed;
		$init($System);
		$nc($System::out)->println("getDeclaredMethod(\"clone\", null) Should not find clone()"_s);
	} catch ($NoSuchMethodException&) {
		$var($NoSuchMethodException, e, $catch());
	}
}

void ArrayMethods::testGetDeclaredMethods() {
	$useLocalCurrentObjectStackCache();
	$beforeCallerSensitive();
	$var($MethodArray, m, $of($$new($ThrowableArray4, 0, 0, 0, 0))->getClass()->getDeclaredMethods());
	if ($nc(m)->length != 0) {
		++this->failed;
		$init($System);
		$nc($System::out)->println("getDeclaredMethods().length should be 0"_s);
	}
}

void ArrayMethods::testGetInterfaces() {
	$useLocalCurrentObjectStackCache();
	$var($ClassArray, is, $of($$new($IntegerArray, 0))->getClass()->getInterfaces());
	bool thisFailed = false;
	if (is->length != 2) {
		thisFailed = true;
	}
	if (!$nc($($nc(is->get(0))->getCanonicalName()))->equals("java.lang.Cloneable"_s)) {
		thisFailed = true;
	}
	if (!$nc($($nc(is->get(1))->getCanonicalName()))->equals("java.io.Serializable"_s)) {
		thisFailed = true;
	}
	if (thisFailed) {
		++this->failed;
		$init($System);
		$nc($System::out)->println($($of($Arrays::asList(is))));
		$nc($System::out)->println("Should contain exactly Cloneable, Serializable in that order."_s);
	}
}

ArrayMethods::ArrayMethods() {
}

$Class* ArrayMethods::load$($String* name, bool initialize) {
	$loadClass(ArrayMethods, name, initialize, &_ArrayMethods_ClassInfo_, allocate$ArrayMethods);
	return class$;
}

$Class* ArrayMethods::class$ = nullptr;