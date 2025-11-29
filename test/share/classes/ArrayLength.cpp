#include <ArrayLength.h>

#include <java/lang/NoSuchFieldException.h>
#include <java/lang/reflect/Field.h>
#include <jcpp.h>

using $PrintStream = ::java::io::PrintStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NoSuchFieldException = ::java::lang::NoSuchFieldException;
using $RuntimeException = ::java::lang::RuntimeException;

$MethodInfo _ArrayLength_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(ArrayLength::*)()>(&ArrayLength::init$))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&ArrayLength::main))},
	{}
};

$ClassInfo _ArrayLength_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"ArrayLength",
	"java.lang.Object",
	nullptr,
	nullptr,
	_ArrayLength_MethodInfo_
};

$Object* allocate$ArrayLength($Class* clazz) {
	return $of($alloc(ArrayLength));
}

void ArrayLength::init$() {
}

void ArrayLength::main($StringArray* args) {
	$load(ArrayLength);
	$useLocalCurrentObjectStackCache();
	$beforeCallerSensitive();
	int32_t failed = 0;
	try {
		$of($$new($StringArray, 0))->getClass()->getField("length"_s);
		++failed;
		$nc($System::out)->println("getField(\"length\") should throw NoSuchFieldException"_s);
	} catch ($NoSuchFieldException& e) {
	}
	try {
		$of($$new($StringArray, 0))->getClass()->getDeclaredField("length"_s);
		++failed;
		$nc($System::out)->println("getDeclaredField(\"length\") should throw NoSuchFieldException"_s);
	} catch ($NoSuchFieldException& e) {
	}
	if ($nc($($of($$new($StringArray, 0))->getClass()->getFields()))->length != 0) {
		++failed;
		$nc($System::out)->println("getFields() for an array type should return a zero length array"_s);
	}
	if ($nc($($of($$new($StringArray, 0))->getClass()->getDeclaredFields()))->length != 0) {
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
	$loadClass(ArrayLength, name, initialize, &_ArrayLength_ClassInfo_, allocate$ArrayLength);
	return class$;
}

$Class* ArrayLength::class$ = nullptr;