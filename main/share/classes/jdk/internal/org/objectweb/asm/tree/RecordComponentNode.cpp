#include <jdk/internal/org/objectweb/asm/tree/RecordComponentNode.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/IllegalStateException.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/List.h>
#include <jdk/internal/org/objectweb/asm/AnnotationVisitor.h>
#include <jdk/internal/org/objectweb/asm/Attribute.h>
#include <jdk/internal/org/objectweb/asm/ClassVisitor.h>
#include <jdk/internal/org/objectweb/asm/Opcodes.h>
#include <jdk/internal/org/objectweb/asm/RecordComponentVisitor.h>
#include <jdk/internal/org/objectweb/asm/TypePath.h>
#include <jdk/internal/org/objectweb/asm/tree/AnnotationNode.h>
#include <jdk/internal/org/objectweb/asm/tree/TypeAnnotationNode.h>
#include <jdk/internal/org/objectweb/asm/tree/UnsupportedClassVersionException.h>
#include <jdk/internal/org/objectweb/asm/tree/Util.h>
#include <jcpp.h>

#undef ASM8

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalStateException = ::java::lang::IllegalStateException;
using $MethodInfo = ::java::lang::MethodInfo;
using $List = ::java::util::List;
using $AnnotationVisitor = ::jdk::internal::org::objectweb::asm$::AnnotationVisitor;
using $Attribute = ::jdk::internal::org::objectweb::asm$::Attribute;
using $ClassVisitor = ::jdk::internal::org::objectweb::asm$::ClassVisitor;
using $Opcodes = ::jdk::internal::org::objectweb::asm$::Opcodes;
using $RecordComponentVisitor = ::jdk::internal::org::objectweb::asm$::RecordComponentVisitor;
using $TypePath = ::jdk::internal::org::objectweb::asm$::TypePath;
using $AnnotationNode = ::jdk::internal::org::objectweb::asm$::tree::AnnotationNode;
using $TypeAnnotationNode = ::jdk::internal::org::objectweb::asm$::tree::TypeAnnotationNode;
using $UnsupportedClassVersionException = ::jdk::internal::org::objectweb::asm$::tree::UnsupportedClassVersionException;
using $Util = ::jdk::internal::org::objectweb::asm$::tree::Util;

namespace jdk {
	namespace internal {
		namespace org {
			namespace objectweb {
				namespace asm$ {
					namespace tree {

$FieldInfo _RecordComponentNode_FieldInfo_[] = {
	{"name", "Ljava/lang/String;", nullptr, $PUBLIC, $field(RecordComponentNode, name)},
	{"descriptor", "Ljava/lang/String;", nullptr, $PUBLIC, $field(RecordComponentNode, descriptor)},
	{"signature", "Ljava/lang/String;", nullptr, $PUBLIC, $field(RecordComponentNode, signature)},
	{"visibleAnnotations", "Ljava/util/List;", "Ljava/util/List<Ljdk/internal/org/objectweb/asm/tree/AnnotationNode;>;", $PUBLIC, $field(RecordComponentNode, visibleAnnotations)},
	{"invisibleAnnotations", "Ljava/util/List;", "Ljava/util/List<Ljdk/internal/org/objectweb/asm/tree/AnnotationNode;>;", $PUBLIC, $field(RecordComponentNode, invisibleAnnotations)},
	{"visibleTypeAnnotations", "Ljava/util/List;", "Ljava/util/List<Ljdk/internal/org/objectweb/asm/tree/TypeAnnotationNode;>;", $PUBLIC, $field(RecordComponentNode, visibleTypeAnnotations)},
	{"invisibleTypeAnnotations", "Ljava/util/List;", "Ljava/util/List<Ljdk/internal/org/objectweb/asm/tree/TypeAnnotationNode;>;", $PUBLIC, $field(RecordComponentNode, invisibleTypeAnnotations)},
	{"attrs", "Ljava/util/List;", "Ljava/util/List<Ljdk/internal/org/objectweb/asm/Attribute;>;", $PUBLIC, $field(RecordComponentNode, attrs)},
	{}
};

$MethodInfo _RecordComponentNode_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(RecordComponentNode::*)($String*,$String*,$String*)>(&RecordComponentNode::init$))},
	{"<init>", "(ILjava/lang/String;Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(RecordComponentNode::*)(int32_t,$String*,$String*,$String*)>(&RecordComponentNode::init$))},
	{"accept", "(Ljdk/internal/org/objectweb/asm/ClassVisitor;)V", nullptr, $PUBLIC},
	{"check", "(I)V", nullptr, $PUBLIC},
	{"visitAnnotation", "(Ljava/lang/String;Z)Ljdk/internal/org/objectweb/asm/AnnotationVisitor;", nullptr, $PUBLIC},
	{"visitAttribute", "(Ljdk/internal/org/objectweb/asm/Attribute;)V", nullptr, $PUBLIC},
	{"visitEnd", "()V", nullptr, $PUBLIC},
	{"visitTypeAnnotation", "(ILjdk/internal/org/objectweb/asm/TypePath;Ljava/lang/String;Z)Ljdk/internal/org/objectweb/asm/AnnotationVisitor;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _RecordComponentNode_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"jdk.internal.org.objectweb.asm.tree.RecordComponentNode",
	"jdk.internal.org.objectweb.asm.RecordComponentVisitor",
	nullptr,
	_RecordComponentNode_FieldInfo_,
	_RecordComponentNode_MethodInfo_
};

$Object* allocate$RecordComponentNode($Class* clazz) {
	return $of($alloc(RecordComponentNode));
}

void RecordComponentNode::init$($String* name, $String* descriptor, $String* signature) {
	RecordComponentNode::init$($Opcodes::ASM8, name, descriptor, signature);
	if ($of(this)->getClass() != RecordComponentNode::class$) {
		$throwNew($IllegalStateException);
	}
}

void RecordComponentNode::init$(int32_t api, $String* name, $String* descriptor, $String* signature) {
	$RecordComponentVisitor::init$(api);
	$set(this, name, name);
	$set(this, descriptor, descriptor);
	$set(this, signature, signature);
}

$AnnotationVisitor* RecordComponentNode::visitAnnotation($String* descriptor, bool visible) {
	$var($AnnotationNode, annotation, $new($AnnotationNode, descriptor));
	if (visible) {
		$set(this, visibleAnnotations, $Util::add(this->visibleAnnotations, annotation));
	} else {
		$set(this, invisibleAnnotations, $Util::add(this->invisibleAnnotations, annotation));
	}
	return annotation;
}

$AnnotationVisitor* RecordComponentNode::visitTypeAnnotation(int32_t typeRef, $TypePath* typePath, $String* descriptor, bool visible) {
	$var($TypeAnnotationNode, typeAnnotation, $new($TypeAnnotationNode, typeRef, typePath, descriptor));
	if (visible) {
		$set(this, visibleTypeAnnotations, $Util::add(this->visibleTypeAnnotations, typeAnnotation));
	} else {
		$set(this, invisibleTypeAnnotations, $Util::add(this->invisibleTypeAnnotations, typeAnnotation));
	}
	return typeAnnotation;
}

void RecordComponentNode::visitAttribute($Attribute* attribute) {
	$set(this, attrs, $Util::add(this->attrs, attribute));
}

void RecordComponentNode::visitEnd() {
}

void RecordComponentNode::check(int32_t api) {
	if (api < $Opcodes::ASM8) {
		$throwNew($UnsupportedClassVersionException);
	}
}

void RecordComponentNode::accept($ClassVisitor* classVisitor) {
	$useLocalCurrentObjectStackCache();
	$var($RecordComponentVisitor, recordComponentVisitor, $nc(classVisitor)->visitRecordComponent(this->name, this->descriptor, this->signature));
	if (recordComponentVisitor == nullptr) {
		return;
	}
	if (this->visibleAnnotations != nullptr) {
		{
			int32_t i = 0;
			int32_t n = $nc(this->visibleAnnotations)->size();
			for (; i < n; ++i) {
				$var($AnnotationNode, annotation, $cast($AnnotationNode, $nc(this->visibleAnnotations)->get(i)));
				$nc(annotation)->accept($($nc(recordComponentVisitor)->visitAnnotation(annotation->desc, true)));
			}
		}
	}
	if (this->invisibleAnnotations != nullptr) {
		{
			int32_t i = 0;
			int32_t n = $nc(this->invisibleAnnotations)->size();
			for (; i < n; ++i) {
				$var($AnnotationNode, annotation, $cast($AnnotationNode, $nc(this->invisibleAnnotations)->get(i)));
				$nc(annotation)->accept($($nc(recordComponentVisitor)->visitAnnotation(annotation->desc, false)));
			}
		}
	}
	if (this->visibleTypeAnnotations != nullptr) {
		{
			int32_t i = 0;
			int32_t n = $nc(this->visibleTypeAnnotations)->size();
			for (; i < n; ++i) {
				$var($TypeAnnotationNode, typeAnnotation, $cast($TypeAnnotationNode, $nc(this->visibleTypeAnnotations)->get(i)));
				$nc(typeAnnotation)->accept($($nc(recordComponentVisitor)->visitTypeAnnotation(typeAnnotation->typeRef, typeAnnotation->typePath, typeAnnotation->desc, true)));
			}
		}
	}
	if (this->invisibleTypeAnnotations != nullptr) {
		{
			int32_t i = 0;
			int32_t n = $nc(this->invisibleTypeAnnotations)->size();
			for (; i < n; ++i) {
				$var($TypeAnnotationNode, typeAnnotation, $cast($TypeAnnotationNode, $nc(this->invisibleTypeAnnotations)->get(i)));
				$nc(typeAnnotation)->accept($($nc(recordComponentVisitor)->visitTypeAnnotation(typeAnnotation->typeRef, typeAnnotation->typePath, typeAnnotation->desc, false)));
			}
		}
	}
	if (this->attrs != nullptr) {
		{
			int32_t i = 0;
			int32_t n = $nc(this->attrs)->size();
			for (; i < n; ++i) {
				$nc(recordComponentVisitor)->visitAttribute($cast($Attribute, $($nc(this->attrs)->get(i))));
			}
		}
	}
	$nc(recordComponentVisitor)->visitEnd();
}

RecordComponentNode::RecordComponentNode() {
}

$Class* RecordComponentNode::load$($String* name, bool initialize) {
	$loadClass(RecordComponentNode, name, initialize, &_RecordComponentNode_ClassInfo_, allocate$RecordComponentNode);
	return class$;
}

$Class* RecordComponentNode::class$ = nullptr;

					} // tree
				} // asm$
			} // objectweb
		} // org
	} // internal
} // jdk