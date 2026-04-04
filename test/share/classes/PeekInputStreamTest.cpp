#include <PeekInputStreamTest.h>
#include <java/io/ByteArrayInputStream.h>
#include <java/io/InputStream.h>
#include <java/lang/AssertionError.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $ByteArrayInputStream = ::java::io::ByteArrayInputStream;
using $InputStream = ::java::io::InputStream;
using $AssertionError = ::java::lang::AssertionError;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Constructor = ::java::lang::reflect::Constructor;
using $Method = ::java::lang::reflect::Method;

void PeekInputStreamTest::init$() {
}

void PeekInputStreamTest::main($StringArray* args) {
	$useLocalObjectStack();
	$var($InputStream, pin, createPeekInputStream($$new($ByteArrayInputStream, $$new($bytes, {
		1,
		2,
		3,
		4
	}))));
	peek(pin);
	bool var$0 = $nc(pin)->skip(1) != 1;
	if (var$0 || pin->read() != 2) {
		$throwNew($AssertionError);
	}
	$var($InputStream, pin1, createPeekInputStream($$new($ByteArrayInputStream, $$new($bytes, {
		1,
		2,
		3,
		4
	}))));
	bool var$1 = $nc(pin1)->skip(1) != 1;
	if (var$1 || pin1->read() != 2) {
		$throwNew($AssertionError);
	}
	$var($InputStream, pin2, createPeekInputStream($$new($ByteArrayInputStream, $$new($bytes, {
		1,
		2,
		3,
		4
	}))));
	bool var$2 = $nc(pin2)->skip(0) != 0;
	if (var$2 || pin2->read() != 1) {
		$throwNew($AssertionError);
	}
	$var($InputStream, pin3, createPeekInputStream($$new($ByteArrayInputStream, $$new($bytes, {
		1,
		2,
		3,
		4
	}))));
	bool var$3 = $nc(pin3)->skip(2) != 2;
	if (var$3 || pin3->read() != 3) {
		$throwNew($AssertionError);
	}
	$var($InputStream, pin4, createPeekInputStream($$new($ByteArrayInputStream, $$new($bytes, {
		1,
		2,
		3,
		4
	}))));
	bool var$4 = $nc(pin4)->skip(3) != 3;
	if (var$4 || pin4->read() != 4) {
		$throwNew($AssertionError);
	}
	$var($InputStream, pin5, createPeekInputStream($$new($ByteArrayInputStream, $$new($bytes, {
		1,
		2,
		3,
		4
	}))));
	bool var$5 = $nc(pin5)->skip(16) != 4;
	if (var$5 || pin5->read() != -1) {
		$throwNew($AssertionError);
	}
}

$InputStream* PeekInputStreamTest::createPeekInputStream($InputStream* underlying) {
	$useLocalObjectStack();
	$load(PeekInputStreamTest);
	$beforeCallerSensitive();
	$load($InputStream);
	$Class* clazz = $Class::forName("java.io.ObjectInputStream$PeekInputStream"_s)->asSubclass($InputStream::class$);
	$var($Constructor, ctr, $nc(clazz)->getDeclaredConstructor($$new($ClassArray, {$InputStream::class$})));
	$nc(ctr)->setAccessible(true);
	return $cast($InputStream, ctr->newInstance($$new($ObjectArray, {underlying})));
}

void PeekInputStreamTest::peek($InputStream* pin) {
	$useLocalObjectStack();
	$load(PeekInputStreamTest);
	$beforeCallerSensitive();
	$var($Method, p, $nc($of(pin))->getClass()->getDeclaredMethod("peek"_s, $$new($ClassArray, 0)));
	$nc(p)->setAccessible(true);
	p->invoke(pin, $$new($ObjectArray, 0));
}

PeekInputStreamTest::PeekInputStreamTest() {
}

$Class* PeekInputStreamTest::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(PeekInputStreamTest, init$, void)},
		{"createPeekInputStream", "(Ljava/io/InputStream;)Ljava/io/InputStream;", nullptr, $PRIVATE | $STATIC, $staticMethod(PeekInputStreamTest, createPeekInputStream, $InputStream*, $InputStream*), "java.lang.ReflectiveOperationException"},
		{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(PeekInputStreamTest, main, void, $StringArray*), "java.lang.ReflectiveOperationException,java.io.IOException"},
		{"peek", "(Ljava/io/InputStream;)V", nullptr, $PRIVATE | $STATIC, $staticMethod(PeekInputStreamTest, peek, void, $InputStream*), "java.lang.ReflectiveOperationException"},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"PeekInputStreamTest",
		"java.lang.Object",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(PeekInputStreamTest, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(PeekInputStreamTest);
	});
	return class$;
}

$Class* PeekInputStreamTest::class$ = nullptr;