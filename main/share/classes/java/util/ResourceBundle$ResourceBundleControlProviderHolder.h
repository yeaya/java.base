#ifndef _java_util_ResourceBundle$ResourceBundleControlProviderHolder_h_
#define _java_util_ResourceBundle$ResourceBundleControlProviderHolder_h_
//$ class java.util.ResourceBundle$ResourceBundleControlProviderHolder
//$ extends java.lang.Object

#include <java/lang/Object.h>

#pragma push_macro("CONTROL_PROVIDERS")
#undef CONTROL_PROVIDERS

namespace java {
	namespace security {
		class PrivilegedAction;
	}
}
namespace java {
	namespace util {
		class List;
		class ResourceBundle$Control;
	}
}
namespace java {
	namespace util {
		namespace spi {
			class ResourceBundleControlProvider;
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

namespace java {
	namespace util {

class ResourceBundle$ResourceBundleControlProviderHolder : public ::java::lang::Object {
	$class(ResourceBundle$ResourceBundleControlProviderHolder, 0, ::java::lang::Object)
public:
	ResourceBundle$ResourceBundleControlProviderHolder();
	void init$();
	static ::java::util::ResourceBundle$Control* getControl($String* baseName);
	static ::java::util::stream::Stream* lambda$getControl$1($String* baseName, ::java::util::spi::ResourceBundleControlProvider* provider);
	static ::java::util::List* lambda$static$0();
	static ::java::security::PrivilegedAction* pa;
	static ::java::util::List* CONTROL_PROVIDERS;
};

	} // util
} // java

#pragma pop_macro("CONTROL_PROVIDERS")

#endif // _java_util_ResourceBundle$ResourceBundleControlProviderHolder_h_