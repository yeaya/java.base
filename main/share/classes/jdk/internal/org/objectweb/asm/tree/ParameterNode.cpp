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
	$FieldInfo fieldInfos$$[] = {
		{"name", "Ljava/lang/String;", nullptr, $PUBLIC, $field(ParameterNode, name)},
		{"access", "I", nullptr, $PUBLIC, $field(ParameterNode, access)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/String;I)V", nullptr, $PUBLIC, $method(ParameterNode, init$, void, $String*, int32_t)},
		{"accept", "(Ljdk/internal/org/objectweb/asm/MethodVisitor;)V", nullptr, $PUBLIC, $virtualMethod(ParameterNode, accept, void, $MethodVisitor*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"jdk.internal.org.objectweb.asm.tree.ParameterNode",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(ParameterNode, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ParameterNode);
	});
	return class$;
}

$Class* ParameterNode::class$ = nullptr;

					} // tree
				} // asm$
			} // objectweb
		} // org
	} // internal
} // jdk