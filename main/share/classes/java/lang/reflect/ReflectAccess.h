#ifndef _java_lang_reflect_ReflectAccess_h_
#define _java_lang_reflect_ReflectAccess_h_
//$ class java.lang.reflect.ReflectAccess
//$ extends jdk.internal.access.JavaLangReflectAccess

#include <java/lang/Array.h>
#include <jdk/internal/access/JavaLangReflectAccess.h>

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

namespace java {
	namespace lang {
		namespace reflect {

class ReflectAccess : public ::jdk::internal::access::JavaLangReflectAccess {
	$class(ReflectAccess, $PRELOAD | $NO_CLASS_INIT, ::jdk::internal::access::JavaLangReflectAccess)
public:
	ReflectAccess();
	void init$();
	virtual ::java::lang::reflect::Constructor* copyConstructor(::java::lang::reflect::Constructor* arg) override;
	virtual ::java::lang::reflect::Field* copyField(::java::lang::reflect::Field* arg) override;
	virtual ::java::lang::reflect::Method* copyMethod(::java::lang::reflect::Method* arg) override;
	virtual ::jdk::internal::reflect::ConstructorAccessor* getConstructorAccessor(::java::lang::reflect::Constructor* c) override;
	virtual $bytes* getConstructorAnnotations(::java::lang::reflect::Constructor* c) override;
	virtual $bytes* getConstructorParameterAnnotations(::java::lang::reflect::Constructor* c) override;
	virtual $String* getConstructorSignature(::java::lang::reflect::Constructor* c) override;
	virtual int32_t getConstructorSlot(::java::lang::reflect::Constructor* c) override;
	virtual $ClassArray* getExecutableSharedParameterTypes(::java::lang::reflect::Executable* ex) override;
	virtual $bytes* getExecutableTypeAnnotationBytes(::java::lang::reflect::Executable* ex) override;
	virtual ::jdk::internal::reflect::MethodAccessor* getMethodAccessor(::java::lang::reflect::Method* m) override;
	virtual ::java::lang::reflect::AccessibleObject* getRoot(::java::lang::reflect::AccessibleObject* obj) override;
	virtual bool isTrustedFinalField(::java::lang::reflect::Field* f) override;
	virtual ::java::lang::reflect::Method* leafCopyMethod(::java::lang::reflect::Method* arg) override;
	virtual ::java::lang::reflect::Constructor* newConstructor($Class* declaringClass, $ClassArray* parameterTypes, $ClassArray* checkedExceptions, int32_t modifiers, int32_t slot, $String* signature, $bytes* annotations, $bytes* parameterAnnotations) override;
	virtual $Object* newInstance(::java::lang::reflect::Constructor* ctor, $ObjectArray* args, $Class* caller) override;
	virtual void setConstructorAccessor(::java::lang::reflect::Constructor* c, ::jdk::internal::reflect::ConstructorAccessor* accessor) override;
	virtual void setMethodAccessor(::java::lang::reflect::Method* m, ::jdk::internal::reflect::MethodAccessor* accessor) override;
};

		} // reflect
	} // lang
} // java

#endif // _java_lang_reflect_ReflectAccess_h_