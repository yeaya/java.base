#ifndef _StateTestService_h_
#define _StateTestService_h_
//$ class StateTestService
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace java {
	namespace io {
		class PrintStream;
	}
}

class $export StateTestService : public ::java::lang::Object {
	$class(StateTestService, 0, ::java::lang::Object)
public:
	StateTestService();
	void init$();
	static void check(bool okay);
	static void initLogFile();
	static void main($StringArray* args);
	static void println($String* msg);
	static void reply($String* msg);
	static bool failed;
	static int32_t reply_port;
	static $String* logDir;
	static ::java::io::PrintStream* out;
	static bool initialized;
};

#endif // _StateTestService_h_