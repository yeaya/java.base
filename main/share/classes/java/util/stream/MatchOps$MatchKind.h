#ifndef _java_util_stream_MatchOps$MatchKind_h_
#define _java_util_stream_MatchOps$MatchKind_h_
//$ class java.util.stream.MatchOps$MatchKind
//$ extends java.lang.Enum

#include <java/lang/Array.h>
#include <java/lang/Enum.h>

#pragma push_macro("ALL")
#undef ALL
#pragma push_macro("ANY")
#undef ANY
#pragma push_macro("NONE")
#undef NONE

namespace java {
	namespace util {
		namespace stream {

class MatchOps$MatchKind : public ::java::lang::Enum {
	$class(MatchOps$MatchKind, 0, ::java::lang::Enum)
public:
	MatchOps$MatchKind();
	static $Array<::java::util::stream::MatchOps$MatchKind>* $values();
	void init$($String* $enum$name, int32_t $enum$ordinal, bool stopOnPredicateMatches, bool shortCircuitResult);
	static ::java::util::stream::MatchOps$MatchKind* valueOf($String* name);
	static $Array<::java::util::stream::MatchOps$MatchKind>* values();
	static ::java::util::stream::MatchOps$MatchKind* ANY;
	static ::java::util::stream::MatchOps$MatchKind* ALL;
	static ::java::util::stream::MatchOps$MatchKind* NONE;
	static $Array<::java::util::stream::MatchOps$MatchKind>* $VALUES;
	bool stopOnPredicateMatches = false;
	bool shortCircuitResult = false;
};

		} // stream
	} // util
} // java

#pragma pop_macro("ALL")
#pragma pop_macro("ANY")
#pragma pop_macro("NONE")

#endif // _java_util_stream_MatchOps$MatchKind_h_