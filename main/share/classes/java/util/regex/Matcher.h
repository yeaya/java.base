#ifndef _java_util_regex_Matcher_h_
#define _java_util_regex_Matcher_h_
//$ class java.util.regex.Matcher
//$ extends java.util.regex.MatchResult

#include <java/lang/Array.h>
#include <java/util/regex/MatchResult.h>

#pragma push_macro("ENDANCHOR")
#undef ENDANCHOR
#pragma push_macro("NOANCHOR")
#undef NOANCHOR

namespace java {
	namespace lang {
		class CharSequence;
		class StringBuffer;
		class StringBuilder;
	}
}
namespace java {
	namespace util {
		namespace function {
			class Function;
		}
	}
}
namespace java {
	namespace util {
		namespace regex {
			class IntHashSet;
			class Pattern;
		}
	}
}
namespace java {
	namespace util {
		namespace stream {
			class Stream;
		}
	}
}

namespace java {
	namespace util {
		namespace regex {

class $export Matcher : public ::java::util::regex::MatchResult {
	$class(Matcher, $NO_CLASS_INIT, ::java::util::regex::MatchResult)
public:
	Matcher();
	void init$();
	void init$(::java::util::regex::Pattern* parent, ::java::lang::CharSequence* text);
	::java::lang::StringBuilder* appendExpandedReplacement($String* replacement, ::java::lang::StringBuilder* result);
	::java::util::regex::Matcher* appendReplacement(::java::lang::StringBuffer* sb, $String* replacement);
	::java::util::regex::Matcher* appendReplacement(::java::lang::StringBuilder* sb, $String* replacement);
	::java::lang::StringBuffer* appendTail(::java::lang::StringBuffer* sb);
	::java::lang::StringBuilder* appendTail(::java::lang::StringBuilder* sb);
	char16_t charAt(int32_t i);
	virtual int32_t end() override;
	virtual int32_t end(int32_t group) override;
	int32_t end($String* name);
	bool find();
	bool find(int32_t start);
	int32_t getMatchedGroupIndex($String* name);
	::java::lang::CharSequence* getSubSequence(int32_t beginIndex, int32_t endIndex);
	int32_t getTextLength();
	virtual $String* group() override;
	virtual $String* group(int32_t group) override;
	$String* group($String* name);
	virtual int32_t groupCount() override;
	bool hasAnchoringBounds();
	bool hasTransparentBounds();
	bool hitEnd();
	bool lookingAt();
	bool match(int32_t from, int32_t anchor);
	bool matches();
	::java::util::regex::Pattern* pattern();
	static $String* quoteReplacement($String* s);
	::java::util::regex::Matcher* region(int32_t start, int32_t end);
	int32_t regionEnd();
	int32_t regionStart();
	$String* replaceAll($String* replacement);
	$String* replaceAll(::java::util::function::Function* replacer);
	$String* replaceFirst($String* replacement);
	$String* replaceFirst(::java::util::function::Function* replacer);
	bool requireEnd();
	::java::util::regex::Matcher* reset();
	::java::util::regex::Matcher* reset(::java::lang::CharSequence* input);
	::java::util::stream::Stream* results();
	bool search(int32_t from);
	virtual int32_t start() override;
	virtual int32_t start(int32_t group) override;
	int32_t start($String* name);
	::java::util::regex::MatchResult* toMatchResult();
	::java::util::regex::MatchResult* toMatchResult($String* text);
	virtual $String* toString() override;
	::java::util::regex::Matcher* useAnchoringBounds(bool b);
	::java::util::regex::Matcher* usePattern(::java::util::regex::Pattern* newPattern);
	::java::util::regex::Matcher* useTransparentBounds(bool b);
	::java::util::regex::Pattern* parentPattern = nullptr;
	$ints* groups = nullptr;
	int32_t from = 0;
	int32_t to = 0;
	int32_t lookbehindTo = 0;
	::java::lang::CharSequence* text = nullptr;
	static const int32_t ENDANCHOR = 1;
	static const int32_t NOANCHOR = 0;
	int32_t acceptMode = 0;
	int32_t first = 0;
	int32_t last = 0;
	int32_t oldLast = 0;
	int32_t lastAppendPosition = 0;
	$ints* locals = nullptr;
	$Array<::java::util::regex::IntHashSet>* localsPos = nullptr;
	bool hitEnd$ = false;
	bool requireEnd$ = false;
	bool transparentBounds = false;
	bool anchoringBounds = false;
	int32_t modCount = 0;
};

		} // regex
	} // util
} // java

#pragma pop_macro("ENDANCHOR")
#pragma pop_macro("NOANCHOR")

#endif // _java_util_regex_Matcher_h_