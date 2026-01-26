#include <jdk/internal/org/objectweb/asm/commons/RemappingMethodAdapter.h>

#include <jdk/internal/org/objectweb/asm/AnnotationVisitor.h>
#include <jdk/internal/org/objectweb/asm/Handle.h>
#include <jdk/internal/org/objectweb/asm/Label.h>
#include <jdk/internal/org/objectweb/asm/MethodVisitor.h>
#include <jdk/internal/org/objectweb/asm/Opcodes.h>
#include <jdk/internal/org/objectweb/asm/TypePath.h>
#include <jdk/internal/org/objectweb/asm/commons/LocalVariablesSorter.h>
#include <jdk/internal/org/objectweb/asm/commons/Remapper.h>
#include <jdk/internal/org/objectweb/asm/commons/RemappingAnnotationAdapter.h>
#include <jcpp.h>

#undef ASM5
#undef ASM6
#undef INVOKEINTERFACE

using $LabelArray = $Array<::jdk::internal::org::objectweb::asm$::Label>;
using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AnnotationVisitor = ::jdk::internal::org::objectweb::asm$::AnnotationVisitor;
using $Handle = ::jdk::internal::org::objectweb::asm$::Handle;
using $Label = ::jdk::internal::org::objectweb::asm$::Label;
using $MethodVisitor = ::jdk::internal::org::objectweb::asm$::MethodVisitor;
using $Opcodes = ::jdk::internal::org::objectweb::asm$::Opcodes;
using $TypePath = ::jdk::internal::org::objectweb::asm$::TypePath;
using $LocalVariablesSorter = ::jdk::internal::org::objectweb::asm$::commons::LocalVariablesSorter;
using $Remapper = ::jdk::internal::org::objectweb::asm$::commons::Remapper;
using $RemappingAnnotationAdapter = ::jdk::internal::org::objectweb::asm$::commons::RemappingAnnotationAdapter;

namespace jdk {
	namespace internal {
		namespace org {
			namespace objectweb {
				namespace asm$ {
					namespace commons {

$CompoundAttribute _RemappingMethodAdapter_Annotations_[] = {
	{"Ljava/lang/Deprecated;", nullptr},
	{}
};

$CompoundAttribute _RemappingMethodAdapter_MethodAnnotations_visitMethodInsn13[] = {
	{"Ljava/lang/Deprecated;", nullptr},
	{}
};

$FieldInfo _RemappingMethodAdapter_FieldInfo_[] = {
	{"remapper", "Ljdk/internal/org/objectweb/asm/commons/Remapper;", nullptr, $PROTECTED | $FINAL, $field(RemappingMethodAdapter, remapper)},
	{}
};

$MethodInfo _RemappingMethodAdapter_MethodInfo_[] = {
	{"<init>", "(ILjava/lang/String;Ljdk/internal/org/objectweb/asm/MethodVisitor;Ljdk/internal/org/objectweb/asm/commons/Remapper;)V", nullptr, $PUBLIC, $method(RemappingMethodAdapter, init$, void, int32_t, $String*, $MethodVisitor*, $Remapper*)},
	{"<init>", "(IILjava/lang/String;Ljdk/internal/org/objectweb/asm/MethodVisitor;Ljdk/internal/org/objectweb/asm/commons/Remapper;)V", nullptr, $PROTECTED, $method(RemappingMethodAdapter, init$, void, int32_t, int32_t, $String*, $MethodVisitor*, $Remapper*)},
	{"doVisitMethodInsn", "(ILjava/lang/String;Ljava/lang/String;Ljava/lang/String;Z)V", nullptr, $PRIVATE, $method(RemappingMethodAdapter, doVisitMethodInsn, void, int32_t, $String*, $String*, $String*, bool)},
	{"remapEntries", "(I[Ljava/lang/Object;)[Ljava/lang/Object;", nullptr, $PRIVATE, $method(RemappingMethodAdapter, remapEntries, $ObjectArray*, int32_t, $ObjectArray*)},
	{"visitAnnotation", "(Ljava/lang/String;Z)Ljdk/internal/org/objectweb/asm/AnnotationVisitor;", nullptr, $PUBLIC, $virtualMethod(RemappingMethodAdapter, visitAnnotation, $AnnotationVisitor*, $String*, bool)},
	{"visitAnnotationDefault", "()Ljdk/internal/org/objectweb/asm/AnnotationVisitor;", nullptr, $PUBLIC, $virtualMethod(RemappingMethodAdapter, visitAnnotationDefault, $AnnotationVisitor*)},
	{"visitFieldInsn", "(ILjava/lang/String;Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC, $virtualMethod(RemappingMethodAdapter, visitFieldInsn, void, int32_t, $String*, $String*, $String*)},
	{"visitFrame", "(II[Ljava/lang/Object;I[Ljava/lang/Object;)V", nullptr, $PUBLIC, $virtualMethod(RemappingMethodAdapter, visitFrame, void, int32_t, int32_t, $ObjectArray*, int32_t, $ObjectArray*)},
	{"visitInsnAnnotation", "(ILjdk/internal/org/objectweb/asm/TypePath;Ljava/lang/String;Z)Ljdk/internal/org/objectweb/asm/AnnotationVisitor;", nullptr, $PUBLIC, $virtualMethod(RemappingMethodAdapter, visitInsnAnnotation, $AnnotationVisitor*, int32_t, $TypePath*, $String*, bool)},
	{"visitInvokeDynamicInsn", "(Ljava/lang/String;Ljava/lang/String;Ljdk/internal/org/objectweb/asm/Handle;[Ljava/lang/Object;)V", nullptr, $PUBLIC | $TRANSIENT, $virtualMethod(RemappingMethodAdapter, visitInvokeDynamicInsn, void, $String*, $String*, $Handle*, $ObjectArray*)},
	{"visitLdcInsn", "(Ljava/lang/Object;)V", nullptr, $PUBLIC, $virtualMethod(RemappingMethodAdapter, visitLdcInsn, void, Object$*)},
	{"visitLocalVariable", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljdk/internal/org/objectweb/asm/Label;Ljdk/internal/org/objectweb/asm/Label;I)V", nullptr, $PUBLIC, $virtualMethod(RemappingMethodAdapter, visitLocalVariable, void, $String*, $String*, $String*, $Label*, $Label*, int32_t)},
	{"visitLocalVariableAnnotation", "(ILjdk/internal/org/objectweb/asm/TypePath;[Ljdk/internal/org/objectweb/asm/Label;[Ljdk/internal/org/objectweb/asm/Label;[ILjava/lang/String;Z)Ljdk/internal/org/objectweb/asm/AnnotationVisitor;", nullptr, $PUBLIC, $virtualMethod(RemappingMethodAdapter, visitLocalVariableAnnotation, $AnnotationVisitor*, int32_t, $TypePath*, $LabelArray*, $LabelArray*, $ints*, $String*, bool)},
	{"visitMethodInsn", "(ILjava/lang/String;Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC | $DEPRECATED, $virtualMethod(RemappingMethodAdapter, visitMethodInsn, void, int32_t, $String*, $String*, $String*), nullptr, nullptr, _RemappingMethodAdapter_MethodAnnotations_visitMethodInsn13},
	{"visitMethodInsn", "(ILjava/lang/String;Ljava/lang/String;Ljava/lang/String;Z)V", nullptr, $PUBLIC, $virtualMethod(RemappingMethodAdapter, visitMethodInsn, void, int32_t, $String*, $String*, $String*, bool)},
	{"visitMultiANewArrayInsn", "(Ljava/lang/String;I)V", nullptr, $PUBLIC, $virtualMethod(RemappingMethodAdapter, visitMultiANewArrayInsn, void, $String*, int32_t)},
	{"visitParameterAnnotation", "(ILjava/lang/String;Z)Ljdk/internal/org/objectweb/asm/AnnotationVisitor;", nullptr, $PUBLIC, $virtualMethod(RemappingMethodAdapter, visitParameterAnnotation, $AnnotationVisitor*, int32_t, $String*, bool)},
	{"visitTryCatchAnnotation", "(ILjdk/internal/org/objectweb/asm/TypePath;Ljava/lang/String;Z)Ljdk/internal/org/objectweb/asm/AnnotationVisitor;", nullptr, $PUBLIC, $virtualMethod(RemappingMethodAdapter, visitTryCatchAnnotation, $AnnotationVisitor*, int32_t, $TypePath*, $String*, bool)},
	{"visitTryCatchBlock", "(Ljdk/internal/org/objectweb/asm/Label;Ljdk/internal/org/objectweb/asm/Label;Ljdk/internal/org/objectweb/asm/Label;Ljava/lang/String;)V", nullptr, $PUBLIC, $virtualMethod(RemappingMethodAdapter, visitTryCatchBlock, void, $Label*, $Label*, $Label*, $String*)},
	{"visitTypeAnnotation", "(ILjdk/internal/org/objectweb/asm/TypePath;Ljava/lang/String;Z)Ljdk/internal/org/objectweb/asm/AnnotationVisitor;", nullptr, $PUBLIC, $virtualMethod(RemappingMethodAdapter, visitTypeAnnotation, $AnnotationVisitor*, int32_t, $TypePath*, $String*, bool)},
	{"visitTypeInsn", "(ILjava/lang/String;)V", nullptr, $PUBLIC, $virtualMethod(RemappingMethodAdapter, visitTypeInsn, void, int32_t, $String*)},
	{}
};

$ClassInfo _RemappingMethodAdapter_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"jdk.internal.org.objectweb.asm.commons.RemappingMethodAdapter",
	"jdk.internal.org.objectweb.asm.commons.LocalVariablesSorter",
	nullptr,
	_RemappingMethodAdapter_FieldInfo_,
	_RemappingMethodAdapter_MethodInfo_,
	nullptr,
	nullptr,
	nullptr,
	_RemappingMethodAdapter_Annotations_
};

$Object* allocate$RemappingMethodAdapter($Class* clazz) {
	return $of($alloc(RemappingMethodAdapter));
}

void RemappingMethodAdapter::init$(int32_t access, $String* descriptor, $MethodVisitor* methodVisitor, $Remapper* remapper) {
	RemappingMethodAdapter::init$($Opcodes::ASM6, access, descriptor, methodVisitor, remapper);
}

void RemappingMethodAdapter::init$(int32_t api, int32_t access, $String* descriptor, $MethodVisitor* methodVisitor, $Remapper* remapper) {
	$LocalVariablesSorter::init$(api, access, descriptor, methodVisitor);
	$set(this, remapper, remapper);
}

$AnnotationVisitor* RemappingMethodAdapter::visitAnnotationDefault() {
	$var($AnnotationVisitor, annotationVisitor, $LocalVariablesSorter::visitAnnotationDefault());
	return annotationVisitor == nullptr ? annotationVisitor : static_cast<$AnnotationVisitor*>($new($RemappingAnnotationAdapter, annotationVisitor, this->remapper));
}

$AnnotationVisitor* RemappingMethodAdapter::visitAnnotation($String* descriptor, bool visible) {
	$useLocalCurrentObjectStackCache();
	$var($AnnotationVisitor, annotationVisitor, $LocalVariablesSorter::visitAnnotation($($nc(this->remapper)->mapDesc(descriptor)), visible));
	return annotationVisitor == nullptr ? annotationVisitor : static_cast<$AnnotationVisitor*>($new($RemappingAnnotationAdapter, annotationVisitor, this->remapper));
}

$AnnotationVisitor* RemappingMethodAdapter::visitTypeAnnotation(int32_t typeRef, $TypePath* typePath, $String* descriptor, bool visible) {
	$useLocalCurrentObjectStackCache();
	$var($AnnotationVisitor, annotationVisitor, $LocalVariablesSorter::visitTypeAnnotation(typeRef, typePath, $($nc(this->remapper)->mapDesc(descriptor)), visible));
	return annotationVisitor == nullptr ? annotationVisitor : static_cast<$AnnotationVisitor*>($new($RemappingAnnotationAdapter, annotationVisitor, this->remapper));
}

$AnnotationVisitor* RemappingMethodAdapter::visitParameterAnnotation(int32_t parameter, $String* descriptor, bool visible) {
	$useLocalCurrentObjectStackCache();
	$var($AnnotationVisitor, annotationVisitor, $LocalVariablesSorter::visitParameterAnnotation(parameter, $($nc(this->remapper)->mapDesc(descriptor)), visible));
	return annotationVisitor == nullptr ? annotationVisitor : static_cast<$AnnotationVisitor*>($new($RemappingAnnotationAdapter, annotationVisitor, this->remapper));
}

void RemappingMethodAdapter::visitFrame(int32_t type, int32_t numLocal, $ObjectArray* local, int32_t numStack, $ObjectArray* stack) {
	$useLocalCurrentObjectStackCache();
	int32_t var$0 = type;
	int32_t var$1 = numLocal;
	$var($ObjectArray, var$2, remapEntries(numLocal, local));
	int32_t var$3 = numStack;
	$LocalVariablesSorter::visitFrame(var$0, var$1, var$2, var$3, $(remapEntries(numStack, stack)));
}

$ObjectArray* RemappingMethodAdapter::remapEntries(int32_t numTypes, $ObjectArray* entries) {
	$useLocalCurrentObjectStackCache();
	if (entries == nullptr) {
		return entries;
	}
	$var($ObjectArray, remappedEntries, nullptr);
	for (int32_t i = 0; i < numTypes; ++i) {
		if ($instanceOf($String, $nc(entries)->get(i))) {
			if (remappedEntries == nullptr) {
				$assign(remappedEntries, $new($ObjectArray, numTypes));
				$System::arraycopy(entries, 0, remappedEntries, 0, numTypes);
			}
			$nc(remappedEntries)->set(i, $($nc(this->remapper)->mapType($cast($String, entries->get(i)))));
		}
	}
	return remappedEntries == nullptr ? entries : remappedEntries;
}

void RemappingMethodAdapter::visitFieldInsn(int32_t opcode, $String* owner, $String* name, $String* descriptor) {
	$useLocalCurrentObjectStackCache();
	int32_t var$0 = opcode;
	$var($String, var$1, $nc(this->remapper)->mapType(owner));
	$var($String, var$2, $nc(this->remapper)->mapFieldName(owner, name, descriptor));
	$LocalVariablesSorter::visitFieldInsn(var$0, var$1, var$2, $($nc(this->remapper)->mapDesc(descriptor)));
}

void RemappingMethodAdapter::visitMethodInsn(int32_t opcode, $String* owner, $String* name, $String* descriptor) {
	if (this->api >= $Opcodes::ASM5) {
		$LocalVariablesSorter::visitMethodInsn(opcode, owner, name, descriptor);
		return;
	}
	doVisitMethodInsn(opcode, owner, name, descriptor, opcode == $Opcodes::INVOKEINTERFACE);
}

void RemappingMethodAdapter::visitMethodInsn(int32_t opcode, $String* owner, $String* name, $String* descriptor, bool isInterface) {
	if (this->api < $Opcodes::ASM5) {
		$LocalVariablesSorter::visitMethodInsn(opcode, owner, name, descriptor, isInterface);
		return;
	}
	doVisitMethodInsn(opcode, owner, name, descriptor, isInterface);
}

void RemappingMethodAdapter::doVisitMethodInsn(int32_t opcode, $String* owner, $String* name, $String* descriptor, bool isInterface) {
	$useLocalCurrentObjectStackCache();
	if (this->mv != nullptr) {
		int32_t var$0 = opcode;
		$var($String, var$1, $nc(this->remapper)->mapType(owner));
		$var($String, var$2, $nc(this->remapper)->mapMethodName(owner, name, descriptor));
		$nc(this->mv)->visitMethodInsn(var$0, var$1, var$2, $($nc(this->remapper)->mapMethodDesc(descriptor)), isInterface);
	}
}

void RemappingMethodAdapter::visitInvokeDynamicInsn($String* name, $String* descriptor, $Handle* bootstrapMethodHandle, $ObjectArray* bootstrapMethodArguments) {
	$useLocalCurrentObjectStackCache();
	for (int32_t i = 0; i < $nc(bootstrapMethodArguments)->length; ++i) {
		bootstrapMethodArguments->set(i, $($nc(this->remapper)->mapValue(bootstrapMethodArguments->get(i))));
	}
	$var($String, var$0, $nc(this->remapper)->mapInvokeDynamicMethodName(name, descriptor));
	$var($String, var$1, $nc(this->remapper)->mapMethodDesc(descriptor));
	$LocalVariablesSorter::visitInvokeDynamicInsn(var$0, var$1, $cast($Handle, $($nc(this->remapper)->mapValue(bootstrapMethodHandle))), bootstrapMethodArguments);
}

void RemappingMethodAdapter::visitTypeInsn(int32_t opcode, $String* type) {
	$LocalVariablesSorter::visitTypeInsn(opcode, $($nc(this->remapper)->mapType(type)));
}

void RemappingMethodAdapter::visitLdcInsn(Object$* value) {
	$LocalVariablesSorter::visitLdcInsn($($nc(this->remapper)->mapValue(value)));
}

void RemappingMethodAdapter::visitMultiANewArrayInsn($String* descriptor, int32_t numDimensions) {
	$LocalVariablesSorter::visitMultiANewArrayInsn($($nc(this->remapper)->mapDesc(descriptor)), numDimensions);
}

$AnnotationVisitor* RemappingMethodAdapter::visitInsnAnnotation(int32_t typeRef, $TypePath* typePath, $String* descriptor, bool visible) {
	$useLocalCurrentObjectStackCache();
	$var($AnnotationVisitor, annotationVisitor, $LocalVariablesSorter::visitInsnAnnotation(typeRef, typePath, $($nc(this->remapper)->mapDesc(descriptor)), visible));
	return annotationVisitor == nullptr ? annotationVisitor : static_cast<$AnnotationVisitor*>($new($RemappingAnnotationAdapter, annotationVisitor, this->remapper));
}

void RemappingMethodAdapter::visitTryCatchBlock($Label* start, $Label* end, $Label* handler, $String* type) {
	$LocalVariablesSorter::visitTryCatchBlock(start, end, handler, type == nullptr ? ($String*)nullptr : $($nc(this->remapper)->mapType(type)));
}

$AnnotationVisitor* RemappingMethodAdapter::visitTryCatchAnnotation(int32_t typeRef, $TypePath* typePath, $String* descriptor, bool visible) {
	$useLocalCurrentObjectStackCache();
	$var($AnnotationVisitor, annotationVisitor, $LocalVariablesSorter::visitTryCatchAnnotation(typeRef, typePath, $($nc(this->remapper)->mapDesc(descriptor)), visible));
	return annotationVisitor == nullptr ? annotationVisitor : static_cast<$AnnotationVisitor*>($new($RemappingAnnotationAdapter, annotationVisitor, this->remapper));
}

void RemappingMethodAdapter::visitLocalVariable($String* name, $String* descriptor, $String* signature, $Label* start, $Label* end, int32_t index) {
	$useLocalCurrentObjectStackCache();
	$var($String, var$0, name);
	$var($String, var$1, $nc(this->remapper)->mapDesc(descriptor));
	$LocalVariablesSorter::visitLocalVariable(var$0, var$1, $($nc(this->remapper)->mapSignature(signature, true)), start, end, index);
}

$AnnotationVisitor* RemappingMethodAdapter::visitLocalVariableAnnotation(int32_t typeRef, $TypePath* typePath, $LabelArray* start, $LabelArray* end, $ints* index, $String* descriptor, bool visible) {
	$useLocalCurrentObjectStackCache();
	$var($AnnotationVisitor, annotationVisitor, $LocalVariablesSorter::visitLocalVariableAnnotation(typeRef, typePath, start, end, index, $($nc(this->remapper)->mapDesc(descriptor)), visible));
	return annotationVisitor == nullptr ? annotationVisitor : static_cast<$AnnotationVisitor*>($new($RemappingAnnotationAdapter, annotationVisitor, this->remapper));
}

RemappingMethodAdapter::RemappingMethodAdapter() {
}

$Class* RemappingMethodAdapter::load$($String* name, bool initialize) {
	$loadClass(RemappingMethodAdapter, name, initialize, &_RemappingMethodAdapter_ClassInfo_, allocate$RemappingMethodAdapter);
	return class$;
}

$Class* RemappingMethodAdapter::class$ = nullptr;

					} // commons
				} // asm$
			} // objectweb
		} // org
	} // internal
} // jdk