#include <SkipEOL.h>

#include <java/io/ByteArrayInputStream.h>
#include <java/io/InputStream.h>
#include <java/io/LineNumberInputStream.h>
#include <java/io/PrintStream.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/RuntimeException.h>
#include <java/lang/String.h>
#include <java/lang/System.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $ByteArrayInputStream = ::java::io::ByteArrayInputStream;
using $InputStream = ::java::io::InputStream;
using $LineNumberInputStream = ::java::io::LineNumberInputStream;
using $PrintStream = ::java::io::PrintStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;

$MethodInfo _SkipEOL_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(SkipEOL::*)()>(&SkipEOL::init$))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&SkipEOL::main)), "java.lang.Exception"},
	{}
};

$ClassInfo _SkipEOL_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"SkipEOL",
	"java.lang.Object",
	nullptr,
	nullptr,
	_SkipEOL_MethodInfo_
};

$Object* allocate$SkipEOL($Class* clazz) {
	return $of($alloc(SkipEOL));
}

void SkipEOL::init$() {
}

void SkipEOL::main($StringArray* argv) {
	$var($bytes, data, $new($bytes, {
		(int8_t)12,
		(int8_t)13,
		(int8_t)10,
		(int8_t)23,
		(int8_t)11,
		(int8_t)13,
		(int8_t)12,
		(int8_t)10,
		(int8_t)13
	}));
	$var($bytes, expected, $new($bytes, {
		(int8_t)12,
		(int8_t)10,
		(int8_t)23,
		(int8_t)11,
		(int8_t)10,
		(int8_t)12,
		(int8_t)10,
		(int8_t)10
	}));
	$var($LineNumberInputStream, in, $new($LineNumberInputStream, $$new($ByteArrayInputStream, data)));
	int64_t skipped = in->skip(3);
	if ((skipped == 3) && ((in->read()) != 11)) {
		$throwNew($RuntimeException, "LineNumberInputStream.skip - unexpected results!"_s);
	}
	$assign(in, $new($LineNumberInputStream, $$new($ByteArrayInputStream, data)));
	for (int32_t i = 0; i < 8; ++i) {
		if (in->read() != expected->get(i)) {
			$throwNew($RuntimeException, "LineNumberInputStream.read - unexpected results!"_s);
		}
	}
	$init($System);
	$nc($System::err)->println("Test completed successfully"_s);
}

SkipEOL::SkipEOL() {
}

$Class* SkipEOL::load$($String* name, bool initialize) {
	$loadClass(SkipEOL, name, initialize, &_SkipEOL_ClassInfo_, allocate$SkipEOL);
	return class$;
}

$Class* SkipEOL::class$ = nullptr;