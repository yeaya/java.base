#include <NullLock.h>
#include <java/io/BufferedReader.h>
#include <java/io/BufferedWriter.h>
#include <java/io/InputStreamReader.h>
#include <java/io/OutputStreamWriter.h>
#include <jcpp.h>

using $BufferedReader = ::java::io::BufferedReader;
using $BufferedWriter = ::java::io::BufferedWriter;
using $InputStreamReader = ::java::io::InputStreamReader;
using $OutputStreamWriter = ::java::io::OutputStreamWriter;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;

void NullLock::init$() {
}

void NullLock::main($StringArray* argv) {
	if (!testBufferedReader()) {
		$throwNew($Exception, "Buffered Reader constructor: Null argument must throw an exception"_s);
	}
	if (!testBufferedWriter()) {
		$throwNew($Exception, "BufferedWriter constructor:  Null arg must throw an exception"_s);
	}
}

bool NullLock::testBufferedReader() {
	$useLocalObjectStack();
	try {
		$var($InputStreamReader, isr, nullptr);
		$var($BufferedReader, br, $new($BufferedReader, isr));
	} catch ($NullPointerException& e) {
		return true;
	}
	return false;
}

bool NullLock::testBufferedWriter() {
	$useLocalObjectStack();
	try {
		$var($OutputStreamWriter, isr, nullptr);
		$var($BufferedWriter, br, $new($BufferedWriter, isr));
	} catch ($NullPointerException& e) {
		return true;
	}
	return false;
}

NullLock::NullLock() {
}

$Class* NullLock::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(NullLock, init$, void)},
		{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(NullLock, main, void, $StringArray*), "java.lang.Exception"},
		{"testBufferedReader", "()Z", nullptr, $STATIC, $staticMethod(NullLock, testBufferedReader, bool)},
		{"testBufferedWriter", "()Z", nullptr, $STATIC, $staticMethod(NullLock, testBufferedWriter, bool)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"NullLock",
		"java.lang.Object",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(NullLock, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(NullLock);
	});
	return class$;
}

$Class* NullLock::class$ = nullptr;