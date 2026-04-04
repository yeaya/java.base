#include <MarkReset.h>
#include <java/io/CharArrayReader.h>
#include <java/io/IOException.h>
#include <java/io/PushbackReader.h>
#include <jcpp.h>

using $CharArrayReader = ::java::io::CharArrayReader;
using $IOException = ::java::io::IOException;
using $PushbackReader = ::java::io::PushbackReader;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $MethodInfo = ::java::lang::MethodInfo;

void MarkReset::init$() {
}

void MarkReset::main($StringArray* args) {
	$useLocalObjectStack();
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
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(MarkReset, init$, void)},
		{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(MarkReset, main, void, $StringArray*), "java.lang.Exception"},
		{"testMark", "(Ljava/io/PushbackReader;)Z", nullptr, $STATIC, $staticMethod(MarkReset, testMark, bool, $PushbackReader*)},
		{"testReset", "(Ljava/io/PushbackReader;)Z", nullptr, $STATIC, $staticMethod(MarkReset, testReset, bool, $PushbackReader*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"MarkReset",
		"java.lang.Object",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(MarkReset, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(MarkReset);
	});
	return class$;
}

$Class* MarkReset::class$ = nullptr;