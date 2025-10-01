#ifndef _java_lang_invoke_MethodHandleInfo_h_
#define _java_lang_invoke_MethodHandleInfo_h_
//$ interface java.lang.invoke.MethodHandleInfo
//$ extends java.lang.Object

#include <java/lang/invoke/MethodHandleNatives$Constants.h>

namespace java {
	namespace lang {
		namespace invoke {
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

class $export MethodHandleInfo : public ::java::lang::Object {
	$interface(MethodHandleInfo, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual $Class* getDeclaringClass() {return nullptr;}
	virtual ::java::lang::invoke::MethodType* getMethodType() {return nullptr;}
	virtual int32_t getModifiers() {return 0;}
	virtual $String* getName() {return nullptr;}
	virtual int32_t getReferenceKind() {return 0;}
	virtual bool isVarArgs();
	static $String* referenceKindToString(int32_t referenceKind);
	virtual ::java::lang::reflect::Member* reflectAs($Class* expected, ::java::lang::invoke::MethodHandles$Lookup* lookup) {return nullptr;}
	using ::java::lang::Object::toString;
	static $String* toString(int32_t kind, $Class* defc, $String* name, ::java::lang::invoke::MethodType* type);
	static const int32_t REF_getField = ::java::lang::invoke::MethodHandleNatives$Constants::REF_getField;
	static const int32_t REF_getStatic = ::java::lang::invoke::MethodHandleNatives$Constants::REF_getStatic;
	static const int32_t REF_putField = ::java::lang::invoke::MethodHandleNatives$Constants::REF_putField;
	static const int32_t REF_putStatic = ::java::lang::invoke::MethodHandleNatives$Constants::REF_putStatic;
	static const int32_t REF_invokeVirtual = ::java::lang::invoke::MethodHandleNatives$Constants::REF_invokeVirtual;
	static const int32_t REF_invokeStatic = ::java::lang::invoke::MethodHandleNatives$Constants::REF_invokeStatic;
	static const int32_t REF_invokeSpecial = ::java::lang::invoke::MethodHandleNatives$Constants::REF_invokeSpecial;
	static const int32_t REF_newInvokeSpecial = ::java::lang::invoke::MethodHandleNatives$Constants::REF_newInvokeSpecial;
	static const int32_t REF_invokeInterface = ::java::lang::invoke::MethodHandleNatives$Constants::REF_invokeInterface;
};

		} // invoke
	} // lang
} // java

#endif // _java_lang_invoke_MethodHandleInfo_h_