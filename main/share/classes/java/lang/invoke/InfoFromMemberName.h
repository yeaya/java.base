#ifndef _java_lang_invoke_InfoFromMemberName_h_
#define _java_lang_invoke_InfoFromMemberName_h_
//$ class java.lang.invoke.InfoFromMemberName
//$ extends java.lang.invoke.MethodHandleInfo

#include <java/lang/invoke/MethodHandleInfo.h>

namespace java {
	namespace lang {
		namespace invoke {
			class MemberName;
			class MethodHandles$Lookup;
			class MethodType;
		}
	}
}
namespace java {
	namespace lang {
		namespace reflect {
			class Member;
		}
	}
}

namespace java {
	namespace lang {
		namespace invoke {

class InfoFromMemberName : public ::java::lang::invoke::MethodHandleInfo {
	$class(InfoFromMemberName, 0, ::java::lang::invoke::MethodHandleInfo)
public:
	InfoFromMemberName();
	void init$(::java::lang::invoke::MethodHandles$Lookup* lookup, ::java::lang::invoke::MemberName* member, int8_t referenceKind);
	static ::java::lang::invoke::MemberName* convertToMemberName(int8_t refKind, ::java::lang::reflect::Member* mem);
	virtual $Class* getDeclaringClass() override;
	virtual ::java::lang::invoke::MethodType* getMethodType() override;
	virtual int32_t getModifiers() override;
	virtual $String* getName() override;
	virtual int32_t getReferenceKind() override;
	virtual ::java::lang::reflect::Member* reflectAs($Class* expected, ::java::lang::invoke::MethodHandles$Lookup* lookup) override;
	::java::lang::reflect::Member* reflectUnchecked();
	virtual $String* toString() override;
	static bool $assertionsDisabled;
	::java::lang::invoke::MemberName* member = nullptr;
	int32_t referenceKind = 0;
};

		} // invoke
	} // lang
} // java

#endif // _java_lang_invoke_InfoFromMemberName_h_