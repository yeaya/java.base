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

$FieldInfo _Throwable$WrappedPrintWriter_FieldInfo_[] = {
	{"printWriter", "Ljava/io/PrintWriter;", nullptr, $PRIVATE | $FINAL, $field(Throwable$WrappedPrintWriter, printWriter)},
	{}
};

$MethodInfo _Throwable$WrappedPrintWriter_MethodInfo_[] = {
	{"<init>", "(Ljava/io/PrintWriter;)V", nullptr, 0, $method(Throwable$WrappedPrintWriter, init$, void, $PrintWriter*)},
	{"lock", "()Ljava/lang/Object;", nullptr, 0, $virtualMethod(Throwable$WrappedPrintWriter, lock, $Object*)},
	{"println", "(Ljava/lang/Object;)V", nullptr, 0, $virtualMethod(Throwable$WrappedPrintWriter, println, void, Object$*)},
	{}
};

$InnerClassInfo _Throwable$WrappedPrintWriter_InnerClassesInfo_[] = {
	{"java.lang.Throwable$WrappedPrintWriter", "java.lang.Throwable", "WrappedPrintWriter", $PRIVATE | $STATIC},
	{"java.lang.Throwable$PrintStreamOrWriter", "java.lang.Throwable", "PrintStreamOrWriter", $PRIVATE | $STATIC | $ABSTRACT},
	{}
};

$ClassInfo _Throwable$WrappedPrintWriter_ClassInfo_ = {
	$ACC_SUPER,
	"java.lang.Throwable$WrappedPrintWriter",
	"java.lang.Throwable$PrintStreamOrWriter",
	nullptr,
	_Throwable$WrappedPrintWriter_FieldInfo_,
	_Throwable$WrappedPrintWriter_MethodInfo_,
	nullptr,
	nullptr,
	_Throwable$WrappedPrintWriter_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.lang.Throwable"
};

$Object* allocate$Throwable$WrappedPrintWriter($Class* clazz) {
	return $of($alloc(Throwable$WrappedPrintWriter));
}

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
	$loadClass(Throwable$WrappedPrintWriter, name, initialize, &_Throwable$WrappedPrintWriter_ClassInfo_, allocate$Throwable$WrappedPrintWriter);
	return class$;
}

$Class* Throwable$WrappedPrintWriter::class$ = nullptr;

	} // lang
} // java