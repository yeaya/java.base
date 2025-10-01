#ifndef _util_MemberFactory$Group_h_
#define _util_MemberFactory$Group_h_
//$ class util.MemberFactory$Group
//$ extends java.lang.Enum

#include <java/lang/Array.h>
#include <java/lang/Enum.h>

#pragma push_macro("PROTECTED_STATIC_F_M")
#undef PROTECTED_STATIC_F_M
#pragma push_macro("ALL")
#undef ALL
#pragma push_macro("PACKAGE_STATIC_F_M")
#undef PACKAGE_STATIC_F_M
#pragma push_macro("PRIVATE_C")
#undef PRIVATE_C
#pragma push_macro("PACKAGE_MEMBERS")
#undef PACKAGE_MEMBERS
#pragma push_macro("PUBLIC_MEMBERS")
#undef PUBLIC_MEMBERS
#pragma push_macro("PUBLIC_STATIC_F_M")
#undef PUBLIC_STATIC_F_M
#pragma push_macro("PACKAGE_C")
#undef PACKAGE_C
#pragma push_macro("PUBLIC_C")
#undef PUBLIC_C
#pragma push_macro("PACKAGE_INSTANCE_F_M")
#undef PACKAGE_INSTANCE_F_M
#pragma push_macro("PROTECTED_MEMBERS")
#undef PROTECTED_MEMBERS
#pragma push_macro("PRIVATE_MEMBERS")
#undef PRIVATE_MEMBERS
#pragma push_macro("PROTECTED_C")
#undef PROTECTED_C
#pragma push_macro("PROTECTED_INSTANCE_F_M")
#undef PROTECTED_INSTANCE_F_M
#pragma push_macro("PRIVATE_STATIC_F_M")
#undef PRIVATE_STATIC_F_M
#pragma push_macro("PUBLIC_INSTANCE_F_M")
#undef PUBLIC_INSTANCE_F_M
#pragma push_macro("PRIVATE_INSTANCE_F_M")
#undef PRIVATE_INSTANCE_F_M

namespace java {
	namespace util {
		class EnumSet;
	}
}
namespace util {
	class MemberFactory;
}

namespace util {

class $export MemberFactory$Group : public ::java::lang::Enum {
	$class(MemberFactory$Group, 0, ::java::lang::Enum)
public:
	MemberFactory$Group();
	static $Array<::util::MemberFactory$Group>* $values();
	void init$($String* $enum$name, int32_t $enum$ordinal, $Array<::util::MemberFactory>* members);
	static ::java::util::EnumSet* asSet($Array<::util::MemberFactory$Group>* groups);
	static ::util::MemberFactory$Group* valueOf($String* name);
	static $Array<::util::MemberFactory$Group>* values();
	static ::util::MemberFactory$Group* ALL;
	static ::util::MemberFactory$Group* PRIVATE_MEMBERS;
	static ::util::MemberFactory$Group* PACKAGE_MEMBERS;
	static ::util::MemberFactory$Group* PROTECTED_MEMBERS;
	static ::util::MemberFactory$Group* PUBLIC_MEMBERS;
	static ::util::MemberFactory$Group* PRIVATE_INSTANCE_F_M;
	static ::util::MemberFactory$Group* PACKAGE_INSTANCE_F_M;
	static ::util::MemberFactory$Group* PROTECTED_INSTANCE_F_M;
	static ::util::MemberFactory$Group* PUBLIC_INSTANCE_F_M;
	static ::util::MemberFactory$Group* PRIVATE_STATIC_F_M;
	static ::util::MemberFactory$Group* PACKAGE_STATIC_F_M;
	static ::util::MemberFactory$Group* PROTECTED_STATIC_F_M;
	static ::util::MemberFactory$Group* PUBLIC_STATIC_F_M;
	static ::util::MemberFactory$Group* PRIVATE_C;
	static ::util::MemberFactory$Group* PACKAGE_C;
	static ::util::MemberFactory$Group* PROTECTED_C;
	static ::util::MemberFactory$Group* PUBLIC_C;
	static $Array<::util::MemberFactory$Group>* $VALUES;
	::java::util::EnumSet* members = nullptr;
};

} // util

#pragma pop_macro("PROTECTED_STATIC_F_M")
#pragma pop_macro("ALL")
#pragma pop_macro("PACKAGE_STATIC_F_M")
#pragma pop_macro("PRIVATE_C")
#pragma pop_macro("PACKAGE_MEMBERS")
#pragma pop_macro("PUBLIC_MEMBERS")
#pragma pop_macro("PUBLIC_STATIC_F_M")
#pragma pop_macro("PACKAGE_C")
#pragma pop_macro("PUBLIC_C")
#pragma pop_macro("PACKAGE_INSTANCE_F_M")
#pragma pop_macro("PROTECTED_MEMBERS")
#pragma pop_macro("PRIVATE_MEMBERS")
#pragma pop_macro("PROTECTED_C")
#pragma pop_macro("PROTECTED_INSTANCE_F_M")
#pragma pop_macro("PRIVATE_STATIC_F_M")
#pragma pop_macro("PUBLIC_INSTANCE_F_M")
#pragma pop_macro("PRIVATE_INSTANCE_F_M")

#endif // _util_MemberFactory$Group_h_