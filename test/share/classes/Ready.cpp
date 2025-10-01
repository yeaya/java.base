#include <Ready.h>

#include <java/io/IOException.h>
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

using $IOException = ::java::io::IOException;
using $PipedReader = ::java::io::PipedReader;
using $PipedWriter = ::java::io::PipedWriter;
using $Writer = ::java::io::Writer;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $MethodInfo = ::java::lang::MethodInfo;

$MethodInfo _Ready_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(Ready::*)()>(&Ready::init$))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&Ready::main)), "java.lang.Exception"},
	{}
};

$ClassInfo _Ready_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"Ready",
	"java.lang.Object",
	nullptr,
	nullptr,
	_Ready_MethodInfo_
};

$Object* allocate$Ready($Class* clazz) {
	return $of($alloc(Ready));
}

void Ready::init$() {
}

void Ready::main($StringArray* args) {
	$var($PipedWriter, pw, $new($PipedWriter));
	$var($PipedReader, pr, $new($PipedReader, pw));
	pw->write("input characters"_s);
	if (!pr->ready()) {
		$throwNew($Exception, "ready() should return true"_s);
	}
	pr->close();
	try {
		pr->ready();
		$throwNew($Exception, "ready() should throw an exception"_s);
	} catch ($IOException&) {
		$catch();
	}
}

Ready::Ready() {
}

$Class* Ready::load$($String* name, bool initialize) {
	$loadClass(Ready, name, initialize, &_Ready_ClassInfo_, allocate$Ready);
	return class$;
}

$Class* Ready::class$ = nullptr;