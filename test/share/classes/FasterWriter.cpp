#include <FasterWriter.h>

#include <java/io/IOException.h>
#include <java/io/PipedInputStream.h>
#include <java/io/PipedOutputStream.h>
#include <java/lang/Runnable.h>
#include <jcpp.h>

using $IOException = ::java::io::IOException;
using $PipedInputStream = ::java::io::PipedInputStream;
using $PipedOutputStream = ::java::io::PipedOutputStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;

$FieldInfo _FasterWriter_FieldInfo_[] = {
	{"is", "Ljava/io/PipedInputStream;", nullptr, $STATIC, $staticField(FasterWriter, is)},
	{"os", "Ljava/io/PipedOutputStream;", nullptr, $STATIC, $staticField(FasterWriter, os)},
	{}
};

$MethodInfo _FasterWriter_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(FasterWriter, init$, void)},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(FasterWriter, main, void, $StringArray*), "java.lang.Exception"},
	{"run", "()V", nullptr, $PUBLIC, $virtualMethod(FasterWriter, run, void)},
	{}
};

$ClassInfo _FasterWriter_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"FasterWriter",
	"java.lang.Object",
	"java.lang.Runnable",
	_FasterWriter_FieldInfo_,
	_FasterWriter_MethodInfo_
};

$Object* allocate$FasterWriter($Class* clazz) {
	return $of($alloc(FasterWriter));
}

$PipedInputStream* FasterWriter::is = nullptr;
$PipedOutputStream* FasterWriter::os = nullptr;

void FasterWriter::init$() {
}

void FasterWriter::run() {
	try {
		$nc(FasterWriter::os)->write(0);
		$nc(FasterWriter::os)->write(0);
		$nc(FasterWriter::os)->write(0);
	} catch ($Exception& e) {
		e->printStackTrace();
	}
}

void FasterWriter::main($StringArray* args) {
	$init(FasterWriter);
	$useLocalCurrentObjectStackCache();
	$assignStatic(FasterWriter::is, $new($PipedInputStream));
	$assignStatic(FasterWriter::os, $new($PipedOutputStream, FasterWriter::is));
	$var($Thread, t, $new($Thread, static_cast<$Runnable*>($$new(FasterWriter))));
	t->start();
	t->join();
	try {
		$nc(FasterWriter::is)->read();
	} catch ($IOException& e) {
		$throwNew($Exception, "Cannot read remaining data in the pipe"_s);
	}
}

FasterWriter::FasterWriter() {
}

$Class* FasterWriter::load$($String* name, bool initialize) {
	$loadClass(FasterWriter, name, initialize, &_FasterWriter_ClassInfo_, allocate$FasterWriter);
	return class$;
}

$Class* FasterWriter::class$ = nullptr;