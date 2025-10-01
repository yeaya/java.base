#ifndef _java_lang_constant_DirectMethodHandleDesc_h_
#define _java_lang_constant_DirectMethodHandleDesc_h_
//$ interface java.lang.constant.DirectMethodHandleDesc
//$ extends java.lang.constant.MethodHandleDesc

#include <java/lang/constant/MethodHandleDesc.h>

namespace java {
	namespace lang {
		namespace constant {
			class ClassDesc;
			class DirectMethodHandleDesc$Kind;
		}
	}
}

namespace java {
	namespace lang {
		namespace constant {

class $export DirectMethodHandleDesc : public ::java::lang::constant::MethodHandleDesc {
	$interface(DirectMethodHandleDesc, $NO_CLASS_INIT, ::java::lang::constant::MethodHandleDesc)
public:
	virtual bool isOwnerInterface() {return false;}
	virtual ::java::lang::constant::DirectMethodHandleDesc$Kind* kind() {return nullptr;}
	virtual $String* lookupDescriptor() {return nullptr;}
	virtual $String* methodName() {return nullptr;}
	virtual ::java::lang::constant::ClassDesc* owner() {return nullptr;}
	virtual int32_t refKind() {return 0;}
};

		} // constant
	} // lang
} // java

#endif // _java_lang_constant_DirectMethodHandleDesc_h_