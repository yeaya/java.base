#ifndef _Basic4Appendable_h_
#define _Basic4Appendable_h_
//$ class Basic4Appendable
//$ extends java.lang.Object

#include <java/lang/Array.h>

class BasicRunnable;
namespace java {
	namespace io {
		class ByteArrayOutputStream;
		class CharArrayWriter;
		class File;
	}
}
namespace java {
	namespace lang {
		class Appendable;
		class CharSequence;
		class Throwable;
	}
}

class $export Basic4Appendable : public ::java::lang::Object {
	$class(Basic4Appendable, 0, ::java::lang::Object)
public:
	Basic4Appendable();
	void init$();
	static void ck($String* s, $String* exp, $String* got);
	static void fail($Throwable* ex);
	static void fail($String* fs, $Throwable* ex);
	static void fail($String* fs, $String* exp, $String* got);
	static void main($StringArray* args);
	static ::java::io::File* newFile();
	static void pass();
	static void test(::java::lang::Appendable* a, ::java::lang::CharSequence* csq, ::BasicRunnable* thunk);
	static $String* s;
	static ::java::io::CharArrayWriter* gw;
	static ::java::io::ByteArrayOutputStream* gos;
	static ::java::io::File* gf;
	static int32_t fail$;
	static int32_t pass$;
	static $Throwable* first;
	static ::BasicRunnable* testBufferedWriter;
	static ::BasicRunnable* testCharArrayWriter;
	static ::BasicRunnable* testFileWriter;
	static ::BasicRunnable* testOutputStreamWriter;
	static ::BasicRunnable* testPrintWriter;
	static ::BasicRunnable* testStringWriter;
	static ::BasicRunnable* testPrintStream;
	static ::BasicRunnable* testCharBuffer;
	static ::BasicRunnable* testStringBuffer;
	static ::BasicRunnable* testStringBuilder;
};

#endif // _Basic4Appendable_h_