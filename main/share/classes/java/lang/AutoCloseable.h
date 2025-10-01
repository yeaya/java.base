#ifndef _java_lang_AutoCloseable_h_
#define _java_lang_AutoCloseable_h_
//$ interface java.lang.AutoCloseable
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace lang {

class $export AutoCloseable : public ::java::lang::Object {
	$interface(AutoCloseable, $PRELOAD | $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual void close() {}
};

	} // lang
} // java

#endif // _java_lang_AutoCloseable_h_