#ifndef _java_lang_invoke_MethodHandles$Lookup$ClassFile_h_
#define _java_lang_invoke_MethodHandles$Lookup$ClassFile_h_
//$ class java.lang.invoke.MethodHandles$Lookup$ClassFile
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace java {
	namespace lang {
		namespace invoke {

class $export MethodHandles$Lookup$ClassFile : public ::java::lang::Object {
	$class(MethodHandles$Lookup$ClassFile, $NO_CLASS_INIT, ::java::lang::Object)
public:
	MethodHandles$Lookup$ClassFile();
	void init$($String* name, int32_t accessFlags, $bytes* bytes);
	static ::java::lang::invoke::MethodHandles$Lookup$ClassFile* newInstance($bytes* bytes, $String* pkgName);
	static ::java::lang::invoke::MethodHandles$Lookup$ClassFile* newInstanceNoCheck($String* name, $bytes* bytes);
	static int32_t readInt($bytes* bytes, int32_t offset);
	static int32_t readUnsignedShort($bytes* bytes, int32_t offset);
	$String* name = nullptr;
	int32_t accessFlags = 0;
	$bytes* bytes = nullptr;
};

		} // invoke
	} // lang
} // java

#endif // _java_lang_invoke_MethodHandles$Lookup$ClassFile_h_