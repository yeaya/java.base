#include <IntegerMinValue.h>

#include <java/io/PrintStream.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/IllegalStateException.h>
#include <java/lang/Integer.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/System.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

#undef MIN_VALUE

using $PrintStream = ::java::io::PrintStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $IllegalStateException = ::java::lang::IllegalStateException;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;

$MethodInfo _IntegerMinValue_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(IntegerMinValue::*)()>(&IntegerMinValue::init$))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&IntegerMinValue::main))},
	{"test", "()V", nullptr, $PUBLIC},
	{}
};

$ClassInfo _IntegerMinValue_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"IntegerMinValue",
	"java.lang.Object",
	nullptr,
	nullptr,
	_IntegerMinValue_MethodInfo_
};

$Object* allocate$IntegerMinValue($Class* clazz) {
	return $of($alloc(IntegerMinValue));
}

void IntegerMinValue::init$() {
}

void IntegerMinValue::test() {
	$useLocalCurrentObjectStackCache();
	int32_t i = $Integer::MIN_VALUE;
	$var($String, s, $str({""_s, $$str(i)}));
	if (!"-2147483648"_s->equals(s)) {
		$throwNew($IllegalStateException, $$str({"Failed: "_s, s}));
	}
	$init($System);
	$nc($System::out)->println(s);
}

void IntegerMinValue::main($StringArray* strArr) {
	$var(IntegerMinValue, t, $new(IntegerMinValue));
	for (int32_t i = 0; i < 0x000186A0; ++i) {
		t->test();
	}
}

IntegerMinValue::IntegerMinValue() {
}

$Class* IntegerMinValue::load$($String* name, bool initialize) {
	$loadClass(IntegerMinValue, name, initialize, &_IntegerMinValue_ClassInfo_, allocate$IntegerMinValue);
	return class$;
}

$Class* IntegerMinValue::class$ = nullptr;