#ifndef _java_io_StreamTokenizer_h_
#define _java_io_StreamTokenizer_h_
//$ class java.io.StreamTokenizer
//$ extends java.lang.Object

#include <java/lang/Array.h>
#include <java/lang/Integer.h>

#pragma push_macro("CT_ALPHA")
#undef CT_ALPHA
#pragma push_macro("CT_COMMENT")
#undef CT_COMMENT
#pragma push_macro("CT_DIGIT")
#undef CT_DIGIT
#pragma push_macro("CT_QUOTE")
#undef CT_QUOTE
#pragma push_macro("CT_WHITESPACE")
#undef CT_WHITESPACE
#pragma push_macro("LINENO")
#undef LINENO
#pragma push_macro("MAX_VALUE")
#undef MAX_VALUE
#pragma push_macro("NEED_CHAR")
#undef NEED_CHAR
#pragma push_macro("SKIP_LF")
#undef SKIP_LF
#pragma push_macro("TT_EOF")
#undef TT_EOF
#pragma push_macro("TT_EOL")
#undef TT_EOL
#pragma push_macro("TT_NOTHING")
#undef TT_NOTHING
#pragma push_macro("TT_NUMBER")
#undef TT_NUMBER
#pragma push_macro("TT_WORD")
#undef TT_WORD

namespace java {
	namespace io {
		class InputStream;
		class Reader;
	}
}

namespace java {
	namespace io {

class $export StreamTokenizer : public ::java::lang::Object {
	$class(StreamTokenizer, $NO_CLASS_INIT, ::java::lang::Object)
public:
	StreamTokenizer();
	void init$();
	void init$(::java::io::InputStream* is);
	void init$(::java::io::Reader* r);
	virtual void commentChar(int32_t ch);
	virtual void eolIsSignificant(bool flag);
	virtual int32_t lineno();
	virtual void lowerCaseMode(bool fl);
	virtual int32_t nextToken();
	virtual void ordinaryChar(int32_t ch);
	virtual void ordinaryChars(int32_t low, int32_t hi);
	virtual void parseNumbers();
	virtual void pushBack();
	virtual void quoteChar(int32_t ch);
	int32_t read();
	virtual void resetSyntax();
	virtual void slashSlashComments(bool flag);
	virtual void slashStarComments(bool flag);
	virtual $String* toString() override;
	virtual void whitespaceChars(int32_t low, int32_t hi);
	virtual void wordChars(int32_t low, int32_t hi);
	::java::io::Reader* reader = nullptr;
	::java::io::InputStream* input = nullptr;
	$chars* buf = nullptr;
	int32_t peekc = 0;
	static const int32_t NEED_CHAR = ::java::lang::Integer::MAX_VALUE;
	static const int32_t SKIP_LF = 0x7FFFFFFE; // ::java::lang::Integer::MAX_VALUE - 1
	bool pushedBack = false;
	bool forceLower = false;
	int32_t LINENO = 0;
	bool eolIsSignificantP = false;
	bool slashSlashCommentsP = false;
	bool slashStarCommentsP = false;
	$bytes* ctype = nullptr;
	static const int8_t CT_WHITESPACE = 1;
	static const int8_t CT_DIGIT = 2;
	static const int8_t CT_ALPHA = 4;
	static const int8_t CT_QUOTE = 8;
	static const int8_t CT_COMMENT = 16;
	int32_t ttype = 0;
	static const int32_t TT_EOF = (-1);
	static const int32_t TT_EOL = ((char16_t)10);
	static const int32_t TT_NUMBER = (-2);
	static const int32_t TT_WORD = (-3);
	static const int32_t TT_NOTHING = (-4);
	$String* sval = nullptr;
	double nval = 0.0;
};

	} // io
} // java

#pragma pop_macro("CT_ALPHA")
#pragma pop_macro("CT_COMMENT")
#pragma pop_macro("CT_DIGIT")
#pragma pop_macro("CT_QUOTE")
#pragma pop_macro("CT_WHITESPACE")
#pragma pop_macro("LINENO")
#pragma pop_macro("MAX_VALUE")
#pragma pop_macro("NEED_CHAR")
#pragma pop_macro("SKIP_LF")
#pragma pop_macro("TT_EOF")
#pragma pop_macro("TT_EOL")
#pragma pop_macro("TT_NOTHING")
#pragma pop_macro("TT_NUMBER")
#pragma pop_macro("TT_WORD")

#endif // _java_io_StreamTokenizer_h_