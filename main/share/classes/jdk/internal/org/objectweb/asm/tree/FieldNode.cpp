#include <jdk/internal/org/objectweb/asm/tree/FieldNode.h>

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
#include <jdk/internal/org/objectweb/asm/FieldVisitor.h>
#include <jdk/internal/org/objectweb/asm/Opcodes.h>
#include <jdk/internal/org/objectweb/asm/TypePath.h>
#include <jdk/internal/org/objectweb/asm/tree/AnnotationNode.h>
#include <jdk/internal/org/objectweb/asm/tree/TypeAnnotationNode.h>
#include <jdk/internal/org/objectweb/asm/tree/UnsupportedClassVersionException.h>
#include <jdk/internal/org/objectweb/asm/tree/Util.h>
#include <jcpp.h>

#undef ASM4
#undef ASM8

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalStateException = ::java::lang::IllegalStateException;
using $MethodInfo = ::java::lang::MethodInfo;
using $List = ::java::util::List;
using $AnnotationVisitor = ::jdk::internal::org::objectweb::asm$::AnnotationVisitor;
using $Attribute = ::jdk::internal::org::objectweb::asm$::Attribute;
using $ClassVisitor = ::jdk::internal::org::objectweb::asm$::ClassVisitor;
using $FieldVisitor = ::jdk::internal::org::objectweb::asm$::FieldVisitor;
using $Opcodes = ::jdk::internal::org::objectweb::asm$::Opcodes;
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

$FieldInfo _FieldNode_FieldInfo_[] = {
	{"access", "I", nullptr, $PUBLIC, $field(FieldNode, access)},
	{"name", "Ljava/lang/String;", nullptr, $PUBLIC, $field(FieldNode, name)},
	{"desc", "Ljava/lang/String;", nullptr, $PUBLIC, $field(FieldNode, desc)},
	{"signature", "Ljava/lang/String;", nullptr, $PUBLIC, $field(FieldNode, signature)},
	{"value", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(FieldNode, value)},
	{"visibleAnnotations", "Ljava/util/List;", "Ljava/util/List<Ljdk/internal/org/objectweb/asm/tree/AnnotationNode;>;", $PUBLIC, $field(FieldNode, visibleAnnotations)},
	{"invisibleAnnotations", "Ljava/util/List;", "Ljava/util/List<Ljdk/internal/org/objectweb/asm/tree/AnnotationNode;>;", $PUBLIC, $field(FieldNode, invisibleAnnotations)},
	{"visibleTypeAnnotations", "Ljava/util/List;", "Ljava/util/List<Ljdk/internal/org/objectweb/asm/tree/TypeAnnotationNode;>;", $PUBLIC, $field(FieldNode, visibleTypeAnnotations)},
	{"invisibleTypeAnnotations", "Ljava/util/List;", "Ljava/util/List<Ljdk/internal/org/objectweb/asm/tree/TypeAnnotationNode;>;", $PUBLIC, $field(FieldNode, invisibleTypeAnnotations)},
	{"attrs", "Ljava/util/List;", "Ljava/util/List<Ljdk/internal/org/objectweb/asm/Attribute;>;", $PUBLIC, $field(FieldNode, attrs)},
	{}
};

$MethodInfo _FieldNode_MethodInfo_[] = {
	{"<init>", "(ILjava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/Object;)V", nullptr, $PUBLIC, $method(static_cast<void(FieldNode::*)(int32_t,$String*,$String*,$String*,Object$*)>(&FieldNode::init$))},
	{"<init>", "(IILjava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/Object;)V", nullptr, $PUBLIC, $method(static_cast<void(FieldNode::*)(int32_t,int32_t,$String*,$String*,$String*,Object$*)>(&FieldNode::init$))},
	{"accept", "(Ljdk/internal/org/objectweb/asm/ClassVisitor;)V", nullptr, $PUBLIC},
	{"check", "(I)V", nullptr, $PUBLIC},
	{"visitAnnotation", "(Ljava/lang/String;Z)Ljdk/internal/org/objectweb/asm/AnnotationVisitor;", nullptr, $PUBLIC},
	{"visitAttribute", "(Ljdk/internal/org/objectweb/asm/Attribute;)V", nullptr, $PUBLIC},
	{"visitEnd", "()V", nullptr, $PUBLIC},
	{"visitTypeAnnotation", "(ILjdk/internal/org/objectweb/asm/TypePath;Ljava/lang/String;Z)Ljdk/internal/org/objectweb/asm/AnnotationVisitor;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _FieldNode_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"jdk.internal.org.objectweb.asm.tree.FieldNode",
	"jdk.internal.org.objectweb.asm.FieldVisitor",
	nullptr,
	_FieldNode_FieldInfo_,
	_FieldNode_MethodInfo_
};

$Object* allocate$FieldNode($Class* clazz) {
	return $of($alloc(FieldNode));
}

void FieldNode::init$(int32_t access, $String* name, $String* descriptor, $String* signature, Object$* value) {
	FieldNode::init$($Opcodes::ASM8, access, name, descriptor, signature, value);
	if ($of(this)->getClass() != FieldNode::class$) {
		$throwNew($IllegalStateException);
	}
}

void FieldNode::init$(int32_t api, int32_t access, $String* name, $String* descriptor, $String* signature, Object$* value) {
	$FieldVisitor::init$(api);
	this->access = access;
	$set(this, name, name);
	$set(this, desc, descriptor);
	$set(this, signature, signature);
	$set(this, value, value);
}

$AnnotationVisitor* FieldNode::visitAnnotation($String* descriptor, bool visible) {
	$var($AnnotationNode, annotation, $new($AnnotationNode, descriptor));
	if (visible) {
		$set(this, visibleAnnotations, $Util::add(this->visibleAnnotations, annotation));
	} else {
		$set(this, invisibleAnnotations, $Util::add(this->invisibleAnnotations, annotation));
	}
	return annotation;
}

$AnnotationVisitor* FieldNode::visitTypeAnnotation(int32_t typeRef, $TypePath* typePath, $String* descriptor, bool visible) {
	$var($TypeAnnotationNode, typeAnnotation, $new($TypeAnnotationNode, typeRef, typePath, descriptor));
	if (visible) {
		$set(this, visibleTypeAnnotations, $Util::add(this->visibleTypeAnnotations, typeAnnotation));
	} else {
		$set(this, invisibleTypeAnnotations, $Util::add(this->invisibleTypeAnnotations, typeAnnotation));
	}
	return typeAnnotation;
}

void FieldNode::visitAttribute($Attribute* attribute) {
	$set(this, attrs, $Util::add(this->attrs, attribute));
}

void FieldNode::visitEnd() {
}

void FieldNode::check(int32_t api) {
	if (api == $Opcodes::ASM4) {
		if (this->visibleTypeAnnotations != nullptr && !$nc(this->visibleTypeAnnotations)->isEmpty()) {
			$throwNew($UnsupportedClassVersionException);
		}
		if (this->invisibleTypeAnnotations != nullptr && !$nc(this->invisibleTypeAnnotations)->isEmpty()) {
			$throwNew($UnsupportedClassVersionException);
		}
	}
}

void FieldNode::accept($ClassVisitor* classVisitor) {
	$useLocalCurrentObjectStackCache();
	$var($FieldVisitor, fieldVisitor, $nc(classVisitor)->visitField(this->access, this->name, this->desc, this->signature, this->value));
	if (fieldVisitor == nullptr) {
		return;
	}
	if (this->visibleAnnotations != nullptr) {
		{
			int32_t i = 0;
			int32_t n = $nc(this->visibleAnnotations)->size();
			for (; i < n; ++i) {
				$var($AnnotationNode, annotation, $cast($AnnotationNode, $nc(this->visibleAnnotations)->get(i)));
				$nc(annotation)->accept($($nc(fieldVisitor)->visitAnnotation(annotation->desc, true)));
			}
		}
	}
	if (this->invisibleAnnotations != nullptr) {
		{
			int32_t i = 0;
			int32_t n = $nc(this->invisibleAnnotations)->size();
			for (; i < n; ++i) {
				$var($AnnotationNode, annotation, $cast($AnnotationNode, $nc(this->invisibleAnnotations)->get(i)));
				$nc(annotation)->accept($($nc(fieldVisitor)->visitAnnotation(annotation->desc, false)));
			}
		}
	}
	if (this->visibleTypeAnnotations != nullptr) {
		{
			int32_t i = 0;
			int32_t n = $nc(this->visibleTypeAnnotations)->size();
			for (; i < n; ++i) {
				$var($TypeAnnotationNode, typeAnnotation, $cast($TypeAnnotationNode, $nc(this->visibleTypeAnnotations)->get(i)));
				$nc(typeAnnotation)->accept($($nc(fieldVisitor)->visitTypeAnnotation(typeAnnotation->typeRef, typeAnnotation->typePath, typeAnnotation->desc, true)));
			}
		}
	}
	if (this->invisibleTypeAnnotations != nullptr) {
		{
			int32_t i = 0;
			int32_t n = $nc(this->invisibleTypeAnnotations)->size();
			for (; i < n; ++i) {
				$var($TypeAnnotationNode, typeAnnotation, $cast($TypeAnnotationNode, $nc(this->invisibleTypeAnnotations)->get(i)));
				$nc(typeAnnotation)->accept($($nc(fieldVisitor)->visitTypeAnnotation(typeAnnotation->typeRef, typeAnnotation->typePath, typeAnnotation->desc, false)));
			}
		}
	}
	if (this->attrs != nullptr) {
		{
			int32_t i = 0;
			int32_t n = $nc(this->attrs)->size();
			for (; i < n; ++i) {
				$nc(fieldVisitor)->visitAttribute($cast($Attribute, $($nc(this->attrs)->get(i))));
			}
		}
	}
	$nc(fieldVisitor)->visitEnd();
}

FieldNode::FieldNode() {
}

$Class* FieldNode::load$($String* name, bool initialize) {
	$loadClass(FieldNode, name, initialize, &_FieldNode_ClassInfo_, allocate$FieldNode);
	return class$;
}

$Class* FieldNode::class$ = nullptr;

					} // tree
				} // asm$
			} // objectweb
		} // org
	} // internal
} // jdk