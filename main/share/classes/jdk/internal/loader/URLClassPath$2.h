#ifndef _jdk_internal_loader_URLClassPath$2_h_
#define _jdk_internal_loader_URLClassPath$2_h_
//$ class jdk.internal.loader.URLClassPath$2
//$ extends java.util.Enumeration

#include <java/util/Enumeration.h>

namespace jdk {
	namespace internal {
		namespace loader {
			class Resource;
			class URLClassPath;
		}
	}
}

namespace jdk {
	namespace internal {
		namespace loader {

class URLClassPath$2 : public ::java::util::Enumeration {
	$class(URLClassPath$2, $NO_CLASS_INIT, ::java::util::Enumeration)
public:
	URLClassPath$2();
	void init$(::jdk::internal::loader::URLClassPath* this$0, $String* val$name, bool val$check);
	virtual bool hasMoreElements() override;
	bool next();
	virtual $Object* nextElement() override;
	::jdk::internal::loader::URLClassPath* this$0 = nullptr;
	bool val$check = false;
	$String* val$name = nullptr;
	int32_t index = 0;
	::jdk::internal::loader::Resource* res = nullptr;
};

		} // loader
	} // internal
} // jdk

#endif // _jdk_internal_loader_URLClassPath$2_h_