#ifndef _sun_util_locale_StringTokenIterator_h_
#define _sun_util_locale_StringTokenIterator_h_
//$ class sun.util.locale.StringTokenIterator
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace sun {
	namespace util {
		namespace locale {

class StringTokenIterator : public ::java::lang::Object {
	$class(StringTokenIterator, $NO_CLASS_INIT, ::java::lang::Object)
public:
	StringTokenIterator();
	void init$($String* text, $String* dlms);
	virtual $String* current();
	virtual int32_t currentEnd();
	virtual int32_t currentStart();
	virtual $String* first();
	virtual bool hasNext();
	virtual bool isDone();
	virtual $String* next();
	int32_t nextDelimiter(int32_t start);
	virtual ::sun::util::locale::StringTokenIterator* setStart(int32_t offset);
	virtual ::sun::util::locale::StringTokenIterator* setText($String* text);
	$String* text = nullptr;
	$String* dlms = nullptr;
	char16_t delimiterChar = 0;
	$String* token = nullptr;
	int32_t start = 0;
	int32_t end = 0;
	bool done = false;
};

		} // locale
	} // util
} // sun

#endif // _sun_util_locale_StringTokenIterator_h_