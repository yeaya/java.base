#ifndef _java_util_regex_Pattern_h_
#define _java_util_regex_Pattern_h_
//$ class java.util.regex.Pattern
//$ extends java.io.Serializable

#include <java/io/Serializable.h>
#include <java/lang/Array.h>

#pragma push_macro("DOTALL")
#undef DOTALL
#pragma push_macro("UNICODE_CASE")
#undef UNICODE_CASE
#pragma push_macro("LITERAL")
#undef LITERAL
#pragma push_macro("ALL_FLAGS")
#undef ALL_FLAGS
#pragma push_macro("UNICODE_CHARACTER_CLASS")
#undef UNICODE_CHARACTER_CLASS
#pragma push_macro("CASE_INSENSITIVE")
#undef CASE_INSENSITIVE
#pragma push_macro("CANON_EQ")
#undef CANON_EQ
#pragma push_macro("COMMENTS")
#undef COMMENTS
#pragma push_macro("MAX_REPS")
#undef MAX_REPS
#pragma push_macro("UNIX_LINES")
#undef UNIX_LINES
#pragma push_macro("MULTILINE")
#undef MULTILINE

namespace java {
	namespace io {
		class ObjectInputStream;
	}
}
namespace java {
	namespace lang {
		class CharSequence;
		class StringBuilder;
	}
}
namespace java {
	namespace util {
		class List;
		class Map;
		class Set;
	}
}
namespace java {
	namespace util {
		namespace function {
			class Predicate;
		}
	}
}
namespace java {
	namespace util {
		namespace regex {
			class Matcher;
			class Pattern$BitClass;
			class Pattern$BmpCharPredicate;
			class Pattern$CharPredicate;
			class Pattern$CharProperty;
			class Pattern$GroupHead;
			class Pattern$Node;
			class Pattern$Qtype;
			class PatternSyntaxException;
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

class $export Pattern : public ::java::io::Serializable {
	$class(Pattern, 0, ::java::io::Serializable)
public:
	Pattern();
	void init$($String* p, int32_t f);
	static ::java::util::regex::Pattern$CharPredicate* ALL();
	static ::java::util::regex::Pattern$CharPredicate* CIRange(int32_t lower, int32_t upper);
	static ::java::util::regex::Pattern$CharPredicate* CIRangeU(int32_t lower, int32_t upper);
	static ::java::util::regex::Pattern$CharPredicate* DOT();
	static ::java::util::regex::Pattern$BmpCharPredicate* HorizWS();
	int32_t N();
	static ::java::util::regex::Pattern$CharPredicate* Range(int32_t lower, int32_t upper);
	void RemoveQEQuoting();
	static ::java::util::regex::Pattern$BmpCharPredicate* Single(int32_t c);
	static ::java::util::regex::Pattern$BmpCharPredicate* SingleI(int32_t lower, int32_t upper);
	static ::java::util::regex::Pattern$CharPredicate* SingleS(int32_t c);
	static ::java::util::regex::Pattern$CharPredicate* SingleU(int32_t lower);
	static ::java::util::regex::Pattern$CharPredicate* UNIXDOT();
	static ::java::util::regex::Pattern$BmpCharPredicate* VertWS();
	void accept(int32_t ch, $String* s);
	void addFlag();
	void append(int32_t ch, int32_t index);
	::java::util::function::Predicate* asMatchPredicate();
	::java::util::function::Predicate* asPredicate();
	::java::util::regex::Pattern$Node* atom();
	::java::util::regex::Pattern$CharPredicate* bitsOrSingle(::java::util::regex::Pattern$BitClass* bits, int32_t ch);
	int32_t c();
	::java::util::regex::Pattern$CharPredicate* clazz(bool consume);
	::java::util::regex::Pattern$Node* closure(::java::util::regex::Pattern$Node* prev);
	static ::java::util::regex::Pattern* compile($String* regex);
	static ::java::util::regex::Pattern* compile($String* regex, int32_t flags);
	void compile();
	static $String* composeOneStep($String* input);
	static int32_t countChars(::java::lang::CharSequence* seq, int32_t index, int32_t lengthInCodePoints);
	static int32_t countCodePoints(::java::lang::CharSequence* seq);
	::java::util::regex::Pattern$Node* createGroup(bool anonymous);
	::java::util::regex::Pattern$Node* curly(::java::util::regex::Pattern$Node* prev, int32_t cmin);
	int32_t cursor();
	::java::util::regex::PatternSyntaxException* error($String* s);
	int32_t escape(bool inclass, bool create, bool isrange);
	::java::util::regex::Pattern$Node* expr(::java::util::regex::Pattern$Node* end);
	::java::util::regex::Pattern$CharPredicate* family(bool singleLetter, bool isComplement);
	bool findSupplementary(int32_t start, int32_t end);
	int32_t flags();
	static int32_t getClass(int32_t c);
	::java::util::regex::Pattern$Node* group0();
	$String* groupname(int32_t ch);
	bool has(int32_t f);
	static bool hasBaseCharacter(::java::util::regex::Matcher* matcher, int32_t i, ::java::lang::CharSequence* seq);
	static bool inRange(int32_t lower, int32_t ch, int32_t upper);
	bool isLineSeparator(int32_t ch);
	static bool isSupplementary(int32_t ch);
	static bool lambda$ALL$3(int32_t ch);
	static bool lambda$CIRange$12(int32_t lower, int32_t upper, int32_t ch);
	static bool lambda$CIRangeU$13(int32_t lower, int32_t upper, int32_t ch);
	static bool lambda$DOT$4(int32_t ch);
	static bool lambda$HorizWS$2(int32_t cp);
	static bool lambda$Range$10(int32_t lower, int32_t upper, int32_t ch);
	static bool lambda$SingleI$8(int32_t lower, int32_t upper, int32_t ch);
	static bool lambda$SingleS$6(int32_t c, int32_t ch);
	static bool lambda$SingleU$9(int32_t lower, int32_t ch);
	static bool lambda$UNIXDOT$5(int32_t ch);
	static bool lambda$VertWS$1(int32_t cp);
	bool lambda$asMatchPredicate$15($String* s);
	bool lambda$asPredicate$14($String* s);
	static void lambda$normalizeSlice$0(::java::lang::StringBuilder* dst, $String* s);
	void mark(int32_t c);
	::java::util::regex::Matcher* matcher(::java::lang::CharSequence* input);
	static bool matches($String* regex, ::java::lang::CharSequence* input);
	::java::util::Map* namedGroups();
	::java::util::regex::Pattern$CharProperty* newCharProperty(::java::util::regex::Pattern$CharPredicate* p);
	::java::util::regex::Pattern$Node* newSlice($ints* buf, int32_t count, bool hasSupplementary);
	int32_t next();
	int32_t nextEscaped();
	static $String* normalize($String* pattern);
	static void normalizeClazz($String* src, int32_t off, int32_t limit, ::java::lang::StringBuilder* dst);
	static void normalizeSlice($String* src, int32_t off, int32_t limit, ::java::lang::StringBuilder* dst);
	int32_t o();
	int32_t parsePastLine();
	int32_t parsePastWhitespace(int32_t ch);
	$String* pattern();
	int32_t peek();
	int32_t peekPastLine();
	int32_t peekPastWhitespace(int32_t ch);
	static void produceEquivalentAlternation($String* src, ::java::util::Set* dst);
	static $StringArray* producePermutations($String* input);
	::java::util::regex::Pattern$Qtype* qtype();
	static $String* quote($String* s);
	::java::util::regex::Pattern$CharPredicate* range(::java::util::regex::Pattern$BitClass* bits);
	int32_t read();
	int32_t readEscaped();
	void readObject(::java::io::ObjectInputStream* s);
	::java::util::regex::Pattern$Node* ref(int32_t refNum);
	::java::util::regex::Pattern$Node* sequence(::java::util::regex::Pattern$Node* end);
	void setcursor(int32_t pos);
	::java::util::regex::Pattern$CharPredicate* single(int32_t ch);
	int32_t skip();
	$StringArray* split(::java::lang::CharSequence* input, int32_t limit);
	$StringArray* split(::java::lang::CharSequence* input);
	::java::util::stream::Stream* splitAsStream(::java::lang::CharSequence* input);
	void subFlag();
	virtual $String* toString() override;
	int32_t u();
	void unread();
	int32_t uxxxx();
	int32_t x();
	static bool $assertionsDisabled;
	static const int32_t UNIX_LINES = 1;
	static const int32_t CASE_INSENSITIVE = 2;
	static const int32_t COMMENTS = 4;
	static const int32_t MULTILINE = 8;
	static const int32_t LITERAL = 16;
	static const int32_t DOTALL = 32;
	static const int32_t UNICODE_CASE = 64;
	static const int32_t CANON_EQ = 128;
	static const int32_t UNICODE_CHARACTER_CLASS = 256;
	static const int32_t ALL_FLAGS = 511; // CASE_INSENSITIVE | MULTILINE | DOTALL | UNICODE_CASE | CANON_EQ | UNIX_LINES | LITERAL | UNICODE_CHARACTER_CLASS | COMMENTS
	static const int64_t serialVersionUID = (int64_t)0x4667D56B6E49020D;
	$String* pattern$ = nullptr;
	int32_t flags$ = 0;
	int32_t flags0 = 0;
	$volatile(bool) compiled = false;
	$String* normalizedPattern = nullptr;
	::java::util::regex::Pattern$Node* root = nullptr;
	::java::util::regex::Pattern$Node* matchRoot = nullptr;
	$ints* buffer = nullptr;
	::java::util::regex::Pattern$CharPredicate* predicate = nullptr;
	$volatile(::java::util::Map*) namedGroups$ = nullptr;
	$Array<::java::util::regex::Pattern$GroupHead>* groupNodes = nullptr;
	::java::util::List* topClosureNodes = nullptr;
	int32_t localTCNCount = 0;
	bool hasGroupRef = false;
	$ints* temp = nullptr;
	int32_t capturingGroupCount = 0;
	int32_t localCount = 0;
	int32_t cursor$ = 0;
	int32_t patternLength = 0;
	bool hasSupplementary = false;
	static const int32_t MAX_REPS = 0x7FFFFFFF;
	static ::java::util::regex::Pattern$Node* accept$;
	static ::java::util::regex::Pattern$Node* lastAccept;
};

		} // regex
	} // util
} // java

#pragma pop_macro("DOTALL")
#pragma pop_macro("UNICODE_CASE")
#pragma pop_macro("LITERAL")
#pragma pop_macro("ALL_FLAGS")
#pragma pop_macro("UNICODE_CHARACTER_CLASS")
#pragma pop_macro("CASE_INSENSITIVE")
#pragma pop_macro("CANON_EQ")
#pragma pop_macro("COMMENTS")
#pragma pop_macro("MAX_REPS")
#pragma pop_macro("UNIX_LINES")
#pragma pop_macro("MULTILINE")

#endif // _java_util_regex_Pattern_h_