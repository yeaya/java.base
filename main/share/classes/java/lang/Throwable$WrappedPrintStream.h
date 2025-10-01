#ifndef _java_lang_Throwable$WrappedPrintStream_h_
#define _java_lang_Throwable$WrappedPrintStream_h_
//$ class java.lang.Throwable$WrappedPrintStream
//$ extends java.lang.Throwable$PrintStreamOrWriter

#include <java/lang/Throwable$PrintStreamOrWriter.h>

namespace java {
	namespace io {
		class PrintStream;
	}
}

namespace java {
	namespace lang {

class Throwable$WrappedPrintStream : public ::java::lang::Throwable$PrintStreamOrWriter {
	$class(Throwable$WrappedPrintStream, $NO_CLASS_INIT, ::java::lang::Throwable$PrintStreamOrWriter)
public:
	Throwable$WrappedPrintStream();
	void init$(::java::io::PrintStream* printStream);
	virtual $Object* lock() override;
	virtual void println(Object$* o) override;
	::java::io::PrintStream* printStream = nullptr;
};

	} // lang
} // java

#endif // _java_lang_Throwable$WrappedPrintStream_h_