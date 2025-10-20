#include <ReadAfterClose.h>

#include <java/io/BufferedInputStream.h>
#include <java/io/ByteArrayInputStream.h>
#include <java/io/FilterInputStream.h>
#include <java/io/IOException.h>
#include <java/io/InputStream.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/Exception.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $BufferedInputStream = ::java::io::BufferedInputStream;
using $ByteArrayInputStream = ::java::io::ByteArrayInputStream;
using $FilterInputStream = ::java::io::FilterInputStream;
using $IOException = ::java::io::IOException;
using $InputStream = ::java::io::InputStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $MethodInfo = ::java::lang::MethodInfo;

$MethodInfo _ReadAfterClose_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(ReadAfterClose::*)()>(&ReadAfterClose::init$))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&ReadAfterClose::main)), "java.lang.Exception"},
	{"testRead", "(Ljava/io/InputStream;)V", nullptr, $STATIC, $method(static_cast<void(*)($InputStream*)>(&ReadAfterClose::testRead)), "java.lang.Exception"},
	{}
};

$ClassInfo _ReadAfterClose_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"ReadAfterClose",
	"java.lang.Object",
	nullptr,
	nullptr,
	_ReadAfterClose_MethodInfo_
};

$Object* allocate$ReadAfterClose($Class* clazz) {
	return $of($alloc(ReadAfterClose));
}

void ReadAfterClose::init$() {
}

void ReadAfterClose::testRead($InputStream* in) {
	$nc(in)->close();
	$var($bytes, buf, $new($bytes, 2));
	try {
		in->read(buf, 0, 1);
		$throwNew($Exception, "Should not allow read on a closed stream"_s);
	} catch ($IOException&) {
		$catch();
	}
	try {
		in->read(buf, 0, 0);
		$throwNew($Exception, "Should not allow read on a closed stream"_s);
	} catch ($IOException&) {
		$catch();
	}
}

void ReadAfterClose::main($StringArray* argv) {
	$useLocalCurrentObjectStackCache();
	$var($BufferedInputStream, bis, $new($BufferedInputStream, $$new($ByteArrayInputStream, $$new($bytes, 32))));
	testRead(bis);
}

ReadAfterClose::ReadAfterClose() {
}

$Class* ReadAfterClose::load$($String* name, bool initialize) {
	$loadClass(ReadAfterClose, name, initialize, &_ReadAfterClose_ClassInfo_, allocate$ReadAfterClose);
	return class$;
}

$Class* ReadAfterClose::class$ = nullptr;