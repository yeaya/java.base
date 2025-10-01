#ifndef _jdk_internal_module_ModuleInfo_h_
#define _jdk_internal_module_ModuleInfo_h_
//$ class jdk.internal.module.ModuleInfo
//$ extends java.lang.Object

#include <java/lang/Object.h>

#pragma push_macro("JLMA")
#undef JLMA

namespace java {
	namespace io {
		class DataInput;
		class InputStream;
	}
}
namespace java {
	namespace lang {
		namespace module {
			class InvalidModuleDescriptorException;
			class ModuleDescriptor$Builder;
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
		namespace access {
			class JavaLangModuleAccess;
		}
	}
}
namespace jdk {
	namespace internal {
		namespace module {
			class ModuleHashes;
			class ModuleInfo$Attributes;
			class ModuleInfo$ConstantPool;
			class ModuleResolution;
			class ModuleTarget;
		}
	}
}

namespace jdk {
	namespace internal {
		namespace module {

class $import ModuleInfo : public ::java::lang::Object {
	$class(ModuleInfo, 0, ::java::lang::Object)
public:
	ModuleInfo();
	void init$(::java::util::function::Supplier* pf, bool ph);
	void init$(::java::util::function::Supplier* pf);
	::jdk::internal::module::ModuleInfo$Attributes* doRead(::java::io::DataInput* input);
	static ::java::lang::module::InvalidModuleDescriptorException* invalidModuleDescriptor($String* msg);
	static bool isAttributeAtMostOnce($String* name);
	static bool isAttributeDisallowed($String* name);
	static ::jdk::internal::module::ModuleInfo$Attributes* read(::java::io::InputStream* in, ::java::util::function::Supplier* pf);
	static ::jdk::internal::module::ModuleInfo$Attributes* read(::java::nio::ByteBuffer* bb, ::java::util::function::Supplier* pf);
	static ::jdk::internal::module::ModuleInfo$Attributes* readIgnoringHashes(::java::nio::ByteBuffer* bb, ::java::util::function::Supplier* pf);
	::java::lang::module::ModuleDescriptor$Builder* readModuleAttribute(::java::io::DataInput* in, ::jdk::internal::module::ModuleInfo$ConstantPool* cpool, int32_t major);
	::jdk::internal::module::ModuleHashes* readModuleHashesAttribute(::java::io::DataInput* in, ::jdk::internal::module::ModuleInfo$ConstantPool* cpool);
	$String* readModuleMainClassAttribute(::java::io::DataInput* in, ::jdk::internal::module::ModuleInfo$ConstantPool* cpool);
	::java::util::Set* readModulePackagesAttribute(::java::io::DataInput* in, ::jdk::internal::module::ModuleInfo$ConstantPool* cpool);
	::jdk::internal::module::ModuleResolution* readModuleResolution(::java::io::DataInput* in, ::jdk::internal::module::ModuleInfo$ConstantPool* cpool);
	::jdk::internal::module::ModuleTarget* readModuleTargetAttribute(::java::io::DataInput* in, ::jdk::internal::module::ModuleInfo$ConstantPool* cpool);
	static ::java::lang::module::InvalidModuleDescriptorException* truncatedModuleDescriptor();
	static bool $assertionsDisabled;
	static ::jdk::internal::access::JavaLangModuleAccess* JLMA;
	::java::util::function::Supplier* packageFinder = nullptr;
	bool parseHashes = false;
	static $volatile(::java::util::Set*) predefinedNotAllowed;
};

		} // module
	} // internal
} // jdk

#pragma pop_macro("JLMA")

#endif // _jdk_internal_module_ModuleInfo_h_