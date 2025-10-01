#include <ReadToArray.h>

#include <java/io/PipedReader.h>
#include <java/io/PipedWriter.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/Exception.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $PipedReader = ::java::io::PipedReader;
using $PipedWriter = ::java::io::PipedWriter;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $MethodInfo = ::java::lang::MethodInfo;

$MethodInfo _ReadToArray_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(ReadToArray::*)()>(&ReadToArray::init$))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&ReadToArray::main)), "java.lang.Exception"},
	{}
};

$ClassInfo _ReadToArray_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"ReadToArray",
	"java.lang.Object",
	nullptr,
	nullptr,
	_ReadToArray_MethodInfo_
};

$Object* allocate$ReadToArray($Class* clazz) {
	return $of($alloc(ReadToArray));
}

void ReadToArray::init$() {
}

void ReadToArray::main($StringArray* args) {
	$var($PipedWriter, pw, $new($PipedWriter));
	$var($PipedReader, pr, $new($PipedReader, pw));
	$var($chars, cbuf, $new($chars, {
		u'a',
		u'a',
		u'a',
		u'a'
	}));
	pw->write((int32_t)u'b');
	pr->read(cbuf, 2, 1);
	if (cbuf->get(2) != u'b') {
		$throwNew($Exception, "Read character to wrong position: 2nd character should be b"_s);
	}
}

ReadToArray::ReadToArray() {
}

$Class* ReadToArray::load$($String* name, bool initialize) {
	$loadClass(ReadToArray, name, initialize, &_ReadToArray_ClassInfo_, allocate$ReadToArray);
	return class$;
}

$Class* ReadToArray::class$ = nullptr;