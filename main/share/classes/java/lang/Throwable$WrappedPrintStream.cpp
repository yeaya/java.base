#include <java/lang/Throwable$WrappedPrintStream.h>
#include <java/lang/Throwable$PrintStreamOrWriter.h>
#include <jcpp.h>

using $PrintStream = ::java::io::PrintStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Throwable$PrintStreamOrWriter = ::java::lang::Throwable$PrintStreamOrWriter;

namespace java {
	namespace lang {

void Throwable$WrappedPrintStream::init$($PrintStream* printStream) {
	$Throwable$PrintStreamOrWriter::init$();
	$set(this, printStream, printStream);
}

$Object* Throwable$WrappedPrintStream::lock() {
	return $of(this->printStream);
}

void Throwable$WrappedPrintStream::println(Object$* o) {
	$nc(this->printStream)->println(o);
}

Throwable$WrappedPrintStream::Throwable$WrappedPrintStream() {
}

$Class* Throwable$WrappedPrintStream::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"printStream", "Ljava/io/PrintStream;", nullptr, $PRIVATE | $FINAL, $field(Throwable$WrappedPrintStream, printStream)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/io/PrintStream;)V", nullptr, 0, $method(Throwable$WrappedPrintStream, init$, void, $PrintStream*)},
		{"lock", "()Ljava/lang/Object;", nullptr, 0, $virtualMethod(Throwable$WrappedPrintStream, lock, $Object*)},
		{"println", "(Ljava/lang/Object;)V", nullptr, 0, $virtualMethod(Throwable$WrappedPrintStream, println, void, Object$*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.lang.Throwable$WrappedPrintStream", "java.lang.Throwable", "WrappedPrintStream", $PRIVATE | $STATIC},
		{"java.lang.Throwable$PrintStreamOrWriter", "java.lang.Throwable", "PrintStreamOrWriter", $PRIVATE | $STATIC | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"java.lang.Throwable$WrappedPrintStream",
		"java.lang.Throwable$PrintStreamOrWriter",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"java.lang.Throwable"
	};
	$loadClass(Throwable$WrappedPrintStream, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Throwable$WrappedPrintStream);
	});
	return class$;
}

$Class* Throwable$WrappedPrintStream::class$ = nullptr;

	} // lang
} // java