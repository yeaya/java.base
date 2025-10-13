#include <jdk/internal/org/objectweb/asm/commons/MethodRemapper.h>

#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/System.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jdk/internal/org/objectweb/asm/AnnotationVisitor.h>
#include <jdk/internal/org/objectweb/asm/Handle.h>
#include <jdk/internal/org/objectweb/asm/Label.h>
#include <jdk/internal/org/objectweb/asm/MethodVisitor.h>
#include <jdk/internal/org/objectweb/asm/Opcodes.h>
#include <jdk/internal/org/objectweb/asm/TypePath.h>
#include <jdk/internal/org/objectweb/asm/commons/AnnotationRemapper.h>
#include <jdk/internal/org/objectweb/asm/commons/Remapper.h>
#include <jcpp.h>

#undef ASM5
#undef ASM8
#undef SOURCE_DEPRECATED

using $LabelArray = $Array<::jdk::internal::org::objectweb::asm$::Label>;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AnnotationVisitor = ::jdk::internal::org::objectweb::asm$::AnnotationVisitor;
using $Handle = ::jdk::internal::org::objectweb::asm$::Handle;
using $Label = ::jdk::internal::org::objectweb::asm$::Label;
using $MethodVisitor = ::jdk::internal::org::objectweb::asm$::MethodVisitor;
using $Opcodes = ::jdk::internal::org::objectweb::asm$::Opcodes;
using $TypePath = ::jdk::internal::org::objectweb::asm$::TypePath;
using $AnnotationRemapper = ::jdk::internal::org::objectweb::asm$::commons::AnnotationRemapper;
using $Remapper = ::jdk::internal::org::objectweb::asm$::commons::Remapper;

namespace jdk {
	namespace internal {
		namespace org {
			namespace objectweb {
				namespace asm$ {
					namespace commons {

$FieldInfo _MethodRemapper_FieldInfo_[] = {
	{"remapper", "Ljdk/internal/org/objectweb/asm/commons/Remapper;", nullptr, $PROTECTED | $FINAL, $field(MethodRemapper, remapper)},
	{}
};

$MethodInfo _MethodRemapper_MethodInfo_[] = {
	{"<init>", "(Ljdk/internal/org/objectweb/asm/MethodVisitor;Ljdk/internal/org/objectweb/asm/commons/Remapper;)V", nullptr, $PUBLIC, $method(static_cast<void(MethodRemapper::*)($MethodVisitor*,$Remapper*)>(&MethodRemapper::init$))},
	{"<init>", "(ILjdk/internal/org/objectweb/asm/MethodVisitor;Ljdk/internal/org/objectweb/asm/commons/Remapper;)V", nullptr, $PROTECTED, $method(static_cast<void(MethodRemapper::*)(int32_t,$MethodVisitor*,$Remapper*)>(&MethodRemapper::init$))},
	{"createAnnotationRemapper", "(Ljdk/internal/org/objectweb/asm/AnnotationVisitor;)Ljdk/internal/org/objectweb/asm/AnnotationVisitor;", nullptr, $PROTECTED},
	{"remapFrameTypes", "(I[Ljava/lang/Object;)[Ljava/lang/Object;", nullptr, $PRIVATE, $method(static_cast<$ObjectArray*(MethodRemapper::*)(int32_t,$ObjectArray*)>(&MethodRemapper::remapFrameTypes))},
	{"visitAnnotation", "(Ljava/lang/String;Z)Ljdk/internal/org/objectweb/asm/AnnotationVisitor;", nullptr, $PUBLIC},
	{"visitAnnotationDefault", "()Ljdk/internal/org/objectweb/asm/AnnotationVisitor;", nullptr, $PUBLIC},
	{"visitFieldInsn", "(ILjava/lang/String;Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC},
	{"visitFrame", "(II[Ljava/lang/Object;I[Ljava/lang/Object;)V", nullptr, $PUBLIC},
	{"visitInsnAnnotation", "(ILjdk/internal/org/objectweb/asm/TypePath;Ljava/lang/String;Z)Ljdk/internal/org/objectweb/asm/AnnotationVisitor;", nullptr, $PUBLIC},
	{"visitInvokeDynamicInsn", "(Ljava/lang/String;Ljava/lang/String;Ljdk/internal/org/objectweb/asm/Handle;[Ljava/lang/Object;)V", nullptr, $PUBLIC | $TRANSIENT},
	{"visitLdcInsn", "(Ljava/lang/Object;)V", nullptr, $PUBLIC},
	{"visitLocalVariable", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljdk/internal/org/objectweb/asm/Label;Ljdk/internal/org/objectweb/asm/Label;I)V", nullptr, $PUBLIC},
	{"visitLocalVariableAnnotation", "(ILjdk/internal/org/objectweb/asm/TypePath;[Ljdk/internal/org/objectweb/asm/Label;[Ljdk/internal/org/objectweb/asm/Label;[ILjava/lang/String;Z)Ljdk/internal/org/objectweb/asm/AnnotationVisitor;", nullptr, $PUBLIC},
	{"visitMethodInsn", "(ILjava/lang/String;Ljava/lang/String;Ljava/lang/String;Z)V", nullptr, $PUBLIC},
	{"visitMultiANewArrayInsn", "(Ljava/lang/String;I)V", nullptr, $PUBLIC},
	{"visitParameterAnnotation", "(ILjava/lang/String;Z)Ljdk/internal/org/objectweb/asm/AnnotationVisitor;", nullptr, $PUBLIC},
	{"visitTryCatchAnnotation", "(ILjdk/internal/org/objectweb/asm/TypePath;Ljava/lang/String;Z)Ljdk/internal/org/objectweb/asm/AnnotationVisitor;", nullptr, $PUBLIC},
	{"visitTryCatchBlock", "(Ljdk/internal/org/objectweb/asm/Label;Ljdk/internal/org/objectweb/asm/Label;Ljdk/internal/org/objectweb/asm/Label;Ljava/lang/String;)V", nullptr, $PUBLIC},
	{"visitTypeAnnotation", "(ILjdk/internal/org/objectweb/asm/TypePath;Ljava/lang/String;Z)Ljdk/internal/org/objectweb/asm/AnnotationVisitor;", nullptr, $PUBLIC},
	{"visitTypeInsn", "(ILjava/lang/String;)V", nullptr, $PUBLIC},
	{}
};

$ClassInfo _MethodRemapper_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"jdk.internal.org.objectweb.asm.commons.MethodRemapper",
	"jdk.internal.org.objectweb.asm.MethodVisitor",
	nullptr,
	_MethodRemapper_FieldInfo_,
	_MethodRemapper_MethodInfo_
};

$Object* allocate$MethodRemapper($Class* clazz) {
	return $of($alloc(MethodRemapper));
}

void MethodRemapper::init$($MethodVisitor* methodVisitor, $Remapper* remapper) {
	MethodRemapper::init$($Opcodes::ASM8, methodVisitor, remapper);
}

void MethodRemapper::init$(int32_t api, $MethodVisitor* methodVisitor, $Remapper* remapper) {
	$MethodVisitor::init$(api, methodVisitor);
	$set(this, remapper, remapper);
}

$AnnotationVisitor* MethodRemapper::visitAnnotationDefault() {
	$var($AnnotationVisitor, annotationVisitor, $MethodVisitor::visitAnnotationDefault());
	return annotationVisitor == nullptr ? annotationVisitor : createAnnotationRemapper(annotationVisitor);
}

$AnnotationVisitor* MethodRemapper::visitAnnotation($String* descriptor, bool visible) {
	$var($AnnotationVisitor, annotationVisitor, $MethodVisitor::visitAnnotation($($nc(this->remapper)->mapDesc(descriptor)), visible));
	return annotationVisitor == nullptr ? annotationVisitor : createAnnotationRemapper(annotationVisitor);
}

$AnnotationVisitor* MethodRemapper::visitTypeAnnotation(int32_t typeRef, $TypePath* typePath, $String* descriptor, bool visible) {
	$var($AnnotationVisitor, annotationVisitor, $MethodVisitor::visitTypeAnnotation(typeRef, typePath, $($nc(this->remapper)->mapDesc(descriptor)), visible));
	return annotationVisitor == nullptr ? annotationVisitor : createAnnotationRemapper(annotationVisitor);
}

$AnnotationVisitor* MethodRemapper::visitParameterAnnotation(int32_t parameter, $String* descriptor, bool visible) {
	$var($AnnotationVisitor, annotationVisitor, $MethodVisitor::visitParameterAnnotation(parameter, $($nc(this->remapper)->mapDesc(descriptor)), visible));
	return annotationVisitor == nullptr ? annotationVisitor : createAnnotationRemapper(annotationVisitor);
}

void MethodRemapper::visitFrame(int32_t type, int32_t numLocal, $ObjectArray* local, int32_t numStack, $ObjectArray* stack) {
	int32_t var$0 = type;
	int32_t var$1 = numLocal;
	$var($ObjectArray, var$2, remapFrameTypes(numLocal, local));
	int32_t var$3 = numStack;
	$MethodVisitor::visitFrame(var$0, var$1, var$2, var$3, $(remapFrameTypes(numStack, stack)));
}

$ObjectArray* MethodRemapper::remapFrameTypes(int32_t numTypes, $ObjectArray* frameTypes) {
	if (frameTypes == nullptr) {
		return frameTypes;
	}
	$var($ObjectArray, remappedFrameTypes, nullptr);
	for (int32_t i = 0; i < numTypes; ++i) {
		if ($instanceOf($String, $nc(frameTypes)->get(i))) {
			if (remappedFrameTypes == nullptr) {
				$assign(remappedFrameTypes, $new($ObjectArray, numTypes));
				$System::arraycopy(frameTypes, 0, remappedFrameTypes, 0, numTypes);
			}
			$nc(remappedFrameTypes)->set(i, $($nc(this->remapper)->mapType($cast($String, frameTypes->get(i)))));
		}
	}
	return remappedFrameTypes == nullptr ? frameTypes : remappedFrameTypes;
}

void MethodRemapper::visitFieldInsn(int32_t opcode, $String* owner, $String* name, $String* descriptor) {
	int32_t var$0 = opcode;
	$var($String, var$1, $nc(this->remapper)->mapType(owner));
	$var($String, var$2, $nc(this->remapper)->mapFieldName(owner, name, descriptor));
	$MethodVisitor::visitFieldInsn(var$0, var$1, var$2, $($nc(this->remapper)->mapDesc(descriptor)));
}

void MethodRemapper::visitMethodInsn(int32_t opcodeAndSource, $String* owner, $String* name, $String* descriptor, bool isInterface) {
	if (this->api < $Opcodes::ASM5 && ((int32_t)(opcodeAndSource & (uint32_t)$Opcodes::SOURCE_DEPRECATED)) == 0) {
		$MethodVisitor::visitMethodInsn(opcodeAndSource, owner, name, descriptor, isInterface);
		return;
	}
	int32_t var$0 = opcodeAndSource;
	$var($String, var$1, $nc(this->remapper)->mapType(owner));
	$var($String, var$2, $nc(this->remapper)->mapMethodName(owner, name, descriptor));
	$MethodVisitor::visitMethodInsn(var$0, var$1, var$2, $($nc(this->remapper)->mapMethodDesc(descriptor)), isInterface);
}

void MethodRemapper::visitInvokeDynamicInsn($String* name, $String* descriptor, $Handle* bootstrapMethodHandle, $ObjectArray* bootstrapMethodArguments) {
	$var($ObjectArray, remappedBootstrapMethodArguments, $new($ObjectArray, $nc(bootstrapMethodArguments)->length));
	for (int32_t i = 0; i < bootstrapMethodArguments->length; ++i) {
		remappedBootstrapMethodArguments->set(i, $($nc(this->remapper)->mapValue(bootstrapMethodArguments->get(i))));
	}
	$var($String, var$0, $nc(this->remapper)->mapInvokeDynamicMethodName(name, descriptor));
	$var($String, var$1, $nc(this->remapper)->mapMethodDesc(descriptor));
	$MethodVisitor::visitInvokeDynamicInsn(var$0, var$1, $cast($Handle, $($nc(this->remapper)->mapValue(bootstrapMethodHandle))), remappedBootstrapMethodArguments);
}

void MethodRemapper::visitTypeInsn(int32_t opcode, $String* type) {
	$MethodVisitor::visitTypeInsn(opcode, $($nc(this->remapper)->mapType(type)));
}

void MethodRemapper::visitLdcInsn(Object$* value) {
	$MethodVisitor::visitLdcInsn($($nc(this->remapper)->mapValue(value)));
}

void MethodRemapper::visitMultiANewArrayInsn($String* descriptor, int32_t numDimensions) {
	$MethodVisitor::visitMultiANewArrayInsn($($nc(this->remapper)->mapDesc(descriptor)), numDimensions);
}

$AnnotationVisitor* MethodRemapper::visitInsnAnnotation(int32_t typeRef, $TypePath* typePath, $String* descriptor, bool visible) {
	$var($AnnotationVisitor, annotationVisitor, $MethodVisitor::visitInsnAnnotation(typeRef, typePath, $($nc(this->remapper)->mapDesc(descriptor)), visible));
	return annotationVisitor == nullptr ? annotationVisitor : createAnnotationRemapper(annotationVisitor);
}

void MethodRemapper::visitTryCatchBlock($Label* start, $Label* end, $Label* handler, $String* type) {
	$MethodVisitor::visitTryCatchBlock(start, end, handler, type == nullptr ? ($String*)nullptr : $($nc(this->remapper)->mapType(type)));
}

$AnnotationVisitor* MethodRemapper::visitTryCatchAnnotation(int32_t typeRef, $TypePath* typePath, $String* descriptor, bool visible) {
	$var($AnnotationVisitor, annotationVisitor, $MethodVisitor::visitTryCatchAnnotation(typeRef, typePath, $($nc(this->remapper)->mapDesc(descriptor)), visible));
	return annotationVisitor == nullptr ? annotationVisitor : createAnnotationRemapper(annotationVisitor);
}

void MethodRemapper::visitLocalVariable($String* name, $String* descriptor, $String* signature, $Label* start, $Label* end, int32_t index) {
	$var($String, var$0, name);
	$var($String, var$1, $nc(this->remapper)->mapDesc(descriptor));
	$MethodVisitor::visitLocalVariable(var$0, var$1, $($nc(this->remapper)->mapSignature(signature, true)), start, end, index);
}

$AnnotationVisitor* MethodRemapper::visitLocalVariableAnnotation(int32_t typeRef, $TypePath* typePath, $LabelArray* start, $LabelArray* end, $ints* index, $String* descriptor, bool visible) {
	$var($AnnotationVisitor, annotationVisitor, $MethodVisitor::visitLocalVariableAnnotation(typeRef, typePath, start, end, index, $($nc(this->remapper)->mapDesc(descriptor)), visible));
	return annotationVisitor == nullptr ? annotationVisitor : createAnnotationRemapper(annotationVisitor);
}

$AnnotationVisitor* MethodRemapper::createAnnotationRemapper($AnnotationVisitor* annotationVisitor) {
	return $new($AnnotationRemapper, this->api, annotationVisitor, this->remapper);
}

MethodRemapper::MethodRemapper() {
}

$Class* MethodRemapper::load$($String* name, bool initialize) {
	$loadClass(MethodRemapper, name, initialize, &_MethodRemapper_ClassInfo_, allocate$MethodRemapper);
	return class$;
}

$Class* MethodRemapper::class$ = nullptr;

					} // commons
				} // asm$
			} // objectweb
		} // org
	} // internal
} // jdk