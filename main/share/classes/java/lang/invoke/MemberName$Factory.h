#ifndef _java_lang_invoke_MemberName$Factory_h_
#define _java_lang_invoke_MemberName$Factory_h_
//$ class java.lang.invoke.MemberName$Factory
//$ extends java.lang.Object

#include <java/lang/Array.h>

#pragma push_macro("ALLOWED_FLAGS")
#undef ALLOWED_FLAGS
#pragma push_macro("INSTANCE")
#undef INSTANCE

namespace java {
	namespace lang {
		namespace invoke {
			class MemberName;
			class MethodType;
		}
	}
}
namespace java {
	namespace util {
		class List;
	}
}

namespace java {
	namespace lang {
		namespace invoke {

class MemberName$Factory : public ::java::lang::Object {
	$class(MemberName$Factory, $PRELOAD, ::java::lang::Object)
public:
	MemberName$Factory();
	void init$();
	virtual ::java::util::List* getConstructors($Class* defc, $Class* lookupClass);
	virtual ::java::util::List* getFields($Class* defc, bool searchSupers, $Class* lookupClass);
	virtual ::java::util::List* getFields($Class* defc, bool searchSupers, $String* name, $Class* type, $Class* lookupClass);
	virtual ::java::util::List* getMembers($Class* defc, $String* matchName, Object$* matchType, int32_t matchFlags, $Class* lookupClass);
	virtual ::java::util::List* getMethods($Class* defc, bool searchSupers, $Class* lookupClass);
	virtual ::java::util::List* getMethods($Class* defc, bool searchSupers, $String* name, ::java::lang::invoke::MethodType* type, $Class* lookupClass);
	virtual ::java::util::List* getNestedTypes($Class* defc, bool searchSupers, $Class* lookupClass);
	static $Array<::java::lang::invoke::MemberName>* newMemberBuffer(int32_t length);
	::java::lang::invoke::MemberName* resolve(int8_t refKind, ::java::lang::invoke::MemberName* ref, $Class* lookupClass, int32_t allowedModes, bool speculativeResolve);
	virtual ::java::lang::invoke::MemberName* resolveOrFail(int8_t refKind, ::java::lang::invoke::MemberName* m, $Class* lookupClass, int32_t allowedModes, $Class* nsmClass);
	virtual ::java::lang::invoke::MemberName* resolveOrNull(int8_t refKind, ::java::lang::invoke::MemberName* m, $Class* lookupClass, int32_t allowedModes);
	static bool $assertionsDisabled;
	static ::java::lang::invoke::MemberName$Factory* INSTANCE;
	static int32_t ALLOWED_FLAGS;
};

		} // invoke
	} // lang
} // java

#pragma pop_macro("ALLOWED_FLAGS")
#pragma pop_macro("INSTANCE")

#endif // _java_lang_invoke_MemberName$Factory_h_