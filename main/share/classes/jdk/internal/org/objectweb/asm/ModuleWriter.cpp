#include <jdk/internal/org/objectweb/asm/ModuleWriter.h>
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
using $SymbolTable = ::jdk::internal::org::objectweb::asm$::SymbolTable;

namespace jdk {
	namespace internal {
		namespace org {
			namespace objectweb {
				namespace asm$ {

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
	$useLocalObjectStack();
	$$nc($$nc($nc(this->requires)->putShort($nc($($nc(this->symbolTable)->addConstantModule(module)))->index))->putShort(access))->putShort(version == nullptr ? 0 : $nc(this->symbolTable)->addConstantUtf8(version));
	++this->requiresCount;
}

void ModuleWriter::visitExport($String* packaze, int32_t access, $StringArray* modules) {
	$useLocalObjectStack();
	$$nc($nc(this->exports)->putShort($nc($($nc(this->symbolTable)->addConstantPackage(packaze)))->index))->putShort(access);
	if (modules == nullptr) {
		this->exports->putShort(0);
	} else {
		this->exports->putShort(modules->length);
		{
			$var($StringArray, arr$, modules);
			for (int32_t len$ = arr$->length, i$ = 0; i$ < len$; ++i$) {
				$var($String, module, arr$->get(i$));
				{
					this->exports->putShort($nc($(this->symbolTable->addConstantModule(module)))->index);
				}
			}
		}
	}
	++this->exportsCount;
}

void ModuleWriter::visitOpen($String* packaze, int32_t access, $StringArray* modules) {
	$useLocalObjectStack();
	$$nc($nc(this->opens)->putShort($nc($($nc(this->symbolTable)->addConstantPackage(packaze)))->index))->putShort(access);
	if (modules == nullptr) {
		this->opens->putShort(0);
	} else {
		this->opens->putShort(modules->length);
		{
			$var($StringArray, arr$, modules);
			for (int32_t len$ = arr$->length, i$ = 0; i$ < len$; ++i$) {
				$var($String, module, arr$->get(i$));
				{
					this->opens->putShort($nc($(this->symbolTable->addConstantModule(module)))->index);
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
	$useLocalObjectStack();
	$nc(this->provides)->putShort($nc($($nc(this->symbolTable)->addConstantClass(service)))->index);
	this->provides->putShort($nc(providers)->length);
	{
		$var($StringArray, arr$, providers);
		for (int32_t len$ = arr$->length, i$ = 0; i$ < len$; ++i$) {
			$var($String, provider, arr$->get(i$));
			{
				this->provides->putShort($nc($(this->symbolTable->addConstantClass(provider)))->index);
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
		this->symbolTable->addConstantUtf8($Constants::MODULE_PACKAGES);
		size += 8 + $nc(this->packageIndex)->length;
	}
	if (this->mainClassIndex > 0) {
		this->symbolTable->addConstantUtf8($Constants::MODULE_MAIN_CLASS);
		size += 8;
	}
	return size;
}

void ModuleWriter::putAttributes($ByteVector* output) {
	$useLocalObjectStack();
	int32_t moduleAttributeLength = 16 + $nc(this->requires)->length + $nc(this->exports)->length + $nc(this->opens)->length + $nc(this->usesIndex)->length + $nc(this->provides)->length;
	$init($Constants);
	$$nc($$nc($$nc($$nc($$nc($$nc($$nc($$nc($$nc($$nc($$nc($$nc($$nc($$nc($nc(output)->putShort($nc(this->symbolTable)->addConstantUtf8($Constants::MODULE)))->putInt(moduleAttributeLength))->putShort(this->moduleNameIndex))->putShort(this->moduleFlags))->putShort(this->moduleVersionIndex))->putShort(this->requiresCount))->putByteArray(this->requires->data, 0, this->requires->length))->putShort(this->exportsCount))->putByteArray(this->exports->data, 0, this->exports->length))->putShort(this->opensCount))->putByteArray(this->opens->data, 0, this->opens->length))->putShort(this->usesCount))->putByteArray(this->usesIndex->data, 0, this->usesIndex->length))->putShort(this->providesCount))->putByteArray(this->provides->data, 0, this->provides->length);
	if (this->packageCount > 0) {
		$$nc($$nc($$nc(output->putShort(this->symbolTable->addConstantUtf8($Constants::MODULE_PACKAGES)))->putInt(2 + $nc(this->packageIndex)->length))->putShort(this->packageCount))->putByteArray($nc(this->packageIndex)->data, 0, $nc(this->packageIndex)->length);
	}
	if (this->mainClassIndex > 0) {
		$$nc($$nc(output->putShort(this->symbolTable->addConstantUtf8($Constants::MODULE_MAIN_CLASS)))->putInt(2))->putShort(this->mainClassIndex);
	}
}

ModuleWriter::ModuleWriter() {
}

$Class* ModuleWriter::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
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
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljdk/internal/org/objectweb/asm/SymbolTable;III)V", nullptr, 0, $method(ModuleWriter, init$, void, $SymbolTable*, int32_t, int32_t, int32_t)},
		{"computeAttributesSize", "()I", nullptr, 0, $method(ModuleWriter, computeAttributesSize, int32_t)},
		{"getAttributeCount", "()I", nullptr, 0, $method(ModuleWriter, getAttributeCount, int32_t)},
		{"putAttributes", "(Ljdk/internal/org/objectweb/asm/ByteVector;)V", nullptr, 0, $method(ModuleWriter, putAttributes, void, $ByteVector*)},
		{"visitEnd", "()V", nullptr, $PUBLIC, $virtualMethod(ModuleWriter, visitEnd, void)},
		{"visitExport", "(Ljava/lang/String;I[Ljava/lang/String;)V", nullptr, $PUBLIC | $TRANSIENT, $virtualMethod(ModuleWriter, visitExport, void, $String*, int32_t, $StringArray*)},
		{"visitMainClass", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $virtualMethod(ModuleWriter, visitMainClass, void, $String*)},
		{"visitOpen", "(Ljava/lang/String;I[Ljava/lang/String;)V", nullptr, $PUBLIC | $TRANSIENT, $virtualMethod(ModuleWriter, visitOpen, void, $String*, int32_t, $StringArray*)},
		{"visitPackage", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $virtualMethod(ModuleWriter, visitPackage, void, $String*)},
		{"visitProvide", "(Ljava/lang/String;[Ljava/lang/String;)V", nullptr, $PUBLIC | $TRANSIENT, $virtualMethod(ModuleWriter, visitProvide, void, $String*, $StringArray*)},
		{"visitRequire", "(Ljava/lang/String;ILjava/lang/String;)V", nullptr, $PUBLIC, $virtualMethod(ModuleWriter, visitRequire, void, $String*, int32_t, $String*)},
		{"visitUse", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $virtualMethod(ModuleWriter, visitUse, void, $String*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"jdk.internal.org.objectweb.asm.ModuleWriter",
		"jdk.internal.org.objectweb.asm.ModuleVisitor",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(ModuleWriter, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ModuleWriter);
	});
	return class$;
}

$Class* ModuleWriter::class$ = nullptr;

				} // asm$
			} // objectweb
		} // org
	} // internal
} // jdk