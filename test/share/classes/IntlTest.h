#ifndef _IntlTest_h_
#define _IntlTest_h_
//$ class IntlTest
//$ extends java.lang.Object

#include <java/lang/Array.h>

#pragma push_macro("SPACES")
#undef SPACES

namespace java {
	namespace io {
		class PrintWriter;
	}
}
namespace java {
	namespace util {
		class Map;
	}
}

class $export IntlTest : public ::java::lang::Object {
	$class(IntlTest, 0, ::java::lang::Object)
public:
	IntlTest();
	void init$();
	virtual void err($String* message);
	void errImpl($String* message, bool newline);
	virtual void errln($String* message);
	virtual int32_t getErrorCount();
	void indent(int32_t distance);
	virtual void log($String* message);
	void logImpl($String* message, bool newline);
	virtual void logln($String* message);
	virtual void logln();
	virtual void run($StringArray* args);
	static $String* toHexString($String* s);
	virtual void usage();
	virtual void writeTestName($String* testName);
	virtual void writeTestResult(int32_t count);
	bool prompt = false;
	bool nothrow = false;
	bool verbose = false;
	bool exitCode = false;
	::java::io::PrintWriter* log$ = nullptr;
	int32_t indentLevel = 0;
	bool needLineFeed = false;
	int32_t errorCount = 0;
	::java::util::Map* testMethods = nullptr;
	static $String* SPACES;
};

#pragma pop_macro("SPACES")

#endif // _IntlTest_h_