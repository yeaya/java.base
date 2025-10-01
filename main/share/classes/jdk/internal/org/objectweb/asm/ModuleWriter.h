#ifndef _jdk_internal_org_objectweb_asm$_ModuleWriter_h_
#define _jdk_internal_org_objectweb_asm$_ModuleWriter_h_
//$ class jdk.internal.org.objectweb.asm.ModuleWriter
//$ extends jdk.internal.org.objectweb.asm.ModuleVisitor

#include <java/lang/Array.h>
#include <jdk/internal/org/objectweb/asm/ModuleVisitor.h>

namespace jdk {
	namespace internal {
		namespace org {
			namespace objectweb {
				namespace asm$ {
					class ByteVector;
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

class ModuleWriter : public ::jdk::internal::org::objectweb::asm$::ModuleVisitor {
	$class(ModuleWriter, $NO_CLASS_INIT, ::jdk::internal::org::objectweb::asm$::ModuleVisitor)
public:
	ModuleWriter();
	void init$(::jdk::internal::org::objectweb::asm$::SymbolTable* symbolTable, int32_t name, int32_t access, int32_t version);
	int32_t computeAttributesSize();
	int32_t getAttributeCount();
	void putAttributes(::jdk::internal::org::objectweb::asm$::ByteVector* output);
	virtual void visitEnd() override;
	virtual void visitExport($String* packaze, int32_t access, $StringArray* modules) override;
	virtual void visitMainClass($String* mainClass) override;
	virtual void visitOpen($String* packaze, int32_t access, $StringArray* modules) override;
	virtual void visitPackage($String* packaze) override;
	virtual void visitProvide($String* service, $StringArray* providers) override;
	virtual void visitRequire($String* module, int32_t access, $String* version) override;
	virtual void visitUse($String* service) override;
	::jdk::internal::org::objectweb::asm$::SymbolTable* symbolTable = nullptr;
	int32_t moduleNameIndex = 0;
	int32_t moduleFlags = 0;
	int32_t moduleVersionIndex = 0;
	int32_t requiresCount = 0;
	::jdk::internal::org::objectweb::asm$::ByteVector* requires = nullptr;
	int32_t exportsCount = 0;
	::jdk::internal::org::objectweb::asm$::ByteVector* exports = nullptr;
	int32_t opensCount = 0;
	::jdk::internal::org::objectweb::asm$::ByteVector* opens = nullptr;
	int32_t usesCount = 0;
	::jdk::internal::org::objectweb::asm$::ByteVector* usesIndex = nullptr;
	int32_t providesCount = 0;
	::jdk::internal::org::objectweb::asm$::ByteVector* provides = nullptr;
	int32_t packageCount = 0;
	::jdk::internal::org::objectweb::asm$::ByteVector* packageIndex = nullptr;
	int32_t mainClassIndex = 0;
};

				} // asm$
			} // objectweb
		} // org
	} // internal
} // jdk

#endif // _jdk_internal_org_objectweb_asm$_ModuleWriter_h_