#ifndef _jdk_internal_access_JavaLangReflectAccess_h_
#define _jdk_internal_access_JavaLangReflectAccess_h_
//$ interface jdk.internal.access.JavaLangReflectAccess
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace java {
	namespace lang {
		namespace reflect {
			class AccessibleObject;
			class Constructor;
			class Executable;
			class Field;
			class Method;
		}
	}
}
namespace jdk {
	namespace internal {
		namespace reflect {
			class ConstructorAccessor;
			class MethodAccessor;
		}
	}
}

namespace jdk {
	namespace internal {
		namespace access {

class $import JavaLangReflectAccess : public ::java::lang::Object {
	$interface(JavaLangReflectAccess, $PRELOAD | $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual ::java::lang::reflect::Constructor* copyConstructor(::java::lang::reflect::Constructor* arg) {return nullptr;}
	virtual ::java::lang::reflect::Field* copyField(::java::lang::reflect::Field* arg) {return nullptr;}
	virtual ::java::lang::reflect::Method* copyMethod(::java::lang::reflect::Method* arg) {return nullptr;}
	virtual ::jdk::internal::reflect::ConstructorAccessor* getConstructorAccessor(::java::lang::reflect::Constructor* c) {return nullptr;}
	virtual $bytes* getConstructorAnnotations(::java::lang::reflect::Constructor* c) {return nullptr;}
	virtual $bytes* getConstructorParameterAnnotations(::java::lang::reflect::Constructor* c) {return nullptr;}
	virtual $String* getConstructorSignature(::java::lang::reflect::Constructor* c) {return nullptr;}
	virtual int32_t getConstructorSlot(::java::lang::reflect::Constructor* c) {return 0;}
	virtual $ClassArray* getExecutableSharedParameterTypes(::java::lang::reflect::Executable* ex) {return nullptr;}
	virtual $bytes* getExecutableTypeAnnotationBytes(::java::lang::reflect::Executable* ex) {return nullptr;}
	virtual ::jdk::internal::reflect::MethodAccessor* getMethodAccessor(::java::lang::reflect::Method* m) {return nullptr;}
	virtual ::java::lang::reflect::AccessibleObject* getRoot(::java::lang::reflect::AccessibleObject* obj) {return nullptr;}
	virtual bool isTrustedFinalField(::java::lang::reflect::Field* f) {return false;}
	virtual ::java::lang::reflect::Method* leafCopyMethod(::java::lang::reflect::Method* arg) {return nullptr;}
	virtual ::java::lang::reflect::Constructor* newConstructor($Class* declaringClass, $ClassArray* parameterTypes, $ClassArray* checkedExceptions, int32_t modifiers, int32_t slot, $String* signature, $bytes* annotations, $bytes* parameterAnnotations) {return nullptr;}
	virtual $Object* newInstance(::java::lang::reflect::Constructor* ctor, $ObjectArray* args, $Class* caller) {return nullptr;}
	virtual void setConstructorAccessor(::java::lang::reflect::Constructor* c, ::jdk::internal::reflect::ConstructorAccessor* accessor) {}
	virtual void setMethodAccessor(::java::lang::reflect::Method* m, ::jdk::internal::reflect::MethodAccessor* accessor) {}
};

		} // access
	} // internal
} // jdk

#endif // _jdk_internal_access_JavaLangReflectAccess_h_