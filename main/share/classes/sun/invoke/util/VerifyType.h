#ifndef _sun_invoke_util_VerifyType_h_
#define _sun_invoke_util_VerifyType_h_
//$ class sun.invoke.util.VerifyType
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace lang {
		namespace invoke {
			class MethodType;
		}
	}
}

namespace sun {
	namespace invoke {
		namespace util {

class $export VerifyType : public ::java::lang::Object {
	$class(VerifyType, 0, ::java::lang::Object)
public:
	VerifyType();
	void init$();
	static int32_t canPassUnchecked($Class* src, $Class* dst);
	static bool isNullConversion($Class* src, $Class* dst, bool keepInterfaces);
	static bool isNullConversion(::java::lang::invoke::MethodType* call, ::java::lang::invoke::MethodType* recv, bool keepInterfaces);
	static bool isNullReferenceConversion($Class* src, $Class* dst);
	static bool isNullType($Class* type);
	static bool isSpreadArgType($Class* spreadArg);
	static $Class* spreadArgElementType($Class* spreadArg, int32_t i);
	static bool $assertionsDisabled;
};

		} // util
	} // invoke
} // sun

#endif // _sun_invoke_util_VerifyType_h_