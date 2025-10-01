#ifndef _jdk_internal_module_ModuleHashes_h_
#define _jdk_internal_module_ModuleHashes_h_
//$ class jdk.internal.module.ModuleHashes
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace java {
	namespace lang {
		class StringBuilder;
	}
}
namespace java {
	namespace lang {
		namespace module {
			class ModuleReader;
		}
	}
}
namespace java {
	namespace security {
		class MessageDigest;
	}
}
namespace java {
	namespace util {
		class Map;
		class Map$Entry;
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

namespace jdk {
	namespace internal {
		namespace module {

class $import ModuleHashes : public ::java::lang::Object {
	$class(ModuleHashes, $NO_CLASS_INIT, ::java::lang::Object)
public:
	ModuleHashes();
	void init$($String* algorithm, ::java::util::Map* nameToHash);
	$String* algorithm();
	static $bytes* computeHash(::java::lang::module::ModuleReader* reader, $String* algorithm);
	static $bytes* computeHash(::java::util::function::Supplier* supplier, $String* algorithm);
	virtual bool equals(Object$* obj) override;
	static ::jdk::internal::module::ModuleHashes* generate(::java::util::Set* mrefs, $String* algorithm);
	virtual int32_t hashCode() override;
	$bytes* hashFor($String* mn);
	::java::util::Map* hashes();
	static void lambda$computeHash$0(::java::security::MessageDigest* md, ::java::lang::module::ModuleReader* reader, $bytes* buf, $String* rn);
	static void lambda$toString$1(::java::lang::StringBuilder* sb, ::java::util::Map$Entry* e);
	::java::util::Set* names();
	virtual $String* toString() override;
	$String* algorithm$ = nullptr;
	::java::util::Map* nameToHash = nullptr;
};

		} // module
	} // internal
} // jdk

#endif // _jdk_internal_module_ModuleHashes_h_