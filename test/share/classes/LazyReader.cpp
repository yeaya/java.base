#include <LazyReader.h>

#include <java/io/PipedInputStream.h>
#include <jcpp.h>

using $PipedInputStream = ::java::io::PipedInputStream;
using $PrintStream = ::java::io::PrintStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

$FieldInfo _LazyReader_FieldInfo_[] = {
	{"snk", "Ljava/io/PipedInputStream;", nullptr, $PRIVATE, $field(LazyReader, snk)},
	{"delay", "I", nullptr, $PRIVATE, $field(LazyReader, delay)},
	{}
};

$MethodInfo _LazyReader_MethodInfo_[] = {
	{"<init>", "(Ljava/io/PipedInputStream;)V", nullptr, $PUBLIC, $method(static_cast<void(LazyReader::*)($PipedInputStream*)>(&LazyReader::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};

$ClassInfo _LazyReader_ClassInfo_ = {
	$ACC_SUPER,
	"LazyReader",
	"java.lang.Thread",
	nullptr,
	_LazyReader_FieldInfo_,
	_LazyReader_MethodInfo_
};

$Object* allocate$LazyReader($Class* clazz) {
	return $of($alloc(LazyReader));
}

void LazyReader::init$($PipedInputStream* snk) {
	$Thread::init$();
	$set(this, snk, snk);
}

void LazyReader::run() {
	try {
		$nc(this->snk)->read();
	} catch ($Exception& e) {
		$nc($System::err)->println("Test failed: unexpected exception"_s);
	}
	return;
}

LazyReader::LazyReader() {
}

$Class* LazyReader::load$($String* name, bool initialize) {
	$loadClass(LazyReader, name, initialize, &_LazyReader_ClassInfo_, allocate$LazyReader);
	return class$;
}

$Class* LazyReader::class$ = nullptr;