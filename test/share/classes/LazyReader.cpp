#include <LazyReader.h>
#include <java/io/PipedInputStream.h>
#include <jcpp.h>

using $PipedInputStream = ::java::io::PipedInputStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

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
	$FieldInfo fieldInfos$$[] = {
		{"snk", "Ljava/io/PipedInputStream;", nullptr, $PRIVATE, $field(LazyReader, snk)},
		{"delay", "I", nullptr, $PRIVATE, $field(LazyReader, delay)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/io/PipedInputStream;)V", nullptr, $PUBLIC, $method(LazyReader, init$, void, $PipedInputStream*)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(LazyReader, run, void)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"LazyReader",
		"java.lang.Thread",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(LazyReader, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(LazyReader);
	});
	return class$;
}

$Class* LazyReader::class$ = nullptr;