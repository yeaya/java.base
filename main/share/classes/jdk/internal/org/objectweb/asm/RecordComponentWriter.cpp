#include <jdk/internal/org/objectweb/asm/RecordComponentWriter.h>

#include <jdk/internal/org/objectweb/asm/AnnotationVisitor.h>
#include <jdk/internal/org/objectweb/asm/AnnotationWriter.h>
#include <jdk/internal/org/objectweb/asm/Attribute$Set.h>
#include <jdk/internal/org/objectweb/asm/Attribute.h>
#include <jdk/internal/org/objectweb/asm/ByteVector.h>
#include <jdk/internal/org/objectweb/asm/Opcodes.h>
#include <jdk/internal/org/objectweb/asm/RecordComponentVisitor.h>
#include <jdk/internal/org/objectweb/asm/SymbolTable.h>
#include <jdk/internal/org/objectweb/asm/TypePath.h>
#include <jcpp.h>

#undef ASM8

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AnnotationVisitor = ::jdk::internal::org::objectweb::asm$::AnnotationVisitor;
using $AnnotationWriter = ::jdk::internal::org::objectweb::asm$::AnnotationWriter;
using $Attribute = ::jdk::internal::org::objectweb::asm$::Attribute;
using $Attribute$Set = ::jdk::internal::org::objectweb::asm$::Attribute$Set;
using $ByteVector = ::jdk::internal::org::objectweb::asm$::ByteVector;
using $Opcodes = ::jdk::internal::org::objectweb::asm$::Opcodes;
using $RecordComponentVisitor = ::jdk::internal::org::objectweb::asm$::RecordComponentVisitor;
using $SymbolTable = ::jdk::internal::org::objectweb::asm$::SymbolTable;
using $TypePath = ::jdk::internal::org::objectweb::asm$::TypePath;

namespace jdk {
	namespace internal {
		namespace org {
			namespace objectweb {
				namespace asm$ {

$FieldInfo _RecordComponentWriter_FieldInfo_[] = {
	{"symbolTable", "Ljdk/internal/org/objectweb/asm/SymbolTable;", nullptr, $PRIVATE | $FINAL, $field(RecordComponentWriter, symbolTable)},
	{"nameIndex", "I", nullptr, $PRIVATE | $FINAL, $field(RecordComponentWriter, nameIndex)},
	{"descriptorIndex", "I", nullptr, $PRIVATE | $FINAL, $field(RecordComponentWriter, descriptorIndex)},
	{"signatureIndex", "I", nullptr, $PRIVATE, $field(RecordComponentWriter, signatureIndex)},
	{"lastRuntimeVisibleAnnotation", "Ljdk/internal/org/objectweb/asm/AnnotationWriter;", nullptr, $PRIVATE, $field(RecordComponentWriter, lastRuntimeVisibleAnnotation)},
	{"lastRuntimeInvisibleAnnotation", "Ljdk/internal/org/objectweb/asm/AnnotationWriter;", nullptr, $PRIVATE, $field(RecordComponentWriter, lastRuntimeInvisibleAnnotation)},
	{"lastRuntimeVisibleTypeAnnotation", "Ljdk/internal/org/objectweb/asm/AnnotationWriter;", nullptr, $PRIVATE, $field(RecordComponentWriter, lastRuntimeVisibleTypeAnnotation)},
	{"lastRuntimeInvisibleTypeAnnotation", "Ljdk/internal/org/objectweb/asm/AnnotationWriter;", nullptr, $PRIVATE, $field(RecordComponentWriter, lastRuntimeInvisibleTypeAnnotation)},
	{"firstAttribute", "Ljdk/internal/org/objectweb/asm/Attribute;", nullptr, $PRIVATE, $field(RecordComponentWriter, firstAttribute)},
	{}
};

$MethodInfo _RecordComponentWriter_MethodInfo_[] = {
	{"<init>", "(Ljdk/internal/org/objectweb/asm/SymbolTable;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V", nullptr, 0, $method(RecordComponentWriter, init$, void, $SymbolTable*, $String*, $String*, $String*)},
	{"collectAttributePrototypes", "(Ljdk/internal/org/objectweb/asm/Attribute$Set;)V", nullptr, $FINAL, $method(RecordComponentWriter, collectAttributePrototypes, void, $Attribute$Set*)},
	{"computeRecordComponentInfoSize", "()I", nullptr, 0, $method(RecordComponentWriter, computeRecordComponentInfoSize, int32_t)},
	{"putRecordComponentInfo", "(Ljdk/internal/org/objectweb/asm/ByteVector;)V", nullptr, 0, $method(RecordComponentWriter, putRecordComponentInfo, void, $ByteVector*)},
	{"visitAnnotation", "(Ljava/lang/String;Z)Ljdk/internal/org/objectweb/asm/AnnotationVisitor;", nullptr, $PUBLIC, $virtualMethod(RecordComponentWriter, visitAnnotation, $AnnotationVisitor*, $String*, bool)},
	{"visitAttribute", "(Ljdk/internal/org/objectweb/asm/Attribute;)V", nullptr, $PUBLIC, $virtualMethod(RecordComponentWriter, visitAttribute, void, $Attribute*)},
	{"visitEnd", "()V", nullptr, $PUBLIC, $virtualMethod(RecordComponentWriter, visitEnd, void)},
	{"visitTypeAnnotation", "(ILjdk/internal/org/objectweb/asm/TypePath;Ljava/lang/String;Z)Ljdk/internal/org/objectweb/asm/AnnotationVisitor;", nullptr, $PUBLIC, $virtualMethod(RecordComponentWriter, visitTypeAnnotation, $AnnotationVisitor*, int32_t, $TypePath*, $String*, bool)},
	{}
};

$ClassInfo _RecordComponentWriter_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"jdk.internal.org.objectweb.asm.RecordComponentWriter",
	"jdk.internal.org.objectweb.asm.RecordComponentVisitor",
	nullptr,
	_RecordComponentWriter_FieldInfo_,
	_RecordComponentWriter_MethodInfo_
};

$Object* allocate$RecordComponentWriter($Class* clazz) {
	return $of($alloc(RecordComponentWriter));
}

void RecordComponentWriter::init$($SymbolTable* symbolTable, $String* name, $String* descriptor, $String* signature) {
	$RecordComponentVisitor::init$($Opcodes::ASM8);
	$set(this, symbolTable, symbolTable);
	this->nameIndex = $nc(symbolTable)->addConstantUtf8(name);
	this->descriptorIndex = symbolTable->addConstantUtf8(descriptor);
	if (signature != nullptr) {
		this->signatureIndex = symbolTable->addConstantUtf8(signature);
	}
}

$AnnotationVisitor* RecordComponentWriter::visitAnnotation($String* descriptor, bool visible) {
	if (visible) {
		return ($set(this, lastRuntimeVisibleAnnotation, $AnnotationWriter::create(this->symbolTable, descriptor, this->lastRuntimeVisibleAnnotation)));
	} else {
		return ($set(this, lastRuntimeInvisibleAnnotation, $AnnotationWriter::create(this->symbolTable, descriptor, this->lastRuntimeInvisibleAnnotation)));
	}
}

$AnnotationVisitor* RecordComponentWriter::visitTypeAnnotation(int32_t typeRef, $TypePath* typePath, $String* descriptor, bool visible) {
	if (visible) {
		return ($set(this, lastRuntimeVisibleTypeAnnotation, $AnnotationWriter::create(this->symbolTable, typeRef, typePath, descriptor, this->lastRuntimeVisibleTypeAnnotation)));
	} else {
		return ($set(this, lastRuntimeInvisibleTypeAnnotation, $AnnotationWriter::create(this->symbolTable, typeRef, typePath, descriptor, this->lastRuntimeInvisibleTypeAnnotation)));
	}
}

void RecordComponentWriter::visitAttribute($Attribute* attribute) {
	$set($nc(attribute), nextAttribute, this->firstAttribute);
	$set(this, firstAttribute, attribute);
}

void RecordComponentWriter::visitEnd() {
}

int32_t RecordComponentWriter::computeRecordComponentInfoSize() {
	int32_t size = 6;
	size += $Attribute::computeAttributesSize(this->symbolTable, 0, this->signatureIndex);
	size += $AnnotationWriter::computeAnnotationsSize(this->lastRuntimeVisibleAnnotation, this->lastRuntimeInvisibleAnnotation, this->lastRuntimeVisibleTypeAnnotation, this->lastRuntimeInvisibleTypeAnnotation);
	if (this->firstAttribute != nullptr) {
		size += $nc(this->firstAttribute)->computeAttributesSize(this->symbolTable);
	}
	return size;
}

void RecordComponentWriter::putRecordComponentInfo($ByteVector* output) {
	$nc($($nc(output)->putShort(this->nameIndex)))->putShort(this->descriptorIndex);
	int32_t attributesCount = 0;
	if (this->signatureIndex != 0) {
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
	$Attribute::putAttributes(this->symbolTable, 0, this->signatureIndex, output);
	$AnnotationWriter::putAnnotations(this->symbolTable, this->lastRuntimeVisibleAnnotation, this->lastRuntimeInvisibleAnnotation, this->lastRuntimeVisibleTypeAnnotation, this->lastRuntimeInvisibleTypeAnnotation, output);
	if (this->firstAttribute != nullptr) {
		$nc(this->firstAttribute)->putAttributes(this->symbolTable, output);
	}
}

void RecordComponentWriter::collectAttributePrototypes($Attribute$Set* attributePrototypes) {
	$nc(attributePrototypes)->addAttributes(this->firstAttribute);
}

RecordComponentWriter::RecordComponentWriter() {
}

$Class* RecordComponentWriter::load$($String* name, bool initialize) {
	$loadClass(RecordComponentWriter, name, initialize, &_RecordComponentWriter_ClassInfo_, allocate$RecordComponentWriter);
	return class$;
}

$Class* RecordComponentWriter::class$ = nullptr;

				} // asm$
			} // objectweb
		} // org
	} // internal
} // jdk