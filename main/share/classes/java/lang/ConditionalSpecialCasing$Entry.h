#ifndef _java_lang_ConditionalSpecialCasing$Entry_h_
#define _java_lang_ConditionalSpecialCasing$Entry_h_
//$ class java.lang.ConditionalSpecialCasing$Entry
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace java {
	namespace lang {

class ConditionalSpecialCasing$Entry : public ::java::lang::Object {
	$class(ConditionalSpecialCasing$Entry, $NO_CLASS_INIT, ::java::lang::Object)
public:
	ConditionalSpecialCasing$Entry();
	void init$(int32_t ch, $chars* lower, $chars* upper, $String* lang, int32_t condition);
	virtual int32_t getCodePoint();
	virtual int32_t getCondition();
	virtual $String* getLanguage();
	virtual $chars* getLowerCase();
	virtual $chars* getUpperCase();
	int32_t ch = 0;
	$chars* lower = nullptr;
	$chars* upper = nullptr;
	$String* lang = nullptr;
	int32_t condition = 0;
};

	} // lang
} // java

#endif // _java_lang_ConditionalSpecialCasing$Entry_h_