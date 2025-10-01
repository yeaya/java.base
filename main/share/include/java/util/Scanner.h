#ifndef _java_util_Scanner_h_
#define _java_util_Scanner_h_
//$ class java.util.Scanner
//$ extends java.util.Iterator
//$ implements java.io.Closeable

#include <java/io/Closeable.h>
#include <java/util/Iterator.h>

#pragma push_macro("FIND_ANY_PATTERN")
#undef FIND_ANY_PATTERN
#pragma push_macro("SIMPLE_GROUP_INDEX")
#undef SIMPLE_GROUP_INDEX
#pragma push_macro("LINE_SEPARATOR_PATTERN")
#undef LINE_SEPARATOR_PATTERN
#pragma push_macro("WHITESPACE_PATTERN")
#undef WHITESPACE_PATTERN
#pragma push_macro("NON_ASCII_DIGIT")
#undef NON_ASCII_DIGIT
#pragma push_macro("BUFFER_SIZE")
#undef BUFFER_SIZE
#pragma push_macro("BOOLEAN_PATTERN")
#undef BOOLEAN_PATTERN
#pragma push_macro("LINE_PATTERN")
#undef LINE_PATTERN

namespace java {
	namespace io {
		class File;
		class IOException;
		class InputStream;
	}
}
namespace java {
	namespace lang {
		class Readable;
	}
}
namespace java {
	namespace math {
		class BigDecimal;
		class BigInteger;
	}
}
namespace java {
	namespace nio {
		class CharBuffer;
	}
}
namespace java {
	namespace nio {
		namespace channels {
			class ReadableByteChannel;
		}
	}
}
namespace java {
	namespace nio {
		namespace charset {
			class Charset;
			class CharsetDecoder;
		}
	}
}
namespace java {
	namespace nio {
		namespace file {
			class Path;
		}
	}
}
namespace java {
	namespace util {
		class Locale;
		class Scanner$PatternLRUCache;
	}
}
namespace java {
	namespace util {
		namespace regex {
			class MatchResult;
			class Matcher;
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

class $import Scanner : public ::java::util::Iterator, public ::java::io::Closeable {
	$class(Scanner, 0, ::java::util::Iterator, ::java::io::Closeable)
public:
	Scanner();
	virtual ::java::lang::Object0* toObject0$() const override {return (::java::lang::Object0*)(void*)this;}
	virtual $Object* clone() override;
	virtual bool equals(Object$* obj) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$(::java::lang::Readable* source, ::java::util::regex::Pattern* pattern);
	void init$(::java::lang::Readable* source);
	void init$(::java::io::InputStream* source);
	void init$(::java::io::InputStream* source, $String* charsetName);
	void init$(::java::io::InputStream* source, ::java::nio::charset::Charset* charset);
	void init$(::java::io::File* source);
	void init$(::java::io::File* source, $String* charsetName);
	void init$(::java::io::File* source, ::java::nio::charset::Charset* charset);
	void init$(::java::io::File* source, ::java::nio::charset::CharsetDecoder* dec);
	void init$(::java::nio::file::Path* source);
	void init$(::java::nio::file::Path* source, $String* charsetName);
	void init$(::java::nio::file::Path* source, ::java::nio::charset::Charset* charset);
	void init$($String* source);
	void init$(::java::nio::channels::ReadableByteChannel* source);
	void init$(::java::nio::channels::ReadableByteChannel* source, $String* charsetName);
	void init$(::java::nio::channels::ReadableByteChannel* source, ::java::nio::charset::Charset* charset);
	static ::java::util::regex::Pattern* boolPattern();
	void buildFloatAndDecimalPattern();
	$String* buildIntegerPatternString();
	void cacheResult();
	void cacheResult($String* result);
	void clearCaches();
	virtual void close() override;
	::java::util::regex::Pattern* decimalPattern();
	::java::util::regex::Pattern* delimiter();
	void ensureOpen();
	::java::util::stream::Stream* findAll(::java::util::regex::Pattern* pattern);
	::java::util::stream::Stream* findAll($String* patString);
	$String* findInLine($String* pattern);
	$String* findInLine(::java::util::regex::Pattern* pattern);
	bool findPatternInBuffer(::java::util::regex::Pattern* pattern, int32_t horizon);
	$String* findWithinHorizon($String* pattern, int32_t horizon);
	$String* findWithinHorizon(::java::util::regex::Pattern* pattern, int32_t horizon);
	::java::util::regex::Pattern* floatPattern();
	$String* getCachedResult();
	$String* getCompleteTokenInBuffer(::java::util::regex::Pattern* pattern);
	virtual bool hasNext() override;
	bool hasNext($String* pattern);
	bool hasNext(::java::util::regex::Pattern* pattern);
	bool hasNextBigDecimal();
	bool hasNextBigInteger();
	bool hasNextBigInteger(int32_t radix);
	bool hasNextBoolean();
	bool hasNextByte();
	bool hasNextByte(int32_t radix);
	bool hasNextDouble();
	bool hasNextFloat();
	bool hasNextInt();
	bool hasNextInt(int32_t radix);
	bool hasNextLine();
	bool hasNextLong();
	bool hasNextLong(int32_t radix);
	bool hasNextShort();
	bool hasNextShort(int32_t radix);
	bool hasTokenInBuffer();
	::java::util::regex::Pattern* integerPattern();
	::java::io::IOException* ioException();
	static ::java::util::regex::Pattern* linePattern();
	::java::util::Locale* locale();
	static ::java::lang::Readable* makeReadable(::java::nio::file::Path* source, ::java::nio::charset::Charset* charset);
	static ::java::lang::Readable* makeReadable(::java::io::InputStream* source, ::java::nio::charset::Charset* charset);
	static ::java::lang::Readable* makeReadable(::java::nio::channels::ReadableByteChannel* source, ::java::nio::charset::CharsetDecoder* dec);
	static ::java::lang::Readable* makeReadable(::java::nio::channels::ReadableByteChannel* source, ::java::nio::charset::Charset* charset);
	static ::java::lang::Readable* makeReadable(::java::nio::channels::ReadableByteChannel* source);
	bool makeSpace();
	::java::util::regex::MatchResult* match();
	bool matchPatternInBuffer(::java::util::regex::Pattern* pattern);
	virtual $Object* next() override;
	$String* next($String* pattern);
	$String* next(::java::util::regex::Pattern* pattern);
	::java::math::BigDecimal* nextBigDecimal();
	::java::math::BigInteger* nextBigInteger();
	::java::math::BigInteger* nextBigInteger(int32_t radix);
	bool nextBoolean();
	int8_t nextByte();
	int8_t nextByte(int32_t radix);
	double nextDouble();
	float nextFloat();
	int32_t nextInt();
	int32_t nextInt(int32_t radix);
	$String* nextLine();
	int64_t nextLong();
	int64_t nextLong(int32_t radix);
	int16_t nextShort();
	int16_t nextShort(int32_t radix);
	$String* processFloatToken($String* token);
	$String* processIntegerToken($String* token);
	int32_t radix();
	void readInput();
	virtual void remove() override;
	::java::util::Scanner* reset();
	void revertState();
	bool revertState(bool b);
	void saveState();
	static ::java::util::regex::Pattern* separatorPattern();
	void setRadix(int32_t radix);
	::java::util::Scanner* skip(::java::util::regex::Pattern* pattern);
	::java::util::Scanner* skip($String* pattern);
	void throwFor();
	static ::java::nio::charset::Charset* toCharset($String* csn);
	static ::java::nio::charset::CharsetDecoder* toDecoder($String* charsetName);
	virtual $String* toString() override;
	::java::util::stream::Stream* tokens();
	void translateSavedIndexes(int32_t offset);
	::java::util::Scanner* useDelimiter(::java::util::regex::Pattern* pattern);
	::java::util::Scanner* useDelimiter($String* pattern);
	::java::util::Scanner* useLocale(::java::util::Locale* locale);
	::java::util::Scanner* useRadix(int32_t radix);
	void useTypeCache();
	static bool $assertionsDisabled;
	::java::nio::CharBuffer* buf = nullptr;
	static const int32_t BUFFER_SIZE = 1024;
	int32_t position = 0;
	::java::util::regex::Matcher* matcher = nullptr;
	::java::util::regex::Pattern* delimPattern = nullptr;
	::java::util::regex::Pattern* hasNextPattern = nullptr;
	int32_t hasNextPosition = 0;
	$String* hasNextResult = nullptr;
	::java::lang::Readable* source = nullptr;
	bool sourceClosed = false;
	bool needInput = false;
	bool skipped = false;
	int32_t savedScannerPosition = 0;
	$Object* typeCache = nullptr;
	bool matchValid = false;
	bool closed = false;
	int32_t radix$ = 0;
	int32_t defaultRadix = 0;
	::java::util::Locale* locale$ = nullptr;
	::java::util::Scanner$PatternLRUCache* patternCache = nullptr;
	::java::io::IOException* lastException = nullptr;
	int32_t modCount = 0;
	static ::java::util::regex::Pattern* WHITESPACE_PATTERN;
	static ::java::util::regex::Pattern* FIND_ANY_PATTERN;
	static ::java::util::regex::Pattern* NON_ASCII_DIGIT;
	$String* groupSeparator = nullptr;
	$String* decimalSeparator = nullptr;
	$String* nanString = nullptr;
	$String* infinityString = nullptr;
	$String* positivePrefix = nullptr;
	$String* negativePrefix = nullptr;
	$String* positiveSuffix = nullptr;
	$String* negativeSuffix = nullptr;
	static $volatile(::java::util::regex::Pattern*) boolPattern$;
	static $String* BOOLEAN_PATTERN;
	::java::util::regex::Pattern* integerPattern$ = nullptr;
	$String* digits = nullptr;
	$String* non0Digit = nullptr;
	int32_t SIMPLE_GROUP_INDEX = 0;
	static $volatile(::java::util::regex::Pattern*) separatorPattern$;
	static $volatile(::java::util::regex::Pattern*) linePattern$;
	static $String* LINE_SEPARATOR_PATTERN;
	static $String* LINE_PATTERN;
	::java::util::regex::Pattern* floatPattern$ = nullptr;
	::java::util::regex::Pattern* decimalPattern$ = nullptr;
};

	} // util
} // java

#pragma pop_macro("FIND_ANY_PATTERN")
#pragma pop_macro("SIMPLE_GROUP_INDEX")
#pragma pop_macro("LINE_SEPARATOR_PATTERN")
#pragma pop_macro("WHITESPACE_PATTERN")
#pragma pop_macro("NON_ASCII_DIGIT")
#pragma pop_macro("BUFFER_SIZE")
#pragma pop_macro("BOOLEAN_PATTERN")
#pragma pop_macro("LINE_PATTERN")

#endif // _java_util_Scanner_h_