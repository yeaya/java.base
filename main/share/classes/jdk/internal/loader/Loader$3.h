#ifndef _jdk_internal_loader_Loader$3_h_
#define _jdk_internal_loader_Loader$3_h_
//$ class jdk.internal.loader.Loader$3
//$ extends java.util.Enumeration

#include <java/util/Enumeration.h>

namespace java {
	namespace util {
		class Iterator;
		class List;
	}
}
namespace jdk {
	namespace internal {
		namespace loader {
			class Loader;
		}
	}
}

namespace jdk {
	namespace internal {
		namespace loader {

class Loader$3 : public ::java::util::Enumeration {
	$class(Loader$3, $NO_CLASS_INIT, ::java::util::Enumeration)
public:
	Loader$3();
	void init$(::jdk::internal::loader::Loader* this$0, ::java::util::List* val$urls, ::java::util::Enumeration* val$e);
	virtual bool hasMoreElements() override;
	virtual $Object* nextElement() override;
	::jdk::internal::loader::Loader* this$0 = nullptr;
	::java::util::Enumeration* val$e = nullptr;
	::java::util::List* val$urls = nullptr;
	::java::util::Iterator* iterator = nullptr;
};

		} // loader
	} // internal
} // jdk

#endif // _jdk_internal_loader_Loader$3_h_