#ifndef _java_io_PrintStream_h_
#define _java_io_PrintStream_h_
//$ class java.io.PrintStream
//$ extends java.io.FilterOutputStream
//$ implements java.lang.Appendable

#include <java/io/FilterOutputStream.h>
#include <java/lang/Appendable.h>
#include <java/lang/Array.h>

namespace java {
	namespace io {
		class BufferedWriter;
		class File;
		class OutputStream;
		class OutputStreamWriter;
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

class $import PrintStream : public ::java::io::FilterOutputStream, public ::java::lang::Appendable {
	$class(PrintStream, $PRELOAD | $NO_CLASS_INIT, ::java::io::FilterOutputStream, ::java::lang::Appendable)
public:
	PrintStream();
	virtual ::java::lang::Object0* toObject0$() const override {return (::java::lang::Object0*)(void*)this;}
	virtual $Object* clone() override;
	virtual bool equals(Object$* obj) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$(bool autoFlush, ::java::io::OutputStream* out);
	void init$(bool autoFlush, ::java::nio::charset::Charset* charset, ::java::io::OutputStream* out);
	void init$(::java::io::OutputStream* out);
	void init$(::java::io::OutputStream* out, bool autoFlush);
	void init$(::java::io::OutputStream* out, bool autoFlush, $String* encoding);
	void init$(::java::io::OutputStream* out, bool autoFlush, ::java::nio::charset::Charset* charset);
	void init$($String* fileName);
	void init$($String* fileName, $String* csn);
	void init$($String* fileName, ::java::nio::charset::Charset* charset);
	void init$(::java::io::File* file);
	void init$(::java::io::File* file, $String* csn);
	void init$(::java::io::File* file, ::java::nio::charset::Charset* charset);
	virtual ::java::lang::Appendable* append(::java::lang::CharSequence* csq) override;
	virtual ::java::lang::Appendable* append(::java::lang::CharSequence* csq, int32_t start, int32_t end) override;
	virtual ::java::lang::Appendable* append(char16_t c) override;
	virtual bool checkError();
	virtual void clearError();
	virtual void close() override;
	void ensureOpen();
	virtual void flush() override;
	virtual ::java::io::PrintStream* format($String* format, $ObjectArray* args);
	virtual ::java::io::PrintStream* format(::java::util::Locale* l, $String* format, $ObjectArray* args);
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
	virtual ::java::io::PrintStream* printf($String* format, $ObjectArray* args);
	virtual ::java::io::PrintStream* printf(::java::util::Locale* l, $String* format, $ObjectArray* args);
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
	static $Object* requireNonNull(Object$* obj, $String* message);
	virtual void setError();
	static ::java::nio::charset::Charset* toCharset($String* csn);
	virtual $String* toString() override;
	virtual void write(int32_t b) override;
	virtual void write($bytes* buf, int32_t off, int32_t len) override;
	virtual void write($bytes* buf) override;
	void write($chars* buf);
	void write($String* s);
	virtual void writeBytes($bytes* buf);
	void writeln($chars* buf);
	void writeln($String* s);
	bool autoFlush = false;
	bool trouble = false;
	::java::util::Formatter* formatter = nullptr;
	::java::io::BufferedWriter* textOut = nullptr;
	::java::io::OutputStreamWriter* charOut = nullptr;
	bool closing = false;
};

	} // io
} // java

#endif // _java_io_PrintStream_h_