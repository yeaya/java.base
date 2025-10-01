#ifndef _java_lang_Module_h_
#define _java_lang_Module_h_
//$ class java.lang.Module
//$ extends java.lang.reflect.AnnotatedElement

#include <java/lang/Array.h>
#include <java/lang/reflect/AnnotatedElement.h>

#pragma push_macro("ALL_UNNAMED_MODULE")
#undef ALL_UNNAMED_MODULE
#pragma push_macro("EVERYONE_MODULE")
#undef EVERYONE_MODULE
#pragma push_macro("EVERYONE_SET")
#undef EVERYONE_SET
#pragma push_macro("ALL_UNNAMED_MODULE_SET")
#undef ALL_UNNAMED_MODULE_SET

namespace java {
	namespace io {
		class InputStream;
	}
}
namespace java {
	namespace lang {
		class ClassLoader;
		class ModuleLayer;
		class Package;
	}
}
namespace java {
	namespace lang {
		namespace annotation {
			class Annotation;
		}
	}
}
namespace java {
	namespace lang {
		namespace module {
			class Configuration;
			class ModuleDescriptor;
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
		class List;
		class Map;
		class Set;
	}
}
namespace java {
	namespace util {
		namespace function {
			class Function;
		}
	}
}

namespace java {
	namespace lang {

class $export Module : public ::java::lang::reflect::AnnotatedElement {
	$class(Module, $PRELOAD, ::java::lang::reflect::AnnotatedElement)
public:
	Module();
	void init$(::java::lang::ModuleLayer* layer, ::java::lang::ClassLoader* loader, ::java::lang::module::ModuleDescriptor* descriptor, ::java::net::URI* uri);
	void init$(::java::lang::ClassLoader* loader);
	void init$(::java::lang::ClassLoader* loader, ::java::lang::module::ModuleDescriptor* descriptor);
	::java::lang::Module* addExports($String* pn, ::java::lang::Module* other);
	static void addExports0(::java::lang::Module* from, $String* pn, ::java::lang::Module* to);
	static void addExportsToAll0(::java::lang::Module* from, $String* pn);
	static void addExportsToAllUnnamed0(::java::lang::Module* from, $String* pn);
	::java::lang::Module* addOpens($String* pn, ::java::lang::Module* other);
	::java::lang::Module* addReads(::java::lang::Module* other);
	static void addReads0(::java::lang::Module* from, ::java::lang::Module* to);
	::java::lang::Module* addUses($Class* service);
	bool allows(::java::util::Set* targets, ::java::lang::Module* module);
	bool canRead(::java::lang::Module* other);
	bool canUse($Class* service);
	static void defineModule0(::java::lang::Module* module, bool isOpen, $String* version, $String* location, $ObjectArray* pns);
	static ::java::util::Map* defineModules(::java::lang::module::Configuration* cf, ::java::util::function::Function* clf, ::java::lang::ModuleLayer* layer);
	static ::java::lang::Module* findModule(::java::lang::ModuleLayer* parent, ::java::lang::module::ResolvedModule* resolvedModule);
	static ::java::lang::Module* findModule($String* target, ::java::util::Map* nameToSource, ::java::util::Map* nameToModule, ::java::util::List* parents);
	virtual ::java::lang::annotation::Annotation* getAnnotation($Class* annotationClass) override;
	virtual $Array<::java::lang::annotation::Annotation>* getAnnotations() override;
	::java::lang::Module* getCallerModule($Class* caller);
	::java::lang::ClassLoader* getClassLoader();
	virtual $Array<::java::lang::annotation::Annotation>* getDeclaredAnnotations() override;
	::java::lang::module::ModuleDescriptor* getDescriptor();
	::java::lang::ModuleLayer* getLayer();
	$String* getName();
	::java::util::Set* getPackages();
	::java::io::InputStream* getResourceAsStream($String* name);
	::java::lang::Module* implAddEnableNativeAccess();
	static void implAddEnableNativeAccessAllUnnamed();
	void implAddExports($String* pn);
	void implAddExports($String* pn, ::java::lang::Module* other);
	void implAddExportsNoSync($String* pn);
	void implAddExportsNoSync($String* pn, ::java::lang::Module* other);
	void implAddExportsOrOpens($String* pn, ::java::lang::Module* other, bool open, bool syncVM);
	void implAddExportsToAllUnnamed($String* pn);
	void implAddOpens($String* pn);
	void implAddOpens($String* pn, ::java::lang::Module* other);
	void implAddOpensToAllUnnamed($String* pn);
	void implAddOpensToAllUnnamed(::java::util::Set* concealedPkgs, ::java::util::Set* exportedPkgs);
	void implAddOpensToAllUnnamed(::java::util::Set* pkgs, ::java::util::Map* openPackages);
	void implAddReads(::java::lang::Module* other);
	void implAddReads(::java::lang::Module* other, bool syncVM);
	void implAddReadsAllUnnamed();
	void implAddReadsNoSync(::java::lang::Module* other);
	void implAddUses($Class* service);
	bool implIsEnableNativeAccess();
	bool implIsExportedOrOpen($String* pn, ::java::lang::Module* other, bool open);
	static void initExports(::java::lang::Module* m, ::java::util::Map* nameToModule);
	static void initExportsAndOpens(::java::lang::Module* m, ::java::util::Map* nameToSource, ::java::util::Map* nameToModule, ::java::util::List* parents);
	bool isExported($String* pn, ::java::lang::Module* other);
	bool isExported($String* pn);
	bool isNamed();
	bool isOpen($String* pn, ::java::lang::Module* other);
	bool isOpen($String* pn);
	bool isReflectivelyExported($String* pn, ::java::lang::Module* other);
	bool isReflectivelyExportedOrOpen($String* pn, ::java::lang::Module* other, bool open);
	bool isReflectivelyOpened($String* pn, ::java::lang::Module* other);
	bool isStaticallyExportedOrOpen($String* pn, ::java::lang::Module* other, bool open);
	static bool lambda$findModule$2(::java::lang::module::Configuration* cf, ::java::lang::ModuleLayer* l);
	static ::java::lang::Module* lambda$findModule$3($String* dn, ::java::lang::ModuleLayer* layer);
	bool lambda$getPackages$1(::java::lang::Package* p);
	static ::java::util::Map* lambda$implAddExportsOrOpens$0(::java::lang::Module* m1, ::java::lang::Module* m2);
	$Class* loadModuleInfoClass();
	$Class* loadModuleInfoClass(::java::io::InputStream* in);
	$Class* moduleInfoClass();
	virtual $String* toString() override;
	static bool $assertionsDisabled;
	::java::lang::ModuleLayer* layer = nullptr;
	$String* name = nullptr;
	::java::lang::ClassLoader* loader = nullptr;
	::java::lang::module::ModuleDescriptor* descriptor = nullptr;
	$volatile(bool) enableNativeAccess = false;
	static ::java::lang::Module* ALL_UNNAMED_MODULE;
	static ::java::util::Set* ALL_UNNAMED_MODULE_SET;
	static ::java::lang::Module* EVERYONE_MODULE;
	static ::java::util::Set* EVERYONE_SET;
	$volatile(::java::util::Set*) reads = nullptr;
	$volatile(::java::util::Map*) openPackages = nullptr;
	$volatile(::java::util::Map*) exportedPackages = nullptr;
	$volatile($Class*) moduleInfoClass$ = nullptr;
};

	} // lang
} // java

#pragma pop_macro("ALL_UNNAMED_MODULE")
#pragma pop_macro("EVERYONE_MODULE")
#pragma pop_macro("EVERYONE_SET")
#pragma pop_macro("ALL_UNNAMED_MODULE_SET")

#endif // _java_lang_Module_h_