#include <jdk/internal/org/objectweb/asm/commons/ClassRemapper.h>

#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/CompoundAttribute.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/List.h>
#include <jdk/internal/org/objectweb/asm/AnnotationVisitor.h>
#include <jdk/internal/org/objectweb/asm/Attribute.h>
#include <jdk/internal/org/objectweb/asm/ClassVisitor.h>
#include <jdk/internal/org/objectweb/asm/FieldVisitor.h>
#include <jdk/internal/org/objectweb/asm/MethodVisitor.h>
#include <jdk/internal/org/objectweb/asm/ModuleVisitor.h>
#include <jdk/internal/org/objectweb/asm/Opcodes.h>
#include <jdk/internal/org/objectweb/asm/RecordComponentVisitor.h>
#include <jdk/internal/org/objectweb/asm/TypePath.h>
#include <jdk/internal/org/objectweb/asm/commons/AnnotationRemapper.h>
#include <jdk/internal/org/objectweb/asm/commons/FieldRemapper.h>
#include <jdk/internal/org/objectweb/asm/commons/MethodRemapper.h>
#include <jdk/internal/org/objectweb/asm/commons/ModuleHashesAttribute.h>
#include <jdk/internal/org/objectweb/asm/commons/ModuleRemapper.h>
#include <jdk/internal/org/objectweb/asm/commons/RecordComponentRemapper.h>
#include <jdk/internal/org/objectweb/asm/commons/Remapper.h>
#include <jcpp.h>

#undef ASM8

using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $List = ::java::util::List;
using $AnnotationVisitor = ::jdk::internal::org::objectweb::asm$::AnnotationVisitor;
using $Attribute = ::jdk::internal::org::objectweb::asm$::Attribute;
using $ClassVisitor = ::jdk::internal::org::objectweb::asm$::ClassVisitor;
using $FieldVisitor = ::jdk::internal::org::objectweb::asm$::FieldVisitor;
using $MethodVisitor = ::jdk::internal::org::objectweb::asm$::MethodVisitor;
using $ModuleVisitor = ::jdk::internal::org::objectweb::asm$::ModuleVisitor;
using $Opcodes = ::jdk::internal::org::objectweb::asm$::Opcodes;
using $RecordComponentVisitor = ::jdk::internal::org::objectweb::asm$::RecordComponentVisitor;
using $TypePath = ::jdk::internal::org::objectweb::asm$::TypePath;
using $AnnotationRemapper = ::jdk::internal::org::objectweb::asm$::commons::AnnotationRemapper;
using $FieldRemapper = ::jdk::internal::org::objectweb::asm$::commons::FieldRemapper;
using $MethodRemapper = ::jdk::internal::org::objectweb::asm$::commons::MethodRemapper;
using $ModuleHashesAttribute = ::jdk::internal::org::objectweb::asm$::commons::ModuleHashesAttribute;
using $ModuleRemapper = ::jdk::internal::org::objectweb::asm$::commons::ModuleRemapper;
using $RecordComponentRemapper = ::jdk::internal::org::objectweb::asm$::commons::RecordComponentRemapper;
using $Remapper = ::jdk::internal::org::objectweb::asm$::commons::Remapper;

namespace jdk {
	namespace internal {
		namespace org {
			namespace objectweb {
				namespace asm$ {
					namespace commons {

$CompoundAttribute _ClassRemapper_MethodAnnotations_visitPermittedSubclassExperimental17[] = {
	{"Ljava/lang/Deprecated;", nullptr},
	{}
};

$FieldInfo _ClassRemapper_FieldInfo_[] = {
	{"remapper", "Ljdk/internal/org/objectweb/asm/commons/Remapper;", nullptr, $PROTECTED | $FINAL, $field(ClassRemapper, remapper)},
	{"className", "Ljava/lang/String;", nullptr, $PROTECTED, $field(ClassRemapper, className)},
	{}
};

$MethodInfo _ClassRemapper_MethodInfo_[] = {
	{"<init>", "(Ljdk/internal/org/objectweb/asm/ClassVisitor;Ljdk/internal/org/objectweb/asm/commons/Remapper;)V", nullptr, $PUBLIC, $method(static_cast<void(ClassRemapper::*)($ClassVisitor*,$Remapper*)>(&ClassRemapper::init$))},
	{"<init>", "(ILjdk/internal/org/objectweb/asm/ClassVisitor;Ljdk/internal/org/objectweb/asm/commons/Remapper;)V", nullptr, $PROTECTED, $method(static_cast<void(ClassRemapper::*)(int32_t,$ClassVisitor*,$Remapper*)>(&ClassRemapper::init$))},
	{"createAnnotationRemapper", "(Ljdk/internal/org/objectweb/asm/AnnotationVisitor;)Ljdk/internal/org/objectweb/asm/AnnotationVisitor;", nullptr, $PROTECTED},
	{"createFieldRemapper", "(Ljdk/internal/org/objectweb/asm/FieldVisitor;)Ljdk/internal/org/objectweb/asm/FieldVisitor;", nullptr, $PROTECTED},
	{"createMethodRemapper", "(Ljdk/internal/org/objectweb/asm/MethodVisitor;)Ljdk/internal/org/objectweb/asm/MethodVisitor;", nullptr, $PROTECTED},
	{"createModuleRemapper", "(Ljdk/internal/org/objectweb/asm/ModuleVisitor;)Ljdk/internal/org/objectweb/asm/ModuleVisitor;", nullptr, $PROTECTED},
	{"createRecordComponentRemapper", "(Ljdk/internal/org/objectweb/asm/RecordComponentVisitor;)Ljdk/internal/org/objectweb/asm/RecordComponentVisitor;", nullptr, $PROTECTED},
	{"visit", "(IILjava/lang/String;Ljava/lang/String;Ljava/lang/String;[Ljava/lang/String;)V", nullptr, $PUBLIC},
	{"visitAnnotation", "(Ljava/lang/String;Z)Ljdk/internal/org/objectweb/asm/AnnotationVisitor;", nullptr, $PUBLIC},
	{"visitAttribute", "(Ljdk/internal/org/objectweb/asm/Attribute;)V", nullptr, $PUBLIC},
	{"visitField", "(ILjava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/Object;)Ljdk/internal/org/objectweb/asm/FieldVisitor;", nullptr, $PUBLIC},
	{"visitInnerClass", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;I)V", nullptr, $PUBLIC},
	{"visitMethod", "(ILjava/lang/String;Ljava/lang/String;Ljava/lang/String;[Ljava/lang/String;)Ljdk/internal/org/objectweb/asm/MethodVisitor;", nullptr, $PUBLIC},
	{"visitModule", "(Ljava/lang/String;ILjava/lang/String;)Ljdk/internal/org/objectweb/asm/ModuleVisitor;", nullptr, $PUBLIC},
	{"visitNestHost", "(Ljava/lang/String;)V", nullptr, $PUBLIC},
	{"visitNestMember", "(Ljava/lang/String;)V", nullptr, $PUBLIC},
	{"visitOuterClass", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC},
	{"visitPermittedSubclassExperimental", "(Ljava/lang/String;)V", nullptr, $PUBLIC | $DEPRECATED, nullptr, nullptr, nullptr, _ClassRemapper_MethodAnnotations_visitPermittedSubclassExperimental17},
	{"visitRecordComponent", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)Ljdk/internal/org/objectweb/asm/RecordComponentVisitor;", nullptr, $PUBLIC},
	{"visitTypeAnnotation", "(ILjdk/internal/org/objectweb/asm/TypePath;Ljava/lang/String;Z)Ljdk/internal/org/objectweb/asm/AnnotationVisitor;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _ClassRemapper_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"jdk.internal.org.objectweb.asm.commons.ClassRemapper",
	"jdk.internal.org.objectweb.asm.ClassVisitor",
	nullptr,
	_ClassRemapper_FieldInfo_,
	_ClassRemapper_MethodInfo_
};

$Object* allocate$ClassRemapper($Class* clazz) {
	return $of($alloc(ClassRemapper));
}

void ClassRemapper::init$($ClassVisitor* classVisitor, $Remapper* remapper) {
	ClassRemapper::init$($Opcodes::ASM8, classVisitor, remapper);
}

void ClassRemapper::init$(int32_t api, $ClassVisitor* classVisitor, $Remapper* remapper) {
	$ClassVisitor::init$(api, classVisitor);
	$set(this, remapper, remapper);
}

void ClassRemapper::visit(int32_t version, int32_t access, $String* name, $String* signature, $String* superName, $StringArray* interfaces) {
	$set(this, className, name);
	int32_t var$0 = version;
	int32_t var$1 = access;
	$var($String, var$2, $nc(this->remapper)->mapType(name));
	$var($String, var$3, $nc(this->remapper)->mapSignature(signature, false));
	$var($String, var$4, $nc(this->remapper)->mapType(superName));
	$ClassVisitor::visit(var$0, var$1, var$2, var$3, var$4, interfaces == nullptr ? ($StringArray*)nullptr : $($nc(this->remapper)->mapTypes(interfaces)));
}

$ModuleVisitor* ClassRemapper::visitModule($String* name, int32_t flags, $String* version) {
	$var($ModuleVisitor, moduleVisitor, $ClassVisitor::visitModule($($nc(this->remapper)->mapModuleName(name)), flags, version));
	return moduleVisitor == nullptr ? ($ModuleVisitor*)nullptr : createModuleRemapper(moduleVisitor);
}

$AnnotationVisitor* ClassRemapper::visitAnnotation($String* descriptor, bool visible) {
	$var($AnnotationVisitor, annotationVisitor, $ClassVisitor::visitAnnotation($($nc(this->remapper)->mapDesc(descriptor)), visible));
	return annotationVisitor == nullptr ? ($AnnotationVisitor*)nullptr : createAnnotationRemapper(annotationVisitor);
}

$AnnotationVisitor* ClassRemapper::visitTypeAnnotation(int32_t typeRef, $TypePath* typePath, $String* descriptor, bool visible) {
	$var($AnnotationVisitor, annotationVisitor, $ClassVisitor::visitTypeAnnotation(typeRef, typePath, $($nc(this->remapper)->mapDesc(descriptor)), visible));
	return annotationVisitor == nullptr ? ($AnnotationVisitor*)nullptr : createAnnotationRemapper(annotationVisitor);
}

void ClassRemapper::visitAttribute($Attribute* attribute) {
	if ($instanceOf($ModuleHashesAttribute, attribute)) {
		$var($ModuleHashesAttribute, moduleHashesAttribute, $cast($ModuleHashesAttribute, attribute));
		$var($List, modules, $nc(moduleHashesAttribute)->modules);
		for (int32_t i = 0; i < $nc(modules)->size(); ++i) {
			modules->set(i, $($nc(this->remapper)->mapModuleName($cast($String, $(modules->get(i))))));
		}
	}
	$ClassVisitor::visitAttribute(attribute);
}

$RecordComponentVisitor* ClassRemapper::visitRecordComponent($String* name, $String* descriptor, $String* signature) {
	$var($String, var$0, $nc(this->remapper)->mapRecordComponentName(this->className, name, descriptor));
	$var($String, var$1, $nc(this->remapper)->mapDesc(descriptor));
	$var($RecordComponentVisitor, recordComponentVisitor, $ClassVisitor::visitRecordComponent(var$0, var$1, $($nc(this->remapper)->mapSignature(signature, true))));
	return recordComponentVisitor == nullptr ? ($RecordComponentVisitor*)nullptr : createRecordComponentRemapper(recordComponentVisitor);
}

$FieldVisitor* ClassRemapper::visitField(int32_t access, $String* name, $String* descriptor, $String* signature, Object$* value) {
	int32_t var$0 = access;
	$var($String, var$1, $nc(this->remapper)->mapFieldName(this->className, name, descriptor));
	$var($String, var$2, $nc(this->remapper)->mapDesc(descriptor));
	$var($String, var$3, $nc(this->remapper)->mapSignature(signature, true));
	$var($FieldVisitor, fieldVisitor, $ClassVisitor::visitField(var$0, var$1, var$2, var$3, (value == nullptr) ? ($Object*)nullptr : $($nc(this->remapper)->mapValue(value))));
	return fieldVisitor == nullptr ? ($FieldVisitor*)nullptr : createFieldRemapper(fieldVisitor);
}

$MethodVisitor* ClassRemapper::visitMethod(int32_t access, $String* name, $String* descriptor, $String* signature, $StringArray* exceptions) {
	$var($String, remappedDescriptor, $nc(this->remapper)->mapMethodDesc(descriptor));
	int32_t var$0 = access;
	$var($String, var$1, $nc(this->remapper)->mapMethodName(this->className, name, descriptor));
	$var($String, var$2, remappedDescriptor);
	$var($String, var$3, $nc(this->remapper)->mapSignature(signature, false));
	$var($MethodVisitor, methodVisitor, $ClassVisitor::visitMethod(var$0, var$1, var$2, var$3, exceptions == nullptr ? ($StringArray*)nullptr : $($nc(this->remapper)->mapTypes(exceptions))));
	return methodVisitor == nullptr ? ($MethodVisitor*)nullptr : createMethodRemapper(methodVisitor);
}

void ClassRemapper::visitInnerClass($String* name, $String* outerName, $String* innerName, int32_t access) {
	$var($String, var$0, $nc(this->remapper)->mapType(name));
	$var($String, var$1, outerName == nullptr ? ($String*)nullptr : $nc(this->remapper)->mapType(outerName));
	$ClassVisitor::visitInnerClass(var$0, var$1, innerName == nullptr ? ($String*)nullptr : $($nc(this->remapper)->mapInnerClassName(name, outerName, innerName)), access);
}

void ClassRemapper::visitOuterClass($String* owner, $String* name, $String* descriptor) {
	$var($String, var$0, $nc(this->remapper)->mapType(owner));
	$var($String, var$1, name == nullptr ? ($String*)nullptr : $nc(this->remapper)->mapMethodName(owner, name, descriptor));
	$ClassVisitor::visitOuterClass(var$0, var$1, descriptor == nullptr ? ($String*)nullptr : $($nc(this->remapper)->mapMethodDesc(descriptor)));
}

void ClassRemapper::visitNestHost($String* nestHost) {
	$ClassVisitor::visitNestHost($($nc(this->remapper)->mapType(nestHost)));
}

void ClassRemapper::visitNestMember($String* nestMember) {
	$ClassVisitor::visitNestMember($($nc(this->remapper)->mapType(nestMember)));
}

void ClassRemapper::visitPermittedSubclassExperimental($String* permittedSubclass) {
	$ClassVisitor::visitPermittedSubclassExperimental($($nc(this->remapper)->mapType(permittedSubclass)));
}

$FieldVisitor* ClassRemapper::createFieldRemapper($FieldVisitor* fieldVisitor) {
	return $new($FieldRemapper, this->api, fieldVisitor, this->remapper);
}

$MethodVisitor* ClassRemapper::createMethodRemapper($MethodVisitor* methodVisitor) {
	return $new($MethodRemapper, this->api, methodVisitor, this->remapper);
}

$AnnotationVisitor* ClassRemapper::createAnnotationRemapper($AnnotationVisitor* annotationVisitor) {
	return $new($AnnotationRemapper, this->api, annotationVisitor, this->remapper);
}

$ModuleVisitor* ClassRemapper::createModuleRemapper($ModuleVisitor* moduleVisitor) {
	return $new($ModuleRemapper, this->api, moduleVisitor, this->remapper);
}

$RecordComponentVisitor* ClassRemapper::createRecordComponentRemapper($RecordComponentVisitor* recordComponentVisitor) {
	return $new($RecordComponentRemapper, this->api, recordComponentVisitor, this->remapper);
}

ClassRemapper::ClassRemapper() {
}

$Class* ClassRemapper::load$($String* name, bool initialize) {
	$loadClass(ClassRemapper, name, initialize, &_ClassRemapper_ClassInfo_, allocate$ClassRemapper);
	return class$;
}

$Class* ClassRemapper::class$ = nullptr;

					} // commons
				} // asm$
			} // objectweb
		} // org
	} // internal
} // jdk