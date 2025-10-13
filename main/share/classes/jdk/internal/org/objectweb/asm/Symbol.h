#ifndef _jdk_internal_org_objectweb_asm$_Symbol_h_
#define _jdk_internal_org_objectweb_asm$_Symbol_h_
//$ class jdk.internal.org.objectweb.asm.Symbol
//$ extends java.lang.Object

#include <java/lang/Object.h>

#pragma push_macro("BOOTSTRAP_METHOD_TAG")
#undef BOOTSTRAP_METHOD_TAG
#pragma push_macro("CONSTANT_CLASS_TAG")
#undef CONSTANT_CLASS_TAG
#pragma push_macro("CONSTANT_DOUBLE_TAG")
#undef CONSTANT_DOUBLE_TAG
#pragma push_macro("CONSTANT_DYNAMIC_TAG")
#undef CONSTANT_DYNAMIC_TAG
#pragma push_macro("CONSTANT_FIELDREF_TAG")
#undef CONSTANT_FIELDREF_TAG
#pragma push_macro("CONSTANT_FLOAT_TAG")
#undef CONSTANT_FLOAT_TAG
#pragma push_macro("CONSTANT_INTEGER_TAG")
#undef CONSTANT_INTEGER_TAG
#pragma push_macro("CONSTANT_INTERFACE_METHODREF_TAG")
#undef CONSTANT_INTERFACE_METHODREF_TAG
#pragma push_macro("CONSTANT_INVOKE_DYNAMIC_TAG")
#undef CONSTANT_INVOKE_DYNAMIC_TAG
#pragma push_macro("CONSTANT_LONG_TAG")
#undef CONSTANT_LONG_TAG
#pragma push_macro("CONSTANT_METHODREF_TAG")
#undef CONSTANT_METHODREF_TAG
#pragma push_macro("CONSTANT_METHOD_HANDLE_TAG")
#undef CONSTANT_METHOD_HANDLE_TAG
#pragma push_macro("CONSTANT_METHOD_TYPE_TAG")
#undef CONSTANT_METHOD_TYPE_TAG
#pragma push_macro("CONSTANT_MODULE_TAG")
#undef CONSTANT_MODULE_TAG
#pragma push_macro("CONSTANT_NAME_AND_TYPE_TAG")
#undef CONSTANT_NAME_AND_TYPE_TAG
#pragma push_macro("CONSTANT_PACKAGE_TAG")
#undef CONSTANT_PACKAGE_TAG
#pragma push_macro("CONSTANT_STRING_TAG")
#undef CONSTANT_STRING_TAG
#pragma push_macro("CONSTANT_UTF8_TAG")
#undef CONSTANT_UTF8_TAG
#pragma push_macro("MERGED_TYPE_TAG")
#undef MERGED_TYPE_TAG
#pragma push_macro("TYPE_TAG")
#undef TYPE_TAG
#pragma push_macro("UNINITIALIZED_TYPE_TAG")
#undef UNINITIALIZED_TYPE_TAG

namespace jdk {
	namespace internal {
		namespace org {
			namespace objectweb {
				namespace asm$ {

class Symbol : public ::java::lang::Object {
	$class(Symbol, $NO_CLASS_INIT, ::java::lang::Object)
public:
	Symbol();
	void init$(int32_t index, int32_t tag, $String* owner, $String* name, $String* value, int64_t data);
	virtual int32_t getArgumentsAndReturnSizes();
	static const int32_t CONSTANT_CLASS_TAG = 7;
	static const int32_t CONSTANT_FIELDREF_TAG = 9;
	static const int32_t CONSTANT_METHODREF_TAG = 10;
	static const int32_t CONSTANT_INTERFACE_METHODREF_TAG = 11;
	static const int32_t CONSTANT_STRING_TAG = 8;
	static const int32_t CONSTANT_INTEGER_TAG = 3;
	static const int32_t CONSTANT_FLOAT_TAG = 4;
	static const int32_t CONSTANT_LONG_TAG = 5;
	static const int32_t CONSTANT_DOUBLE_TAG = 6;
	static const int32_t CONSTANT_NAME_AND_TYPE_TAG = 12;
	static const int32_t CONSTANT_UTF8_TAG = 1;
	static const int32_t CONSTANT_METHOD_HANDLE_TAG = 15;
	static const int32_t CONSTANT_METHOD_TYPE_TAG = 16;
	static const int32_t CONSTANT_DYNAMIC_TAG = 17;
	static const int32_t CONSTANT_INVOKE_DYNAMIC_TAG = 18;
	static const int32_t CONSTANT_MODULE_TAG = 19;
	static const int32_t CONSTANT_PACKAGE_TAG = 20;
	static const int32_t BOOTSTRAP_METHOD_TAG = 64;
	static const int32_t TYPE_TAG = 128;
	static const int32_t UNINITIALIZED_TYPE_TAG = 129;
	static const int32_t MERGED_TYPE_TAG = 130;
	int32_t index = 0;
	int32_t tag = 0;
	$String* owner = nullptr;
	$String* name = nullptr;
	$String* value = nullptr;
	int64_t data = 0;
	int32_t info = 0;
};

				} // asm$
			} // objectweb
		} // org
	} // internal
} // jdk

#pragma pop_macro("BOOTSTRAP_METHOD_TAG")
#pragma pop_macro("CONSTANT_CLASS_TAG")
#pragma pop_macro("CONSTANT_DOUBLE_TAG")
#pragma pop_macro("CONSTANT_DYNAMIC_TAG")
#pragma pop_macro("CONSTANT_FIELDREF_TAG")
#pragma pop_macro("CONSTANT_FLOAT_TAG")
#pragma pop_macro("CONSTANT_INTEGER_TAG")
#pragma pop_macro("CONSTANT_INTERFACE_METHODREF_TAG")
#pragma pop_macro("CONSTANT_INVOKE_DYNAMIC_TAG")
#pragma pop_macro("CONSTANT_LONG_TAG")
#pragma pop_macro("CONSTANT_METHODREF_TAG")
#pragma pop_macro("CONSTANT_METHOD_HANDLE_TAG")
#pragma pop_macro("CONSTANT_METHOD_TYPE_TAG")
#pragma pop_macro("CONSTANT_MODULE_TAG")
#pragma pop_macro("CONSTANT_NAME_AND_TYPE_TAG")
#pragma pop_macro("CONSTANT_PACKAGE_TAG")
#pragma pop_macro("CONSTANT_STRING_TAG")
#pragma pop_macro("CONSTANT_UTF8_TAG")
#pragma pop_macro("MERGED_TYPE_TAG")
#pragma pop_macro("TYPE_TAG")
#pragma pop_macro("UNINITIALIZED_TYPE_TAG")

#endif // _jdk_internal_org_objectweb_asm$_Symbol_h_