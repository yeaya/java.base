#ifndef _java_lang_invoke_DirectMethodHandle_h_
#define _java_lang_invoke_DirectMethodHandle_h_
//$ class java.lang.invoke.DirectMethodHandle
//$ extends java.lang.invoke.MethodHandle

#include <java/lang/Array.h>
#include <java/lang/invoke/MethodHandle.h>

#pragma push_macro("ACCESSOR_FORMS")
#undef ACCESSOR_FORMS
#pragma push_macro("AF_GETFIELD")
#undef AF_GETFIELD
#pragma push_macro("AF_GETSTATIC")
#undef AF_GETSTATIC
#pragma push_macro("AF_GETSTATIC_INIT")
#undef AF_GETSTATIC_INIT
#pragma push_macro("AF_LIMIT")
#undef AF_LIMIT
#pragma push_macro("AF_PUTFIELD")
#undef AF_PUTFIELD
#pragma push_macro("AF_PUTSTATIC")
#undef AF_PUTSTATIC
#pragma push_macro("AF_PUTSTATIC_INIT")
#undef AF_PUTSTATIC_INIT
#pragma push_macro("ALL_WRAPPERS")
#undef ALL_WRAPPERS
#pragma push_macro("FT_CHECKED_REF")
#undef FT_CHECKED_REF
#pragma push_macro("FT_LAST_WRAPPER")
#undef FT_LAST_WRAPPER
#pragma push_macro("FT_LIMIT")
#undef FT_LIMIT
#pragma push_macro("FT_UNCHECKED_REF")
#undef FT_UNCHECKED_REF
#pragma push_macro("IMPL_NAMES")
#undef IMPL_NAMES
#pragma push_macro("LONG_OBJ_TYPE")
#undef LONG_OBJ_TYPE
#pragma push_macro("NFS")
#undef NFS
#pragma push_macro("NF_LIMIT")
#undef NF_LIMIT
#pragma push_macro("NF_UNSAFE")
#undef NF_UNSAFE
#pragma push_macro("OBJ_OBJ_TYPE")
#undef OBJ_OBJ_TYPE

namespace java {
	namespace lang {
		namespace invoke {
			class BoundMethodHandle;
			class LambdaForm;
			class LambdaForm$Kind;
			class LambdaForm$Name;
			class LambdaForm$NamedFunction;
			class MemberName;
			class MemberName$Factory;
			class MethodType;
		}
	}
}
namespace sun {
	namespace invoke {
		namespace util {
			class Wrapper;
		}
	}
}

namespace java {
	namespace lang {
		namespace invoke {

class DirectMethodHandle : public ::java::lang::invoke::MethodHandle {
	$class(DirectMethodHandle, 0, ::java::lang::invoke::MethodHandle)
public:
	DirectMethodHandle();
	void init$(::java::lang::invoke::MethodType* mtype, ::java::lang::invoke::LambdaForm* form, ::java::lang::invoke::MemberName* member, bool crackable);
	static int32_t afIndex(int8_t formOp, bool isVolatile, int32_t ftypeKind);
	static $Object* allocateInstance(Object$* mh);
	static $Object* checkBase(Object$* obj);
	static $Object* checkCast(Object$* mh, Object$* obj);
	virtual $Object* checkCast(Object$* obj);
	static bool checkInitialized(::java::lang::invoke::MemberName* member);
	virtual $Object* checkReceiver(Object$* recv);
	static $Object* constructorMethod(Object$* mh);
	virtual ::java::lang::invoke::MethodHandle* copyWith(::java::lang::invoke::MethodType* mt, ::java::lang::invoke::LambdaForm* lf) override;
	static ::java::lang::invoke::LambdaForm$NamedFunction* createFunction(int8_t func);
	void ensureInitialized();
	static void ensureInitialized(Object$* mh);
	static int64_t fieldOffset(Object$* accessorObj);
	static $Object* findDirectMethodHandle(::java::lang::invoke::LambdaForm$Name* name);
	static int32_t ftypeKind($Class* ftype);
	static ::java::lang::invoke::LambdaForm$Kind* getFieldKind(bool isGetter, bool isVolatile, ::sun::invoke::util::Wrapper* wrapper);
	static ::java::lang::invoke::LambdaForm$NamedFunction* getFunction(int8_t func);
	static ::java::lang::invoke::LambdaForm$NamedFunction* getNamedFunction($String* name, ::java::lang::invoke::MethodType* type);
	virtual ::java::lang::invoke::MemberName* internalMemberName() override;
	static $Object* internalMemberName(Object$* mh);
	static $Object* internalMemberNameEnsureInit(Object$* mh);
	virtual $Object* internalProperties() override;
	virtual bool isCrackable() override;
	static ::java::lang::invoke::DirectMethodHandle* make(int8_t refKind, $Class* refc, ::java::lang::invoke::MemberName* member, $Class* callerClass);
	static ::java::lang::invoke::DirectMethodHandle* make($Class* refc, ::java::lang::invoke::MemberName* member);
	static ::java::lang::invoke::DirectMethodHandle* make(::java::lang::invoke::MemberName* member);
	static ::java::lang::invoke::DirectMethodHandle* makeAllocator(::java::lang::invoke::MemberName* ctor);
	static ::java::lang::invoke::LambdaForm* makePreparedFieldLambdaForm(int8_t formOp, bool isVolatile, int32_t ftypeKind);
	static ::java::lang::invoke::LambdaForm* makePreparedLambdaForm(::java::lang::invoke::MethodType* mtype, int32_t which);
	static void maybeCompile(::java::lang::invoke::LambdaForm* lform, ::java::lang::invoke::MemberName* m);
	static $Object* nullCheck(Object$* obj);
	static ::java::lang::invoke::LambdaForm* preparedFieldLambdaForm(::java::lang::invoke::MemberName* m);
	static ::java::lang::invoke::LambdaForm* preparedFieldLambdaForm(int8_t formOp, bool isVolatile, $Class* ftype);
	static ::java::lang::invoke::LambdaForm* preparedLambdaForm(::java::lang::invoke::MemberName* m, bool adaptToSpecialIfc);
	static ::java::lang::invoke::LambdaForm* preparedLambdaForm(::java::lang::invoke::MemberName* m);
	static ::java::lang::invoke::LambdaForm* preparedLambdaForm(::java::lang::invoke::MethodType* mtype, int32_t which);
	virtual ::java::lang::invoke::BoundMethodHandle* rebind() override;
	static bool shouldBeInitialized(::java::lang::invoke::MemberName* member);
	static $Object* staticBase(Object$* accessorObj);
	static int64_t staticOffset(Object$* accessorObj);
	virtual ::java::lang::invoke::MethodHandle* viewAsType(::java::lang::invoke::MethodType* newType, bool strict) override;
	static bool $assertionsDisabled;
	::java::lang::invoke::MemberName* member = nullptr;
	bool crackable = false;
	static ::java::lang::invoke::MemberName$Factory* IMPL_NAMES;
	static const int8_t AF_GETFIELD = 0;
	static const int8_t AF_PUTFIELD = 1;
	static const int8_t AF_GETSTATIC = 2;
	static const int8_t AF_PUTSTATIC = 3;
	static const int8_t AF_GETSTATIC_INIT = 4;
	static const int8_t AF_PUTSTATIC_INIT = 5;
	static const int8_t AF_LIMIT = 6;
	static const int32_t FT_LAST_WRAPPER = 9; // Wrapper.COUNT - 1
	static int32_t FT_UNCHECKED_REF;
	static const int32_t FT_CHECKED_REF = 10; // FT_LAST_WRAPPER + 1
	static const int32_t FT_LIMIT = 11; // FT_LAST_WRAPPER + 2
	static $Array<::java::lang::invoke::LambdaForm>* ACCESSOR_FORMS;
	static $Array<::sun::invoke::util::Wrapper>* ALL_WRAPPERS;
	static const int8_t NF_internalMemberName = 0;
	static const int8_t NF_internalMemberNameEnsureInit = 1;
	static const int8_t NF_ensureInitialized = 2;
	static const int8_t NF_fieldOffset = 3;
	static const int8_t NF_checkBase = 4;
	static const int8_t NF_staticBase = 5;
	static const int8_t NF_staticOffset = 6;
	static const int8_t NF_checkCast = 7;
	static const int8_t NF_allocateInstance = 8;
	static const int8_t NF_constructorMethod = 9;
	static const int8_t NF_UNSAFE = 10;
	static const int8_t NF_checkReceiver = 11;
	static const int8_t NF_LIMIT = 12;
	static $Array<::java::lang::invoke::LambdaForm$NamedFunction>* NFS;
	static ::java::lang::invoke::MethodType* OBJ_OBJ_TYPE;
	static ::java::lang::invoke::MethodType* LONG_OBJ_TYPE;
};

		} // invoke
	} // lang
} // java

#pragma pop_macro("ACCESSOR_FORMS")
#pragma pop_macro("AF_GETFIELD")
#pragma pop_macro("AF_GETSTATIC")
#pragma pop_macro("AF_GETSTATIC_INIT")
#pragma pop_macro("AF_LIMIT")
#pragma pop_macro("AF_PUTFIELD")
#pragma pop_macro("AF_PUTSTATIC")
#pragma pop_macro("AF_PUTSTATIC_INIT")
#pragma pop_macro("ALL_WRAPPERS")
#pragma pop_macro("FT_CHECKED_REF")
#pragma pop_macro("FT_LAST_WRAPPER")
#pragma pop_macro("FT_LIMIT")
#pragma pop_macro("FT_UNCHECKED_REF")
#pragma pop_macro("IMPL_NAMES")
#pragma pop_macro("LONG_OBJ_TYPE")
#pragma pop_macro("NFS")
#pragma pop_macro("NF_LIMIT")
#pragma pop_macro("NF_UNSAFE")
#pragma pop_macro("OBJ_OBJ_TYPE")

#endif // _java_lang_invoke_DirectMethodHandle_h_