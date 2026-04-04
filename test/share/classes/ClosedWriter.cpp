#include <ClosedWriter.h>
#include <java/io/PipedInputStream.h>
#include <java/io/PipedOutputStream.h>
#include <jcpp.h>

using $PipedInputStream = ::java::io::PipedInputStream;
using $PipedOutputStream = ::java::io::PipedOutputStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

$PipedInputStream* ClosedWriter::is = nullptr;
$PipedOutputStream* ClosedWriter::os = nullptr;

void ClosedWriter::init$() {
}

void ClosedWriter::run() {
	try {
		$nc(ClosedWriter::os)->write(0);
		ClosedWriter::os->write(0);
		ClosedWriter::os->write(0);
		ClosedWriter::os->write(0);
		ClosedWriter::os->write(0);
		ClosedWriter::os->close();
	} catch ($Exception& e) {
		e->printStackTrace();
	}
}

void ClosedWriter::main($StringArray* args) {
	$init(ClosedWriter);
	$useLocalObjectStack();
	$assignStatic(ClosedWriter::is, $new($PipedInputStream));
	$assignStatic(ClosedWriter::os, $new($PipedOutputStream));
	ClosedWriter::is->connect(ClosedWriter::os);
	$var($Thread, t, $new($Thread, $$new(ClosedWriter)));
	t->start();
	while (ClosedWriter::is->read() != -1) {
	}
}

ClosedWriter::ClosedWriter() {
}

$Class* ClosedWriter::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"is", "Ljava/io/PipedInputStream;", nullptr, $STATIC, $staticField(ClosedWriter, is)},
		{"os", "Ljava/io/PipedOutputStream;", nullptr, $STATIC, $staticField(ClosedWriter, os)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(ClosedWriter, init$, void)},
		{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(ClosedWriter, main, void, $StringArray*), "java.lang.Exception"},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(ClosedWriter, run, void)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"ClosedWriter",
		"java.lang.Object",
		"java.lang.Runnable",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(ClosedWriter, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ClosedWriter);
	});
	return class$;
}

$Class* ClosedWriter::class$ = nullptr;