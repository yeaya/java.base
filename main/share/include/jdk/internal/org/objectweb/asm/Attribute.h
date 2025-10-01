#ifndef _jdk_internal_org_objectweb_asm$_Attribute_h_
#define _jdk_internal_org_objectweb_asm$_Attribute_h_
//$ class jdk.internal.org.objectweb.asm.Attribute
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
					class Label;
					class SymbolTable;
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

class $import Attribute : public ::java::lang::Object {
	$class(Attribute, $NO_CLASS_INIT, ::java::lang::Object)
public:
	Attribute();
	void init$($String* type);
	int32_t computeAttributesSize(::jdk::internal::org::objectweb::asm$::SymbolTable* symbolTable);
	int32_t computeAttributesSize(::jdk::internal::org::objectweb::asm$::SymbolTable* symbolTable, $bytes* code, int32_t codeLength, int32_t maxStack, int32_t maxLocals);
	static int32_t computeAttributesSize(::jdk::internal::org::objectweb::asm$::SymbolTable* symbolTable, int32_t accessFlags, int32_t signatureIndex);
	int32_t getAttributeCount();
	virtual $Array<::jdk::internal::org::objectweb::asm$::Label>* getLabels();
	virtual bool isCodeAttribute();
	virtual bool isUnknown();
	void putAttributes(::jdk::internal::org::objectweb::asm$::SymbolTable* symbolTable, ::jdk::internal::org::objectweb::asm$::ByteVector* output);
	void putAttributes(::jdk::internal::org::objectweb::asm$::SymbolTable* symbolTable, $bytes* code, int32_t codeLength, int32_t maxStack, int32_t maxLocals, ::jdk::internal::org::objectweb::asm$::ByteVector* output);
	static void putAttributes(::jdk::internal::org::objectweb::asm$::SymbolTable* symbolTable, int32_t accessFlags, int32_t signatureIndex, ::jdk::internal::org::objectweb::asm$::ByteVector* output);
	virtual ::jdk::internal::org::objectweb::asm$::Attribute* read(::jdk::internal::org::objectweb::asm$::ClassReader* classReader, int32_t offset, int32_t length, $chars* charBuffer, int32_t codeAttributeOffset, $Array<::jdk::internal::org::objectweb::asm$::Label>* labels);
	virtual ::jdk::internal::org::objectweb::asm$::ByteVector* write(::jdk::internal::org::objectweb::asm$::ClassWriter* classWriter, $bytes* code, int32_t codeLength, int32_t maxStack, int32_t maxLocals);
	$String* type = nullptr;
	$bytes* content = nullptr;
	::jdk::internal::org::objectweb::asm$::Attribute* nextAttribute = nullptr;
};

				} // asm$
			} // objectweb
		} // org
	} // internal
} // jdk

#endif // _jdk_internal_org_objectweb_asm$_Attribute_h_