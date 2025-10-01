#ifndef _java_lang_Throwable$WrappedPrintWriter_h_
#define _java_lang_Throwable$WrappedPrintWriter_h_
//$ class java.lang.Throwable$WrappedPrintWriter
//$ extends java.lang.Throwable$PrintStreamOrWriter

#include <java/lang/Throwable$PrintStreamOrWriter.h>

namespace java {
	namespace io {
		class PrintWriter;
	}
}

namespace java {
	namespace lang {

class Throwable$WrappedPrintWriter : public ::java::lang::Throwable$PrintStreamOrWriter {
	$class(Throwable$WrappedPrintWriter, $NO_CLASS_INIT, ::java::lang::Throwable$PrintStreamOrWriter)
public:
	Throwable$WrappedPrintWriter();
	void init$(::java::io::PrintWriter* printWriter);
	virtual $Object* lock() override;
	virtual void println(Object$* o) override;
	::java::io::PrintWriter* printWriter = nullptr;
};

	} // lang
} // java

#endif // _java_lang_Throwable$WrappedPrintWriter_h_