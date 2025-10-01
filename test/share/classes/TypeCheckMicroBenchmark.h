#ifndef _TypeCheckMicroBenchmark_h_
#define _TypeCheckMicroBenchmark_h_
//$ class TypeCheckMicroBenchmark
//$ extends java.lang.Object

#include <java/lang/Array.h>

class TypeCheckMicroBenchmark$Job;
namespace java {
	namespace util {
		namespace regex {
			class Pattern;
		}
	}
}

class $export TypeCheckMicroBenchmark : public ::java::lang::Object {
	$class(TypeCheckMicroBenchmark, $NO_CLASS_INIT, ::java::lang::Object)
public:
	TypeCheckMicroBenchmark();
	void init$();
	static void collectAllGarbage();
	static $Array<TypeCheckMicroBenchmark$Job>* filter(::java::util::regex::Pattern* filter, $Array<TypeCheckMicroBenchmark$Job>* jobs);
	static int32_t intArg($StringArray* args, $String* keyword, int32_t defaultValue);
	static $String* keywordValue($StringArray* args, $String* keyword);
	static void main($StringArray* args);
	static ::java::util::regex::Pattern* patternArg($StringArray* args, $String* keyword);
	static void time($Array<TypeCheckMicroBenchmark$Job>* jobs);
	static $longs* time0($Array<TypeCheckMicroBenchmark$Job>* jobs);
};

#endif // _TypeCheckMicroBenchmark_h_