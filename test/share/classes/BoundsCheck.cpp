#include <BoundsCheck.h>

#include <java/io/ByteArrayOutputStream.h>
#include <java/io/OutputStream.h>
#include <java/io/OutputStreamWriter.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/IndexOutOfBoundsException.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/RuntimeException.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $ByteArrayOutputStream = ::java::io::ByteArrayOutputStream;
using $OutputStream = ::java::io::OutputStream;
using $OutputStreamWriter = ::java::io::OutputStreamWriter;
using $ClassInfo = ::java::lang::ClassInfo;
using $IndexOutOfBoundsException = ::java::lang::IndexOutOfBoundsException;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;

$MethodInfo _BoundsCheck_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(BoundsCheck::*)()>(&BoundsCheck::init$))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&BoundsCheck::main)), "java.lang.Exception"},
	{}
};

$ClassInfo _BoundsCheck_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"BoundsCheck",
	"java.lang.Object",
	nullptr,
	nullptr,
	_BoundsCheck_MethodInfo_
};

$Object* allocate$BoundsCheck($Class* clazz) {
	return $of($alloc(BoundsCheck));
}

void BoundsCheck::init$() {
}

void BoundsCheck::main($StringArray* args) {
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
	} catch ($IndexOutOfBoundsException&) {
		$catch();
	}
	try {
		osw->write(data, 3, -5);
		$throwNew($RuntimeException, "Test failed for negative length"_s);
	} catch ($IndexOutOfBoundsException&) {
		$catch();
	}
	try {
		osw->write(data, 3, 75);
		$throwNew($RuntimeException, "Test failed for len+off > str.length"_s);
	} catch ($IndexOutOfBoundsException&) {
		$catch();
	}
	try {
		osw->write(cdata, -3, 5);
		$throwNew($RuntimeException, "Test failed for negative offset"_s);
	} catch ($IndexOutOfBoundsException&) {
		$catch();
	}
	try {
		osw->write(cdata, 3, -5);
		$throwNew($RuntimeException, "Test failed for negative length"_s);
	} catch ($IndexOutOfBoundsException&) {
		$catch();
	}
	try {
		osw->write(cdata, 3, 75);
		$throwNew($RuntimeException, "Test failed for len+off > str.length"_s);
	} catch ($IndexOutOfBoundsException&) {
		$catch();
	}
}

BoundsCheck::BoundsCheck() {
}

$Class* BoundsCheck::load$($String* name, bool initialize) {
	$loadClass(BoundsCheck, name, initialize, &_BoundsCheck_ClassInfo_, allocate$BoundsCheck);
	return class$;
}

$Class* BoundsCheck::class$ = nullptr;