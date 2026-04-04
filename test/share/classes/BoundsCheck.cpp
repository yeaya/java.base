#include <BoundsCheck.h>
#include <java/io/ByteArrayOutputStream.h>
#include <java/io/OutputStreamWriter.h>
#include <java/lang/IndexOutOfBoundsException.h>
#include <jcpp.h>

using $ByteArrayOutputStream = ::java::io::ByteArrayOutputStream;
using $OutputStreamWriter = ::java::io::OutputStreamWriter;
using $ClassInfo = ::java::lang::ClassInfo;
using $IndexOutOfBoundsException = ::java::lang::IndexOutOfBoundsException;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;

void BoundsCheck::init$() {
}

void BoundsCheck::main($StringArray* args) {
	$useLocalObjectStack();
	$var($ByteArrayOutputStream, bos, $new($ByteArrayOutputStream));
	$var($OutputStreamWriter, osw, $new($OutputStreamWriter, bos));
	$var($String, data, "Data to be written"_s);
	$var($chars, cdata, $new($chars, {
		u'a',
		u'b',
		u'c',
		u'd',
		u'a',
		u'b',
		u'c',
		u'd'
	}));
	bool caughtException = false;
	try {
		osw->write(data, -3, 5);
		$throwNew($RuntimeException, "Test failed for negative offset"_s);
	} catch ($IndexOutOfBoundsException& e) {
	}
	try {
		osw->write(data, 3, -5);
		$throwNew($RuntimeException, "Test failed for negative length"_s);
	} catch ($IndexOutOfBoundsException& e) {
	}
	try {
		osw->write(data, 3, 75);
		$throwNew($RuntimeException, "Test failed for len+off > str.length"_s);
	} catch ($IndexOutOfBoundsException& e) {
	}
	try {
		osw->write(cdata, -3, 5);
		$throwNew($RuntimeException, "Test failed for negative offset"_s);
	} catch ($IndexOutOfBoundsException& e) {
	}
	try {
		osw->write(cdata, 3, -5);
		$throwNew($RuntimeException, "Test failed for negative length"_s);
	} catch ($IndexOutOfBoundsException& e) {
	}
	try {
		osw->write(cdata, 3, 75);
		$throwNew($RuntimeException, "Test failed for len+off > str.length"_s);
	} catch ($IndexOutOfBoundsException& e) {
	}
}

BoundsCheck::BoundsCheck() {
}

$Class* BoundsCheck::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(BoundsCheck, init$, void)},
		{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(BoundsCheck, main, void, $StringArray*), "java.lang.Exception"},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"BoundsCheck",
		"java.lang.Object",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(BoundsCheck, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(BoundsCheck);
	});
	return class$;
}

$Class* BoundsCheck::class$ = nullptr;