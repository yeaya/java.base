#ifndef _util_MemberFactory_h_
#define _util_MemberFactory_h_
//$ class util.MemberFactory
//$ extends java.lang.Enum
//$ implements java.util.function.Function

#include <java/lang/Array.h>
#include <java/lang/Enum.h>
#include <java/util/function/Function.h>

#pragma push_macro("PACKAGE_CONSTRUCTOR")
#undef PACKAGE_CONSTRUCTOR
#pragma push_macro("PACKAGE_INSTANCE_FIELD")
#undef PACKAGE_INSTANCE_FIELD
#pragma push_macro("PACKAGE_INSTANCE_METHOD")
#undef PACKAGE_INSTANCE_METHOD
#pragma push_macro("PACKAGE_STATIC_FIELD")
#undef PACKAGE_STATIC_FIELD
#pragma push_macro("PACKAGE_STATIC_METHOD")
#undef PACKAGE_STATIC_METHOD
#pragma push_macro("PRIVATE_CONSTRUCTOR")
#undef PRIVATE_CONSTRUCTOR
#pragma push_macro("PRIVATE_INSTANCE_FIELD")
#undef PRIVATE_INSTANCE_FIELD
#pragma push_macro("PRIVATE_INSTANCE_METHOD")
#undef PRIVATE_INSTANCE_METHOD
#pragma push_macro("PRIVATE_STATIC_FIELD")
#undef PRIVATE_STATIC_FIELD
#pragma push_macro("PRIVATE_STATIC_METHOD")
#undef PRIVATE_STATIC_METHOD
#pragma push_macro("PROTECTED_CONSTRUCTOR")
#undef PROTECTED_CONSTRUCTOR
#pragma push_macro("PROTECTED_INSTANCE_FIELD")
#undef PROTECTED_INSTANCE_FIELD
#pragma push_macro("PROTECTED_INSTANCE_METHOD")
#undef PROTECTED_INSTANCE_METHOD
#pragma push_macro("PROTECTED_STATIC_FIELD")
#undef PROTECTED_STATIC_FIELD
#pragma push_macro("PROTECTED_STATIC_METHOD")
#undef PROTECTED_STATIC_METHOD
#pragma push_macro("PUBLIC_CONSTRUCTOR")
#undef PUBLIC_CONSTRUCTOR
#pragma push_macro("PUBLIC_INSTANCE_FIELD")
#undef PUBLIC_INSTANCE_FIELD
#pragma push_macro("PUBLIC_INSTANCE_METHOD")
#undef PUBLIC_INSTANCE_METHOD
#pragma push_macro("PUBLIC_STATIC_FIELD")
#undef PUBLIC_STATIC_FIELD
#pragma push_macro("PUBLIC_STATIC_METHOD")
#undef PUBLIC_STATIC_METHOD

namespace java {
	namespace lang {
		namespace reflect {
			class AccessibleObject;
		}
	}
}
namespace java {
	namespace util {
		class EnumSet;
	}
}
namespace util {
	class MemberFactory$Kind;
}

namespace util {

class $export MemberFactory : public ::java::lang::Enum, public ::java::util::function::Function {
	$class(MemberFactory, 0, ::java::lang::Enum, ::java::util::function::Function)
public:
	MemberFactory();
	virtual ::java::lang::Object0* toObject0$() const override {return (::java::lang::Object0*)(void*)this;}
	static $Array<::util::MemberFactory>* $values();
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$($String* $enum$name, int32_t $enum$ordinal, ::util::MemberFactory$Kind* kind, $String* name, $ClassArray* parameterTypes);
	virtual ::java::lang::reflect::AccessibleObject* apply($Class* declaringClass);
	virtual $Object* apply(Object$* declaringClass) override;
	static ::java::util::EnumSet* asSet($Array<::util::MemberFactory>* members);
	static ::java::util::EnumSet* groupsToMembers(::java::util::EnumSet* groups);
	static ::java::util::EnumSet* membersToGroupsOrNull(::java::util::EnumSet* members);
	virtual $String* toString() override;
	static ::util::MemberFactory* valueOf($String* name);
	static $Array<::util::MemberFactory>* values();
	static ::util::MemberFactory* PRIVATE_INSTANCE_FIELD;
	static ::util::MemberFactory* PACKAGE_INSTANCE_FIELD;
	static ::util::MemberFactory* PROTECTED_INSTANCE_FIELD;
	static ::util::MemberFactory* PUBLIC_INSTANCE_FIELD;
	static ::util::MemberFactory* PRIVATE_INSTANCE_METHOD;
	static ::util::MemberFactory* PACKAGE_INSTANCE_METHOD;
	static ::util::MemberFactory* PROTECTED_INSTANCE_METHOD;
	static ::util::MemberFactory* PUBLIC_INSTANCE_METHOD;
	static ::util::MemberFactory* PRIVATE_STATIC_FIELD;
	static ::util::MemberFactory* PACKAGE_STATIC_FIELD;
	static ::util::MemberFactory* PROTECTED_STATIC_FIELD;
	static ::util::MemberFactory* PUBLIC_STATIC_FIELD;
	static ::util::MemberFactory* PRIVATE_STATIC_METHOD;
	static ::util::MemberFactory* PACKAGE_STATIC_METHOD;
	static ::util::MemberFactory* PROTECTED_STATIC_METHOD;
	static ::util::MemberFactory* PUBLIC_STATIC_METHOD;
	static ::util::MemberFactory* PRIVATE_CONSTRUCTOR;
	static ::util::MemberFactory* PACKAGE_CONSTRUCTOR;
	static ::util::MemberFactory* PROTECTED_CONSTRUCTOR;
	static ::util::MemberFactory* PUBLIC_CONSTRUCTOR;
	static $Array<::util::MemberFactory>* $VALUES;
	::util::MemberFactory$Kind* kind = nullptr;
	$String* name$ = nullptr;
	$ClassArray* parameterTypes = nullptr;
};

} // util

#pragma pop_macro("PACKAGE_CONSTRUCTOR")
#pragma pop_macro("PACKAGE_INSTANCE_FIELD")
#pragma pop_macro("PACKAGE_INSTANCE_METHOD")
#pragma pop_macro("PACKAGE_STATIC_FIELD")
#pragma pop_macro("PACKAGE_STATIC_METHOD")
#pragma pop_macro("PRIVATE_CONSTRUCTOR")
#pragma pop_macro("PRIVATE_INSTANCE_FIELD")
#pragma pop_macro("PRIVATE_INSTANCE_METHOD")
#pragma pop_macro("PRIVATE_STATIC_FIELD")
#pragma pop_macro("PRIVATE_STATIC_METHOD")
#pragma pop_macro("PROTECTED_CONSTRUCTOR")
#pragma pop_macro("PROTECTED_INSTANCE_FIELD")
#pragma pop_macro("PROTECTED_INSTANCE_METHOD")
#pragma pop_macro("PROTECTED_STATIC_FIELD")
#pragma pop_macro("PROTECTED_STATIC_METHOD")
#pragma pop_macro("PUBLIC_CONSTRUCTOR")
#pragma pop_macro("PUBLIC_INSTANCE_FIELD")
#pragma pop_macro("PUBLIC_INSTANCE_METHOD")
#pragma pop_macro("PUBLIC_STATIC_FIELD")
#pragma pop_macro("PUBLIC_STATIC_METHOD")

#endif // _util_MemberFactory_h_