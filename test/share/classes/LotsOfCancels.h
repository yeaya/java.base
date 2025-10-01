#ifndef _LotsOfCancels_h_
#define _LotsOfCancels_h_
//$ class LotsOfCancels
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace java {
	namespace nio {
		namespace channels {
			class Selector;
			class ServerSocketChannel;
		}
	}
}
namespace java {
	namespace util {
		class List;
	}
}

class $export LotsOfCancels : public ::java::lang::Object {
	$class(LotsOfCancels, $NO_CLASS_INIT, ::java::lang::Object)
public:
	LotsOfCancels();
	void init$();
	static ::java::util::List* acceptAndAddAll(::java::nio::channels::Selector* selector, ::java::nio::channels::ServerSocketChannel* server, int32_t expected);
	static void closeAll(::java::util::List* channels);
	static int64_t durationMillis(int64_t startNanos);
	static $String* getLogPrefix();
	static void log($String* msg);
	static void main($StringArray* args);
	static void runTest(int32_t initCount, int32_t massCount, int32_t maxSelectTime);
	static int64_t testStartTime;
};

#endif // _LotsOfCancels_h_