#ifndef _MultiThreadStackWalk_h_
#define _MultiThreadStackWalk_h_
//$ class MultiThreadStackWalk
//$ extends java.lang.Object

#include <java/lang/Array.h>

class MultiThreadStackWalk$Env;
class MultiThreadStackWalk$Test;
namespace java {
	namespace util {
		class List;
		class Set;
	}
}

class $export MultiThreadStackWalk : public ::java::lang::Object {
	$class(MultiThreadStackWalk, 0, ::java::lang::Object)
public:
	MultiThreadStackWalk();
	void init$();
	static void checkTest(::MultiThreadStackWalk$Env* env, ::MultiThreadStackWalk$Test* test);
	static $Class* classForName($String* name);
	static bool isStreamPipeline($Class* clazz);
	static void main($StringArray* args);
	static ::MultiThreadStackWalk$Env* runTest(::MultiThreadStackWalk$Test* test, int32_t total, int32_t markAt);
	static ::java::util::Set* infrastructureClasses;
	static ::java::util::List* streamPipelines;
};

#endif // _MultiThreadStackWalk_h_