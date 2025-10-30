#include <jdk/internal/org/objectweb/asm/tree/ModuleProvideNode.h>

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

$FieldInfo _ModuleProvideNode_FieldInfo_[] = {
	{"service", "Ljava/lang/String;", nullptr, $PUBLIC, $field(ModuleProvideNode, service)},
	{"providers", "Ljava/util/List;", "Ljava/util/List<Ljava/lang/String;>;", $PUBLIC, $field(ModuleProvideNode, providers)},
	{}
};

$MethodInfo _ModuleProvideNode_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;Ljava/util/List;)V", "(Ljava/lang/String;Ljava/util/List<Ljava/lang/String;>;)V", $PUBLIC, $method(static_cast<void(ModuleProvideNode::*)($String*,$List*)>(&ModuleProvideNode::init$))},
	{"accept", "(Ljdk/internal/org/objectweb/asm/ModuleVisitor;)V", nullptr, $PUBLIC},
	{}
};

$ClassInfo _ModuleProvideNode_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"jdk.internal.org.objectweb.asm.tree.ModuleProvideNode",
	"java.lang.Object",
	nullptr,
	_ModuleProvideNode_FieldInfo_,
	_ModuleProvideNode_MethodInfo_
};

$Object* allocate$ModuleProvideNode($Class* clazz) {
	return $of($alloc(ModuleProvideNode));
}

void ModuleProvideNode::init$($String* service, $List* providers) {
	$set(this, service, service);
	$set(this, providers, providers);
}

void ModuleProvideNode::accept($ModuleVisitor* moduleVisitor) {
	$useLocalCurrentObjectStackCache();
	$nc(moduleVisitor)->visitProvide(this->service, $fcast($StringArray, $($nc(this->providers)->toArray($$new($StringArray, 0)))));
}

ModuleProvideNode::ModuleProvideNode() {
}

$Class* ModuleProvideNode::load$($String* name, bool initialize) {
	$loadClass(ModuleProvideNode, name, initialize, &_ModuleProvideNode_ClassInfo_, allocate$ModuleProvideNode);
	return class$;
}

$Class* ModuleProvideNode::class$ = nullptr;

					} // tree
				} // asm$
			} // objectweb
		} // org
	} // internal
} // jdk