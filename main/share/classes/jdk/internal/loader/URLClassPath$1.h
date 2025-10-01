#ifndef _jdk_internal_loader_URLClassPath$1_h_
#define _jdk_internal_loader_URLClassPath$1_h_
//$ class jdk.internal.loader.URLClassPath$1
//$ extends java.util.Enumeration

#include <java/util/Enumeration.h>

namespace java {
	namespace net {
		class URL;
	}
}
namespace jdk {
	namespace internal {
		namespace loader {
			class URLClassPath;
		}
	}
}

namespace jdk {
	namespace internal {
		namespace loader {

class URLClassPath$1 : public ::java::util::Enumeration {
	$class(URLClassPath$1, $NO_CLASS_INIT, ::java::util::Enumeration)
public:
	URLClassPath$1();
	void init$(::jdk::internal::loader::URLClassPath* this$0, $String* val$name, bool val$check);
	virtual bool hasMoreElements() override;
	bool next();
	virtual $Object* nextElement() override;
	::jdk::internal::loader::URLClassPath* this$0 = nullptr;
	bool val$check = false;
	$String* val$name = nullptr;
	int32_t index = 0;
	::java::net::URL* url = nullptr;
};

		} // loader
	} // internal
} // jdk

#endif // _jdk_internal_loader_URLClassPath$1_h_