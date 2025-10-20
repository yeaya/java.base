#include <ConstructorNull.h>

#include <java/io/ByteArrayInputStream.h>
#include <java/io/InputStream.h>
#include <java/io/PrintStream.h>
#include <java/io/SequenceInputStream.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/NullPointerException.h>
#include <java/lang/RuntimeException.h>
#include <java/lang/String.h>
#include <java/lang/System.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
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
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(ConstructorNull::*)()>(&ConstructorNull::init$))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&ConstructorNull::main)), "java.lang.Exception"},
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
	} catch ($NullPointerException&) {
		$var($NullPointerException, e, $catch());
		$init($System);
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