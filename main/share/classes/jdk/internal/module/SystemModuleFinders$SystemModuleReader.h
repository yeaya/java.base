#ifndef _jdk_internal_module_SystemModuleFinders$SystemModuleReader_h_
#define _jdk_internal_module_SystemModuleFinders$SystemModuleReader_h_
//$ class jdk.internal.module.SystemModuleFinders$SystemModuleReader
//$ extends java.lang.module.ModuleReader

#include <java/lang/module/ModuleReader.h>

namespace java {
	namespace io {
		class InputStream;
	}
}
namespace java {
	namespace net {
		class URI;
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
		namespace jimage {
			class ImageLocation;
		}
	}
}

namespace jdk {
	namespace internal {
		namespace module {

class SystemModuleFinders$SystemModuleReader : public ::java::lang::module::ModuleReader {
	$class(SystemModuleFinders$SystemModuleReader, $NO_CLASS_INIT, ::java::lang::module::ModuleReader)
public:
	SystemModuleFinders$SystemModuleReader();
	void init$($String* module, ::java::net::URI* uri);
	static void checkPermissionToConnect(::java::net::URI* uri);
	virtual void close() override;
	bool containsImageLocation($String* name);
	virtual ::java::util::Optional* find($String* name) override;
	::jdk::internal::jimage::ImageLocation* findImageLocation($String* name);
	virtual ::java::util::stream::Stream* list() override;
	virtual ::java::util::Optional* open($String* name) override;
	virtual ::java::util::Optional* read($String* name) override;
	virtual void release(::java::nio::ByteBuffer* bb) override;
	::java::io::InputStream* toInputStream(::java::nio::ByteBuffer* bb);
	$String* module = nullptr;
	$volatile(bool) closed = false;
};

		} // module
	} // internal
} // jdk

#endif // _jdk_internal_module_SystemModuleFinders$SystemModuleReader_h_