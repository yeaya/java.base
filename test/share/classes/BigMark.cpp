#include <BigMark.h>

#include <java/io/BufferedReader.h>
#include <java/io/File.h>
#include <java/io/FileReader.h>
#include <java/io/InputStreamReader.h>
#include <java/io/PrintStream.h>
#include <java/io/Reader.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/Integer.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/NullPointerException.h>
#include <java/lang/OutOfMemoryError.h>
#include <java/lang/String.h>
#include <java/lang/System.h>
#include <java/lang/Throwable.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

#undef MAX_VALUE

using $BufferedReader = ::java::io::BufferedReader;
using $File = ::java::io::File;
using $FileReader = ::java::io::FileReader;
using $InputStreamReader = ::java::io::InputStreamReader;
using $PrintStream = ::java::io::PrintStream;
using $Reader = ::java::io::Reader;
using $ClassInfo = ::java::lang::ClassInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $OutOfMemoryError = ::java::lang::OutOfMemoryError;

$MethodInfo _BigMark_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(BigMark::*)()>(&BigMark::init$))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&BigMark::main)), "java.io.IOException"},
	{}
};

$ClassInfo _BigMark_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"BigMark",
	"java.lang.Object",
	nullptr,
	nullptr,
	_BigMark_MethodInfo_
};

$Object* allocate$BigMark($Class* clazz) {
	return $of($alloc(BigMark));
}

void BigMark::init$() {
}

void BigMark::main($StringArray* args) {
	$var($String, line, nullptr);
	int32_t i = 0;
	$var($String, dir, $System::getProperty("test.src"_s, "."_s));
	$var($BufferedReader, br, $new($BufferedReader, $$new($FileReader, $$new($File, dir, "BigMark.java"_s)), 100));
	br->mark(200);
	$assign(line, br->readLine());
	$nc($System::err)->println($$str({$$str(i), ": "_s, line}));
	++i;
	try {
		br->mark($Integer::MAX_VALUE);
		$assign(line, br->readLine());
	} catch ($OutOfMemoryError&) {
		$var($OutOfMemoryError, x, $catch());
		x->printStackTrace();
		$throw(x);
	}
	$nc($System::out)->println("OutOfMemoryError not thrown as expected"_s);
}

BigMark::BigMark() {
}

$Class* BigMark::load$($String* name, bool initialize) {
	$loadClass(BigMark, name, initialize, &_BigMark_ClassInfo_, allocate$BigMark);
	return class$;
}

$Class* BigMark::class$ = nullptr;