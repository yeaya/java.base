#include <jdk/internal/org/objectweb/asm/Attribute.h>

#include <jdk/internal/org/objectweb/asm/ByteVector.h>
#include <jdk/internal/org/objectweb/asm/ClassReader.h>
#include <jdk/internal/org/objectweb/asm/ClassWriter.h>
#include <jdk/internal/org/objectweb/asm/Constants.h>
#include <jdk/internal/org/objectweb/asm/Label.h>
#include <jdk/internal/org/objectweb/asm/Opcodes.h>
#include <jdk/internal/org/objectweb/asm/SymbolTable.h>
#include <jcpp.h>

#undef ACC_DEPRECATED
#undef ACC_SYNTHETIC
#undef DEPRECATED
#undef SIGNATURE
#undef SYNTHETIC

using $LabelArray = $Array<::jdk::internal::org::objectweb::asm$::Label>;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ByteVector = ::jdk::internal::org::objectweb::asm$::ByteVector;
using $ClassReader = ::jdk::internal::org::objectweb::asm$::ClassReader;
using $ClassWriter = ::jdk::internal::org::objectweb::asm$::ClassWriter;
using $Constants = ::jdk::internal::org::objectweb::asm$::Constants;
using $Opcodes = ::jdk::internal::org::objectweb::asm$::Opcodes;
using $SymbolTable = ::jdk::internal::org::objectweb::asm$::SymbolTable;

namespace jdk {
	namespace internal {
		namespace org {
			namespace objectweb {
				namespace asm$ {

$FieldInfo _Attribute_FieldInfo_[] = {
	{"type", "Ljava/lang/String;", nullptr, $PUBLIC | $FINAL, $field(Attribute, type)},
	{"content", "[B", nullptr, $PRIVATE, $field(Attribute, content)},
	{"nextAttribute", "Ljdk/internal/org/objectweb/asm/Attribute;", nullptr, 0, $field(Attribute, nextAttribute)},
	{}
};

$MethodInfo _Attribute_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;)V", nullptr, $PROTECTED, $method(static_cast<void(Attribute::*)($String*)>(&Attribute::init$))},
	{"computeAttributesSize", "(Ljdk/internal/org/objectweb/asm/SymbolTable;)I", nullptr, $FINAL, $method(static_cast<int32_t(Attribute::*)($SymbolTable*)>(&Attribute::computeAttributesSize))},
	{"computeAttributesSize", "(Ljdk/internal/org/objectweb/asm/SymbolTable;[BIII)I", nullptr, $FINAL, $method(static_cast<int32_t(Attribute::*)($SymbolTable*,$bytes*,int32_t,int32_t,int32_t)>(&Attribute::computeAttributesSize))},
	{"computeAttributesSize", "(Ljdk/internal/org/objectweb/asm/SymbolTable;II)I", nullptr, $STATIC, $method(static_cast<int32_t(*)($SymbolTable*,int32_t,int32_t)>(&Attribute::computeAttributesSize))},
	{"getAttributeCount", "()I", nullptr, $FINAL, $method(static_cast<int32_t(Attribute::*)()>(&Attribute::getAttributeCount))},
	{"getLabels", "()[Ljdk/internal/org/objectweb/asm/Label;", nullptr, $PROTECTED},
	{"isCodeAttribute", "()Z", nullptr, $PUBLIC},
	{"isUnknown", "()Z", nullptr, $PUBLIC},
	{"putAttributes", "(Ljdk/internal/org/objectweb/asm/SymbolTable;Ljdk/internal/org/objectweb/asm/ByteVector;)V", nullptr, $FINAL, $method(static_cast<void(Attribute::*)($SymbolTable*,$ByteVector*)>(&Attribute::putAttributes))},
	{"putAttributes", "(Ljdk/internal/org/objectweb/asm/SymbolTable;[BIIILjdk/internal/org/objectweb/asm/ByteVector;)V", nullptr, $FINAL, $method(static_cast<void(Attribute::*)($SymbolTable*,$bytes*,int32_t,int32_t,int32_t,$ByteVector*)>(&Attribute::putAttributes))},
	{"putAttributes", "(Ljdk/internal/org/objectweb/asm/SymbolTable;IILjdk/internal/org/objectweb/asm/ByteVector;)V", nullptr, $STATIC, $method(static_cast<void(*)($SymbolTable*,int32_t,int32_t,$ByteVector*)>(&Attribute::putAttributes))},
	{"read", "(Ljdk/internal/org/objectweb/asm/ClassReader;II[CI[Ljdk/internal/org/objectweb/asm/Label;)Ljdk/internal/org/objectweb/asm/Attribute;", nullptr, $PROTECTED},
	{"write", "(Ljdk/internal/org/objectweb/asm/ClassWriter;[BIII)Ljdk/internal/org/objectweb/asm/ByteVector;", nullptr, $PROTECTED},
	{}
};

$InnerClassInfo _Attribute_InnerClassesInfo_[] = {
	{"jdk.internal.org.objectweb.asm.Attribute$Set", "jdk.internal.org.objectweb.asm.Attribute", "Set", $STATIC | $FINAL},
	{}
};

$ClassInfo _Attribute_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"jdk.internal.org.objectweb.asm.Attribute",
	"java.lang.Object",
	nullptr,
	_Attribute_FieldInfo_,
	_Attribute_MethodInfo_,
	nullptr,
	nullptr,
	_Attribute_InnerClassesInfo_,
	nullptr,
	nullptr,
	"jdk.internal.org.objectweb.asm.Attribute$Set"
};

$Object* allocate$Attribute($Class* clazz) {
	return $of($alloc(Attribute));
}

void Attribute::init$($String* type) {
	$set(this, type, type);
}

bool Attribute::isUnknown() {
	return true;
}

bool Attribute::isCodeAttribute() {
	return false;
}

$LabelArray* Attribute::getLabels() {
	return $new($LabelArray, 0);
}

Attribute* Attribute::read($ClassReader* classReader, int32_t offset, int32_t length, $chars* charBuffer, int32_t codeAttributeOffset, $LabelArray* labels) {
	$var(Attribute, attribute, $new(Attribute, this->type));
	$set(attribute, content, $new($bytes, length));
	$System::arraycopy($nc(classReader)->classFileBuffer, offset, attribute->content, 0, length);
	return attribute;
}

$ByteVector* Attribute::write($ClassWriter* classWriter, $bytes* code, int32_t codeLength, int32_t maxStack, int32_t maxLocals) {
	return $new($ByteVector, this->content);
}

int32_t Attribute::getAttributeCount() {
	int32_t count = 0;
	$var(Attribute, attribute, this);
	while (attribute != nullptr) {
		count += 1;
		$assign(attribute, attribute->nextAttribute);
	}
	return count;
}

int32_t Attribute::computeAttributesSize($SymbolTable* symbolTable) {
	$var($bytes, code, nullptr);
	int32_t codeLength = 0;
	int32_t maxStack = -1;
	int32_t maxLocals = -1;
	return computeAttributesSize(symbolTable, code, codeLength, maxStack, maxLocals);
}

int32_t Attribute::computeAttributesSize($SymbolTable* symbolTable, $bytes* code, int32_t codeLength, int32_t maxStack, int32_t maxLocals) {
	$useLocalCurrentObjectStackCache();
	$var($ClassWriter, classWriter, $nc(symbolTable)->classWriter);
	int32_t size = 0;
	$var(Attribute, attribute, this);
	while (attribute != nullptr) {
		symbolTable->addConstantUtf8(attribute->type);
		size += 6 + $nc($(attribute->write(classWriter, code, codeLength, maxStack, maxLocals)))->length;
		$assign(attribute, attribute->nextAttribute);
	}
	return size;
}

int32_t Attribute::computeAttributesSize($SymbolTable* symbolTable, int32_t accessFlags, int32_t signatureIndex) {
	int32_t size = 0;
	if (((int32_t)(accessFlags & (uint32_t)$Opcodes::ACC_SYNTHETIC)) != 0 && $nc(symbolTable)->getMajorVersion() < $Opcodes::V1_5) {
		$init($Constants);
		symbolTable->addConstantUtf8($Constants::SYNTHETIC);
		size += 6;
	}
	if (signatureIndex != 0) {
		$init($Constants);
		$nc(symbolTable)->addConstantUtf8($Constants::SIGNATURE);
		size += 8;
	}
	if (((int32_t)(accessFlags & (uint32_t)$Opcodes::ACC_DEPRECATED)) != 0) {
		$init($Constants);
		$nc(symbolTable)->addConstantUtf8($Constants::DEPRECATED);
		size += 6;
	}
	return size;
}

void Attribute::putAttributes($SymbolTable* symbolTable, $ByteVector* output) {
	$var($bytes, code, nullptr);
	int32_t codeLength = 0;
	int32_t maxStack = -1;
	int32_t maxLocals = -1;
	putAttributes(symbolTable, code, codeLength, maxStack, maxLocals, output);
}

void Attribute::putAttributes($SymbolTable* symbolTable, $bytes* code, int32_t codeLength, int32_t maxStack, int32_t maxLocals, $ByteVector* output) {
	$useLocalCurrentObjectStackCache();
	$var($ClassWriter, classWriter, $nc(symbolTable)->classWriter);
	$var(Attribute, attribute, this);
	while (attribute != nullptr) {
		$var($ByteVector, attributeContent, attribute->write(classWriter, code, codeLength, maxStack, maxLocals));
		$nc($($nc(output)->putShort(symbolTable->addConstantUtf8(attribute->type))))->putInt($nc(attributeContent)->length);
		output->putByteArray($nc(attributeContent)->data, 0, attributeContent->length);
		$assign(attribute, attribute->nextAttribute);
	}
}

void Attribute::putAttributes($SymbolTable* symbolTable, int32_t accessFlags, int32_t signatureIndex, $ByteVector* output) {
	$useLocalCurrentObjectStackCache();
	if (((int32_t)(accessFlags & (uint32_t)$Opcodes::ACC_SYNTHETIC)) != 0 && $nc(symbolTable)->getMajorVersion() < $Opcodes::V1_5) {
		$init($Constants);
		$nc($($nc(output)->putShort(symbolTable->addConstantUtf8($Constants::SYNTHETIC))))->putInt(0);
	}
	if (signatureIndex != 0) {
		$init($Constants);
		$nc($($nc($($nc(output)->putShort($nc(symbolTable)->addConstantUtf8($Constants::SIGNATURE))))->putInt(2)))->putShort(signatureIndex);
	}
	if (((int32_t)(accessFlags & (uint32_t)$Opcodes::ACC_DEPRECATED)) != 0) {
		$init($Constants);
		$nc($($nc(output)->putShort($nc(symbolTable)->addConstantUtf8($Constants::DEPRECATED))))->putInt(0);
	}
}

Attribute::Attribute() {
}

$Class* Attribute::load$($String* name, bool initialize) {
	$loadClass(Attribute, name, initialize, &_Attribute_ClassInfo_, allocate$Attribute);
	return class$;
}

$Class* Attribute::class$ = nullptr;

				} // asm$
			} // objectweb
		} // org
	} // internal
} // jdk