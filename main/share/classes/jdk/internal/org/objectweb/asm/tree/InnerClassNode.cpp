#include <jdk/internal/org/objectweb/asm/tree/InnerClassNode.h>

#include <jdk/internal/org/objectweb/asm/ClassVisitor.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ClassVisitor = ::jdk::internal::org::objectweb::asm$::ClassVisitor;

namespace jdk {
	namespace internal {
		namespace org {
			namespace objectweb {
				namespace asm$ {
					namespace tree {

$FieldInfo _InnerClassNode_FieldInfo_[] = {
	{"name", "Ljava/lang/String;", nullptr, $PUBLIC, $field(InnerClassNode, name)},
	{"outerName", "Ljava/lang/String;", nullptr, $PUBLIC, $field(InnerClassNode, outerName)},
	{"innerName", "Ljava/lang/String;", nullptr, $PUBLIC, $field(InnerClassNode, innerName)},
	{"access", "I", nullptr, $PUBLIC, $field(InnerClassNode, access)},
	{}
};

$MethodInfo _InnerClassNode_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;I)V", nullptr, $PUBLIC, $method(InnerClassNode, init$, void, $String*, $String*, $String*, int32_t)},
	{"accept", "(Ljdk/internal/org/objectweb/asm/ClassVisitor;)V", nullptr, $PUBLIC, $virtualMethod(InnerClassNode, accept, void, $ClassVisitor*)},
	{}
};

$ClassInfo _InnerClassNode_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"jdk.internal.org.objectweb.asm.tree.InnerClassNode",
	"java.lang.Object",
	nullptr,
	_InnerClassNode_FieldInfo_,
	_InnerClassNode_MethodInfo_
};

$Object* allocate$InnerClassNode($Class* clazz) {
	return $of($alloc(InnerClassNode));
}

void InnerClassNode::init$($String* name, $String* outerName, $String* innerName, int32_t access) {
	$set(this, name, name);
	$set(this, outerName, outerName);
	$set(this, innerName, innerName);
	this->access = access;
}

void InnerClassNode::accept($ClassVisitor* classVisitor) {
	$nc(classVisitor)->visitInnerClass(this->name, this->outerName, this->innerName, this->access);
}

InnerClassNode::InnerClassNode() {
}

$Class* InnerClassNode::load$($String* name, bool initialize) {
	$loadClass(InnerClassNode, name, initialize, &_InnerClassNode_ClassInfo_, allocate$InnerClassNode);
	return class$;
}

$Class* InnerClassNode::class$ = nullptr;

					} // tree
				} // asm$
			} // objectweb
		} // org
	} // internal
} // jdk