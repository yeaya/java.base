#ifndef _PParser_h_
#define _PParser_h_
//$ class PParser
//$ extends java.lang.Object

#include <java/lang/Array.h>

#pragma push_macro("MORE")
#undef MORE
#pragma push_macro("EQUAL")
#undef EQUAL
#pragma push_macro("STRING")
#undef STRING
#pragma push_macro("OPEN_PAIR")
#undef OPEN_PAIR
#pragma push_macro("CLOSE_PAIR")
#undef CLOSE_PAIR
#pragma push_macro("WS")
#undef WS
#pragma push_macro("OPEN_ARRAY")
#undef OPEN_ARRAY
#pragma push_macro("CLOSE_ARRAY")
#undef CLOSE_ARRAY

namespace java {
	namespace io {
		class Reader;
	}
}
namespace java {
	namespace lang {
		class StringBuffer;
	}
}
namespace java {
	namespace util {
		class Map;
	}
}

class $export PParser : public ::java::lang::Object {
	$class(PParser, $NO_CLASS_INIT, ::java::lang::Object)
public:
	PParser();
	void init$();
	static void dump(Object$* o);
	virtual void error($String* errorString);
	virtual int32_t getToken();
	virtual int32_t getToken(bool wantsWS, bool inString);
	static void lambda$dump$0(Object$* l);
	static void lambda$dump$1(::java::util::Map* ht, $String* l);
	static void main($StringArray* args);
	virtual ::java::util::Map* parse(::java::io::Reader* r);
	virtual $Object* parseArray();
	virtual ::java::util::Map* parsePair();
	virtual $Object* parseValue(int32_t lookAhead);
	virtual void ungetToken();
	static const int32_t OPEN_PAIR = 1;
	static const int32_t CLOSE_PAIR = 2;
	static const int32_t OPEN_ARRAY = 3;
	static const int32_t CLOSE_ARRAY = 4;
	static const int32_t MORE = 5;
	static const int32_t EQUAL = 6;
	static const int32_t STRING = 7;
	static const int32_t WS = 8;
	::java::io::Reader* reader = nullptr;
	bool bufferedToken = false;
	::java::lang::StringBuffer* stringBuffer = nullptr;
	int32_t lastChar = 0;
	int32_t lastToken = 0;
	int32_t lineNumber = 0;
	int32_t column = 0;
};

#pragma pop_macro("MORE")
#pragma pop_macro("EQUAL")
#pragma pop_macro("STRING")
#pragma pop_macro("OPEN_PAIR")
#pragma pop_macro("CLOSE_PAIR")
#pragma pop_macro("WS")
#pragma pop_macro("OPEN_ARRAY")
#pragma pop_macro("CLOSE_ARRAY")

#endif // _PParser_h_