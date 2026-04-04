#include <jdk/internal/org/objectweb/asm/tree/ModuleRequireNode.h>
#include <jdk/internal/org/objectweb/asm/ModuleVisitor.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ModuleVisitor = ::jdk::internal::org::objectweb::asm$::ModuleVisitor;

namespace jdk {
	namespace internal {
		namespace org {
			namespace objectweb {
				namespace asm$ {
					namespace tree {

void ModuleRequireNode::init$($String* module, int32_t access, $String* version) {
	$set(this, module, module);
	this->access = access;
	$set(this, version, version);
}

void ModuleRequireNode::accept($ModuleVisitor* moduleVisitor) {
	$nc(moduleVisitor)->visitRequire(this->module, this->access, this->version);
}

ModuleRequireNode::ModuleRequireNode() {
}

$Class* ModuleRequireNode::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"module", "Ljava/lang/String;", nullptr, $PUBLIC, $field(ModuleRequireNode, module)},
		{"access", "I", nullptr, $PUBLIC, $field(ModuleRequireNode, access)},
		{"version", "Ljava/lang/String;", nullptr, $PUBLIC, $field(ModuleRequireNode, version)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/String;ILjava/lang/String;)V", nullptr, $PUBLIC, $method(ModuleRequireNode, init$, void, $String*, int32_t, $String*)},
		{"accept", "(Ljdk/internal/org/objectweb/asm/ModuleVisitor;)V", nullptr, $PUBLIC, $virtualMethod(ModuleRequireNode, accept, void, $ModuleVisitor*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"jdk.internal.org.objectweb.asm.tree.ModuleRequireNode",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(ModuleRequireNode, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ModuleRequireNode);
	});
	return class$;
}

$Class* ModuleRequireNode::class$ = nullptr;

					} // tree
				} // asm$
			} // objectweb
		} // org
	} // internal
} // jdk