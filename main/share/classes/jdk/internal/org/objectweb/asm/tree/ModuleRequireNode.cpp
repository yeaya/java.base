#include <jdk/internal/org/objectweb/asm/tree/ModuleRequireNode.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
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

$FieldInfo _ModuleRequireNode_FieldInfo_[] = {
	{"module", "Ljava/lang/String;", nullptr, $PUBLIC, $field(ModuleRequireNode, module)},
	{"access", "I", nullptr, $PUBLIC, $field(ModuleRequireNode, access)},
	{"version", "Ljava/lang/String;", nullptr, $PUBLIC, $field(ModuleRequireNode, version)},
	{}
};

$MethodInfo _ModuleRequireNode_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;ILjava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(ModuleRequireNode::*)($String*,int32_t,$String*)>(&ModuleRequireNode::init$))},
	{"accept", "(Ljdk/internal/org/objectweb/asm/ModuleVisitor;)V", nullptr, $PUBLIC},
	{}
};

$ClassInfo _ModuleRequireNode_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"jdk.internal.org.objectweb.asm.tree.ModuleRequireNode",
	"java.lang.Object",
	nullptr,
	_ModuleRequireNode_FieldInfo_,
	_ModuleRequireNode_MethodInfo_
};

$Object* allocate$ModuleRequireNode($Class* clazz) {
	return $of($alloc(ModuleRequireNode));
}

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
	$loadClass(ModuleRequireNode, name, initialize, &_ModuleRequireNode_ClassInfo_, allocate$ModuleRequireNode);
	return class$;
}

$Class* ModuleRequireNode::class$ = nullptr;

					} // tree
				} // asm$
			} // objectweb
		} // org
	} // internal
} // jdk