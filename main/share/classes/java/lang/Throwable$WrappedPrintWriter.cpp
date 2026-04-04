#include <java/lang/Throwable$WrappedPrintWriter.h>
#include <java/io/PrintWriter.h>
#include <java/lang/Throwable$PrintStreamOrWriter.h>
#include <jcpp.h>

using $PrintWriter = ::java::io::PrintWriter;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Throwable$PrintStreamOrWriter = ::java::lang::Throwable$PrintStreamOrWriter;

namespace java {
	namespace lang {

void Throwable$WrappedPrintWriter::init$($PrintWriter* printWriter) {
	$Throwable$PrintStreamOrWriter::init$();
	$set(this, printWriter, printWriter);
}

$Object* Throwable$WrappedPrintWriter::lock() {
	return $of(this->printWriter);
}

void Throwable$WrappedPrintWriter::println(Object$* o) {
	$nc(this->printWriter)->println(o);
}

Throwable$WrappedPrintWriter::Throwable$WrappedPrintWriter() {
}

$Class* Throwable$WrappedPrintWriter::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"printWriter", "Ljava/io/PrintWriter;", nullptr, $PRIVATE | $FINAL, $field(Throwable$WrappedPrintWriter, printWriter)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/io/PrintWriter;)V", nullptr, 0, $method(Throwable$WrappedPrintWriter, init$, void, $PrintWriter*)},
		{"lock", "()Ljava/lang/Object;", nullptr, 0, $virtualMethod(Throwable$WrappedPrintWriter, lock, $Object*)},
		{"println", "(Ljava/lang/Object;)V", nullptr, 0, $virtualMethod(Throwable$WrappedPrintWriter, println, void, Object$*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.lang.Throwable$WrappedPrintWriter", "java.lang.Throwable", "WrappedPrintWriter", $PRIVATE | $STATIC},
		{"java.lang.Throwable$PrintStreamOrWriter", "java.lang.Throwable", "PrintStreamOrWriter", $PRIVATE | $STATIC | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"java.lang.Throwable$WrappedPrintWriter",
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
	$loadClass(Throwable$WrappedPrintWriter, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Throwable$WrappedPrintWriter);
	});
	return class$;
}

$Class* Throwable$WrappedPrintWriter::class$ = nullptr;

	} // lang
} // java