#ifndef _jdk_internal_module_ModuleHashesBuilder$Graph_h_
#define _jdk_internal_module_ModuleHashesBuilder$Graph_h_
//$ class jdk.internal.module.ModuleHashesBuilder$Graph
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace io {
		class PrintStream;
	}
}
namespace java {
	namespace util {
		class Map;
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
namespace java {
	namespace util {
		namespace stream {
			class Stream;
		}
	}
}
namespace jdk {
	namespace internal {
		namespace module {
			class ModuleHashesBuilder$Graph$Builder;
		}
	}
}

namespace jdk {
	namespace internal {
		namespace module {

class $import ModuleHashesBuilder$Graph : public ::java::lang::Object {
	$class(ModuleHashesBuilder$Graph, $NO_CLASS_INIT, ::java::lang::Object)
public:
	ModuleHashesBuilder$Graph();
	void init$(::java::util::Set* nodes, ::java::util::Map* edges);
	virtual ::java::util::Set* adjacentNodes(Object$* u);
	virtual bool contains(Object$* u);
	virtual ::java::util::Set* dfs(Object$* root);
	virtual ::java::util::Set* dfs(::java::util::Set* roots);
	virtual ::java::util::Map* edges();
	static bool lambda$dfs$2(::java::util::Set* visited, Object$* v);
	static void lambda$printGraph$3(::java::io::PrintStream* out, Object$* u, Object$* v);
	void lambda$printGraph$4(::java::io::PrintStream* out, Object$* u);
	static void lambda$transpose$0(::jdk::internal::module::ModuleHashesBuilder$Graph$Builder* builder, Object$* u, Object$* v);
	void lambda$transpose$1(::jdk::internal::module::ModuleHashesBuilder$Graph$Builder* builder, Object$* u);
	virtual ::java::util::Set* nodes();
	virtual void ordered(::java::util::function::Consumer* action);
	virtual ::java::util::stream::Stream* orderedNodes();
	virtual void printGraph(::java::io::PrintStream* out);
	virtual void reverse(::java::util::function::Consumer* action);
	virtual ::jdk::internal::module::ModuleHashesBuilder$Graph* transpose();
	::java::util::Set* nodes$ = nullptr;
	::java::util::Map* edges$ = nullptr;
};

		} // module
	} // internal
} // jdk

#endif // _jdk_internal_module_ModuleHashesBuilder$Graph_h_