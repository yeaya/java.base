#ifndef _java_io_PrintWriter_h_
#define _java_io_PrintWriter_h_
//$ class java.io.PrintWriter
//$ extends java.io.Writer

#include <java/io/Writer.h>
#include <java/lang/Array.h>

namespace java {
	namespace io {
		class File;
		class OutputStream;
		class PrintStream;
	}
}
namespace java {
	namespace lang {
		class CharSequence;
	}
}
namespace java {
	namespace nio {
		namespace charset {
			class Charset;
		}
	}
}
namespace java {
	namespace util {
		class Formatter;
		class Locale;
	}
}

namespace java {
	namespace io {

class $import PrintWriter : public ::java::io::Writer {
	$class(PrintWriter, $NO_CLASS_INIT, ::java::io::Writer)
public:
	PrintWriter();
	void init$(::java::io::Writer* out);
	void init$(::java::io::Writer* out, bool autoFlush);
	void init$(::java::io::OutputStream* out);
	void init$(::java::io::OutputStream* out, bool autoFlush);
	void init$(::java::io::OutputStream* out, bool autoFlush, ::java::nio::charset::Charset* charset);
	void init$($String* fileName);
	void init$(::java::nio::charset::Charset* charset, ::java::io::File* file);
	void init$($String* fileName, $String* csn);
	void init$($String* fileName, ::java::nio::charset::Charset* charset);
	void init$(::java::io::File* file);
	void init$(::java::io::File* file, $String* csn);
	void init$(::java::io::File* file, ::java::nio::charset::Charset* charset);
	virtual ::java::io::PrintWriter* append(::java::lang::CharSequence* csq) override;
	virtual ::java::io::PrintWriter* append(::java::lang::CharSequence* csq, int32_t start, int32_t end) override;
	virtual ::java::io::PrintWriter* append(char16_t c) override;
	virtual bool checkError();
	virtual void clearError();
	virtual void close() override;
	void ensureOpen();
	virtual void flush() override;
	virtual ::java::io::PrintWriter* format($String* format, $ObjectArray* args);
	virtual ::java::io::PrintWriter* format(::java::util::Locale* l, $String* format, $ObjectArray* args);
	void newLine();
	virtual void print(bool b);
	virtual void print(char16_t c);
	virtual void print(int32_t i);
	virtual void print(int64_t l);
	virtual void print(float f);
	virtual void print(double d);
	virtual void print($chars* s);
	virtual void print($String* s);
	virtual void print(Object$* obj);
	virtual ::java::io::PrintWriter* printf($String* format, $ObjectArray* args);
	virtual ::java::io::PrintWriter* printf(::java::util::Locale* l, $String* format, $ObjectArray* args);
	virtual void println();
	virtual void println(bool x);
	virtual void println(char16_t x);
	virtual void println(int32_t x);
	virtual void println(int64_t x);
	virtual void println(float x);
	virtual void println(double x);
	virtual void println($chars* x);
	virtual void println($String* x);
	virtual void println(Object$* x);
	virtual void setError();
	static ::java::nio::charset::Charset* toCharset($String* csn);
	virtual void write(int32_t c) override;
	virtual void write($chars* buf, int32_t off, int32_t len) override;
	virtual void write($chars* buf) override;
	virtual void write($String* s, int32_t off, int32_t len) override;
	virtual void write($String* s) override;
	::java::io::Writer* out = nullptr;
	bool autoFlush = false;
	bool trouble = false;
	::java::util::Formatter* formatter = nullptr;
	::java::io::PrintStream* psOut = nullptr;
};

	} // io
} // java

#endif // _java_io_PrintWriter_h_