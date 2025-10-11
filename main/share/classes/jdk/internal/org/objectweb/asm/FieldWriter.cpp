#include <jdk/internal/org/objectweb/asm/FieldWriter.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jdk/internal/org/objectweb/asm/AnnotationVisitor.h>
#include <jdk/internal/org/objectweb/asm/AnnotationWriter.h>
#include <jdk/internal/org/objectweb/asm/Attribute$Set.h>
#include <jdk/internal/org/objectweb/asm/Attribute.h>
#include <jdk/internal/org/objectweb/asm/ByteVector.h>
#include <jdk/internal/org/objectweb/asm/Constants.h>
#include <jdk/internal/org/objectweb/asm/FieldVisitor.h>
#include <jdk/internal/org/objectweb/asm/Opcodes.h>
#include <jdk/internal/org/objectweb/asm/Symbol.h>
#include <jdk/internal/org/objectweb/asm/SymbolTable.h>
#include <jdk/internal/org/objectweb/asm/TypePath.h>
#include <jcpp.h>

#undef ASM8
#undef ACC_DEPRECATED
#undef ACC_SYNTHETIC
#undef CONSTANT_VALUE

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AnnotationVisitor = ::jdk::internal::org::objectweb::asm$::AnnotationVisitor;
using $AnnotationWriter = ::jdk::internal::org::objectweb::asm$::AnnotationWriter;
using $Attribute = ::jdk::internal::org::objectweb::asm$::Attribute;
using $Attribute$Set = ::jdk::internal::org::objectweb::asm$::Attribute$Set;
using $ByteVector = ::jdk::internal::org::objectweb::asm$::ByteVector;
using $Constants = ::jdk::internal::org::objectweb::asm$::Constants;
using $FieldVisitor = ::jdk::internal::org::objectweb::asm$::FieldVisitor;
using $Opcodes = ::jdk::internal::org::objectweb::asm$::Opcodes;
using $Symbol = ::jdk::internal::org::objectweb::asm$::Symbol;
using $SymbolTable = ::jdk::internal::org::objectweb::asm$::SymbolTable;
using $TypePath = ::jdk::internal::org::objectweb::asm$::TypePath;

namespace jdk {
	namespace internal {
		namespace org {
			namespace objectweb {
				namespace asm$ {

$FieldInfo _FieldWriter_FieldInfo_[] = {
	{"symbolTable", "Ljdk/internal/org/objectweb/asm/SymbolTable;", nullptr, $PRIVATE | $FINAL, $field(FieldWriter, symbolTable)},
	{"accessFlags", "I", nullptr, $PRIVATE | $FINAL, $field(FieldWriter, accessFlags)},
	{"nameIndex", "I", nullptr, $PRIVATE | $FINAL, $field(FieldWriter, nameIndex)},
	{"descriptorIndex", "I", nullptr, $PRIVATE | $FINAL, $field(FieldWriter, descriptorIndex)},
	{"signatureIndex", "I", nullptr, $PRIVATE, $field(FieldWriter, signatureIndex)},
	{"constantValueIndex", "I", nullptr, $PRIVATE, $field(FieldWriter, constantValueIndex)},
	{"lastRuntimeVisibleAnnotation", "Ljdk/internal/org/objectweb/asm/AnnotationWriter;", nullptr, $PRIVATE, $field(FieldWriter, lastRuntimeVisibleAnnotation)},
	{"lastRuntimeInvisibleAnnotation", "Ljdk/internal/org/objectweb/asm/AnnotationWriter;", nullptr, $PRIVATE, $field(FieldWriter, lastRuntimeInvisibleAnnotation)},
	{"lastRuntimeVisibleTypeAnnotation", "Ljdk/internal/org/objectweb/asm/AnnotationWriter;", nullptr, $PRIVATE, $field(FieldWriter, lastRuntimeVisibleTypeAnnotation)},
	{"lastRuntimeInvisibleTypeAnnotation", "Ljdk/internal/org/objectweb/asm/AnnotationWriter;", nullptr, $PRIVATE, $field(FieldWriter, lastRuntimeInvisibleTypeAnnotation)},
	{"firstAttribute", "Ljdk/internal/org/objectweb/asm/Attribute;", nullptr, $PRIVATE, $field(FieldWriter, firstAttribute)},
	{}
};

$MethodInfo _FieldWriter_MethodInfo_[] = {
	{"<init>", "(Ljdk/internal/org/objectweb/asm/SymbolTable;ILjava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/Object;)V", nullptr, 0, $method(static_cast<void(FieldWriter::*)($SymbolTable*,int32_t,$String*,$String*,$String*,Object$*)>(&FieldWriter::init$))},
	{"collectAttributePrototypes", "(Ljdk/internal/org/objectweb/asm/Attribute$Set;)V", nullptr, $FINAL, $method(static_cast<void(FieldWriter::*)($Attribute$Set*)>(&FieldWriter::collectAttributePrototypes))},
	{"computeFieldInfoSize", "()I", nullptr, 0, $method(static_cast<int32_t(FieldWriter::*)()>(&FieldWriter::computeFieldInfoSize))},
	{"putFieldInfo", "(Ljdk/internal/org/objectweb/asm/ByteVector;)V", nullptr, 0, $method(static_cast<void(FieldWriter::*)($ByteVector*)>(&FieldWriter::putFieldInfo))},
	{"visitAnnotation", "(Ljava/lang/String;Z)Ljdk/internal/org/objectweb/asm/AnnotationVisitor;", nullptr, $PUBLIC},
	{"visitAttribute", "(Ljdk/internal/org/objectweb/asm/Attribute;)V", nullptr, $PUBLIC},
	{"visitEnd", "()V", nullptr, $PUBLIC},
	{"visitTypeAnnotation", "(ILjdk/internal/org/objectweb/asm/TypePath;Ljava/lang/String;Z)Ljdk/internal/org/objectweb/asm/AnnotationVisitor;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _FieldWriter_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"jdk.internal.org.objectweb.asm.FieldWriter",
	"jdk.internal.org.objectweb.asm.FieldVisitor",
	nullptr,
	_FieldWriter_FieldInfo_,
	_FieldWriter_MethodInfo_
};

$Object* allocate$FieldWriter($Class* clazz) {
	return $of($alloc(FieldWriter));
}

void FieldWriter::init$($SymbolTable* symbolTable, int32_t access, $String* name, $String* descriptor, $String* signature, Object$* constantValue) {
	$FieldVisitor::init$($Opcodes::ASM8);
	$set(this, symbolTable, symbolTable);
	this->accessFlags = access;
	this->nameIndex = $nc(symbolTable)->addConstantUtf8(name);
	this->descriptorIndex = symbolTable->addConstantUtf8(descriptor);
	if (signature != nullptr) {
		this->signatureIndex = symbolTable->addConstantUtf8(signature);
	}
	if (constantValue != nullptr) {
		this->constantValueIndex = $nc($(symbolTable->addConstant(constantValue)))->index;
	}
}

$AnnotationVisitor* FieldWriter::visitAnnotation($String* descriptor, bool visible) {
	if (visible) {
		return ($assignField(this, lastRuntimeVisibleAnnotation, $AnnotationWriter::create(this->symbolTable, descriptor, this->lastRuntimeVisibleAnnotation)));
	} else {
		return ($assignField(this, lastRuntimeInvisibleAnnotation, $AnnotationWriter::create(this->symbolTable, descriptor, this->lastRuntimeInvisibleAnnotation)));
	}
}

$AnnotationVisitor* FieldWriter::visitTypeAnnotation(int32_t typeRef, $TypePath* typePath, $String* descriptor, bool visible) {
	if (visible) {
		return ($assignField(this, lastRuntimeVisibleTypeAnnotation, $AnnotationWriter::create(this->symbolTable, typeRef, typePath, descriptor, this->lastRuntimeVisibleTypeAnnotation)));
	} else {
		return ($assignField(this, lastRuntimeInvisibleTypeAnnotation, $AnnotationWriter::create(this->symbolTable, typeRef, typePath, descriptor, this->lastRuntimeInvisibleTypeAnnotation)));
	}
}

void FieldWriter::visitAttribute($Attribute* attribute) {
	$set($nc(attribute), nextAttribute, this->firstAttribute);
	$set(this, firstAttribute, attribute);
}

void FieldWriter::visitEnd() {
}

int32_t FieldWriter::computeFieldInfoSize() {
	int32_t size = 8;
	if (this->constantValueIndex != 0) {
		$init($Constants);
		$nc(this->symbolTable)->addConstantUtf8($Constants::CONSTANT_VALUE);
		size += 8;
	}
	size += $Attribute::computeAttributesSize(this->symbolTable, this->accessFlags, this->signatureIndex);
	size += $AnnotationWriter::computeAnnotationsSize(this->lastRuntimeVisibleAnnotation, this->lastRuntimeInvisibleAnnotation, this->lastRuntimeVisibleTypeAnnotation, this->lastRuntimeInvisibleTypeAnnotation);
	if (this->firstAttribute != nullptr) {
		size += $nc(this->firstAttribute)->computeAttributesSize(this->symbolTable);
	}
	return size;
}

void FieldWriter::putFieldInfo($ByteVector* output) {
	bool useSyntheticAttribute = $nc(this->symbolTable)->getMajorVersion() < $Opcodes::V1_5;
	int32_t mask = useSyntheticAttribute ? $Opcodes::ACC_SYNTHETIC : 0;
	$nc($($nc($($nc(output)->putShort((int32_t)(this->accessFlags & (uint32_t)~mask))))->putShort(this->nameIndex)))->putShort(this->descriptorIndex);
	int32_t attributesCount = 0;
	if (this->constantValueIndex != 0) {
		++attributesCount;
	}
	if (((int32_t)(this->accessFlags & (uint32_t)$Opcodes::ACC_SYNTHETIC)) != 0 && useSyntheticAttribute) {
		++attributesCount;
	}
	if (this->signatureIndex != 0) {
		++attributesCount;
	}
	if (((int32_t)(this->accessFlags & (uint32_t)$Opcodes::ACC_DEPRECATED)) != 0) {
		++attributesCount;
	}
	if (this->lastRuntimeVisibleAnnotation != nullptr) {
		++attributesCount;
	}
	if (this->lastRuntimeInvisibleAnnotation != nullptr) {
		++attributesCount;
	}
	if (this->lastRuntimeVisibleTypeAnnotation != nullptr) {
		++attributesCount;
	}
	if (this->lastRuntimeInvisibleTypeAnnotation != nullptr) {
		++attributesCount;
	}
	if (this->firstAttribute != nullptr) {
		attributesCount += $nc(this->firstAttribute)->getAttributeCount();
	}
	output->putShort(attributesCount);
	if (this->constantValueIndex != 0) {
		$init($Constants);
		$nc($($nc($(output->putShort($nc(this->symbolTable)->addConstantUtf8($Constants::CONSTANT_VALUE))))->putInt(2)))->putShort(this->constantValueIndex);
	}
	$Attribute::putAttributes(this->symbolTable, this->accessFlags, this->signatureIndex, output);
	$AnnotationWriter::putAnnotations(this->symbolTable, this->lastRuntimeVisibleAnnotation, this->lastRuntimeInvisibleAnnotation, this->lastRuntimeVisibleTypeAnnotation, this->lastRuntimeInvisibleTypeAnnotation, output);
	if (this->firstAttribute != nullptr) {
		$nc(this->firstAttribute)->putAttributes(this->symbolTable, output);
	}
}

void FieldWriter::collectAttributePrototypes($Attribute$Set* attributePrototypes) {
	$nc(attributePrototypes)->addAttributes(this->firstAttribute);
}

FieldWriter::FieldWriter() {
}

$Class* FieldWriter::load$($String* name, bool initialize) {
	$loadClass(FieldWriter, name, initialize, &_FieldWriter_ClassInfo_, allocate$FieldWriter);
	return class$;
}

$Class* FieldWriter::class$ = nullptr;

				} // asm$
			} // objectweb
		} // org
	} // internal
} // jdk