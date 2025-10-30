#ifndef _java_lang_Class$ReflectionData_h_
#define _java_lang_Class$ReflectionData_h_
//$ class java.lang.Class$ReflectionData
//$ extends java.lang.Object

#include <java/lang/Array.h>
#include <java/lang/ClassEntry.h>

namespace jdk {
	namespace internal {
		namespace reflect {
			class ConstantPool;
		}
	}
}

#pragma push_macro("NULL_SENTINEL")
#undef NULL_SENTINEL

namespace java {
	namespace lang {
		namespace reflect {
			class Constructor;
			class Field;
			class Method;
		}
	}
}

namespace java {
	namespace lang {

class Class$ReflectionData : public ::java::lang::Object {
	$class(Class$ReflectionData, $PRELOAD, ::java::lang::Object)
public:
	Class$ReflectionData();
	void init$(int32_t redefinedCount);
	$volatile($Array<::java::lang::reflect::Field>*) declaredFields = nullptr;
	$volatile($Array<::java::lang::reflect::Field>*) publicFields = nullptr;
	$volatile($Array<::java::lang::reflect::Method>*) declaredMethods = nullptr;
	$volatile($Array<::java::lang::reflect::Method>*) publicMethods = nullptr;
	$volatile($Array<::java::lang::reflect::Constructor>*) declaredConstructors = nullptr;
	$volatile($Array<::java::lang::reflect::Constructor>*) publicConstructors = nullptr;
	$volatile($Array<::java::lang::reflect::Field>*) declaredPublicFields = nullptr;
	$volatile($Array<::java::lang::reflect::Method>*) declaredPublicMethods = nullptr;
	$volatile($ClassArray*) interfaces = nullptr;
	$String* simpleName = nullptr;
	$String* canonicalName = nullptr;
	static $String* NULL_SENTINEL;
	int32_t redefinedCount = 0;
	::jdk::internal::reflect::ConstantPool* constantPool = nullptr;
	String* genericSignature = nullptr;
	$ClassArray* declaredClasses = nullptr;
	$ObjectArray* enclosingMethod = nullptr;
	$ClassArray* nestMembers = nullptr;
};

	} // lang
} // java

#pragma pop_macro("NULL_SENTINEL")

#endif // _java_lang_Class$ReflectionData_h_