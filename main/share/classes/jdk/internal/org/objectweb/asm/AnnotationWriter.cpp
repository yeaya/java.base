#include <jdk/internal/org/objectweb/asm/AnnotationWriter.h>

#include <java/lang/Array.h>
#include <java/lang/Boolean.h>
#include <java/lang/Byte.h>
#include <java/lang/Character.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/Short.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jdk/internal/org/objectweb/asm/AnnotationVisitor.h>
#include <jdk/internal/org/objectweb/asm/ByteVector.h>
#include <jdk/internal/org/objectweb/asm/Constants.h>
#include <jdk/internal/org/objectweb/asm/Opcodes.h>
#include <jdk/internal/org/objectweb/asm/Symbol.h>
#include <jdk/internal/org/objectweb/asm/SymbolTable.h>
#include <jdk/internal/org/objectweb/asm/Type.h>
#include <jdk/internal/org/objectweb/asm/TypePath.h>
#include <jdk/internal/org/objectweb/asm/TypeReference.h>
#include <jcpp.h>

#undef ASM8
#undef RUNTIME_INVISIBLE_ANNOTATIONS
#undef RUNTIME_VISIBLE_ANNOTATIONS
#undef RUNTIME_VISIBLE_TYPE_ANNOTATIONS
#undef RUNTIME_INVISIBLE_TYPE_ANNOTATIONS

using $AnnotationWriterArray = $Array<::jdk::internal::org::objectweb::asm$::AnnotationWriter>;
using $Boolean = ::java::lang::Boolean;
using $Byte = ::java::lang::Byte;
using $Character = ::java::lang::Character;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Short = ::java::lang::Short;
using $AnnotationVisitor = ::jdk::internal::org::objectweb::asm$::AnnotationVisitor;
using $ByteVector = ::jdk::internal::org::objectweb::asm$::ByteVector;
using $Constants = ::jdk::internal::org::objectweb::asm$::Constants;
using $Opcodes = ::jdk::internal::org::objectweb::asm$::Opcodes;
using $Symbol = ::jdk::internal::org::objectweb::asm$::Symbol;
using $SymbolTable = ::jdk::internal::org::objectweb::asm$::SymbolTable;
using $Type = ::jdk::internal::org::objectweb::asm$::Type;
using $TypePath = ::jdk::internal::org::objectweb::asm$::TypePath;
using $TypeReference = ::jdk::internal::org::objectweb::asm$::TypeReference;

namespace jdk {
	namespace internal {
		namespace org {
			namespace objectweb {
				namespace asm$ {

$FieldInfo _AnnotationWriter_FieldInfo_[] = {
	{"symbolTable", "Ljdk/internal/org/objectweb/asm/SymbolTable;", nullptr, $PRIVATE | $FINAL, $field(AnnotationWriter, symbolTable)},
	{"useNamedValues", "Z", nullptr, $PRIVATE | $FINAL, $field(AnnotationWriter, useNamedValues)},
	{"annotation", "Ljdk/internal/org/objectweb/asm/ByteVector;", nullptr, $PRIVATE | $FINAL, $field(AnnotationWriter, annotation)},
	{"numElementValuePairsOffset", "I", nullptr, $PRIVATE | $FINAL, $field(AnnotationWriter, numElementValuePairsOffset)},
	{"numElementValuePairs", "I", nullptr, $PRIVATE, $field(AnnotationWriter, numElementValuePairs)},
	{"previousAnnotation", "Ljdk/internal/org/objectweb/asm/AnnotationWriter;", nullptr, $PRIVATE | $FINAL, $field(AnnotationWriter, previousAnnotation)},
	{"nextAnnotation", "Ljdk/internal/org/objectweb/asm/AnnotationWriter;", nullptr, $PRIVATE, $field(AnnotationWriter, nextAnnotation)},
	{}
};

$MethodInfo _AnnotationWriter_MethodInfo_[] = {
	{"<init>", "(Ljdk/internal/org/objectweb/asm/SymbolTable;ZLjdk/internal/org/objectweb/asm/ByteVector;Ljdk/internal/org/objectweb/asm/AnnotationWriter;)V", nullptr, 0, $method(static_cast<void(AnnotationWriter::*)($SymbolTable*,bool,$ByteVector*,AnnotationWriter*)>(&AnnotationWriter::init$))},
	{"computeAnnotationsSize", "(Ljava/lang/String;)I", nullptr, 0, $method(static_cast<int32_t(AnnotationWriter::*)($String*)>(&AnnotationWriter::computeAnnotationsSize))},
	{"computeAnnotationsSize", "(Ljdk/internal/org/objectweb/asm/AnnotationWriter;Ljdk/internal/org/objectweb/asm/AnnotationWriter;Ljdk/internal/org/objectweb/asm/AnnotationWriter;Ljdk/internal/org/objectweb/asm/AnnotationWriter;)I", nullptr, $STATIC, $method(static_cast<int32_t(*)(AnnotationWriter*,AnnotationWriter*,AnnotationWriter*,AnnotationWriter*)>(&AnnotationWriter::computeAnnotationsSize))},
	{"computeParameterAnnotationsSize", "(Ljava/lang/String;[Ljdk/internal/org/objectweb/asm/AnnotationWriter;I)I", nullptr, $STATIC, $method(static_cast<int32_t(*)($String*,$AnnotationWriterArray*,int32_t)>(&AnnotationWriter::computeParameterAnnotationsSize))},
	{"create", "(Ljdk/internal/org/objectweb/asm/SymbolTable;Ljava/lang/String;Ljdk/internal/org/objectweb/asm/AnnotationWriter;)Ljdk/internal/org/objectweb/asm/AnnotationWriter;", nullptr, $STATIC, $method(static_cast<AnnotationWriter*(*)($SymbolTable*,$String*,AnnotationWriter*)>(&AnnotationWriter::create))},
	{"create", "(Ljdk/internal/org/objectweb/asm/SymbolTable;ILjdk/internal/org/objectweb/asm/TypePath;Ljava/lang/String;Ljdk/internal/org/objectweb/asm/AnnotationWriter;)Ljdk/internal/org/objectweb/asm/AnnotationWriter;", nullptr, $STATIC, $method(static_cast<AnnotationWriter*(*)($SymbolTable*,int32_t,$TypePath*,$String*,AnnotationWriter*)>(&AnnotationWriter::create))},
	{"putAnnotations", "(ILjdk/internal/org/objectweb/asm/ByteVector;)V", nullptr, 0, $method(static_cast<void(AnnotationWriter::*)(int32_t,$ByteVector*)>(&AnnotationWriter::putAnnotations))},
	{"putAnnotations", "(Ljdk/internal/org/objectweb/asm/SymbolTable;Ljdk/internal/org/objectweb/asm/AnnotationWriter;Ljdk/internal/org/objectweb/asm/AnnotationWriter;Ljdk/internal/org/objectweb/asm/AnnotationWriter;Ljdk/internal/org/objectweb/asm/AnnotationWriter;Ljdk/internal/org/objectweb/asm/ByteVector;)V", nullptr, $STATIC, $method(static_cast<void(*)($SymbolTable*,AnnotationWriter*,AnnotationWriter*,AnnotationWriter*,AnnotationWriter*,$ByteVector*)>(&AnnotationWriter::putAnnotations))},
	{"putParameterAnnotations", "(I[Ljdk/internal/org/objectweb/asm/AnnotationWriter;ILjdk/internal/org/objectweb/asm/ByteVector;)V", nullptr, $STATIC, $method(static_cast<void(*)(int32_t,$AnnotationWriterArray*,int32_t,$ByteVector*)>(&AnnotationWriter::putParameterAnnotations))},
	{"visit", "(Ljava/lang/String;Ljava/lang/Object;)V", nullptr, $PUBLIC},
	{"visitAnnotation", "(Ljava/lang/String;Ljava/lang/String;)Ljdk/internal/org/objectweb/asm/AnnotationVisitor;", nullptr, $PUBLIC},
	{"visitArray", "(Ljava/lang/String;)Ljdk/internal/org/objectweb/asm/AnnotationVisitor;", nullptr, $PUBLIC},
	{"visitEnd", "()V", nullptr, $PUBLIC},
	{"visitEnum", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC},
	{}
};

$ClassInfo _AnnotationWriter_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"jdk.internal.org.objectweb.asm.AnnotationWriter",
	"jdk.internal.org.objectweb.asm.AnnotationVisitor",
	nullptr,
	_AnnotationWriter_FieldInfo_,
	_AnnotationWriter_MethodInfo_
};

$Object* allocate$AnnotationWriter($Class* clazz) {
	return $of($alloc(AnnotationWriter));
}

void AnnotationWriter::init$($SymbolTable* symbolTable, bool useNamedValues, $ByteVector* annotation, AnnotationWriter* previousAnnotation) {
	$AnnotationVisitor::init$($Opcodes::ASM8);
	$set(this, symbolTable, symbolTable);
	this->useNamedValues = useNamedValues;
	$set(this, annotation, annotation);
	this->numElementValuePairsOffset = $nc(annotation)->length == 0 ? -1 : $nc(annotation)->length - 2;
	$set(this, previousAnnotation, previousAnnotation);
	if (previousAnnotation != nullptr) {
		$set(previousAnnotation, nextAnnotation, this);
	}
}

AnnotationWriter* AnnotationWriter::create($SymbolTable* symbolTable, $String* descriptor, AnnotationWriter* previousAnnotation) {
	$init(AnnotationWriter);
	$var($ByteVector, annotation, $new($ByteVector));
	$nc($(annotation->putShort($nc(symbolTable)->addConstantUtf8(descriptor))))->putShort(0);
	return $new(AnnotationWriter, symbolTable, true, annotation, previousAnnotation);
}

AnnotationWriter* AnnotationWriter::create($SymbolTable* symbolTable, int32_t typeRef, $TypePath* typePath, $String* descriptor, AnnotationWriter* previousAnnotation) {
	$init(AnnotationWriter);
	$var($ByteVector, typeAnnotation, $new($ByteVector));
	$TypeReference::putTarget(typeRef, typeAnnotation);
	$TypePath::put(typePath, typeAnnotation);
	$nc($(typeAnnotation->putShort($nc(symbolTable)->addConstantUtf8(descriptor))))->putShort(0);
	return $new(AnnotationWriter, symbolTable, true, typeAnnotation, previousAnnotation);
}

void AnnotationWriter::visit($String* name, Object$* value) {
	++this->numElementValuePairs;
	if (this->useNamedValues) {
		$nc(this->annotation)->putShort($nc(this->symbolTable)->addConstantUtf8(name));
	}
	if ($instanceOf($String, value)) {
		$nc(this->annotation)->put12(u's', $nc(this->symbolTable)->addConstantUtf8($cast($String, value)));
	} else if ($instanceOf($Byte, value)) {
		$nc(this->annotation)->put12(u'B', $nc($($nc(this->symbolTable)->addConstantInteger($nc(($cast($Byte, value)))->byteValue())))->index);
	} else if ($instanceOf($Boolean, value)) {
		int32_t booleanValue = $nc(($cast($Boolean, value)))->booleanValue() ? 1 : 0;
		$nc(this->annotation)->put12(u'Z', $nc($($nc(this->symbolTable)->addConstantInteger(booleanValue)))->index);
	} else if ($instanceOf($Character, value)) {
		$nc(this->annotation)->put12(u'C', $nc($($nc(this->symbolTable)->addConstantInteger($nc(($cast($Character, value)))->charValue())))->index);
	} else if ($instanceOf($Short, value)) {
		$nc(this->annotation)->put12(u'S', $nc($($nc(this->symbolTable)->addConstantInteger($nc(($cast($Short, value)))->shortValue())))->index);
	} else if ($instanceOf($Type, value)) {
		$nc(this->annotation)->put12(u'c', $nc(this->symbolTable)->addConstantUtf8($($nc(($cast($Type, value)))->getDescriptor())));
	} else if ($instanceOf($bytes, value)) {
		$var($bytes, byteArray, $cast($bytes, value));
		$nc(this->annotation)->put12(u'[', $nc(byteArray)->length);
		{
			$var($bytes, arr$, byteArray);
			int32_t len$ = $nc(arr$)->length;
			int32_t i$ = 0;
			for (; i$ < len$; ++i$) {
				int8_t byteValue = arr$->get(i$);
				{
					$nc(this->annotation)->put12(u'B', $nc($($nc(this->symbolTable)->addConstantInteger(byteValue)))->index);
				}
			}
		}
	} else if ($instanceOf($booleans, value)) {
		$var($booleans, booleanArray, $cast($booleans, value));
		$nc(this->annotation)->put12(u'[', $nc(booleanArray)->length);
		{
			$var($booleans, arr$, booleanArray);
			int32_t len$ = $nc(arr$)->length;
			int32_t i$ = 0;
			for (; i$ < len$; ++i$) {
				bool booleanValue = arr$->get(i$);
				{
					$nc(this->annotation)->put12(u'Z', $nc($($nc(this->symbolTable)->addConstantInteger(booleanValue ? 1 : 0)))->index);
				}
			}
		}
	} else if ($instanceOf($shorts, value)) {
		$var($shorts, shortArray, $cast($shorts, value));
		$nc(this->annotation)->put12(u'[', $nc(shortArray)->length);
		{
			$var($shorts, arr$, shortArray);
			int32_t len$ = $nc(arr$)->length;
			int32_t i$ = 0;
			for (; i$ < len$; ++i$) {
				int16_t shortValue = arr$->get(i$);
				{
					$nc(this->annotation)->put12(u'S', $nc($($nc(this->symbolTable)->addConstantInteger(shortValue)))->index);
				}
			}
		}
	} else if ($instanceOf($chars, value)) {
		$var($chars, charArray, $cast($chars, value));
		$nc(this->annotation)->put12(u'[', $nc(charArray)->length);
		{
			$var($chars, arr$, charArray);
			int32_t len$ = $nc(arr$)->length;
			int32_t i$ = 0;
			for (; i$ < len$; ++i$) {
				char16_t charValue = arr$->get(i$);
				{
					$nc(this->annotation)->put12(u'C', $nc($($nc(this->symbolTable)->addConstantInteger(charValue)))->index);
				}
			}
		}
	} else if ($instanceOf($ints, value)) {
		$var($ints, intArray, $cast($ints, value));
		$nc(this->annotation)->put12(u'[', $nc(intArray)->length);
		{
			$var($ints, arr$, intArray);
			int32_t len$ = $nc(arr$)->length;
			int32_t i$ = 0;
			for (; i$ < len$; ++i$) {
				int32_t intValue = arr$->get(i$);
				{
					$nc(this->annotation)->put12(u'I', $nc($($nc(this->symbolTable)->addConstantInteger(intValue)))->index);
				}
			}
		}
	} else if ($instanceOf($longs, value)) {
		$var($longs, longArray, $cast($longs, value));
		$nc(this->annotation)->put12(u'[', $nc(longArray)->length);
		{
			$var($longs, arr$, longArray);
			int32_t len$ = $nc(arr$)->length;
			int32_t i$ = 0;
			for (; i$ < len$; ++i$) {
				int64_t longValue = arr$->get(i$);
				{
					$nc(this->annotation)->put12(u'J', $nc($($nc(this->symbolTable)->addConstantLong(longValue)))->index);
				}
			}
		}
	} else if ($instanceOf($floats, value)) {
		$var($floats, floatArray, $cast($floats, value));
		$nc(this->annotation)->put12(u'[', $nc(floatArray)->length);
		{
			$var($floats, arr$, floatArray);
			int32_t len$ = $nc(arr$)->length;
			int32_t i$ = 0;
			for (; i$ < len$; ++i$) {
				float floatValue = arr$->get(i$);
				{
					$nc(this->annotation)->put12(u'F', $nc($($nc(this->symbolTable)->addConstantFloat(floatValue)))->index);
				}
			}
		}
	} else if ($instanceOf($doubles, value)) {
		$var($doubles, doubleArray, $cast($doubles, value));
		$nc(this->annotation)->put12(u'[', $nc(doubleArray)->length);
		{
			$var($doubles, arr$, doubleArray);
			int32_t len$ = $nc(arr$)->length;
			int32_t i$ = 0;
			for (; i$ < len$; ++i$) {
				double doubleValue = arr$->get(i$);
				{
					$nc(this->annotation)->put12(u'D', $nc($($nc(this->symbolTable)->addConstantDouble(doubleValue)))->index);
				}
			}
		}
	} else {
		$var($Symbol, symbol, $nc(this->symbolTable)->addConstant(value));
		$nc(this->annotation)->put12(".s.IFJDCS"_s->charAt($nc(symbol)->tag), $nc(symbol)->index);
	}
}

void AnnotationWriter::visitEnum($String* name, $String* descriptor, $String* value) {
	++this->numElementValuePairs;
	if (this->useNamedValues) {
		$nc(this->annotation)->putShort($nc(this->symbolTable)->addConstantUtf8(name));
	}
	$nc($($nc(this->annotation)->put12(u'e', $nc(this->symbolTable)->addConstantUtf8(descriptor))))->putShort($nc(this->symbolTable)->addConstantUtf8(value));
}

$AnnotationVisitor* AnnotationWriter::visitAnnotation($String* name, $String* descriptor) {
	++this->numElementValuePairs;
	if (this->useNamedValues) {
		$nc(this->annotation)->putShort($nc(this->symbolTable)->addConstantUtf8(name));
	}
	$nc($($nc(this->annotation)->put12(u'@', $nc(this->symbolTable)->addConstantUtf8(descriptor))))->putShort(0);
	return $new(AnnotationWriter, this->symbolTable, true, this->annotation, nullptr);
}

$AnnotationVisitor* AnnotationWriter::visitArray($String* name) {
	++this->numElementValuePairs;
	if (this->useNamedValues) {
		$nc(this->annotation)->putShort($nc(this->symbolTable)->addConstantUtf8(name));
	}
	$nc(this->annotation)->put12(u'[', 0);
	return $new(AnnotationWriter, this->symbolTable, false, this->annotation, nullptr);
}

void AnnotationWriter::visitEnd() {
	if (this->numElementValuePairsOffset != -1) {
		$var($bytes, data, $nc(this->annotation)->data);
		$nc(data)->set(this->numElementValuePairsOffset, (int8_t)((int32_t)((uint32_t)this->numElementValuePairs >> 8)));
		data->set(this->numElementValuePairsOffset + 1, (int8_t)this->numElementValuePairs);
	}
}

int32_t AnnotationWriter::computeAnnotationsSize($String* attributeName) {
	if (attributeName != nullptr) {
		$nc(this->symbolTable)->addConstantUtf8(attributeName);
	}
	int32_t attributeSize = 8;
	$var(AnnotationWriter, annotationWriter, this);
	while (annotationWriter != nullptr) {
		attributeSize += $nc(annotationWriter->annotation)->length;
		$assign(annotationWriter, annotationWriter->previousAnnotation);
	}
	return attributeSize;
}

int32_t AnnotationWriter::computeAnnotationsSize(AnnotationWriter* lastRuntimeVisibleAnnotation, AnnotationWriter* lastRuntimeInvisibleAnnotation, AnnotationWriter* lastRuntimeVisibleTypeAnnotation, AnnotationWriter* lastRuntimeInvisibleTypeAnnotation) {
	$init(AnnotationWriter);
	int32_t size = 0;
	if (lastRuntimeVisibleAnnotation != nullptr) {
		$init($Constants);
		size += lastRuntimeVisibleAnnotation->computeAnnotationsSize($Constants::RUNTIME_VISIBLE_ANNOTATIONS);
	}
	if (lastRuntimeInvisibleAnnotation != nullptr) {
		$init($Constants);
		size += lastRuntimeInvisibleAnnotation->computeAnnotationsSize($Constants::RUNTIME_INVISIBLE_ANNOTATIONS);
	}
	if (lastRuntimeVisibleTypeAnnotation != nullptr) {
		$init($Constants);
		size += lastRuntimeVisibleTypeAnnotation->computeAnnotationsSize($Constants::RUNTIME_VISIBLE_TYPE_ANNOTATIONS);
	}
	if (lastRuntimeInvisibleTypeAnnotation != nullptr) {
		$init($Constants);
		size += lastRuntimeInvisibleTypeAnnotation->computeAnnotationsSize($Constants::RUNTIME_INVISIBLE_TYPE_ANNOTATIONS);
	}
	return size;
}

void AnnotationWriter::putAnnotations(int32_t attributeNameIndex, $ByteVector* output) {
	int32_t attributeLength = 2;
	int32_t numAnnotations = 0;
	$var(AnnotationWriter, annotationWriter, this);
	$var(AnnotationWriter, firstAnnotation, nullptr);
	while (annotationWriter != nullptr) {
		annotationWriter->visitEnd();
		attributeLength += $nc(annotationWriter->annotation)->length;
		++numAnnotations;
		$assign(firstAnnotation, annotationWriter);
		$assign(annotationWriter, annotationWriter->previousAnnotation);
	}
	$nc(output)->putShort(attributeNameIndex);
	output->putInt(attributeLength);
	output->putShort(numAnnotations);
	$assign(annotationWriter, firstAnnotation);
	while (annotationWriter != nullptr) {
		output->putByteArray($nc(annotationWriter->annotation)->data, 0, $nc(annotationWriter->annotation)->length);
		$assign(annotationWriter, annotationWriter->nextAnnotation);
	}
}

void AnnotationWriter::putAnnotations($SymbolTable* symbolTable, AnnotationWriter* lastRuntimeVisibleAnnotation, AnnotationWriter* lastRuntimeInvisibleAnnotation, AnnotationWriter* lastRuntimeVisibleTypeAnnotation, AnnotationWriter* lastRuntimeInvisibleTypeAnnotation, $ByteVector* output) {
	$init(AnnotationWriter);
	if (lastRuntimeVisibleAnnotation != nullptr) {
		$init($Constants);
		lastRuntimeVisibleAnnotation->putAnnotations($nc(symbolTable)->addConstantUtf8($Constants::RUNTIME_VISIBLE_ANNOTATIONS), output);
	}
	if (lastRuntimeInvisibleAnnotation != nullptr) {
		$init($Constants);
		lastRuntimeInvisibleAnnotation->putAnnotations($nc(symbolTable)->addConstantUtf8($Constants::RUNTIME_INVISIBLE_ANNOTATIONS), output);
	}
	if (lastRuntimeVisibleTypeAnnotation != nullptr) {
		$init($Constants);
		lastRuntimeVisibleTypeAnnotation->putAnnotations($nc(symbolTable)->addConstantUtf8($Constants::RUNTIME_VISIBLE_TYPE_ANNOTATIONS), output);
	}
	if (lastRuntimeInvisibleTypeAnnotation != nullptr) {
		$init($Constants);
		lastRuntimeInvisibleTypeAnnotation->putAnnotations($nc(symbolTable)->addConstantUtf8($Constants::RUNTIME_INVISIBLE_TYPE_ANNOTATIONS), output);
	}
}

int32_t AnnotationWriter::computeParameterAnnotationsSize($String* attributeName, $AnnotationWriterArray* annotationWriters, int32_t annotableParameterCount) {
	$init(AnnotationWriter);
	int32_t attributeSize = 7 + 2 * annotableParameterCount;
	for (int32_t i = 0; i < annotableParameterCount; ++i) {
		$var(AnnotationWriter, annotationWriter, $nc(annotationWriters)->get(i));
		attributeSize += annotationWriter == nullptr ? 0 : $nc(annotationWriter)->computeAnnotationsSize(attributeName) - 8;
	}
	return attributeSize;
}

void AnnotationWriter::putParameterAnnotations(int32_t attributeNameIndex, $AnnotationWriterArray* annotationWriters, int32_t annotableParameterCount, $ByteVector* output) {
	$init(AnnotationWriter);
	int32_t attributeLength = 1 + 2 * annotableParameterCount;
	for (int32_t i = 0; i < annotableParameterCount; ++i) {
		$var(AnnotationWriter, annotationWriter, $nc(annotationWriters)->get(i));
		attributeLength += annotationWriter == nullptr ? 0 : $nc(annotationWriter)->computeAnnotationsSize(nullptr) - 8;
	}
	$nc(output)->putShort(attributeNameIndex);
	output->putInt(attributeLength);
	output->putByte(annotableParameterCount);
	for (int32_t i = 0; i < annotableParameterCount; ++i) {
		$var(AnnotationWriter, annotationWriter, $nc(annotationWriters)->get(i));
		$var(AnnotationWriter, firstAnnotation, nullptr);
		int32_t numAnnotations = 0;
		while (annotationWriter != nullptr) {
			annotationWriter->visitEnd();
			++numAnnotations;
			$assign(firstAnnotation, annotationWriter);
			$assign(annotationWriter, annotationWriter->previousAnnotation);
		}
		output->putShort(numAnnotations);
		$assign(annotationWriter, firstAnnotation);
		while (annotationWriter != nullptr) {
			output->putByteArray($nc(annotationWriter->annotation)->data, 0, $nc(annotationWriter->annotation)->length);
			$assign(annotationWriter, annotationWriter->nextAnnotation);
		}
	}
}

AnnotationWriter::AnnotationWriter() {
}

$Class* AnnotationWriter::load$($String* name, bool initialize) {
	$loadClass(AnnotationWriter, name, initialize, &_AnnotationWriter_ClassInfo_, allocate$AnnotationWriter);
	return class$;
}

$Class* AnnotationWriter::class$ = nullptr;

				} // asm$
			} // objectweb
		} // org
	} // internal
} // jdk