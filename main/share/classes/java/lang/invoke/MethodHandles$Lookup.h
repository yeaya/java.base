#ifndef _java_lang_invoke_MethodHandles$Lookup_h_
#define _java_lang_invoke_MethodHandles$Lookup_h_
//$ class java.lang.invoke.MethodHandles$Lookup
//$ extends java.lang.Object

#include <java/lang/Array.h>

#pragma push_macro("ALL_MODES")
#undef ALL_MODES
#pragma push_macro("FULL_POWER_MODES")
#undef FULL_POWER_MODES
#pragma push_macro("IMPL_LOOKUP")
#undef IMPL_LOOKUP
#pragma push_macro("LOOKASIDE_TABLE")
#undef LOOKASIDE_TABLE
#pragma push_macro("MODULE")
#undef MODULE
#pragma push_macro("ORIGINAL")
#undef ORIGINAL
#pragma push_macro("PACKAGE")
#undef PACKAGE
#pragma push_macro("PRIVATE")
#undef PRIVATE
#pragma push_macro("PROTECTED")
#undef PROTECTED
#pragma push_macro("PUBLIC")
#undef PUBLIC
#pragma push_macro("PUBLIC_LOOKUP")
#undef PUBLIC_LOOKUP
#pragma push_macro("TRUSTED")
#undef TRUSTED
#pragma push_macro("UNCONDITIONAL")
#undef UNCONDITIONAL

namespace java {
	namespace lang {
		class IllegalAccessException;
	}
}
namespace java {
	namespace lang {
		namespace invoke {
			class DirectMethodHandle;
			class MemberName;
			class MethodHandle;
			class MethodHandleInfo;
			class MethodHandles$Lookup$ClassDefiner;
			class MethodHandles$Lookup$ClassFile;
			class MethodHandles$Lookup$ClassOption;
			class MethodType;
			class VarHandle;
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
	namespace security {
		class ProtectionDomain;
	}
}
namespace java {
	namespace util {
		class Set;
	}
}
namespace java {
	namespace util {
		namespace concurrent {
			class ConcurrentHashMap;
		}
	}
}

namespace java {
	namespace lang {
		namespace invoke {

class $export MethodHandles$Lookup : public ::java::lang::Object {
	$class(MethodHandles$Lookup, $PRELOAD, ::java::lang::Object)
public:
	MethodHandles$Lookup();
	void init$($Class* lookupClass);
	void init$($Class* lookupClass, $Class* prevLookupClass, int32_t allowedModes);
	$Class* accessClass($Class* targetClass);
	$String* accessFailedMessage($Class* refc, ::java::lang::invoke::MemberName* m);
	::java::lang::invoke::MethodHandle* bind(Object$* receiver, $String* name, ::java::lang::invoke::MethodType* type);
	bool canBeCached(int8_t refKind, $Class* defc, ::java::lang::invoke::MemberName* member);
	void checkAccess(int8_t refKind, $Class* refc, ::java::lang::invoke::MemberName* m);
	void checkField(int8_t refKind, $Class* refc, ::java::lang::invoke::MemberName* m);
	void checkMethod(int8_t refKind, $Class* refc, ::java::lang::invoke::MemberName* m);
	void checkMethodName(int8_t refKind, $String* name);
	void checkSecurityManager($Class* refc);
	void checkSecurityManager($Class* refc, ::java::lang::invoke::MemberName* m);
	void checkSpecialCaller($Class* specialCaller, $Class* refc);
	void checkSymbolicClass($Class* refc);
	static void checkUnprivilegedlookupClass($Class* lookupClass);
	$Class* defineClass($bytes* bytes);
	::java::lang::invoke::MethodHandles$Lookup* defineHiddenClass($bytes* bytes, bool initialize, $Array<::java::lang::invoke::MethodHandles$Lookup$ClassOption>* options);
	::java::lang::invoke::MethodHandles$Lookup* defineHiddenClassWithClassData($bytes* bytes, Object$* classData, bool initialize, $Array<::java::lang::invoke::MethodHandles$Lookup$ClassOption>* options);
	::java::lang::invoke::MethodHandles$Lookup* dropLookupMode(int32_t modeToDrop);
	void ensureDefineClassPermission();
	$Class* ensureInitialized($Class* targetClass);
	::java::lang::invoke::MethodHandles$Lookup* findBoundCallerLookup(::java::lang::invoke::MemberName* m);
	$Class* findClass($String* targetName);
	::java::lang::invoke::MethodHandle* findConstructor($Class* refc, ::java::lang::invoke::MethodType* type);
	::java::lang::invoke::MethodHandle* findGetter($Class* refc, $String* name, $Class* type);
	::java::lang::invoke::MethodHandle* findSetter($Class* refc, $String* name, $Class* type);
	::java::lang::invoke::MethodHandle* findSpecial($Class* refc, $String* name, ::java::lang::invoke::MethodType* type, $Class* specialCaller);
	::java::lang::invoke::MethodHandle* findStatic($Class* refc, $String* name, ::java::lang::invoke::MethodType* type);
	::java::lang::invoke::MethodHandle* findStaticGetter($Class* refc, $String* name, $Class* type);
	::java::lang::invoke::MethodHandle* findStaticSetter($Class* refc, $String* name, $Class* type);
	::java::lang::invoke::VarHandle* findStaticVarHandle($Class* decl, $String* name, $Class* type);
	::java::lang::invoke::VarHandle* findVarHandle($Class* recv, $String* name, $Class* type);
	::java::lang::invoke::MethodHandle* findVirtual($Class* refc, $String* name, ::java::lang::invoke::MethodType* type);
	::java::lang::invoke::MethodHandle* findVirtualForMH($String* name, ::java::lang::invoke::MethodType* type);
	::java::lang::invoke::MethodHandle* findVirtualForVH($String* name, ::java::lang::invoke::MethodType* type);
	static int32_t fixmods(int32_t mods);
	::java::lang::invoke::MethodHandle* getDirectConstructor($Class* refc, ::java::lang::invoke::MemberName* ctor);
	::java::lang::invoke::MethodHandle* getDirectConstructorCommon($Class* refc, ::java::lang::invoke::MemberName* ctor, bool checkSecurity);
	::java::lang::invoke::MethodHandle* getDirectConstructorNoSecurityManager($Class* refc, ::java::lang::invoke::MemberName* ctor);
	::java::lang::invoke::MethodHandle* getDirectField(int8_t refKind, $Class* refc, ::java::lang::invoke::MemberName* field);
	::java::lang::invoke::MethodHandle* getDirectFieldCommon(int8_t refKind, $Class* refc, ::java::lang::invoke::MemberName* field, bool checkSecurity);
	::java::lang::invoke::MethodHandle* getDirectFieldNoSecurityManager(int8_t refKind, $Class* refc, ::java::lang::invoke::MemberName* field);
	::java::lang::invoke::MethodHandle* getDirectMethod(int8_t refKind, $Class* refc, ::java::lang::invoke::MemberName* method, ::java::lang::invoke::MethodHandles$Lookup* callerLookup);
	::java::lang::invoke::MethodHandle* getDirectMethodCommon(int8_t refKind, $Class* refc, ::java::lang::invoke::MemberName* method, bool checkSecurity, bool doRestrict, ::java::lang::invoke::MethodHandles$Lookup* boundCaller);
	::java::lang::invoke::MethodHandle* getDirectMethodForConstant(int8_t refKind, $Class* defc, ::java::lang::invoke::MemberName* member);
	::java::lang::invoke::MethodHandle* getDirectMethodNoRestrictInvokeSpecial($Class* refc, ::java::lang::invoke::MemberName* method, ::java::lang::invoke::MethodHandles$Lookup* callerLookup);
	::java::lang::invoke::MethodHandle* getDirectMethodNoSecurityManager(int8_t refKind, $Class* refc, ::java::lang::invoke::MemberName* method, ::java::lang::invoke::MethodHandles$Lookup* callerLookup);
	::java::lang::invoke::VarHandle* getFieldVarHandle(int8_t getRefKind, int8_t putRefKind, $Class* refc, ::java::lang::invoke::MemberName* getField, ::java::lang::invoke::MemberName* putField);
	::java::lang::invoke::VarHandle* getFieldVarHandleCommon(int8_t getRefKind, int8_t putRefKind, $Class* refc, ::java::lang::invoke::MemberName* getField, ::java::lang::invoke::MemberName* putField, bool checkSecurity);
	::java::lang::invoke::VarHandle* getFieldVarHandleNoSecurityManager(int8_t getRefKind, int8_t putRefKind, $Class* refc, ::java::lang::invoke::MemberName* getField, ::java::lang::invoke::MemberName* putField);
	bool hasFullPrivilegeAccess();
	bool hasPrivateAccess();
	::java::lang::invoke::MethodHandles$Lookup* in($Class* requestedLookupClass);
	bool isClassAccessible($Class* refc);
	::java::lang::invoke::MethodHandle* linkMethodHandleConstant(int8_t refKind, $Class* defc, $String* name, Object$* type);
	$Class* lookupClass();
	$Class* lookupClassOrNull();
	::java::security::ProtectionDomain* lookupClassProtectionDomain();
	int32_t lookupModes();
	::java::lang::IllegalAccessException* makeAccessException($Class* targetClass);
	::java::lang::invoke::MethodHandles$Lookup$ClassDefiner* makeClassDefiner($bytes* bytes);
	::java::lang::invoke::MethodHandles$Lookup$ClassDefiner* makeHiddenClassDefiner($bytes* bytes);
	::java::lang::invoke::MethodHandles$Lookup$ClassDefiner* makeHiddenClassDefiner($bytes* bytes, ::java::util::Set* options, bool accessVmAnnotations);
	::java::lang::invoke::MethodHandles$Lookup$ClassDefiner* makeHiddenClassDefiner($String* name, $bytes* bytes);
	::java::lang::invoke::MethodHandles$Lookup$ClassDefiner* makeHiddenClassDefiner(::java::lang::invoke::MethodHandles$Lookup$ClassFile* cf, ::java::util::Set* options, bool accessVmAnnotations);
	::java::lang::invoke::MethodHandle* maybeBindCaller(::java::lang::invoke::MemberName* method, ::java::lang::invoke::MethodHandle* mh, ::java::lang::invoke::MethodHandles$Lookup* boundCaller);
	static ::java::lang::invoke::MethodHandles$Lookup* newLookup($Class* lookupClass, $Class* prevLookupClass, int32_t allowedModes);
	$Class* previousLookupClass();
	::java::lang::invoke::MemberName* resolveOrFail(int8_t refKind, $Class* refc, $String* name, $Class* type);
	::java::lang::invoke::MemberName* resolveOrFail(int8_t refKind, $Class* refc, $String* name, ::java::lang::invoke::MethodType* type);
	::java::lang::invoke::MemberName* resolveOrFail(int8_t refKind, ::java::lang::invoke::MemberName* member);
	::java::lang::invoke::MemberName* resolveOrNull(int8_t refKind, ::java::lang::invoke::MemberName* member);
	::java::lang::invoke::MemberName* resolveOrNull(int8_t refKind, $Class* refc, $String* name, ::java::lang::invoke::MethodType* type);
	bool restrictProtectedReceiver(::java::lang::invoke::MemberName* method);
	::java::lang::invoke::MethodHandle* restrictReceiver(::java::lang::invoke::MemberName* method, ::java::lang::invoke::DirectMethodHandle* mh, $Class* caller);
	::java::lang::invoke::MethodHandleInfo* revealDirect(::java::lang::invoke::MethodHandle* target);
	virtual $String* toString() override;
	::java::lang::invoke::MethodHandle* unreflect(::java::lang::reflect::Method* m);
	::java::lang::invoke::MethodHandle* unreflectConstructor(::java::lang::reflect::Constructor* c);
	::java::lang::invoke::MethodHandle* unreflectField(::java::lang::reflect::Field* f, bool isSetter);
	::java::lang::invoke::MethodHandle* unreflectForMH(::java::lang::reflect::Method* m);
	::java::lang::invoke::MethodHandle* unreflectForVH(::java::lang::reflect::Method* m);
	::java::lang::invoke::MethodHandle* unreflectGetter(::java::lang::reflect::Field* f);
	::java::lang::invoke::MethodHandle* unreflectSetter(::java::lang::reflect::Field* f);
	::java::lang::invoke::MethodHandle* unreflectSpecial(::java::lang::reflect::Method* m, $Class* specialCaller);
	::java::lang::invoke::VarHandle* unreflectVarHandle(::java::lang::reflect::Field* f);
	static bool $assertionsDisabled;
	$Class* lookupClass$ = nullptr;
	$Class* prevLookupClass = nullptr;
	int32_t allowedModes = 0;
	static const int32_t PUBLIC = 1; // Modifier.PUBLIC
	static const int32_t PRIVATE = 2; // Modifier.PRIVATE
	static const int32_t PROTECTED = 4; // Modifier.PROTECTED
	static const int32_t PACKAGE = 8; // Modifier.STATIC
	static const int32_t MODULE = 16; // PACKAGE << 1
	static const int32_t UNCONDITIONAL = 32; // PACKAGE << 2
	static const int32_t ORIGINAL = 64; // PACKAGE << 3
	static const int32_t ALL_MODES = 127; // (PUBLIC | PRIVATE | PROTECTED | PACKAGE | MODULE | UNCONDITIONAL | ORIGINAL)
	static const int32_t FULL_POWER_MODES = 95; // (ALL_MODES & ~UNCONDITIONAL)
	static const int32_t TRUSTED = (-1);
	$volatile(::java::security::ProtectionDomain*) cachedProtectionDomain = nullptr;
	static ::java::lang::invoke::MethodHandles$Lookup* IMPL_LOOKUP;
	static ::java::lang::invoke::MethodHandles$Lookup* PUBLIC_LOOKUP;
	static ::java::util::concurrent::ConcurrentHashMap* LOOKASIDE_TABLE;
};

		} // invoke
	} // lang
} // java

#pragma pop_macro("ALL_MODES")
#pragma pop_macro("FULL_POWER_MODES")
#pragma pop_macro("IMPL_LOOKUP")
#pragma pop_macro("LOOKASIDE_TABLE")
#pragma pop_macro("MODULE")
#pragma pop_macro("ORIGINAL")
#pragma pop_macro("PACKAGE")
#pragma pop_macro("PRIVATE")
#pragma pop_macro("PROTECTED")
#pragma pop_macro("PUBLIC")
#pragma pop_macro("PUBLIC_LOOKUP")
#pragma pop_macro("TRUSTED")
#pragma pop_macro("UNCONDITIONAL")

#endif // _java_lang_invoke_MethodHandles$Lookup_h_