#ifndef _java_lang_invoke_VarForm_h_
#define _java_lang_invoke_VarForm_h_
//$ class java.lang.invoke.VarForm
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace java {
	namespace lang {
		namespace invoke {
			class MemberName;
			class MethodType;
		}
	}
}

namespace java {
	namespace lang {
		namespace invoke {

class VarForm : public ::java::lang::Object {
	$class(VarForm, $NO_CLASS_INIT, ::java::lang::Object)
public:
	VarForm();
	void init$($Class* implClass, $Class* receiver, $Class* value, $ClassArray* intermediate);
	void init$($Class* value, $ClassArray* coordinates);
	::java::lang::invoke::MemberName* getMemberName(int32_t mode);
	::java::lang::invoke::MemberName* getMemberNameOrNull(int32_t mode);
	::java::lang::invoke::MethodType* getMethodType(int32_t type);
	::java::lang::invoke::MethodType* getMethodType_V(int32_t type);
	$Array<::java::lang::invoke::MethodType>* getMethodType_V_init();
	void initMethodTypes($Class* value, $ClassArray* coordinates);
	::java::lang::invoke::MemberName* resolveMemberName(int32_t mode);
	$Class* implClass = nullptr;
	$Array<::java::lang::invoke::MethodType>* methodType_table = nullptr;
	$Array<::java::lang::invoke::MemberName>* memberName_table = nullptr;
	$Array<::java::lang::invoke::MethodType>* methodType_V_table = nullptr;
};

		} // invoke
	} // lang
} // java

#endif // _java_lang_invoke_VarForm_h_