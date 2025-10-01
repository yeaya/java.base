#ifndef _java_lang_ClassValue$Entry_h_
#define _java_lang_ClassValue$Entry_h_
//$ class java.lang.ClassValue$Entry
//$ extends java.lang.ref.WeakReference

#include <java/lang/ref/WeakReference.h>

#pragma push_macro("DEAD_ENTRY")
#undef DEAD_ENTRY

namespace java {
	namespace lang {
		class ClassValue;
		class ClassValue$Version;
	}
}

namespace java {
	namespace lang {

class $export ClassValue$Entry : public ::java::lang::ref::WeakReference {
	$class(ClassValue$Entry, 0, ::java::lang::ref::WeakReference)
public:
	ClassValue$Entry();
	void init$(::java::lang::ClassValue$Version* version, Object$* value);
	void init$(::java::lang::ClassValue$Version* version);
	void assertNotPromise();
	virtual ::java::lang::ClassValue* classValueOrNull();
	virtual bool isLive();
	virtual bool isPromise();
	virtual ::java::lang::ClassValue$Entry* refreshVersion(::java::lang::ClassValue$Version* v2);
	virtual $Object* value();
	virtual ::java::lang::ClassValue$Version* version();
	static bool $assertionsDisabled;
	$Object* value$ = nullptr;
	static ::java::lang::ClassValue$Entry* DEAD_ENTRY;
};

	} // lang
} // java

#pragma pop_macro("DEAD_ENTRY")

#endif // _java_lang_ClassValue$Entry_h_