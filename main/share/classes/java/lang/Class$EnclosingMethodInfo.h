#ifndef _java_lang_Class$EnclosingMethodInfo_h_
#define _java_lang_Class$EnclosingMethodInfo_h_
//$ class java.lang.Class$EnclosingMethodInfo
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace java {
	namespace lang {

class Class$EnclosingMethodInfo : public ::java::lang::Object {
	$class(Class$EnclosingMethodInfo, 0, ::java::lang::Object)
public:
	Class$EnclosingMethodInfo();
	void init$($ObjectArray* enclosingInfo);
	$String* getDescriptor();
	$Class* getEnclosingClass();
	$String* getName();
	bool isConstructor();
	bool isMethod();
	bool isPartial();
	static void validate($ObjectArray* enclosingInfo);
	static bool $assertionsDisabled;
	$Class* enclosingClass = nullptr;
	$String* name = nullptr;
	$String* descriptor = nullptr;
};

	} // lang
} // java

#endif // _java_lang_Class$EnclosingMethodInfo_h_