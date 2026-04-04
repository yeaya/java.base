#include <jdk/internal/org/objectweb/asm/tree/LocalVariableNode.h>
#include <jdk/internal/org/objectweb/asm/Label.h>
#include <jdk/internal/org/objectweb/asm/MethodVisitor.h>
#include <jdk/internal/org/objectweb/asm/tree/LabelNode.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Label = ::jdk::internal::org::objectweb::asm$::Label;
using $MethodVisitor = ::jdk::internal::org::objectweb::asm$::MethodVisitor;
using $LabelNode = ::jdk::internal::org::objectweb::asm$::tree::LabelNode;

namespace jdk {
	namespace internal {
		namespace org {
			namespace objectweb {
				namespace asm$ {
					namespace tree {

void LocalVariableNode::init$($String* name, $String* descriptor, $String* signature, $LabelNode* start, $LabelNode* end, int32_t index) {
	$set(this, name, name);
	$set(this, desc, descriptor);
	$set(this, signature, signature);
	$set(this, start, start);
	$set(this, end, end);
	this->index = index;
}

void LocalVariableNode::accept($MethodVisitor* methodVisitor) {
	$useLocalObjectStack();
	$var($String, var$0, this->name);
	$var($String, var$1, this->desc);
	$var($String, var$2, this->signature);
	$var($Label, var$3, $nc(this->start)->getLabel());
	$nc(methodVisitor)->visitLocalVariable(var$0, var$1, var$2, var$3, $($nc(this->end)->getLabel()), this->index);
}

LocalVariableNode::LocalVariableNode() {
}

$Class* LocalVariableNode::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"name", "Ljava/lang/String;", nullptr, $PUBLIC, $field(LocalVariableNode, name)},
		{"desc", "Ljava/lang/String;", nullptr, $PUBLIC, $field(LocalVariableNode, desc)},
		{"signature", "Ljava/lang/String;", nullptr, $PUBLIC, $field(LocalVariableNode, signature)},
		{"start", "Ljdk/internal/org/objectweb/asm/tree/LabelNode;", nullptr, $PUBLIC, $field(LocalVariableNode, start)},
		{"end", "Ljdk/internal/org/objectweb/asm/tree/LabelNode;", nullptr, $PUBLIC, $field(LocalVariableNode, end)},
		{"index", "I", nullptr, $PUBLIC, $field(LocalVariableNode, index)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljdk/internal/org/objectweb/asm/tree/LabelNode;Ljdk/internal/org/objectweb/asm/tree/LabelNode;I)V", nullptr, $PUBLIC, $method(LocalVariableNode, init$, void, $String*, $String*, $String*, $LabelNode*, $LabelNode*, int32_t)},
		{"accept", "(Ljdk/internal/org/objectweb/asm/MethodVisitor;)V", nullptr, $PUBLIC, $virtualMethod(LocalVariableNode, accept, void, $MethodVisitor*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"jdk.internal.org.objectweb.asm.tree.LocalVariableNode",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(LocalVariableNode, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(LocalVariableNode);
	});
	return class$;
}

$Class* LocalVariableNode::class$ = nullptr;

					} // tree
				} // asm$
			} // objectweb
		} // org
	} // internal
} // jdk