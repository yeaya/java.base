#ifndef _Basic_h_
#define _Basic_h_
//$ class Basic
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace java {
	namespace time {
		class Instant;
	}
}
namespace java {
	namespace util {
		class Random;
	}
}
namespace java {
	namespace util {
		namespace concurrent {
			class TimeUnit;
		}
	}
}

class $export Basic : public ::java::lang::Object {
	$class(Basic, 0, ::java::lang::Object)
public:
	Basic();
	void init$();
	static void cmp(int64_t v1, ::java::util::concurrent::TimeUnit* u1, int64_t v2, ::java::util::concurrent::TimeUnit* u2, int32_t expected);
	static void cmp(::java::time::Instant* ins, int64_t v2, ::java::util::concurrent::TimeUnit* u2, int32_t expected);
	static void eq(int64_t v1, ::java::util::concurrent::TimeUnit* u1, int64_t v2, ::java::util::concurrent::TimeUnit* u2);
	static void eq(::java::time::Instant* ins, int64_t v2, ::java::util::concurrent::TimeUnit* u2);
	static void eqTime(int64_t value, ::java::util::concurrent::TimeUnit* unit, ::java::time::Instant* instant);
	static void main($StringArray* args);
	static void neq(int64_t v1, ::java::util::concurrent::TimeUnit* u1, int64_t v2, ::java::util::concurrent::TimeUnit* u2);
	static void neq(::java::time::Instant* ins, int64_t v2, ::java::util::concurrent::TimeUnit* u2);
	static void overflow(int64_t minmax, int64_t v);
	static void to(int64_t v, ::java::util::concurrent::TimeUnit* unit);
	static void ts(int64_t v, ::java::util::concurrent::TimeUnit* unit, $String* expected);
	static void ts(::java::time::Instant* instant, $String* expected);
	static ::java::util::Random* rand;
};

#endif // _Basic_h_