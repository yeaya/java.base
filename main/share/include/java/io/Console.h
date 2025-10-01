#ifndef _java_io_Console_h_
#define _java_io_Console_h_
//$ class java.io.Console
//$ extends java.io.Flushable

#include <java/io/Flushable.h>
#include <java/lang/Array.h>

#pragma push_macro("CHARSET")
#undef CHARSET

namespace java {
	namespace io {
		class PrintWriter;
		class Reader;
		class Writer;
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
	}
}

namespace java {
	namespace io {

class $import Console : public ::java::io::Flushable {
	$class(Console, 0, ::java::io::Flushable)
public:
	Console();
	void init$();
	::java::nio::charset::Charset* charset();
	static bool echo(bool on);
	static $String* encoding();
	virtual void flush() override;
	::java::io::Console* format($String* fmt, $ObjectArray* args);
	$chars* grow();
	void installShutdownHook();
	static bool istty();
	::java::io::Console* printf($String* format, $ObjectArray* args);
	$String* readLine($String* fmt, $ObjectArray* args);
	$String* readLine();
	$chars* readPassword($String* fmt, $ObjectArray* args);
	$chars* readPassword();
	::java::io::Reader* reader();
	$chars* readline(bool zeroOut);
	::java::io::PrintWriter* writer();
	static bool $assertionsDisabled;
	$Object* readLock = nullptr;
	$Object* writeLock = nullptr;
	::java::io::Reader* reader$ = nullptr;
	::java::io::Writer* out = nullptr;
	::java::io::PrintWriter* pw = nullptr;
	::java::util::Formatter* formatter = nullptr;
	$chars* rcb = nullptr;
	bool restoreEcho = false;
	bool shutdownHookInstalled = false;
	static ::java::nio::charset::Charset* CHARSET;
	static ::java::io::Console* cons;
};

	} // io
} // java

#pragma pop_macro("CHARSET")

#endif // _java_io_Console_h_