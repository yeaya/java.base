#include <MarkReset.h>

#include <java/io/CharArrayReader.h>
#include <java/io/IOException.h>
#include <java/io/PushbackReader.h>
#include <java/io/Reader.h>
#include <jcpp.h>

using $CharArrayReader = ::java::io::CharArrayReader;
using $IOException = ::java::io::IOException;
using $PrintStream = ::java::io::PrintStream;
using $PushbackReader = ::java::io::PushbackReader;
using $Reader = ::java::io::Reader;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $MethodInfo = ::java::lang::MethodInfo;

$MethodInfo _MarkReset_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(MarkReset::*)()>(&MarkReset::init$))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&MarkReset::main)), "java.lang.Exception"},
	{"testMark", "(Ljava/io/PushbackReader;)Z", nullptr, $STATIC, $method(static_cast<bool(*)($PushbackReader*)>(&MarkReset::testMark))},
	{"testReset", "(Ljava/io/PushbackReader;)Z", nullptr, $STATIC, $method(static_cast<bool(*)($PushbackReader*)>(&MarkReset::testReset))},
	{}
};

$ClassInfo _MarkReset_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"MarkReset",
	"java.lang.Object",
	nullptr,
	nullptr,
	_MarkReset_MethodInfo_
};

$Object* allocate$MarkReset($Class* clazz) {
	return $of($alloc(MarkReset));
}

void MarkReset::init$() {
}

void MarkReset::main($StringArray* args) {
	$useLocalCurrentObjectStackCache();
	$var($CharArrayReader, car, $new($CharArrayReader, $$new($chars, 32)));
	$var($PushbackReader, pb, $new($PushbackReader, car));
	bool markResult = testMark(pb);
	bool resetResult = testReset(pb);
	if ((!markResult) || (!resetResult)) {
		$throwNew($Exception, "Mark and reset should not be supported"_s);
	}
}

bool MarkReset::testMark($PushbackReader* pb) {
	try {
		$nc(pb)->mark(100);
	} catch ($IOException& e) {
		return true;
	}
	$nc($System::err)->println("Mark error"_s);
	return false;
}

bool MarkReset::testReset($PushbackReader* pb) {
	try {
		$nc(pb)->reset();
	} catch ($IOException& e) {
		return true;
	}
	$nc($System::err)->println("Reset error"_s);
	return false;
}

MarkReset::MarkReset() {
}

$Class* MarkReset::load$($String* name, bool initialize) {
	$loadClass(MarkReset, name, initialize, &_MarkReset_ClassInfo_, allocate$MarkReset);
	return class$;
}

$Class* MarkReset::class$ = nullptr;