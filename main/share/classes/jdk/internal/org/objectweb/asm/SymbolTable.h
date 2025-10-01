#ifndef _jdk_internal_org_objectweb_asm$_SymbolTable_h_
#define _jdk_internal_org_objectweb_asm$_SymbolTable_h_
//$ class jdk.internal.org.objectweb.asm.SymbolTable
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace jdk {
	namespace internal {
		namespace org {
			namespace objectweb {
				namespace asm$ {
					class ByteVector;
					class ClassReader;
					class ClassWriter;
					class Handle;
					class Symbol;
					class SymbolTable$Entry;
				}
			}
		}
	}
}

namespace jdk {
	namespace internal {
		namespace org {
			namespace objectweb {
				namespace asm$ {

class SymbolTable : public ::java::lang::Object {
	$class(SymbolTable, $NO_CLASS_INIT, ::java::lang::Object)
public:
	SymbolTable();
	void init$(::jdk::internal::org::objectweb::asm$::ClassWriter* classWriter);
	void init$(::jdk::internal::org::objectweb::asm$::ClassWriter* classWriter, ::jdk::internal::org::objectweb::asm$::ClassReader* classReader);
	void add(::jdk::internal::org::objectweb::asm$::SymbolTable$Entry* entry);
	::jdk::internal::org::objectweb::asm$::Symbol* addBootstrapMethod(::jdk::internal::org::objectweb::asm$::Handle* bootstrapMethodHandle, $ObjectArray* bootstrapMethodArguments);
	::jdk::internal::org::objectweb::asm$::Symbol* addBootstrapMethod(int32_t offset, int32_t length, int32_t hashCode);
	::jdk::internal::org::objectweb::asm$::Symbol* addConstant(Object$* value);
	::jdk::internal::org::objectweb::asm$::Symbol* addConstantClass($String* value);
	::jdk::internal::org::objectweb::asm$::Symbol* addConstantDouble(double value);
	::jdk::internal::org::objectweb::asm$::Symbol* addConstantDynamic($String* name, $String* descriptor, ::jdk::internal::org::objectweb::asm$::Handle* bootstrapMethodHandle, $ObjectArray* bootstrapMethodArguments);
	::jdk::internal::org::objectweb::asm$::Symbol* addConstantDynamicOrInvokeDynamicReference(int32_t tag, $String* name, $String* descriptor, int32_t bootstrapMethodIndex);
	void addConstantDynamicOrInvokeDynamicReference(int32_t tag, int32_t index, $String* name, $String* descriptor, int32_t bootstrapMethodIndex);
	::jdk::internal::org::objectweb::asm$::Symbol* addConstantFieldref($String* owner, $String* name, $String* descriptor);
	::jdk::internal::org::objectweb::asm$::Symbol* addConstantFloat(float value);
	::jdk::internal::org::objectweb::asm$::Symbol* addConstantInteger(int32_t value);
	::jdk::internal::org::objectweb::asm$::Symbol* addConstantIntegerOrFloat(int32_t tag, int32_t value);
	void addConstantIntegerOrFloat(int32_t index, int32_t tag, int32_t value);
	::jdk::internal::org::objectweb::asm$::Symbol* addConstantInvokeDynamic($String* name, $String* descriptor, ::jdk::internal::org::objectweb::asm$::Handle* bootstrapMethodHandle, $ObjectArray* bootstrapMethodArguments);
	::jdk::internal::org::objectweb::asm$::Symbol* addConstantLong(int64_t value);
	::jdk::internal::org::objectweb::asm$::Symbol* addConstantLongOrDouble(int32_t tag, int64_t value);
	void addConstantLongOrDouble(int32_t index, int32_t tag, int64_t value);
	::jdk::internal::org::objectweb::asm$::SymbolTable$Entry* addConstantMemberReference(int32_t tag, $String* owner, $String* name, $String* descriptor);
	void addConstantMemberReference(int32_t index, int32_t tag, $String* owner, $String* name, $String* descriptor);
	::jdk::internal::org::objectweb::asm$::Symbol* addConstantMethodHandle(int32_t referenceKind, $String* owner, $String* name, $String* descriptor, bool isInterface);
	void addConstantMethodHandle(int32_t index, int32_t referenceKind, $String* owner, $String* name, $String* descriptor);
	::jdk::internal::org::objectweb::asm$::Symbol* addConstantMethodType($String* methodDescriptor);
	::jdk::internal::org::objectweb::asm$::Symbol* addConstantMethodref($String* owner, $String* name, $String* descriptor, bool isInterface);
	::jdk::internal::org::objectweb::asm$::Symbol* addConstantModule($String* moduleName);
	int32_t addConstantNameAndType($String* name, $String* descriptor);
	void addConstantNameAndType(int32_t index, $String* name, $String* descriptor);
	::jdk::internal::org::objectweb::asm$::Symbol* addConstantPackage($String* packageName);
	::jdk::internal::org::objectweb::asm$::Symbol* addConstantString($String* value);
	int32_t addConstantUtf8($String* value);
	void addConstantUtf8(int32_t index, $String* value);
	::jdk::internal::org::objectweb::asm$::Symbol* addConstantUtf8Reference(int32_t tag, $String* value);
	void addConstantUtf8Reference(int32_t index, int32_t tag, $String* value);
	int32_t addMergedType(int32_t typeTableIndex1, int32_t typeTableIndex2);
	int32_t addType($String* value);
	int32_t addTypeInternal(::jdk::internal::org::objectweb::asm$::SymbolTable$Entry* entry);
	int32_t addUninitializedType($String* value, int32_t bytecodeOffset);
	int32_t computeBootstrapMethodsSize();
	void copyBootstrapMethods(::jdk::internal::org::objectweb::asm$::ClassReader* classReader, $chars* charBuffer);
	::jdk::internal::org::objectweb::asm$::SymbolTable$Entry* get(int32_t hashCode);
	$String* getClassName();
	int32_t getConstantPoolCount();
	int32_t getConstantPoolLength();
	int32_t getMajorVersion();
	::jdk::internal::org::objectweb::asm$::ClassReader* getSource();
	::jdk::internal::org::objectweb::asm$::Symbol* getType(int32_t typeIndex);
	static int32_t hash(int32_t tag, int32_t value);
	static int32_t hash(int32_t tag, int64_t value);
	static int32_t hash(int32_t tag, $String* value);
	static int32_t hash(int32_t tag, $String* value1, int32_t value2);
	static int32_t hash(int32_t tag, $String* value1, $String* value2);
	static int32_t hash(int32_t tag, $String* value1, $String* value2, int32_t value3);
	static int32_t hash(int32_t tag, $String* value1, $String* value2, $String* value3);
	static int32_t hash(int32_t tag, $String* value1, $String* value2, $String* value3, int32_t value4);
	::jdk::internal::org::objectweb::asm$::SymbolTable$Entry* put(::jdk::internal::org::objectweb::asm$::SymbolTable$Entry* entry);
	void putBootstrapMethods(::jdk::internal::org::objectweb::asm$::ByteVector* output);
	void putConstantPool(::jdk::internal::org::objectweb::asm$::ByteVector* output);
	int32_t setMajorVersionAndClassName(int32_t majorVersion, $String* className);
	::jdk::internal::org::objectweb::asm$::ClassWriter* classWriter = nullptr;
	::jdk::internal::org::objectweb::asm$::ClassReader* sourceClassReader = nullptr;
	int32_t majorVersion = 0;
	$String* className = nullptr;
	int32_t entryCount = 0;
	$Array<::jdk::internal::org::objectweb::asm$::SymbolTable$Entry>* entries = nullptr;
	int32_t constantPoolCount = 0;
	::jdk::internal::org::objectweb::asm$::ByteVector* constantPool = nullptr;
	int32_t bootstrapMethodCount = 0;
	::jdk::internal::org::objectweb::asm$::ByteVector* bootstrapMethods = nullptr;
	int32_t typeCount = 0;
	$Array<::jdk::internal::org::objectweb::asm$::SymbolTable$Entry>* typeTable = nullptr;
};

				} // asm$
			} // objectweb
		} // org
	} // internal
} // jdk

#endif // _jdk_internal_org_objectweb_asm$_SymbolTable_h_