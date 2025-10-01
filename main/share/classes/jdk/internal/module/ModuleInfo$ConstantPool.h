#ifndef _jdk_internal_module_ModuleInfo$ConstantPool_h_
#define _jdk_internal_module_ModuleInfo$ConstantPool_h_
//$ class jdk.internal.module.ModuleInfo$ConstantPool
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace java {
	namespace io {
		class DataInput;
	}
}
namespace jdk {
	namespace internal {
		namespace module {
			class ModuleInfo$ConstantPool$Entry;
		}
	}
}

namespace jdk {
	namespace internal {
		namespace module {

class ModuleInfo$ConstantPool : public ::java::lang::Object {
	$class(ModuleInfo$ConstantPool, $NO_CLASS_INIT, ::java::lang::Object)
public:
	ModuleInfo$ConstantPool();
	void init$(::java::io::DataInput* in);
	virtual void checkIndex(int32_t index);
	virtual void checkUnqualifiedName($String* what, int32_t index, $String* value);
	virtual $String* decodeModuleName(int32_t index, $String* value);
	virtual $String* decodeModuleName(int32_t index, int32_t i, $String* value);
	virtual $String* getClassName(int32_t index);
	virtual $String* getModuleName(int32_t index);
	virtual $String* getPackageName(int32_t index);
	virtual $String* getUtf8(int32_t index);
	static const int32_t CONSTANT_Utf8 = 1;
	static const int32_t CONSTANT_Integer = 3;
	static const int32_t CONSTANT_Float = 4;
	static const int32_t CONSTANT_Long = 5;
	static const int32_t CONSTANT_Double = 6;
	static const int32_t CONSTANT_Class = 7;
	static const int32_t CONSTANT_String = 8;
	static const int32_t CONSTANT_Fieldref = 9;
	static const int32_t CONSTANT_Methodref = 10;
	static const int32_t CONSTANT_InterfaceMethodref = 11;
	static const int32_t CONSTANT_NameAndType = 12;
	static const int32_t CONSTANT_MethodHandle = 15;
	static const int32_t CONSTANT_MethodType = 16;
	static const int32_t CONSTANT_InvokeDynamic = 18;
	static const int32_t CONSTANT_Module = 19;
	static const int32_t CONSTANT_Package = 20;
	$Array<::jdk::internal::module::ModuleInfo$ConstantPool$Entry>* pool = nullptr;
};

		} // module
	} // internal
} // jdk

#endif // _jdk_internal_module_ModuleInfo$ConstantPool_h_