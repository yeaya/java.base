#ifndef _java_lang_invoke_ConstantBootstraps_h_
#define _java_lang_invoke_ConstantBootstraps_h_
//$ class java.lang.invoke.ConstantBootstraps
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace java {
	namespace lang {
		class Enum;
	}
}
namespace java {
	namespace lang {
		namespace invoke {
			class MethodHandle;
			class MethodHandles$Lookup;
			class VarHandle;
		}
	}
}

namespace java {
	namespace lang {
		namespace invoke {

class $import ConstantBootstraps : public ::java::lang::Object {
	$class(ConstantBootstraps, $NO_CLASS_INIT, ::java::lang::Object)
public:
	ConstantBootstraps();
	void init$();
	static ::java::lang::invoke::VarHandle* arrayVarHandle(::java::lang::invoke::MethodHandles$Lookup* lookup, $String* name, $Class* type, $Class* arrayClass);
	static ::java::lang::Enum* enumConstant(::java::lang::invoke::MethodHandles$Lookup* lookup, $String* name, $Class* type);
	static $Object* explicitCast(::java::lang::invoke::MethodHandles$Lookup* lookup, $String* name, $Class* dstType, Object$* value);
	static ::java::lang::invoke::VarHandle* fieldVarHandle(::java::lang::invoke::MethodHandles$Lookup* lookup, $String* name, $Class* type, $Class* declaringClass, $Class* fieldType);
	static $Object* getStaticFinal(::java::lang::invoke::MethodHandles$Lookup* lookup, $String* name, $Class* type, $Class* declaringClass);
	static $Object* getStaticFinal(::java::lang::invoke::MethodHandles$Lookup* lookup, $String* name, $Class* type);
	static $Object* invoke(::java::lang::invoke::MethodHandles$Lookup* lookup, $String* name, $Class* type, ::java::lang::invoke::MethodHandle* handle, $ObjectArray* args);
	static $Object* makeConstant(::java::lang::invoke::MethodHandle* bootstrapMethod, $String* name, $Class* type, Object$* info, $Class* callerClass);
	static $Object* nullConstant(::java::lang::invoke::MethodHandles$Lookup* lookup, $String* name, $Class* type);
	static $Class* primitiveClass(::java::lang::invoke::MethodHandles$Lookup* lookup, $String* name, $Class* type);
	static ::java::lang::invoke::VarHandle* staticFieldVarHandle(::java::lang::invoke::MethodHandles$Lookup* lookup, $String* name, $Class* type, $Class* declaringClass, $Class* fieldType);
	static $Class* validateClassAccess(::java::lang::invoke::MethodHandles$Lookup* lookup, $Class* type);
};

		} // invoke
	} // lang
} // java

#endif // _java_lang_invoke_ConstantBootstraps_h_