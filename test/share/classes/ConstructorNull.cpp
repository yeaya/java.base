#include <ConstructorNull.h>

#include <java/io/ByteArrayInputStream.h>
#include <java/io/InputStream.h>
#include <java/io/SequenceInputStream.h>
#include <jcpp.h>

using $ByteArrayInputStream = ::java::io::ByteArrayInputStream;
using $InputStream = ::java::io::InputStream;
using $PrintStream = ::java::io::PrintStream;
using $SequenceInputStream = ::java::io::SequenceInputStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $RuntimeException = ::java::lang::RuntimeException;

$MethodInfo _ConstructorNull_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(ConstructorNull, init$, void)},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(ConstructorNull, main, void, $StringArray*), "java.lang.Exception"},
	{}
};

$ClassInfo _ConstructorNull_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"ConstructorNull",
	"java.lang.Object",
	nullptr,
	nullptr,
	_ConstructorNull_MethodInfo_
};

$Object* allocate$ConstructorNull($Class* clazz) {
	return $of($alloc(ConstructorNull));
}

void ConstructorNull::init$() {
}

void ConstructorNull::main($StringArray* argv) {
	$useLocalCurrentObjectStackCache();
	$var($bytes, data, $new($bytes, {
		(int8_t)10,
		(int8_t)20
	}));
	int32_t b1 = 0;
	int32_t b2 = 0;
	$var($ByteArrayInputStream, is, $new($ByteArrayInputStream, data));
	try {
		$var($SequenceInputStream, sis, $new($SequenceInputStream, nullptr, is));
		int32_t b = sis->read();
		$throwNew($RuntimeException, "No exception with null stream"_s);
	} catch ($NullPointerException& e) {
		$nc($System::err)->println("Test passed: NullPointerException thrown"_s);
	}
}

ConstructorNull::ConstructorNull() {
}

$Class* ConstructorNull::load$($String* name, bool initialize) {
	$loadClass(ConstructorNull, name, initialize, &_ConstructorNull_ClassInfo_, allocate$ConstructorNull);
	return class$;
}

$Class* ConstructorNull::class$ = nullptr;