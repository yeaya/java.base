#ifndef _java_util_StringTokenizer_h_
#define _java_util_StringTokenizer_h_
//$ class java.util.StringTokenizer
//$ extends java.util.Enumeration

#include <java/lang/Array.h>
#include <java/util/Enumeration.h>

namespace java {
	namespace util {

class $import StringTokenizer : public ::java::util::Enumeration {
	$class(StringTokenizer, $NO_CLASS_INIT, ::java::util::Enumeration)
public:
	StringTokenizer();
	void init$($String* str, $String* delim, bool returnDelims);
	void init$($String* str, $String* delim);
	void init$($String* str);
	virtual int32_t countTokens();
	virtual bool hasMoreElements() override;
	virtual bool hasMoreTokens();
	bool isDelimiter(int32_t codePoint);
	virtual $Object* nextElement() override;
	virtual $String* nextToken();
	virtual $String* nextToken($String* delim);
	int32_t scanToken(int32_t startPos);
	void setMaxDelimCodePoint();
	int32_t skipDelimiters(int32_t startPos);
	int32_t currentPosition = 0;
	int32_t newPosition = 0;
	int32_t maxPosition = 0;
	$String* str = nullptr;
	$String* delimiters = nullptr;
	bool retDelims = false;
	bool delimsChanged = false;
	int32_t maxDelimCodePoint = 0;
	bool hasSurrogates = false;
	$ints* delimiterCodePoints = nullptr;
};

	} // util
} // java

#endif // _java_util_StringTokenizer_h_