#ifndef _java_text_CollationKey_h_
#define _java_text_CollationKey_h_
//$ class java.text.CollationKey
//$ extends java.lang.Comparable

#include <java/lang/Array.h>
#include <java/lang/Comparable.h>

namespace java {
	namespace text {

class $export CollationKey : public ::java::lang::Comparable {
	$class(CollationKey, $NO_CLASS_INIT, ::java::lang::Comparable)
public:
	CollationKey();
	void init$($String* source);
	virtual int32_t compareTo(::java::text::CollationKey* target) {return 0;}
	virtual int32_t compareTo(Object$* target) override;
	virtual $String* getSourceString();
	virtual $bytes* toByteArray() {return nullptr;}
	$String* source = nullptr;
};

	} // text
} // java

#endif // _java_text_CollationKey_h_