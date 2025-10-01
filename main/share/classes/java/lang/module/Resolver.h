#ifndef _java_lang_module_Resolver_h_
#define _java_lang_module_Resolver_h_
//$ class java.lang.module.Resolver
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace java {
	namespace io {
		class PrintStream;
	}
}
namespace java {
	namespace lang {
		class StringBuilder;
	}
}
namespace java {
	namespace lang {
		namespace module {
			class Configuration;
			class ModuleDescriptor;
			class ModuleDescriptor$Requires;
			class ModuleFinder;
			class ModuleReference;
			class ResolvedModule;
		}
	}
}
namespace java {
	namespace net {
		class URI;
	}
}
namespace java {
	namespace util {
		class Collection;
		class Deque;
		class List;
		class Map;
		class Map$Entry;
		class Set;
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
			class ModuleTarget;
		}
	}
}

namespace java {
	namespace lang {
		namespace module {

class Resolver : public ::java::lang::Object {
	$class(Resolver, $PRELOAD, ::java::lang::Object)
public:
	Resolver();
	void init$(::java::lang::module::ModuleFinder* beforeFinder, ::java::util::List* parents, ::java::lang::module::ModuleFinder* afterFinder, ::java::io::PrintStream* traceOutput);
	::java::util::Set* addFoundAutomaticModules();
	void addFoundModule(::java::lang::module::ModuleReference* mref);
	::java::lang::module::Resolver* bind();
	::java::lang::module::Resolver* bind(bool bindIncubatorModules);
	void checkExportSuppliers(::java::util::Map* graph);
	void checkHashes();
	void checkTargetPlatform($String* mn, ::jdk::internal::module::ModuleTarget* target);
	::java::lang::module::ResolvedModule* computeIfAbsent(::java::util::Map* map, $String* name, ::java::lang::module::Configuration* cf, ::java::lang::module::ModuleReference* mref);
	$String* cycleAsString(::java::lang::module::ModuleDescriptor* descriptor);
	void detectCycles();
	void failTwoSuppliers(::java::lang::module::ModuleDescriptor* descriptor, $String* source, ::java::lang::module::ModuleDescriptor* supplier1, ::java::lang::module::ModuleDescriptor* supplier2);
	::java::util::Set* findAll();
	static void findFail($String* fmt, $ObjectArray* args);
	::java::lang::module::ResolvedModule* findInParent($String* mn);
	::java::lang::module::ModuleReference* findWithAfterFinder($String* mn);
	::java::lang::module::ModuleReference* findWithBeforeFinder($String* mn);
	::java::util::Map* finish(::java::lang::module::Configuration* cf);
	bool isTracing();
	void lambda$addFoundAutomaticModules$2(::java::util::Set* result, ::java::lang::module::ModuleReference* mref);
	static ::java::util::stream::Stream* lambda$bind$1(::java::lang::module::Configuration* c);
	static bool lambda$makeGraph$3(::java::lang::module::ModuleDescriptor$Requires* r);
	static ::java::util::stream::Stream* lambda$makeGraph$4(::java::lang::module::Configuration* c, ::java::lang::module::ModuleDescriptor$Requires* r);
	static ::java::util::Map$Entry* lambda$makeGraph$5(::java::lang::module::ResolvedModule* m1, ::java::lang::module::ResolvedModule* m2);
	static ::java::util::stream::Stream* lambda$makeGraph$6(::java::lang::module::Configuration* c, ::java::lang::module::ResolvedModule* m1);
	static ::java::util::stream::Stream* lambda$makeGraph$7(::java::lang::module::Configuration* c);
	static bool lambda$makeGraph$8(::java::lang::module::ResolvedModule* d);
	static void lambda$makeGraph$9(::java::util::Set* reads, ::java::util::Set* requiresTransitive, ::java::lang::module::ResolvedModule* m);
	static void lambda$nameAndInfo$10(::java::lang::StringBuilder* sb, ::java::net::URI* uri);
	void lambda$resolve$0(::java::util::Deque* q, ::java::lang::module::ModuleDescriptor* descriptor, ::java::lang::module::ModuleReference* mref);
	::java::util::Map* makeGraph(::java::lang::module::Configuration* cf);
	$String* nameAndInfo(::java::lang::module::ModuleReference* mref);
	static $String* packageName($String* cn);
	::java::lang::module::Resolver* resolve(::java::util::Collection* roots);
	::java::util::Set* resolve(::java::util::Deque* q);
	static void resolveFail($String* fmt, $ObjectArray* args);
	$String* targetPlatform();
	void trace($String* fmt, $ObjectArray* args);
	void visit(::java::lang::module::ModuleDescriptor* descriptor);
	static bool $assertionsDisabled;
	::java::lang::module::ModuleFinder* beforeFinder = nullptr;
	::java::util::List* parents = nullptr;
	::java::lang::module::ModuleFinder* afterFinder = nullptr;
	::java::io::PrintStream* traceOutput = nullptr;
	::java::util::Map* nameToReference = nullptr;
	bool haveAllAutomaticModules = false;
	$String* targetPlatform$ = nullptr;
	::java::util::Set* visited = nullptr;
	::java::util::Set* visitPath = nullptr;
};

		} // module
	} // lang
} // java

#endif // _java_lang_module_Resolver_h_