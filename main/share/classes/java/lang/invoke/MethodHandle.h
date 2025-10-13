#ifndef _java_lang_invoke_MethodHandle_h_
#define _java_lang_invoke_MethodHandle_h_
//$ class java.lang.invoke.MethodHandle
//$ extends java.lang.constant.Constable

#include <java/lang/Array.h>
#include <java/lang/constant/Constable.h>

#pragma push_macro("FORM_OFFSET")
#undef FORM_OFFSET
#pragma push_macro("UPDATE_OFFSET")
#undef UPDATE_OFFSET

namespace java {
	namespace lang {
		namespace invoke {
			class BoundMethodHandle;
			class LambdaForm;
			class MemberName;
			class MethodHandleImpl$Intrinsic;
			class MethodType;
		}
	}
}
namespace java {
	namespace util {
		class List;
		class Optional;
	}
}
namespace java {
	namespace util {
		namespace function {
			class Function;
		}
	}
}

namespace java {
	namespace lang {
		namespace invoke {

class $export MethodHandle : public ::java::lang::constant::Constable {
	$class(MethodHandle, $PRELOAD, ::java::lang::constant::Constable)
public:
	MethodHandle();
	void init$(::java::lang::invoke::MethodType* type, ::java::lang::invoke::LambdaForm* form);
	virtual ::java::lang::invoke::MethodHandle* asCollector($Class* arrayType, int32_t arrayLength);
	virtual ::java::lang::invoke::MethodHandle* asCollector(int32_t collectArgPos, $Class* arrayType, int32_t arrayLength);
	virtual bool asCollectorChecks($Class* arrayType, int32_t pos, int32_t arrayLength);
	virtual ::java::lang::invoke::MethodHandle* asFixedArity();
	virtual ::java::lang::invoke::MethodHandle* asSpreader($Class* arrayType, int32_t arrayLength);
	virtual ::java::lang::invoke::MethodHandle* asSpreader(int32_t spreadArgPos, $Class* arrayType, int32_t arrayLength);
	::java::lang::invoke::MethodType* asSpreaderChecks($Class* arrayType, int32_t pos, int32_t arrayLength);
	virtual ::java::lang::invoke::MethodHandle* asType(::java::lang::invoke::MethodType* newType);
	::java::lang::invoke::MethodHandle* asTypeCached(::java::lang::invoke::MethodType* newType);
	virtual ::java::lang::invoke::MethodHandle* asTypeUncached(::java::lang::invoke::MethodType* newType);
	virtual ::java::lang::invoke::MethodHandle* asVarargsCollector($Class* arrayType);
	virtual ::java::lang::invoke::BoundMethodHandle* bindArgumentL(int32_t pos, Object$* value);
	virtual ::java::lang::invoke::MethodHandle* bindTo(Object$* x);
	virtual ::java::lang::invoke::MethodHandle* copyWith(::java::lang::invoke::MethodType* mt, ::java::lang::invoke::LambdaForm* lf) {return nullptr;}
	virtual void customize();
	virtual $String* debugString();
	virtual ::java::util::Optional* describeConstable() override;
	virtual $Class* internalCallerClass();
	virtual ::java::lang::invoke::LambdaForm* internalForm();
	virtual ::java::lang::invoke::MemberName* internalMemberName();
	virtual $Object* internalProperties();
	virtual $Object* internalValues();
	virtual $Object* intrinsicData();
	virtual ::java::lang::invoke::MethodHandleImpl$Intrinsic* intrinsicName();
	$Object* invoke($ObjectArray* args);
	$Object* invokeBasic($ObjectArray* args);
	$Object* invokeExact($ObjectArray* args);
	virtual $Object* invokeWithArguments($ObjectArray* arguments);
	virtual $Object* invokeWithArguments(::java::util::List* arguments);
	virtual bool isCrackable();
	virtual bool isInvokeSpecial();
	virtual bool isVarargsCollector();
	static $Object* linkToInterface($ObjectArray* args);
	static $Object* linkToNative($ObjectArray* args);
	static $Object* linkToSpecial($ObjectArray* args);
	static $Object* linkToStatic($ObjectArray* args);
	static $Object* linkToVirtual($ObjectArray* args);
	virtual void maybeCustomize();
	virtual ::java::lang::invoke::BoundMethodHandle* rebind() {return nullptr;}
	virtual ::java::lang::invoke::MethodHandle* setVarargs(::java::lang::invoke::MemberName* member);
	void spreadArrayChecks($Class* arrayType, int32_t arrayLength);
	virtual $String* standardString();
	virtual $String* toString() override;
	virtual ::java::lang::invoke::MethodType* type();
	virtual void updateForm(::java::util::function::Function* updater);
	virtual ::java::lang::invoke::MethodHandle* viewAsType(::java::lang::invoke::MethodType* newType, bool strict);
	virtual bool viewAsTypeChecks(::java::lang::invoke::MethodType* newType, bool strict);
	virtual ::java::lang::invoke::MethodHandle* withInternalMemberName(::java::lang::invoke::MemberName* member, bool isInvokeSpecial);
	virtual ::java::lang::invoke::MethodHandle* withVarargs(bool makeVarargs);
	static bool $assertionsDisabled;
	::java::lang::invoke::MethodType* type$ = nullptr;
	::java::lang::invoke::LambdaForm* form = nullptr;
	::java::lang::invoke::MethodHandle* asTypeCache = nullptr;
	int8_t customizationCount = 0;
	$volatile(bool) updateInProgress = false;
	static int64_t FORM_OFFSET;
	static int64_t UPDATE_OFFSET;
};

		} // invoke
	} // lang
} // java

#pragma pop_macro("FORM_OFFSET")
#pragma pop_macro("UPDATE_OFFSET")

#endif // _java_lang_invoke_MethodHandle_h_