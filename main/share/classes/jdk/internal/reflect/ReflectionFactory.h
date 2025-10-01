#ifndef _jdk_internal_reflect_ReflectionFactory_h_
#define _jdk_internal_reflect_ReflectionFactory_h_
//$ class jdk.internal.reflect.ReflectionFactory
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace java {
	namespace lang {
		namespace invoke {
			class MethodHandle;
		}
	}
}
namespace java {
	namespace lang {
		namespace reflect {
			class Constructor;
			class Executable;
			class Field;
			class Method;
		}
	}
}
namespace jdk {
	namespace internal {
		namespace access {
			class JavaLangReflectAccess;
		}
	}
}
namespace jdk {
	namespace internal {
		namespace reflect {
			class ConstructorAccessor;
			class FieldAccessor;
			class MethodAccessor;
		}
	}
}

namespace jdk {
	namespace internal {
		namespace reflect {

class $export ReflectionFactory : public ::java::lang::Object {
	$class(ReflectionFactory, $PRELOAD, ::java::lang::Object)
public:
	ReflectionFactory();
	void init$();
	static void checkInitted();
	virtual ::java::lang::reflect::Constructor* copyConstructor(::java::lang::reflect::Constructor* arg);
	virtual ::java::lang::reflect::Field* copyField(::java::lang::reflect::Field* arg);
	virtual ::java::lang::reflect::Method* copyMethod(::java::lang::reflect::Method* arg);
	static ::java::lang::reflect::Method* findMethodForReflection(::java::lang::reflect::Method* method);
	::java::lang::invoke::MethodHandle* findReadWriteObjectForSerialization($Class* cl, $String* methodName, $Class* streamClass);
	::java::lang::reflect::Constructor* generateConstructor($Class* cl, ::java::lang::reflect::Constructor* constructorToCall);
	virtual ::jdk::internal::reflect::ConstructorAccessor* getConstructorAccessor(::java::lang::reflect::Constructor* c);
	virtual $ClassArray* getExecutableSharedParameterTypes(::java::lang::reflect::Executable* ex);
	virtual $bytes* getExecutableTypeAnnotationBytes(::java::lang::reflect::Executable* ex);
	static ::jdk::internal::reflect::ReflectionFactory* getReflectionFactory();
	::java::lang::invoke::MethodHandle* getReplaceResolveForSerialization($Class* cl, $String* methodName);
	bool hasStaticInitializerForSerialization($Class* cl);
	static int32_t inflationThreshold();
	virtual ::java::lang::reflect::Method* leafCopyMethod(::java::lang::reflect::Method* arg);
	virtual ::java::lang::reflect::Constructor* newConstructor($Class* declaringClass, $ClassArray* parameterTypes, $ClassArray* checkedExceptions, int32_t modifiers, int32_t slot, $String* signature, $bytes* annotations, $bytes* parameterAnnotations);
	virtual ::jdk::internal::reflect::ConstructorAccessor* newConstructorAccessor(::java::lang::reflect::Constructor* c);
	::java::lang::reflect::Constructor* newConstructorForExternalization($Class* cl);
	::java::lang::reflect::Constructor* newConstructorForSerialization($Class* cl, ::java::lang::reflect::Constructor* constructorToCall);
	::java::lang::reflect::Constructor* newConstructorForSerialization($Class* cl);
	virtual ::jdk::internal::reflect::FieldAccessor* newFieldAccessor(::java::lang::reflect::Field* field, bool override$);
	virtual $Object* newInstance(::java::lang::reflect::Constructor* ctor, $ObjectArray* args, $Class* caller);
	virtual ::jdk::internal::reflect::MethodAccessor* newMethodAccessor(::java::lang::reflect::Method* method);
	::java::lang::reflect::Constructor* newOptionalDataExceptionForSerialization();
	static bool packageEquals($Class* cl1, $Class* cl2);
	::java::lang::invoke::MethodHandle* readObjectForSerialization($Class* cl);
	::java::lang::invoke::MethodHandle* readObjectNoDataForSerialization($Class* cl);
	::java::lang::invoke::MethodHandle* readResolveForSerialization($Class* cl);
	virtual void setConstructorAccessor(::java::lang::reflect::Constructor* c, ::jdk::internal::reflect::ConstructorAccessor* accessor);
	bool superHasAccessibleConstructor($Class* cl);
	::java::lang::invoke::MethodHandle* writeObjectForSerialization($Class* cl);
	::java::lang::invoke::MethodHandle* writeReplaceForSerialization($Class* cl);
	static bool $assertionsDisabled;
	static bool initted;
	static ::jdk::internal::reflect::ReflectionFactory* soleInstance;
	static $volatile(::java::lang::reflect::Method*) hasStaticInitializerMethod;
	static bool noInflation;
	static int32_t inflationThreshold$;
	static bool disableSerialConstructorChecks;
	::jdk::internal::access::JavaLangReflectAccess* langReflectAccess = nullptr;
};

		} // reflect
	} // internal
} // jdk

#endif // _jdk_internal_reflect_ReflectionFactory_h_