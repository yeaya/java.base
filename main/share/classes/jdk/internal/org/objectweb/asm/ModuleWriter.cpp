#include <jdk/internal/org/objectweb/asm/ModuleWriter.h>

#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jdk/internal/org/objectweb/asm/ByteVector.h>
#include <jdk/internal/org/objectweb/asm/Constants.h>
#include <jdk/internal/org/objectweb/asm/ModuleVisitor.h>
#include <jdk/internal/org/objectweb/asm/Opcodes.h>
#include <jdk/internal/org/objectweb/asm/Symbol.h>
#include <jdk/internal/org/objectweb/asm/SymbolTable.h>
#include <jcpp.h>

#undef ASM8
#undef MODULE
#undef MODULE_MAIN_CLASS
#undef MODULE_PACKAGES

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ByteVector = ::jdk::internal::org::objectweb::asm$::ByteVector;
using $Constants = ::jdk::internal::org::objectweb::asm$::Constants;
using $ModuleVisitor = ::jdk::internal::org::objectweb::asm$::ModuleVisitor;
using $Opcodes = ::jdk::internal::org::objectweb::asm$::Opcodes;
using $Symbol = ::jdk::internal::org::objectweb::asm$::Symbol;
using $SymbolTable = ::jdk::internal::org::objectweb::asm$::SymbolTable;

namespace jdk {
	namespace internal {
		namespace org {
			namespace objectweb {
				namespace asm$ {

$FieldInfo _ModuleWriter_FieldInfo_[] = {
	{"symbolTable", "Ljdk/internal/org/objectweb/asm/SymbolTable;", nullptr, $PRIVATE | $FINAL, $field(ModuleWriter, symbolTable)},
	{"moduleNameIndex", "I", nullptr, $PRIVATE | $FINAL, $field(ModuleWriter, moduleNameIndex)},
	{"moduleFlags", "I", nullptr, $PRIVATE | $FINAL, $field(ModuleWriter, moduleFlags)},
	{"moduleVersionIndex", "I", nullptr, $PRIVATE | $FINAL, $field(ModuleWriter, moduleVersionIndex)},
	{"requiresCount", "I", nullptr, $PRIVATE, $field(ModuleWriter, requiresCount)},
	{"requires", "Ljdk/internal/org/objectweb/asm/ByteVector;", nullptr, $PRIVATE | $FINAL, $field(ModuleWriter, requires)},
	{"exportsCount", "I", nullptr, $PRIVATE, $field(ModuleWriter, exportsCount)},
	{"exports", "Ljdk/internal/org/objectweb/asm/ByteVector;", nullptr, $PRIVATE | $FINAL, $field(ModuleWriter, exports)},
	{"opensCount", "I", nullptr, $PRIVATE, $field(ModuleWriter, opensCount)},
	{"opens", "Ljdk/internal/org/objectweb/asm/ByteVector;", nullptr, $PRIVATE | $FINAL, $field(ModuleWriter, opens)},
	{"usesCount", "I", nullptr, $PRIVATE, $field(ModuleWriter, usesCount)},
	{"usesIndex", "Ljdk/internal/org/objectweb/asm/ByteVector;", nullptr, $PRIVATE | $FINAL, $field(ModuleWriter, usesIndex)},
	{"providesCount", "I", nullptr, $PRIVATE, $field(ModuleWriter, providesCount)},
	{"provides", "Ljdk/internal/org/objectweb/asm/ByteVector;", nullptr, $PRIVATE | $FINAL, $field(ModuleWriter, provides)},
	{"packageCount", "I", nullptr, $PRIVATE, $field(ModuleWriter, packageCount)},
	{"packageIndex", "Ljdk/internal/org/objectweb/asm/ByteVector;", nullptr, $PRIVATE | $FINAL, $field(ModuleWriter, packageIndex)},
	{"mainClassIndex", "I", nullptr, $PRIVATE, $field(ModuleWriter, mainClassIndex)},
	{}
};

$MethodInfo _ModuleWriter_MethodInfo_[] = {
	{"<init>", "(Ljdk/internal/org/objectweb/asm/SymbolTable;III)V", nullptr, 0, $method(static_cast<void(ModuleWriter::*)($SymbolTable*,int32_t,int32_t,int32_t)>(&ModuleWriter::init$))},
	{"computeAttributesSize", "()I", nullptr, 0, $method(static_cast<int32_t(ModuleWriter::*)()>(&ModuleWriter::computeAttributesSize))},
	{"getAttributeCount", "()I", nullptr, 0, $method(static_cast<int32_t(ModuleWriter::*)()>(&ModuleWriter::getAttributeCount))},
	{"putAttributes", "(Ljdk/internal/org/objectweb/asm/ByteVector;)V", nullptr, 0, $method(static_cast<void(ModuleWriter::*)($ByteVector*)>(&ModuleWriter::putAttributes))},
	{"visitEnd", "()V", nullptr, $PUBLIC},
	{"visitExport", "(Ljava/lang/String;I[Ljava/lang/String;)V", nullptr, $PUBLIC | $TRANSIENT},
	{"visitMainClass", "(Ljava/lang/String;)V", nullptr, $PUBLIC},
	{"visitOpen", "(Ljava/lang/String;I[Ljava/lang/String;)V", nullptr, $PUBLIC | $TRANSIENT},
	{"visitPackage", "(Ljava/lang/String;)V", nullptr, $PUBLIC},
	{"visitProvide", "(Ljava/lang/String;[Ljava/lang/String;)V", nullptr, $PUBLIC | $TRANSIENT},
	{"visitRequire", "(Ljava/lang/String;ILjava/lang/String;)V", nullptr, $PUBLIC},
	{"visitUse", "(Ljava/lang/String;)V", nullptr, $PUBLIC},
	{}
};

$ClassInfo _ModuleWriter_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"jdk.internal.org.objectweb.asm.ModuleWriter",
	"jdk.internal.org.objectweb.asm.ModuleVisitor",
	nullptr,
	_ModuleWriter_FieldInfo_,
	_ModuleWriter_MethodInfo_
};

$Object* allocate$ModuleWriter($Class* clazz) {
	return $of($alloc(ModuleWriter));
}

void ModuleWriter::init$($SymbolTable* symbolTable, int32_t name, int32_t access, int32_t version) {
	$ModuleVisitor::init$($Opcodes::ASM8);
	$set(this, symbolTable, symbolTable);
	this->moduleNameIndex = name;
	this->moduleFlags = access;
	this->moduleVersionIndex = version;
	$set(this, requires, $new($ByteVector));
	$set(this, exports, $new($ByteVector));
	$set(this, opens, $new($ByteVector));
	$set(this, usesIndex, $new($ByteVector));
	$set(this, provides, $new($ByteVector));
	$set(this, packageIndex, $new($ByteVector));
}

void ModuleWriter::visitMainClass($String* mainClass) {
	this->mainClassIndex = $nc($($nc(this->symbolTable)->addConstantClass(mainClass)))->index;
}

void ModuleWriter::visitPackage($String* packaze) {
	$nc(this->packageIndex)->putShort($nc($($nc(this->symbolTable)->addConstantPackage(packaze)))->index);
	++this->packageCount;
}

void ModuleWriter::visitRequire($String* module, int32_t access, $String* version) {
	$nc($($nc($($nc(this->requires)->putShort($nc($($nc(this->symbolTable)->addConstantModule(module)))->index)))->putShort(access)))->putShort(version == nullptr ? 0 : $nc(this->symbolTable)->addConstantUtf8(version));
	++this->requiresCount;
}

void ModuleWriter::visitExport($String* packaze, int32_t access, $StringArray* modules) {
	$nc($($nc(this->exports)->putShort($nc($($nc(this->symbolTable)->addConstantPackage(packaze)))->index)))->putShort(access);
	if (modules == nullptr) {
		$nc(this->exports)->putShort(0);
	} else {
		$nc(this->exports)->putShort($nc(modules)->length);
		{
			$var($StringArray, arr$, modules);
			int32_t len$ = $nc(arr$)->length;
			int32_t i$ = 0;
			for (; i$ < len$; ++i$) {
				$var($String, module, arr$->get(i$));
				{
					$nc(this->exports)->putShort($nc($($nc(this->symbolTable)->addConstantModule(module)))->index);
				}
			}
		}
	}
	++this->exportsCount;
}

void ModuleWriter::visitOpen($String* packaze, int32_t access, $StringArray* modules) {
	$nc($($nc(this->opens)->putShort($nc($($nc(this->symbolTable)->addConstantPackage(packaze)))->index)))->putShort(access);
	if (modules == nullptr) {
		$nc(this->opens)->putShort(0);
	} else {
		$nc(this->opens)->putShort($nc(modules)->length);
		{
			$var($StringArray, arr$, modules);
			int32_t len$ = $nc(arr$)->length;
			int32_t i$ = 0;
			for (; i$ < len$; ++i$) {
				$var($String, module, arr$->get(i$));
				{
					$nc(this->opens)->putShort($nc($($nc(this->symbolTable)->addConstantModule(module)))->index);
				}
			}
		}
	}
	++this->opensCount;
}

void ModuleWriter::visitUse($String* service) {
	$nc(this->usesIndex)->putShort($nc($($nc(this->symbolTable)->addConstantClass(service)))->index);
	++this->usesCount;
}

void ModuleWriter::visitProvide($String* service, $StringArray* providers) {
	$nc(this->provides)->putShort($nc($($nc(this->symbolTable)->addConstantClass(service)))->index);
	$nc(this->provides)->putShort($nc(providers)->length);
	{
		$var($StringArray, arr$, providers);
		int32_t len$ = $nc(arr$)->length;
		int32_t i$ = 0;
		for (; i$ < len$; ++i$) {
			$var($String, provider, arr$->get(i$));
			{
				$nc(this->provides)->putShort($nc($($nc(this->symbolTable)->addConstantClass(provider)))->index);
			}
		}
	}
	++this->providesCount;
}

void ModuleWriter::visitEnd() {
}

int32_t ModuleWriter::getAttributeCount() {
	return 1 + (this->packageCount > 0 ? 1 : 0) + (this->mainClassIndex > 0 ? 1 : 0);
}

int32_t ModuleWriter::computeAttributesSize() {
	$init($Constants);
	$nc(this->symbolTable)->addConstantUtf8($Constants::MODULE);
	int32_t size = 22 + $nc(this->requires)->length + $nc(this->exports)->length + $nc(this->opens)->length + $nc(this->usesIndex)->length + $nc(this->provides)->length;
	if (this->packageCount > 0) {
		$nc(this->symbolTable)->addConstantUtf8($Constants::MODULE_PACKAGES);
		size += 8 + $nc(this->packageIndex)->length;
	}
	if (this->mainClassIndex > 0) {
		$nc(this->symbolTable)->addConstantUtf8($Constants::MODULE_MAIN_CLASS);
		size += 8;
	}
	return size;
}

void ModuleWriter::putAttributes($ByteVector* output) {
	int32_t moduleAttributeLength = 16 + $nc(this->requires)->length + $nc(this->exports)->length + $nc(this->opens)->length + $nc(this->usesIndex)->length + $nc(this->provides)->length;
	$init($Constants);
	$nc($($nc($($nc($($nc($($nc($($nc($($nc($($nc($($nc($($nc($($nc($($nc($($nc($($nc($($nc(output)->putShort($nc(this->symbolTable)->addConstantUtf8($Constants::MODULE))))->putInt(moduleAttributeLength)))->putShort(this->moduleNameIndex)))->putShort(this->moduleFlags)))->putShort(this->moduleVersionIndex)))->putShort(this->requiresCount)))->putByteArray($nc(this->requires)->data, 0, $nc(this->requires)->length)))->putShort(this->exportsCount)))->putByteArray($nc(this->exports)->data, 0, $nc(this->exports)->length)))->putShort(this->opensCount)))->putByteArray($nc(this->opens)->data, 0, $nc(this->opens)->length)))->putShort(this->usesCount)))->putByteArray($nc(this->usesIndex)->data, 0, $nc(this->usesIndex)->length)))->putShort(this->providesCount)))->putByteArray($nc(this->provides)->data, 0, $nc(this->provides)->length);
	if (this->packageCount > 0) {
		$nc($($nc($($nc($(output->putShort($nc(this->symbolTable)->addConstantUtf8($Constants::MODULE_PACKAGES))))->putInt(2 + $nc(this->packageIndex)->length)))->putShort(this->packageCount)))->putByteArray($nc(this->packageIndex)->data, 0, $nc(this->packageIndex)->length);
	}
	if (this->mainClassIndex > 0) {
		$nc($($nc($(output->putShort($nc(this->symbolTable)->addConstantUtf8($Constants::MODULE_MAIN_CLASS))))->putInt(2)))->putShort(this->mainClassIndex);
	}
}

ModuleWriter::ModuleWriter() {
}

$Class* ModuleWriter::load$($String* name, bool initialize) {
	$loadClass(ModuleWriter, name, initialize, &_ModuleWriter_ClassInfo_, allocate$ModuleWriter);
	return class$;
}

$Class* ModuleWriter::class$ = nullptr;

				} // asm$
			} // objectweb
		} // org
	} // internal
} // jdk