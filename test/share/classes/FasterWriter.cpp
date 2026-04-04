#include <FasterWriter.h>
#include <java/io/IOException.h>
#include <java/io/PipedInputStream.h>
#include <java/io/PipedOutputStream.h>
#include <jcpp.h>

using $IOException = ::java::io::IOException;
using $PipedInputStream = ::java::io::PipedInputStream;
using $PipedOutputStream = ::java::io::PipedOutputStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

$PipedInputStream* FasterWriter::is = nullptr;
$PipedOutputStream* FasterWriter::os = nullptr;

void FasterWriter::init$() {
}

void FasterWriter::run() {
	try {
		$nc(FasterWriter::os)->write(0);
		FasterWriter::os->write(0);
		FasterWriter::os->write(0);
	} catch ($Exception& e) {
		e->printStackTrace();
	}
}

void FasterWriter::main($StringArray* args) {
	$init(FasterWriter);
	$useLocalObjectStack();
	$assignStatic(FasterWriter::is, $new($PipedInputStream));
	$assignStatic(FasterWriter::os, $new($PipedOutputStream, FasterWriter::is));
	$var($Thread, t, $new($Thread, $$new(FasterWriter)));
	t->start();
	t->join();
	try {
		FasterWriter::is->read();
	} catch ($IOException& e) {
		$throwNew($Exception, "Cannot read remaining data in the pipe"_s);
	}
}

FasterWriter::FasterWriter() {
}

$Class* FasterWriter::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"is", "Ljava/io/PipedInputStream;", nullptr, $STATIC, $staticField(FasterWriter, is)},
		{"os", "Ljava/io/PipedOutputStream;", nullptr, $STATIC, $staticField(FasterWriter, os)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(FasterWriter, init$, void)},
		{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(FasterWriter, main, void, $StringArray*), "java.lang.Exception"},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(FasterWriter, run, void)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"FasterWriter",
		"java.lang.Object",
		"java.lang.Runnable",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(FasterWriter, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(FasterWriter);
	});
	return class$;
}

$Class* FasterWriter::class$ = nullptr;