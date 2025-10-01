#ifndef _jdk_internal_module_ModuleInfoExtender_h_
#define _jdk_internal_module_ModuleInfoExtender_h_
//$ class jdk.internal.module.ModuleInfoExtender
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace java {
	namespace io {
		class InputStream;
		class OutputStream;
	}
}
namespace java {
	namespace lang {
		namespace module {
			class ModuleDescriptor$Version;
		}
	}
}
namespace java {
	namespace util {
		class Set;
	}
}
namespace jdk {
	namespace internal {
		namespace module {
			class ModuleHashes;
			class ModuleResolution;
		}
	}
}

namespace jdk {
	namespace internal {
		namespace module {

class $import ModuleInfoExtender : public ::java::lang::Object {
	$class(ModuleInfoExtender, $NO_CLASS_INIT, ::java::lang::Object)
public:
	ModuleInfoExtender();
	void init$(::java::io::InputStream* in);
	::jdk::internal::module::ModuleInfoExtender* hashes(::jdk::internal::module::ModuleHashes* hashes);
	::jdk::internal::module::ModuleInfoExtender* mainClass($String* mainClass);
	::jdk::internal::module::ModuleInfoExtender* moduleResolution(::jdk::internal::module::ModuleResolution* mres);
	static ::jdk::internal::module::ModuleInfoExtender* newExtender(::java::io::InputStream* in);
	::jdk::internal::module::ModuleInfoExtender* packages(::java::util::Set* packages);
	::jdk::internal::module::ModuleInfoExtender* targetPlatform($String* targetPlatform);
	$bytes* toByteArray();
	::jdk::internal::module::ModuleInfoExtender* version(::java::lang::module::ModuleDescriptor$Version* version);
	void write(::java::io::OutputStream* out);
	::java::io::InputStream* in = nullptr;
	::java::util::Set* packages$ = nullptr;
	::java::lang::module::ModuleDescriptor$Version* version$ = nullptr;
	$String* mainClass$ = nullptr;
	$String* targetPlatform$ = nullptr;
	::jdk::internal::module::ModuleHashes* hashes$ = nullptr;
	::jdk::internal::module::ModuleResolution* moduleResolution$ = nullptr;
};

		} // module
	} // internal
} // jdk

#endif // _jdk_internal_module_ModuleInfoExtender_h_