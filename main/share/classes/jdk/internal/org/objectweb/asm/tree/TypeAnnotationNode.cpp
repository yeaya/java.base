#include <jdk/internal/org/objectweb/asm/tree/TypeAnnotationNode.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/IllegalStateException.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jdk/internal/org/objectweb/asm/Opcodes.h>
#include <jdk/internal/org/objectweb/asm/TypePath.h>
#include <jdk/internal/org/objectweb/asm/tree/AnnotationNode.h>
#include <jcpp.h>

#undef ASM8

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalStateException = ::java::lang::IllegalStateException;
using $MethodInfo = ::java::lang::MethodInfo;
using $Opcodes = ::jdk::internal::org::objectweb::asm$::Opcodes;
using $TypePath = ::jdk::internal::org::objectweb::asm$::TypePath;
using $AnnotationNode = ::jdk::internal::org::objectweb::asm$::tree::AnnotationNode;

namespace jdk {
	namespace internal {
		namespace org {
			namespace objectweb {
				namespace asm$ {
					namespace tree {

$FieldInfo _TypeAnnotationNode_FieldInfo_[] = {
	{"typeRef", "I", nullptr, $PUBLIC, $field(TypeAnnotationNode, typeRef)},
	{"typePath", "Ljdk/internal/org/objectweb/asm/TypePath;", nullptr, $PUBLIC, $field(TypeAnnotationNode, typePath)},
	{}
};

$MethodInfo _TypeAnnotationNode_MethodInfo_[] = {
	{"<init>", "(ILjdk/internal/org/objectweb/asm/TypePath;Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(TypeAnnotationNode::*)(int32_t,$TypePath*,$String*)>(&TypeAnnotationNode::init$))},
	{"<init>", "(IILjdk/internal/org/objectweb/asm/TypePath;Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(TypeAnnotationNode::*)(int32_t,int32_t,$TypePath*,$String*)>(&TypeAnnotationNode::init$))},
	{}
};

$ClassInfo _TypeAnnotationNode_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"jdk.internal.org.objectweb.asm.tree.TypeAnnotationNode",
	"jdk.internal.org.objectweb.asm.tree.AnnotationNode",
	nullptr,
	_TypeAnnotationNode_FieldInfo_,
	_TypeAnnotationNode_MethodInfo_
};

$Object* allocate$TypeAnnotationNode($Class* clazz) {
	return $of($alloc(TypeAnnotationNode));
}

void TypeAnnotationNode::init$(int32_t typeRef, $TypePath* typePath, $String* descriptor) {
	TypeAnnotationNode::init$($Opcodes::ASM8, typeRef, typePath, descriptor);
	if ($of(this)->getClass() != TypeAnnotationNode::class$) {
		$throwNew($IllegalStateException);
	}
}

void TypeAnnotationNode::init$(int32_t api, int32_t typeRef, $TypePath* typePath, $String* descriptor) {
	$AnnotationNode::init$(api, descriptor);
	this->typeRef = typeRef;
	$set(this, typePath, typePath);
}

TypeAnnotationNode::TypeAnnotationNode() {
}

$Class* TypeAnnotationNode::load$($String* name, bool initialize) {
	$loadClass(TypeAnnotationNode, name, initialize, &_TypeAnnotationNode_ClassInfo_, allocate$TypeAnnotationNode);
	return class$;
}

$Class* TypeAnnotationNode::class$ = nullptr;

					} // tree
				} // asm$
			} // objectweb
		} // org
	} // internal
} // jdk