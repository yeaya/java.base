#include <ArrayLength.h>
#include <java/lang/NoSuchFieldException.h>
#include <java/lang/reflect/Field.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NoSuchFieldException = ::java::lang::NoSuchFieldException;
using $RuntimeException = ::java::lang::RuntimeException;

void ArrayLength::init$() {
}

void ArrayLength::main($StringArray* args) {
	$useLocalObjectStack();
	$load(ArrayLength);
	$beforeCallerSensitive();
	int32_t failed = 0;
	try {
		$$new($StringArray, 0)->getClass()->getField("length"_s);
		++failed;
		$nc($System::out)->println("getField(\"length\") should throw NoSuchFieldException"_s);
	} catch ($NoSuchFieldException& e) {
	}
	try {
		$$new($StringArray, 0)->getClass()->getDeclaredField("length"_s);
		++failed;
		$nc($System::out)->println("getDeclaredField(\"length\") should throw NoSuchFieldException"_s);
	} catch ($NoSuchFieldException& e) {
	}
	if ($nc($($$new($StringArray, 0)->getClass()->getFields()))->length != 0) {
		++failed;
		$nc($System::out)->println("getFields() for an array type should return a zero length array"_s);
	}
	if ($nc($($$new($StringArray, 0)->getClass()->getDeclaredFields()))->length != 0) {
		++failed;
		$nc($System::out)->println("getDeclaredFields() for an array type should return a zero length array"_s);
	}
	if (failed != 0) {
		$throwNew($RuntimeException, "Test failed see log for details"_s);
	}
}

ArrayLength::ArrayLength() {
}

$Class* ArrayLength::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(ArrayLength, init$, void)},
		{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(ArrayLength, main, void, $StringArray*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"ArrayLength",
		"java.lang.Object",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(ArrayLength, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ArrayLength);
	});
	return class$;
}

$Class* ArrayLength::class$ = nullptr;