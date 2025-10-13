#ifndef _jdk_internal_module_ModuleInfoWriter_h_
#define _jdk_internal_module_ModuleInfoWriter_h_
//$ class jdk.internal.module.ModuleInfoWriter
//$ extends java.lang.Object

#include <java/lang/Array.h>

#pragma push_macro("EMPTY_STRING_ARRAY")
#undef EMPTY_STRING_ARRAY
#pragma push_macro("EXPORTS_MODS_TO_FLAGS")
#undef EXPORTS_MODS_TO_FLAGS
#pragma push_macro("MODULE_MODS_TO_FLAGS")
#undef MODULE_MODS_TO_FLAGS
#pragma push_macro("OPENS_MODS_TO_FLAGS")
#undef OPENS_MODS_TO_FLAGS
#pragma push_macro("REQUIRES_MODS_TO_FLAGS")
#undef REQUIRES_MODS_TO_FLAGS

namespace java {
	namespace io {
		class OutputStream;
	}
}
namespace java {
	namespace lang {
		class Integer;
	}
}
namespace java {
	namespace lang {
		namespace module {
			class ModuleDescriptor;
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
		class Map;
	}
}
namespace jdk {
	namespace internal {
		namespace module {
			class ModuleResolution;
			class ModuleTarget;
		}
	}
}

namespace jdk {
	namespace internal {
		namespace module {

class $export ModuleInfoWriter : public ::java::lang::Object {
	$class(ModuleInfoWriter, 0, ::java::lang::Object)
public:
	ModuleInfoWriter();
	void init$();
	static ::java::lang::Integer* lambda$toModuleInfo$0(::java::lang::Integer* x, ::java::lang::Integer* y);
	static $String* lambda$toModuleInfo$4($String* sn);
	static $StringArray* lambda$toModuleInfo$6(int32_t x$0);
	static ::java::nio::ByteBuffer* toByteBuffer(::java::lang::module::ModuleDescriptor* descriptor);
	static $bytes* toBytes(::java::lang::module::ModuleDescriptor* descriptor);
	static $bytes* toModuleInfo(::java::lang::module::ModuleDescriptor* md, ::jdk::internal::module::ModuleResolution* mres, ::jdk::internal::module::ModuleTarget* target);
	static void write(::java::lang::module::ModuleDescriptor* descriptor, ::jdk::internal::module::ModuleResolution* mres, ::jdk::internal::module::ModuleTarget* target, ::java::io::OutputStream* out);
	static void write(::java::lang::module::ModuleDescriptor* descriptor, ::jdk::internal::module::ModuleResolution* mres, ::java::io::OutputStream* out);
	static void write(::java::lang::module::ModuleDescriptor* descriptor, ::jdk::internal::module::ModuleTarget* target, ::java::io::OutputStream* out);
	static void write(::java::lang::module::ModuleDescriptor* descriptor, ::java::io::OutputStream* out);
	static ::java::util::Map* MODULE_MODS_TO_FLAGS;
	static ::java::util::Map* REQUIRES_MODS_TO_FLAGS;
	static ::java::util::Map* EXPORTS_MODS_TO_FLAGS;
	static ::java::util::Map* OPENS_MODS_TO_FLAGS;
	static $StringArray* EMPTY_STRING_ARRAY;
};

		} // module
	} // internal
} // jdk

#pragma pop_macro("EMPTY_STRING_ARRAY")
#pragma pop_macro("EXPORTS_MODS_TO_FLAGS")
#pragma pop_macro("MODULE_MODS_TO_FLAGS")
#pragma pop_macro("OPENS_MODS_TO_FLAGS")
#pragma pop_macro("REQUIRES_MODS_TO_FLAGS")

#endif // _jdk_internal_module_ModuleInfoWriter_h_