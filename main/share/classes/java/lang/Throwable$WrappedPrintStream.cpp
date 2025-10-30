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

$FieldInfo _Throwable$WrappedPrintStream_FieldInfo_[] = {
	{"printStream", "Ljava/io/PrintStream;", nullptr, $PRIVATE | $FINAL, $field(Throwable$WrappedPrintStream, printStream)},
	{}
};

$MethodInfo _Throwable$WrappedPrintStream_MethodInfo_[] = {
	{"<init>", "(Ljava/io/PrintStream;)V", nullptr, 0, $method(static_cast<void(Throwable$WrappedPrintStream::*)($PrintStream*)>(&Throwable$WrappedPrintStream::init$))},
	{"lock", "()Ljava/lang/Object;", nullptr, 0},
	{"println", "(Ljava/lang/Object;)V", nullptr, 0},
	{}
};

$InnerClassInfo _Throwable$WrappedPrintStream_InnerClassesInfo_[] = {
	{"java.lang.Throwable$WrappedPrintStream", "java.lang.Throwable", "WrappedPrintStream", $PRIVATE | $STATIC},
	{"java.lang.Throwable$PrintStreamOrWriter", "java.lang.Throwable", "PrintStreamOrWriter", $PRIVATE | $STATIC | $ABSTRACT},
	{}
};

$ClassInfo _Throwable$WrappedPrintStream_ClassInfo_ = {
	$ACC_SUPER,
	"java.lang.Throwable$WrappedPrintStream",
	"java.lang.Throwable$PrintStreamOrWriter",
	nullptr,
	_Throwable$WrappedPrintStream_FieldInfo_,
	_Throwable$WrappedPrintStream_MethodInfo_,
	nullptr,
	nullptr,
	_Throwable$WrappedPrintStream_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.lang.Throwable"
};

$Object* allocate$Throwable$WrappedPrintStream($Class* clazz) {
	return $of($alloc(Throwable$WrappedPrintStream));
}

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
	$loadClass(Throwable$WrappedPrintStream, name, initialize, &_Throwable$WrappedPrintStream_ClassInfo_, allocate$Throwable$WrappedPrintStream);
	return class$;
}

$Class* Throwable$WrappedPrintStream::class$ = nullptr;

	} // lang
} // java