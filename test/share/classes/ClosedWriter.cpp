#include <ClosedWriter.h>

#include <java/io/PipedInputStream.h>
#include <java/io/PipedOutputStream.h>
#include <java/lang/Runnable.h>
#include <jcpp.h>

using $PipedInputStream = ::java::io::PipedInputStream;
using $PipedOutputStream = ::java::io::PipedOutputStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;

$FieldInfo _ClosedWriter_FieldInfo_[] = {
	{"is", "Ljava/io/PipedInputStream;", nullptr, $STATIC, $staticField(ClosedWriter, is)},
	{"os", "Ljava/io/PipedOutputStream;", nullptr, $STATIC, $staticField(ClosedWriter, os)},
	{}
};

$MethodInfo _ClosedWriter_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(ClosedWriter::*)()>(&ClosedWriter::init$))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&ClosedWriter::main)), "java.lang.Exception"},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};

$ClassInfo _ClosedWriter_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"ClosedWriter",
	"java.lang.Object",
	"java.lang.Runnable",
	_ClosedWriter_FieldInfo_,
	_ClosedWriter_MethodInfo_
};

$Object* allocate$ClosedWriter($Class* clazz) {
	return $of($alloc(ClosedWriter));
}

$PipedInputStream* ClosedWriter::is = nullptr;
$PipedOutputStream* ClosedWriter::os = nullptr;

void ClosedWriter::init$() {
}

void ClosedWriter::run() {
	try {
		$nc(ClosedWriter::os)->write(0);
		$nc(ClosedWriter::os)->write(0);
		$nc(ClosedWriter::os)->write(0);
		$nc(ClosedWriter::os)->write(0);
		$nc(ClosedWriter::os)->write(0);
		$nc(ClosedWriter::os)->close();
	} catch ($Exception& e) {
		e->printStackTrace();
	}
}

void ClosedWriter::main($StringArray* args) {
	$init(ClosedWriter);
	$useLocalCurrentObjectStackCache();
	$assignStatic(ClosedWriter::is, $new($PipedInputStream));
	$assignStatic(ClosedWriter::os, $new($PipedOutputStream));
	$nc(ClosedWriter::is)->connect(ClosedWriter::os);
	$var($Thread, t, $new($Thread, static_cast<$Runnable*>($$new(ClosedWriter))));
	t->start();
	while ($nc(ClosedWriter::is)->read() != -1) {
	}
}

ClosedWriter::ClosedWriter() {
}

$Class* ClosedWriter::load$($String* name, bool initialize) {
	$loadClass(ClosedWriter, name, initialize, &_ClosedWriter_ClassInfo_, allocate$ClosedWriter);
	return class$;
}

$Class* ClosedWriter::class$ = nullptr;