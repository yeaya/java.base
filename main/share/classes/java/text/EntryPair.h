#ifndef _java_text_EntryPair_h_
#define _java_text_EntryPair_h_
//$ class java.text.EntryPair
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace text {

class EntryPair : public ::java::lang::Object {
	$class(EntryPair, $NO_CLASS_INIT, ::java::lang::Object)
public:
	EntryPair();
	void init$($String* name, int32_t value);
	void init$($String* name, int32_t value, bool fwd);
	$String* entryName = nullptr;
	int32_t value = 0;
	bool fwd = false;
};

	} // text
} // java

#endif // _java_text_EntryPair_h_