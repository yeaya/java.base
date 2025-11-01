#ifndef _java_lang_invoke_MemberName_h_
#define _java_lang_invoke_MemberName_h_
//$ class java.lang.invoke.MemberName
//$ extends java.lang.reflect.Member
//$ implements java.lang.Cloneable

#include <java/lang/Array.h>
#include <java/lang/Cloneable.h>
#include <java/lang/reflect/Member.h>
#include <java/lang/reflect/Modifier.h>

#pragma push_macro("ALL_ACCESS")
#undef ALL_ACCESS
#pragma push_macro("ALL_KINDS")
#undef ALL_KINDS
#pragma push_macro("ANNOTATION")
#undef ANNOTATION
#pragma push_macro("BRIDGE")
#undef BRIDGE
#pragma push_macro("CALLER_SENSITIVE")
#undef CALLER_SENSITIVE
#pragma push_macro("CONSTRUCTOR_NAME")
#undef CONSTRUCTOR_NAME
#pragma push_macro("ENUM")
#undef ENUM
#pragma push_macro("FINAL")
#undef FINAL
#pragma push_macro("IS_CONSTRUCTOR")
#undef IS_CONSTRUCTOR
#pragma push_macro("IS_FIELD")
#undef IS_FIELD
#pragma push_macro("IS_FIELD_OR_METHOD")
#undef IS_FIELD_OR_METHOD
#pragma push_macro("IS_INVOCABLE")
#undef IS_INVOCABLE
#pragma push_macro("IS_METHOD")
#undef IS_METHOD
#pragma push_macro("IS_TYPE")
#undef IS_TYPE
#pragma push_macro("MH_INVOKE_MODS")
#undef MH_INVOKE_MODS
#pragma push_macro("NATIVE")
#undef NATIVE
#pragma push_macro("PRIVATE")
#undef PRIVATE
#pragma push_macro("PROTECTED")
#undef PROTECTED
#pragma push_macro("PUBLIC")
#undef PUBLIC
#pragma push_macro("RECOGNIZED_MODIFIERS")
#undef RECOGNIZED_MODIFIERS
#pragma push_macro("SEARCH_ALL_SUPERS")
#undef SEARCH_ALL_SUPERS
#pragma push_macro("SYNTHETIC")
#undef SYNTHETIC
#pragma push_macro("TRUSTED_FINAL")
#undef TRUSTED_FINAL
#pragma push_macro("VARARGS")
#undef VARARGS

namespace java {
	namespace lang {
		class ClassLoader;
		class IllegalAccessException;
		class ReflectiveOperationException;
	}
}
namespace java {
	namespace lang {
		namespace invoke {
			class MemberName$Factory;
			class MethodType;
			class ResolvedMethodName;
		}
	}
}
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
		namespace invoke {

class MemberName : public ::java::lang::reflect::Member, public ::java::lang::Cloneable {
	$class(MemberName, $PRELOAD, ::java::lang::reflect::Member, ::java::lang::Cloneable)
public:
	MemberName();
	virtual void finalize() override;
	void init$(::java::lang::reflect::Method* m);
	void init$(::java::lang::reflect::Method* m, bool wantSpecial);
	void init$(::java::lang::reflect::Constructor* ctor);
	void init$(::java::lang::reflect::Field* fld);
	void init$(::java::lang::reflect::Field* fld, bool makeSetter);
	void init$($Class* type);
	void init$();
	void init$($Class* defClass, $String* name, $Class* type, int8_t refKind);
	void init$($Class* defClass, $String* name, ::java::lang::invoke::MethodType* type, int8_t refKind);
	void init$(int8_t refKind, $Class* defClass, $String* name, Object$* type);
	::java::lang::invoke::MemberName* asConstructor();
	::java::lang::invoke::MemberName* asNormalOriginal();
	::java::lang::invoke::MemberName* asSetter();
	::java::lang::invoke::MemberName* asSpecial();
	bool canBeStaticallyBound();
	::java::lang::invoke::MemberName* changeReferenceKind(int8_t refKind, int8_t oldKind);
	void checkForTypeAlias($Class* refc);
	virtual $Object* clone() override;
	virtual bool equals(Object$* that) override;
	bool equals(::java::lang::invoke::MemberName* that);
	void expandFromVM();
	static int32_t flagsMods(int32_t flags, int32_t mods, int8_t refKind);
	::java::lang::ClassLoader* getClassLoader();
	virtual $Class* getDeclaringClass() override;
	::java::lang::invoke::MemberName* getDefinition();
	static ::java::lang::invoke::MemberName$Factory* getFactory();
	$Class* getFieldType();
	::java::lang::invoke::MethodType* getInvocationType();
	$String* getMethodDescriptor();
	::java::lang::invoke::MethodType* getMethodOrFieldType();
	::java::lang::invoke::MethodType* getMethodType();
	virtual int32_t getModifiers() override;
	virtual $String* getName() override;
	static $String* getName(Object$* obj);
	$ClassArray* getParameterTypes();
	int8_t getReferenceKind();
	$Class* getReturnType();
	$String* getSignature();
	$Object* getType();
	bool hasReceiverTypeDispatch();
	virtual int32_t hashCode() override;
	void init($Class* defClass, $String* name, Object$* type, int32_t flags);
	void initResolved(bool isResolved);
	bool isAbstract();
	bool isAccessibleFrom($Class* lookupClass);
	bool isBridge();
	bool isCallerSensitive();
	bool isConstructor();
	bool isField();
	bool isFieldOrMethod();
	bool isFinal();
	bool isGetter();
	bool isInvocable();
	bool isMethod();
	bool isMethodHandleInvoke();
	static bool isMethodHandleInvokeName($String* name);
	bool isNative();
	bool isObjectPublicMethod();
	bool isPackage();
	bool isPrivate();
	bool isProtected();
	bool isPublic();
	bool isResolved();
	bool isSetter();
	bool isStatic();
	virtual bool isSynthetic() override;
	bool isTrustedFinalField();
	bool isType();
	bool isVarHandleMethodInvoke();
	static bool isVarHandleMethodInvokeName($String* name);
	bool isVarargs();
	bool isVolatile();
	::java::lang::IllegalAccessException* makeAccessException($String* message, Object$* from);
	::java::lang::ReflectiveOperationException* makeAccessException();
	static ::java::lang::invoke::MemberName* makeMethodHandleInvoke($String* name, ::java::lang::invoke::MethodType* type);
	static ::java::lang::invoke::MemberName* makeMethodHandleInvoke($String* name, ::java::lang::invoke::MethodType* type, int32_t mods);
	static ::java::lang::invoke::MemberName* makeVarHandleMethodInvoke($String* name, ::java::lang::invoke::MethodType* type);
	static ::java::lang::invoke::MemberName* makeVarHandleMethodInvoke($String* name, ::java::lang::invoke::MethodType* type, int32_t mods);
	$String* message();
	bool referenceKindIsConsistent();
	bool referenceKindIsConsistentWith(int32_t originalRefKind);
	bool refersTo($Class* declc, $String* n);
	bool staticIsConsistent();
	bool testAllFlags(int32_t mask);
	bool testAnyFlags(int32_t mask);
	bool testFlags(int32_t mask, int32_t value);
	virtual $String* toString() override;
	bool vminfoIsConsistent();
	static bool $assertionsDisabled;
	$Class* clazz = nullptr;
	$String* name = nullptr;
	$Object* type = nullptr;
	int32_t flags = 0;
	::java::lang::invoke::ResolvedMethodName* method = nullptr;
	$Object* resolution = nullptr;
	static const int32_t MH_INVOKE_MODS = 273; // ::java::lang::reflect::Modifier::NATIVE | ::java::lang::reflect::Modifier::FINAL | ::java::lang::reflect::Modifier::PUBLIC
	static const int32_t BRIDGE = 64;
	static const int32_t VARARGS = 128;
	static const int32_t SYNTHETIC = 4096;
	static const int32_t ANNOTATION = 8192;
	static const int32_t ENUM = 16384;
	static $String* CONSTRUCTOR_NAME;
	static const int32_t RECOGNIZED_MODIFIERS = 0x0000FFFF;
	static const int32_t IS_METHOD = 0x00010000;
	static const int32_t IS_CONSTRUCTOR = 0x00020000;
	static const int32_t IS_FIELD = 0x00040000;
	static const int32_t IS_TYPE = 0x00080000;
	static const int32_t CALLER_SENSITIVE = 0x00100000;
	static const int32_t TRUSTED_FINAL = 0x00200000;
	static const int32_t ALL_ACCESS = 7; // ::java::lang::reflect::Modifier::PUBLIC | ::java::lang::reflect::Modifier::PRIVATE | ::java::lang::reflect::Modifier::PROTECTED
	static const int32_t ALL_KINDS = 983040; // IS_METHOD | IS_CONSTRUCTOR | IS_FIELD | IS_TYPE
	static const int32_t IS_INVOCABLE = 196608; // IS_METHOD | IS_CONSTRUCTOR
	static const int32_t IS_FIELD_OR_METHOD = 327680; // IS_METHOD | IS_FIELD
	static const int32_t SEARCH_ALL_SUPERS = 3145728; // 0x00100000 | 0x00200000
public:
	int64_t vmindex = 0;
};

		} // invoke
	} // lang
} // java

#pragma pop_macro("ALL_ACCESS")
#pragma pop_macro("ALL_KINDS")
#pragma pop_macro("ANNOTATION")
#pragma pop_macro("BRIDGE")
#pragma pop_macro("CALLER_SENSITIVE")
#pragma pop_macro("CONSTRUCTOR_NAME")
#pragma pop_macro("ENUM")
#pragma pop_macro("FINAL")
#pragma pop_macro("IS_CONSTRUCTOR")
#pragma pop_macro("IS_FIELD")
#pragma pop_macro("IS_FIELD_OR_METHOD")
#pragma pop_macro("IS_INVOCABLE")
#pragma pop_macro("IS_METHOD")
#pragma pop_macro("IS_TYPE")
#pragma pop_macro("MH_INVOKE_MODS")
#pragma pop_macro("NATIVE")
#pragma pop_macro("PRIVATE")
#pragma pop_macro("PROTECTED")
#pragma pop_macro("PUBLIC")
#pragma pop_macro("RECOGNIZED_MODIFIERS")
#pragma pop_macro("SEARCH_ALL_SUPERS")
#pragma pop_macro("SYNTHETIC")
#pragma pop_macro("TRUSTED_FINAL")
#pragma pop_macro("VARARGS")

#endif // _java_lang_invoke_MemberName_h_