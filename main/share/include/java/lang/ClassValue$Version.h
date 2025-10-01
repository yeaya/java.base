#ifndef _java_lang_ClassValue$Version_h_
#define _java_lang_ClassValue$Version_h_
//$ class java.lang.ClassValue$Version
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace lang {
		class ClassValue;
		class ClassValue$Entry;
	}
}

namespace java {
	namespace lang {

class $import ClassValue$Version : public ::java::lang::Object {
	$class(ClassValue$Version, $NO_CLASS_INIT, ::java::lang::Object)
public:
	ClassValue$Version();
	void init$(::java::lang::ClassValue* classValue);
	virtual ::java::lang::ClassValue* classValue();
	virtual bool isLive();
	virtual ::java::lang::ClassValue$Entry* promise();
	::java::lang::ClassValue* classValue$ = nullptr;
	::java::lang::ClassValue$Entry* promise$ = nullptr;
};

	} // lang
} // java

#endif // _java_lang_ClassValue$Version_h_