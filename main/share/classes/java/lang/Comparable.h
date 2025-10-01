#ifndef _java_lang_Comparable_h_
#define _java_lang_Comparable_h_
//$ interface java.lang.Comparable
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace lang {

class $export Comparable : public ::java::lang::Object {
	$interface(Comparable, $PRELOAD | $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual int32_t compareTo(Object$* o) {return 0;}
};

	} // lang
} // java

#endif // _java_lang_Comparable_h_