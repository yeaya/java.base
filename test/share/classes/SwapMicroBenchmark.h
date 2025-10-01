#ifndef _SwapMicroBenchmark_h_
#define _SwapMicroBenchmark_h_
//$ class SwapMicroBenchmark
//$ extends java.lang.Object

#include <java/lang/Array.h>

class SwapMicroBenchmark$Job;
namespace java {
	namespace util {
		namespace regex {
			class Pattern;
		}
	}
}

class $export SwapMicroBenchmark : public ::java::lang::Object {
	$class(SwapMicroBenchmark, $NO_CLASS_INIT, ::java::lang::Object)
public:
	SwapMicroBenchmark();
	void init$();
	static void collectAllGarbage();
	static void deoptimize(int32_t sum);
	static $Array<SwapMicroBenchmark$Job>* filter(::java::util::regex::Pattern* filter, $Array<SwapMicroBenchmark$Job>* jobs);
	static int32_t intArg($StringArray* args, $String* keyword, int32_t defaultValue);
	static $String* keywordValue($StringArray* args, $String* keyword);
	static void main($StringArray* args);
	static ::java::util::regex::Pattern* patternArg($StringArray* args, $String* keyword);
	static void time($Array<SwapMicroBenchmark$Job>* jobs);
	static $longs* time0($Array<SwapMicroBenchmark$Job>* jobs);
};

#endif // _SwapMicroBenchmark_h_