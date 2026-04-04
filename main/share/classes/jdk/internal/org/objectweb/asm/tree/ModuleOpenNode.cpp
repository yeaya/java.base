#include <jdk/internal/org/objectweb/asm/tree/ModuleOpenNode.h>
#include <java/util/List.h>
#include <jdk/internal/org/objectweb/asm/ModuleVisitor.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $List = ::java::util::List;
using $ModuleVisitor = ::jdk::internal::org::objectweb::asm$::ModuleVisitor;

namespace jdk {
	namespace internal {
		namespace org {
			namespace objectweb {
				namespace asm$ {
					namespace tree {

void ModuleOpenNode::init$($String* packaze, int32_t access, $List* modules) {
	$set(this, packaze, packaze);
	this->access = access;
	$set(this, modules, modules);
}

void ModuleOpenNode::accept($ModuleVisitor* moduleVisitor) {
	$useLocalObjectStack();
	$nc(moduleVisitor)->visitOpen(this->packaze, this->access, this->modules == nullptr ? ($StringArray*)nullptr : $$cast($StringArray, this->modules->toArray($$new($StringArray, 0))));
}

ModuleOpenNode::ModuleOpenNode() {
}

$Class* ModuleOpenNode::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"packaze", "Ljava/lang/String;", nullptr, $PUBLIC, $field(ModuleOpenNode, packaze)},
		{"access", "I", nullptr, $PUBLIC, $field(ModuleOpenNode, access)},
		{"modules", "Ljava/util/List;", "Ljava/util/List<Ljava/lang/String;>;", $PUBLIC, $field(ModuleOpenNode, modules)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/String;ILjava/util/List;)V", "(Ljava/lang/String;ILjava/util/List<Ljava/lang/String;>;)V", $PUBLIC, $method(ModuleOpenNode, init$, void, $String*, int32_t, $List*)},
		{"accept", "(Ljdk/internal/org/objectweb/asm/ModuleVisitor;)V", nullptr, $PUBLIC, $virtualMethod(ModuleOpenNode, accept, void, $ModuleVisitor*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"jdk.internal.org.objectweb.asm.tree.ModuleOpenNode",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(ModuleOpenNode, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ModuleOpenNode);
	});
	return class$;
}

$Class* ModuleOpenNode::class$ = nullptr;

					} // tree
				} // asm$
			} // objectweb
		} // org
	} // internal
} // jdk