#include <CountUpdate.h>

#include <BufferBreaker.h>
#include <java/io/BufferedInputStream.h>
#include <java/io/IOException.h>
#include <java/io/InputStream.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/RuntimeException.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $BufferBreaker = ::BufferBreaker;
using $BufferedInputStream = ::java::io::BufferedInputStream;
using $FilterInputStream = ::java::io::FilterInputStream;
using $IOException = ::java::io::IOException;
using $InputStream = ::java::io::InputStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;

$MethodInfo _CountUpdate_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(CountUpdate::*)()>(&CountUpdate::init$))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&CountUpdate::main)), "java.lang.Exception"},
	{}
};

$ClassInfo _CountUpdate_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"CountUpdate",
	"java.lang.Object",
	nullptr,
	nullptr,
	_CountUpdate_MethodInfo_
};

$Object* allocate$CountUpdate($Class* clazz) {
	return $of($alloc(CountUpdate));
}

void CountUpdate::init$() {
}

void CountUpdate::main($StringArray* args) {
	$var($BufferBreaker, breaker, $new($BufferBreaker));
	$var($BufferedInputStream, in, $new($BufferedInputStream, breaker, 1000));
	$var($bytes, b, $new($bytes, 100));
	int32_t total = 0;
	for (int32_t i = 0; i < 5; ++i) {
		if (i > 0) {
			breaker->breakIt = true;
		}
		try {
			int32_t n = in->read(b);
			total += n;
		} catch ($IOException&) {
			$catch();
		}
	}
	if (total > 7) {
		$throwNew($RuntimeException, "BufferedInputStream did not reset count."_s);
	}
}

CountUpdate::CountUpdate() {
}

$Class* CountUpdate::load$($String* name, bool initialize) {
	$loadClass(CountUpdate, name, initialize, &_CountUpdate_ClassInfo_, allocate$CountUpdate);
	return class$;
}

$Class* CountUpdate::class$ = nullptr;