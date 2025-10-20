#include <jdk/internal/org/objectweb/asm/tree/ModuleExportNode.h>

#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
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

$FieldInfo _ModuleExportNode_FieldInfo_[] = {
	{"packaze", "Ljava/lang/String;", nullptr, $PUBLIC, $field(ModuleExportNode, packaze)},
	{"access", "I", nullptr, $PUBLIC, $field(ModuleExportNode, access)},
	{"modules", "Ljava/util/List;", "Ljava/util/List<Ljava/lang/String;>;", $PUBLIC, $field(ModuleExportNode, modules)},
	{}
};

$MethodInfo _ModuleExportNode_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;ILjava/util/List;)V", "(Ljava/lang/String;ILjava/util/List<Ljava/lang/String;>;)V", $PUBLIC, $method(static_cast<void(ModuleExportNode::*)($String*,int32_t,$List*)>(&ModuleExportNode::init$))},
	{"accept", "(Ljdk/internal/org/objectweb/asm/ModuleVisitor;)V", nullptr, $PUBLIC},
	{}
};

$ClassInfo _ModuleExportNode_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"jdk.internal.org.objectweb.asm.tree.ModuleExportNode",
	"java.lang.Object",
	nullptr,
	_ModuleExportNode_FieldInfo_,
	_ModuleExportNode_MethodInfo_
};

$Object* allocate$ModuleExportNode($Class* clazz) {
	return $of($alloc(ModuleExportNode));
}

void ModuleExportNode::init$($String* packaze, int32_t access, $List* modules) {
	$set(this, packaze, packaze);
	this->access = access;
	$set(this, modules, modules);
}

void ModuleExportNode::accept($ModuleVisitor* moduleVisitor) {
	$useLocalCurrentObjectStackCache();
	$nc(moduleVisitor)->visitExport(this->packaze, this->access, this->modules == nullptr ? ($StringArray*)nullptr : $fcast($StringArray, $($nc(this->modules)->toArray($$new($StringArray, 0)))));
}

ModuleExportNode::ModuleExportNode() {
}

$Class* ModuleExportNode::load$($String* name, bool initialize) {
	$loadClass(ModuleExportNode, name, initialize, &_ModuleExportNode_ClassInfo_, allocate$ModuleExportNode);
	return class$;
}

$Class* ModuleExportNode::class$ = nullptr;

					} // tree
				} // asm$
			} // objectweb
		} // org
	} // internal
} // jdk