#include <jdk/internal/org/objectweb/asm/tree/ParameterNode.h>

#include <jdk/internal/org/objectweb/asm/MethodVisitor.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $MethodVisitor = ::jdk::internal::org::objectweb::asm$::MethodVisitor;

namespace jdk {
	namespace internal {
		namespace org {
			namespace objectweb {
				namespace asm$ {
					namespace tree {

$FieldInfo _ParameterNode_FieldInfo_[] = {
	{"name", "Ljava/lang/String;", nullptr, $PUBLIC, $field(ParameterNode, name)},
	{"access", "I", nullptr, $PUBLIC, $field(ParameterNode, access)},
	{}
};

$MethodInfo _ParameterNode_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;I)V", nullptr, $PUBLIC, $method(ParameterNode, init$, void, $String*, int32_t)},
	{"accept", "(Ljdk/internal/org/objectweb/asm/MethodVisitor;)V", nullptr, $PUBLIC, $virtualMethod(ParameterNode, accept, void, $MethodVisitor*)},
	{}
};

$ClassInfo _ParameterNode_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"jdk.internal.org.objectweb.asm.tree.ParameterNode",
	"java.lang.Object",
	nullptr,
	_ParameterNode_FieldInfo_,
	_ParameterNode_MethodInfo_
};

$Object* allocate$ParameterNode($Class* clazz) {
	return $of($alloc(ParameterNode));
}

void ParameterNode::init$($String* name, int32_t access) {
	$set(this, name, name);
	this->access = access;
}

void ParameterNode::accept($MethodVisitor* methodVisitor) {
	$nc(methodVisitor)->visitParameter(this->name, this->access);
}

ParameterNode::ParameterNode() {
}

$Class* ParameterNode::load$($String* name, bool initialize) {
	$loadClass(ParameterNode, name, initialize, &_ParameterNode_ClassInfo_, allocate$ParameterNode);
	return class$;
}

$Class* ParameterNode::class$ = nullptr;

					} // tree
				} // asm$
			} // objectweb
		} // org
	} // internal
} // jdk