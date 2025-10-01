#ifndef _java_lang_PublicMethods$MethodList_h_
#define _java_lang_PublicMethods$MethodList_h_
//$ class java.lang.PublicMethods$MethodList
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace java {
	namespace lang {
		namespace reflect {
			class Method;
		}
	}
}

namespace java {
	namespace lang {

class PublicMethods$MethodList : public ::java::lang::Object {
	$class(PublicMethods$MethodList, $PRELOAD | $NO_CLASS_INIT, ::java::lang::Object)
public:
	PublicMethods$MethodList();
	void init$(::java::lang::reflect::Method* method);
	static ::java::lang::PublicMethods$MethodList* filter($Array<::java::lang::reflect::Method>* methods, $String* name, $ClassArray* ptypes, bool includeStatic);
	::java::lang::reflect::Method* getMostSpecific();
	int32_t length();
	static ::java::lang::PublicMethods$MethodList* merge(::java::lang::PublicMethods$MethodList* head, ::java::lang::PublicMethods$MethodList* methodList);
	static ::java::lang::PublicMethods$MethodList* merge(::java::lang::PublicMethods$MethodList* head, ::java::lang::reflect::Method* method);
	::java::lang::reflect::Method* method = nullptr;
	::java::lang::PublicMethods$MethodList* next = nullptr;
};

	} // lang
} // java

#endif // _java_lang_PublicMethods$MethodList_h_