#include <FasterWriter.h>

#include <java/io/IOException.h>
#include <java/io/PipedInputStream.h>
#include <java/io/PipedOutputStream.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/Exception.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/Runnable.h>
#include <java/lang/String.h>
#include <java/lang/Thread.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
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
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(FasterWriter::*)()>(&FasterWriter::init$))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&FasterWriter::main)), "java.lang.Exception"},
	{"run", "()V", nullptr, $PUBLIC},
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
	} catch ($Exception&) {
		$var($Exception, e, $catch());
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
	} catch ($IOException&) {
		$var($IOException, e, $catch());
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