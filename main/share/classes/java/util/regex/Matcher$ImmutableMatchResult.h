#ifndef _java_util_regex_Matcher$ImmutableMatchResult_h_
#define _java_util_regex_Matcher$ImmutableMatchResult_h_
//$ class java.util.regex.Matcher$ImmutableMatchResult
//$ extends java.util.regex.MatchResult

#include <java/lang/Array.h>
#include <java/util/regex/MatchResult.h>

namespace java {
	namespace util {
		namespace regex {

class Matcher$ImmutableMatchResult : public ::java::util::regex::MatchResult {
	$class(Matcher$ImmutableMatchResult, $NO_CLASS_INIT, ::java::util::regex::MatchResult)
public:
	Matcher$ImmutableMatchResult();
	void init$(int32_t first, int32_t last, int32_t groupCount, $ints* groups, $String* text);
	void checkMatch();
	virtual int32_t end() override;
	virtual int32_t end(int32_t group) override;
	virtual $String* group() override;
	virtual $String* group(int32_t group) override;
	virtual int32_t groupCount() override;
	virtual int32_t start() override;
	virtual int32_t start(int32_t group) override;
	int32_t first = 0;
	int32_t last = 0;
	$ints* groups = nullptr;
	int32_t groupCount$ = 0;
	$String* text = nullptr;
};

		} // regex
	} // util
} // java

#endif // _java_util_regex_Matcher$ImmutableMatchResult_h_