#include <jdk/internal/org/objectweb/asm/commons/ClassRemapper.h>
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

void ClassRemapper::init$($ClassVisitor* classVisitor, $Remapper* remapper) {
	ClassRemapper::init$($Opcodes::ASM8, classVisitor, remapper);
}

void ClassRemapper::init$(int32_t api, $ClassVisitor* classVisitor, $Remapper* remapper) {
	$ClassVisitor::init$(api, classVisitor);
	$set(this, remapper, remapper);
}

void ClassRemapper::visit(int32_t version, int32_t access, $String* name, $String* signature, $String* superName, $StringArray* interfaces) {
	$useLocalObjectStack();
	$set(this, className, name);
	$var($String, var$0, $nc(this->remapper)->mapType(name));
	$var($String, var$1, this->remapper->mapSignature(signature, false));
	$var($String, var$2, this->remapper->mapType(superName));
	$ClassVisitor::visit(version, access, var$0, var$1, var$2, interfaces == nullptr ? ($StringArray*)nullptr : $(this->remapper->mapTypes(interfaces)));
}

$ModuleVisitor* ClassRemapper::visitModule($String* name, int32_t flags, $String* version) {
	$useLocalObjectStack();
	$var($ModuleVisitor, moduleVisitor, $ClassVisitor::visitModule($($nc(this->remapper)->mapModuleName(name)), flags, version));
	return moduleVisitor == nullptr ? ($ModuleVisitor*)nullptr : createModuleRemapper(moduleVisitor);
}

$AnnotationVisitor* ClassRemapper::visitAnnotation($String* descriptor, bool visible) {
	$useLocalObjectStack();
	$var($AnnotationVisitor, annotationVisitor, $ClassVisitor::visitAnnotation($($nc(this->remapper)->mapDesc(descriptor)), visible));
	return annotationVisitor == nullptr ? ($AnnotationVisitor*)nullptr : createAnnotationRemapper(annotationVisitor);
}

$AnnotationVisitor* ClassRemapper::visitTypeAnnotation(int32_t typeRef, $TypePath* typePath, $String* descriptor, bool visible) {
	$useLocalObjectStack();
	$var($AnnotationVisitor, annotationVisitor, $ClassVisitor::visitTypeAnnotation(typeRef, typePath, $($nc(this->remapper)->mapDesc(descriptor)), visible));
	return annotationVisitor == nullptr ? ($AnnotationVisitor*)nullptr : createAnnotationRemapper(annotationVisitor);
}

void ClassRemapper::visitAttribute($Attribute* attribute) {
	$useLocalObjectStack();
	if ($instanceOf($ModuleHashesAttribute, attribute)) {
		$var($ModuleHashesAttribute, moduleHashesAttribute, $cast($ModuleHashesAttribute, attribute));
		$var($List, modules, moduleHashesAttribute->modules);
		for (int32_t i = 0; i < $nc(modules)->size(); ++i) {
			modules->set(i, $($nc(this->remapper)->mapModuleName($$cast($String, modules->get(i)))));
		}
	}
	$ClassVisitor::visitAttribute(attribute);
}

$RecordComponentVisitor* ClassRemapper::visitRecordComponent($String* name, $String* descriptor, $String* signature) {
	$useLocalObjectStack();
	$var($String, var$0, $nc(this->remapper)->mapRecordComponentName(this->className, name, descriptor));
	$var($String, var$1, this->remapper->mapDesc(descriptor));
	$var($RecordComponentVisitor, recordComponentVisitor, $ClassVisitor::visitRecordComponent(var$0, var$1, $(this->remapper->mapSignature(signature, true))));
	return recordComponentVisitor == nullptr ? ($RecordComponentVisitor*)nullptr : createRecordComponentRemapper(recordComponentVisitor);
}

$FieldVisitor* ClassRemapper::visitField(int32_t access, $String* name, $String* descriptor, $String* signature, Object$* value) {
	$useLocalObjectStack();
	$var($String, var$0, $nc(this->remapper)->mapFieldName(this->className, name, descriptor));
	$var($String, var$1, this->remapper->mapDesc(descriptor));
	$var($String, var$2, this->remapper->mapSignature(signature, true));
	$var($FieldVisitor, fieldVisitor, $ClassVisitor::visitField(access, var$0, var$1, var$2, (value == nullptr) ? ($Object*)nullptr : $(this->remapper->mapValue(value))));
	return fieldVisitor == nullptr ? ($FieldVisitor*)nullptr : createFieldRemapper(fieldVisitor);
}

$MethodVisitor* ClassRemapper::visitMethod(int32_t access, $String* name, $String* descriptor, $String* signature, $StringArray* exceptions) {
	$useLocalObjectStack();
	$var($String, remappedDescriptor, $nc(this->remapper)->mapMethodDesc(descriptor));
	$var($String, var$0, this->remapper->mapMethodName(this->className, name, descriptor));
	$var($String, var$1, this->remapper->mapSignature(signature, false));
	$var($MethodVisitor, methodVisitor, $ClassVisitor::visitMethod(access, var$0, remappedDescriptor, var$1, exceptions == nullptr ? ($StringArray*)nullptr : $(this->remapper->mapTypes(exceptions))));
	return methodVisitor == nullptr ? ($MethodVisitor*)nullptr : createMethodRemapper(methodVisitor);
}

void ClassRemapper::visitInnerClass($String* name, $String* outerName, $String* innerName, int32_t access) {
	$useLocalObjectStack();
	$var($String, var$0, $nc(this->remapper)->mapType(name));
	$var($String, var$1, outerName == nullptr ? ($String*)nullptr : this->remapper->mapType(outerName));
	$ClassVisitor::visitInnerClass(var$0, var$1, innerName == nullptr ? ($String*)nullptr : $(this->remapper->mapInnerClassName(name, outerName, innerName)), access);
}

void ClassRemapper::visitOuterClass($String* owner, $String* name, $String* descriptor) {
	$useLocalObjectStack();
	$var($String, var$0, $nc(this->remapper)->mapType(owner));
	$var($String, var$1, name == nullptr ? ($String*)nullptr : this->remapper->mapMethodName(owner, name, descriptor));
	$ClassVisitor::visitOuterClass(var$0, var$1, descriptor == nullptr ? ($String*)nullptr : $(this->remapper->mapMethodDesc(descriptor)));
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
	$FieldInfo fieldInfos$$[] = {
		{"remapper", "Ljdk/internal/org/objectweb/asm/commons/Remapper;", nullptr, $PROTECTED | $FINAL, $field(ClassRemapper, remapper)},
		{"className", "Ljava/lang/String;", nullptr, $PROTECTED, $field(ClassRemapper, className)},
		{}
	};
	$CompoundAttribute visitPermittedSubclassExperimentalmethodAnnotations$$[] = {
		{"Ljava/lang/Deprecated;", nullptr},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljdk/internal/org/objectweb/asm/ClassVisitor;Ljdk/internal/org/objectweb/asm/commons/Remapper;)V", nullptr, $PUBLIC, $method(ClassRemapper, init$, void, $ClassVisitor*, $Remapper*)},
		{"<init>", "(ILjdk/internal/org/objectweb/asm/ClassVisitor;Ljdk/internal/org/objectweb/asm/commons/Remapper;)V", nullptr, $PROTECTED, $method(ClassRemapper, init$, void, int32_t, $ClassVisitor*, $Remapper*)},
		{"createAnnotationRemapper", "(Ljdk/internal/org/objectweb/asm/AnnotationVisitor;)Ljdk/internal/org/objectweb/asm/AnnotationVisitor;", nullptr, $PROTECTED, $virtualMethod(ClassRemapper, createAnnotationRemapper, $AnnotationVisitor*, $AnnotationVisitor*)},
		{"createFieldRemapper", "(Ljdk/internal/org/objectweb/asm/FieldVisitor;)Ljdk/internal/org/objectweb/asm/FieldVisitor;", nullptr, $PROTECTED, $virtualMethod(ClassRemapper, createFieldRemapper, $FieldVisitor*, $FieldVisitor*)},
		{"createMethodRemapper", "(Ljdk/internal/org/objectweb/asm/MethodVisitor;)Ljdk/internal/org/objectweb/asm/MethodVisitor;", nullptr, $PROTECTED, $virtualMethod(ClassRemapper, createMethodRemapper, $MethodVisitor*, $MethodVisitor*)},
		{"createModuleRemapper", "(Ljdk/internal/org/objectweb/asm/ModuleVisitor;)Ljdk/internal/org/objectweb/asm/ModuleVisitor;", nullptr, $PROTECTED, $virtualMethod(ClassRemapper, createModuleRemapper, $ModuleVisitor*, $ModuleVisitor*)},
		{"createRecordComponentRemapper", "(Ljdk/internal/org/objectweb/asm/RecordComponentVisitor;)Ljdk/internal/org/objectweb/asm/RecordComponentVisitor;", nullptr, $PROTECTED, $virtualMethod(ClassRemapper, createRecordComponentRemapper, $RecordComponentVisitor*, $RecordComponentVisitor*)},
		{"visit", "(IILjava/lang/String;Ljava/lang/String;Ljava/lang/String;[Ljava/lang/String;)V", nullptr, $PUBLIC, $virtualMethod(ClassRemapper, visit, void, int32_t, int32_t, $String*, $String*, $String*, $StringArray*)},
		{"visitAnnotation", "(Ljava/lang/String;Z)Ljdk/internal/org/objectweb/asm/AnnotationVisitor;", nullptr, $PUBLIC, $virtualMethod(ClassRemapper, visitAnnotation, $AnnotationVisitor*, $String*, bool)},
		{"visitAttribute", "(Ljdk/internal/org/objectweb/asm/Attribute;)V", nullptr, $PUBLIC, $virtualMethod(ClassRemapper, visitAttribute, void, $Attribute*)},
		{"visitField", "(ILjava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/Object;)Ljdk/internal/org/objectweb/asm/FieldVisitor;", nullptr, $PUBLIC, $virtualMethod(ClassRemapper, visitField, $FieldVisitor*, int32_t, $String*, $String*, $String*, Object$*)},
		{"visitInnerClass", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;I)V", nullptr, $PUBLIC, $virtualMethod(ClassRemapper, visitInnerClass, void, $String*, $String*, $String*, int32_t)},
		{"visitMethod", "(ILjava/lang/String;Ljava/lang/String;Ljava/lang/String;[Ljava/lang/String;)Ljdk/internal/org/objectweb/asm/MethodVisitor;", nullptr, $PUBLIC, $virtualMethod(ClassRemapper, visitMethod, $MethodVisitor*, int32_t, $String*, $String*, $String*, $StringArray*)},
		{"visitModule", "(Ljava/lang/String;ILjava/lang/String;)Ljdk/internal/org/objectweb/asm/ModuleVisitor;", nullptr, $PUBLIC, $virtualMethod(ClassRemapper, visitModule, $ModuleVisitor*, $String*, int32_t, $String*)},
		{"visitNestHost", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $virtualMethod(ClassRemapper, visitNestHost, void, $String*)},
		{"visitNestMember", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $virtualMethod(ClassRemapper, visitNestMember, void, $String*)},
		{"visitOuterClass", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC, $virtualMethod(ClassRemapper, visitOuterClass, void, $String*, $String*, $String*)},
		{"visitPermittedSubclassExperimental", "(Ljava/lang/String;)V", nullptr, $PUBLIC | $DEPRECATED, $virtualMethod(ClassRemapper, visitPermittedSubclassExperimental, void, $String*), nullptr, nullptr, visitPermittedSubclassExperimentalmethodAnnotations$$},
		{"visitRecordComponent", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)Ljdk/internal/org/objectweb/asm/RecordComponentVisitor;", nullptr, $PUBLIC, $virtualMethod(ClassRemapper, visitRecordComponent, $RecordComponentVisitor*, $String*, $String*, $String*)},
		{"visitTypeAnnotation", "(ILjdk/internal/org/objectweb/asm/TypePath;Ljava/lang/String;Z)Ljdk/internal/org/objectweb/asm/AnnotationVisitor;", nullptr, $PUBLIC, $virtualMethod(ClassRemapper, visitTypeAnnotation, $AnnotationVisitor*, int32_t, $TypePath*, $String*, bool)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"jdk.internal.org.objectweb.asm.commons.ClassRemapper",
		"jdk.internal.org.objectweb.asm.ClassVisitor",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(ClassRemapper, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ClassRemapper);
	});
	return class$;
}

$Class* ClassRemapper::class$ = nullptr;

					} // commons
				} // asm$
			} // objectweb
		} // org
	} // internal
} // jdk