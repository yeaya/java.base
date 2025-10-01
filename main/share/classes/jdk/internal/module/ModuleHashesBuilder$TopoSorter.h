#ifndef _jdk_internal_module_ModuleHashesBuilder$TopoSorter_h_
#define _jdk_internal_module_ModuleHashesBuilder$TopoSorter_h_
//$ class jdk.internal.module.ModuleHashesBuilder$TopoSorter
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace util {
		class Deque;
		class Set;
	}
}
namespace java {
	namespace util {
		namespace function {
			class Consumer;
		}
	}
}
namespace jdk {
	namespace internal {
		namespace module {
			class ModuleHashesBuilder$Graph;
		}
	}
}

namespace jdk {
	namespace internal {
		namespace module {

class ModuleHashesBuilder$TopoSorter : public ::java::lang::Object {
	$class(ModuleHashesBuilder$TopoSorter, $NO_CLASS_INIT, ::java::lang::Object)
public:
	ModuleHashesBuilder$TopoSorter();
	void init$(::jdk::internal::module::ModuleHashesBuilder$Graph* graph);
	::java::util::Set* children(Object$* node);
	void lambda$sort$0(::java::util::Set* visited, ::java::util::Deque* stack, Object$* node);
	virtual void ordered(::java::util::function::Consumer* action);
	virtual void reverse(::java::util::function::Consumer* action);
	void sort();
	void visit(Object$* node, ::java::util::Set* visited, ::java::util::Deque* stack);
	::java::util::Deque* result = nullptr;
	::jdk::internal::module::ModuleHashesBuilder$Graph* graph = nullptr;
};

		} // module
	} // internal
} // jdk

#endif // _jdk_internal_module_ModuleHashesBuilder$TopoSorter_h_