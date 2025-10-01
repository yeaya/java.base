#ifndef _java_lang_module_ModuleDescriptor_h_
#define _java_lang_module_ModuleDescriptor_h_
//$ class java.lang.module.ModuleDescriptor
//$ extends java.lang.Comparable

#include <java/lang/Comparable.h>

namespace java {
	namespace io {
		class InputStream;
	}
}
namespace java {
	namespace lang {
		namespace module {
			class ModuleDescriptor$Builder;
			class ModuleDescriptor$Version;
		}
	}
}
namespace java {
	namespace nio {
		class ByteBuffer;
	}
}
namespace java {
	namespace util {
		class Optional;
		class Set;
	}
}
namespace java {
	namespace util {
		namespace function {
			class Supplier;
		}
	}
}

namespace java {
	namespace lang {
		namespace module {

class $import ModuleDescriptor : public ::java::lang::Comparable {
	$class(ModuleDescriptor, $PRELOAD, ::java::lang::Comparable)
public:
	ModuleDescriptor();
	void init$($String* name, ::java::lang::module::ModuleDescriptor$Version* version, $String* rawVersionString, ::java::util::Set* modifiers, ::java::util::Set* requires, ::java::util::Set* exports, ::java::util::Set* opens, ::java::util::Set* uses, ::java::util::Set* provides, ::java::util::Set* packages, $String* mainClass);
	void init$($String* name, ::java::lang::module::ModuleDescriptor$Version* version, ::java::util::Set* modifiers, ::java::util::Set* requires, ::java::util::Set* exports, ::java::util::Set* opens, ::java::util::Set* uses, ::java::util::Set* provides, ::java::util::Set* packages, $String* mainClass, int32_t hashCode, bool unused);
	static int32_t compare(Object$* obj1, Object$* obj2);
	static int32_t compare(::java::util::Set* s1, ::java::util::Set* s2);
	virtual int32_t compareTo(::java::lang::module::ModuleDescriptor* that);
	virtual int32_t compareTo(Object$* that) override;
	virtual bool equals(Object$* ob) override;
	virtual ::java::util::Set* exports();
	virtual int32_t hashCode() override;
	virtual bool isAutomatic();
	virtual bool isOpen();
	static $String* lambda$toString$0(Object$* e);
	virtual ::java::util::Optional* mainClass();
	virtual ::java::util::Set* modifiers();
	static int64_t modsValue(::java::util::Set* set);
	virtual $String* name();
	static ::java::lang::module::ModuleDescriptor$Builder* newAutomaticModule($String* name);
	static ::java::lang::module::ModuleDescriptor$Builder* newModule($String* name, ::java::util::Set* ms);
	static ::java::lang::module::ModuleDescriptor$Builder* newModule($String* name);
	static ::java::lang::module::ModuleDescriptor$Builder* newOpenModule($String* name);
	virtual ::java::util::Set* opens();
	static $String* packageName($String* cn);
	virtual ::java::util::Set* packages();
	virtual ::java::util::Set* provides();
	virtual ::java::util::Optional* rawVersion();
	static ::java::lang::module::ModuleDescriptor* read(::java::io::InputStream* in, ::java::util::function::Supplier* packageFinder);
	static ::java::lang::module::ModuleDescriptor* read(::java::io::InputStream* in);
	static ::java::lang::module::ModuleDescriptor* read(::java::nio::ByteBuffer* bb, ::java::util::function::Supplier* packageFinder);
	static ::java::lang::module::ModuleDescriptor* read(::java::nio::ByteBuffer* bb);
	virtual ::java::util::Set* requires();
	virtual $String* toNameAndVersion();
	virtual $String* toString() override;
	static $String* toString(::java::util::Set* mods, $String* what);
	virtual ::java::util::Set* uses();
	virtual ::java::util::Optional* version();
	static bool $assertionsDisabled;
	$String* name$ = nullptr;
	::java::lang::module::ModuleDescriptor$Version* version$ = nullptr;
	$String* rawVersionString = nullptr;
	::java::util::Set* modifiers$ = nullptr;
	bool open = false;
	bool automatic = false;
	::java::util::Set* requires$ = nullptr;
	::java::util::Set* exports$ = nullptr;
	::java::util::Set* opens$ = nullptr;
	::java::util::Set* uses$ = nullptr;
	::java::util::Set* provides$ = nullptr;
	::java::util::Set* packages$ = nullptr;
	$String* mainClass$ = nullptr;
	int32_t hash = 0;
};

		} // module
	} // lang
} // java

#endif // _java_lang_module_ModuleDescriptor_h_